# rxcpp-msvc-error

Building solution worked fine in VS2022 up to MSVC toolchain version 14.33. 

Since 14.34 compilation fails with the following error:

```
1>C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.35.32215\include\utility(492,62): error C2027: use of undefined type 'std::tuple_size<rxcpp::util::detail::surely>'
1>C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.35.32215\include\utility(492,45): message : see declaration of 'std::tuple_size<rxcpp::util::detail::surely>'
1>C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.35.32215\include\tuple(886,29): message : see reference to variable template 'const size_t tuple_size_v<rxcpp::util::detail::surely>' being compiled
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\operators\rx-with_latest_from.hpp(194): message : see reference to function template instantiation 'void rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::subscribe_one<1,_Ty>(std::shared_ptr<_Ty>) const' being compiled
1>        with
1>        [
1>            _Ty=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::on_subscribe::with_latest_from_state_type
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\operators\rx-with_latest_from.hpp(195,85): message : see reference to function template instantiation 'void rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::subscribe_one<1,_Ty>(std::shared_ptr<_Ty>) const' being compiled
1>        with
1>        [
1>            _Ty=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::on_subscribe::with_latest_from_state_type
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\operators\rx-with_latest_from.hpp(200): message : see reference to function template instantiation 'void rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::subscribe_all<_Ty,0,1>(std::shared_ptr<_Ty>,rxcpp::util::values<T,0,1>) const' being compiled
1>        with
1>        [
1>            _Ty=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::on_subscribe::with_latest_from_state_type,
1>            T=int
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\operators\rx-with_latest_from.hpp(232,22): message : see reference to function template instantiation 'void rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::subscribe_all<_Ty,0,1>(std::shared_ptr<_Ty>,rxcpp::util::values<T,0,1>) const' being compiled
1>        with
1>        [
1>            _Ty=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::on_subscribe::with_latest_from_state_type,
1>            T=int
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\rx-observable.hpp(435,1): message : see reference to function template instantiation 'void rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::on_subscribe<CS>(Subscriber) const' being compiled
1>        with
1>        [
1>            CS=rxcpp::subscriber<std::tuple<int,int>,rxcpp::observer<std::tuple<int,int>,rxcpp::detail::stateless_observer_tag,main::<lambda_1>,void,void>>,
1>            Subscriber=rxcpp::subscriber<std::tuple<int,int>,rxcpp::observer<std::tuple<int,int>,rxcpp::detail::stateless_observer_tag,main::<lambda_1>,void,void>>
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\rx-observable.hpp(435,29): message : see reference to function template instantiation 'void rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>::on_subscribe<CS>(Subscriber) const' being compiled
1>        with
1>        [
1>            CS=rxcpp::subscriber<std::tuple<int,int>,rxcpp::observer<std::tuple<int,int>,rxcpp::detail::stateless_observer_tag,main::<lambda_1>,void,void>>,
1>            Subscriber=rxcpp::subscriber<std::tuple<int,int>,rxcpp::observer<std::tuple<int,int>,rxcpp::detail::stateless_observer_tag,main::<lambda_1>,void,void>>
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\rx-observable.hpp(433,1): message : while compiling class template member function 'void rxcpp::detail::safe_subscriber<rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>,subscriber_type>::subscribe(void)'
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\rx-observable.hpp(522,33): message : see reference to function template instantiation 'void rxcpp::detail::safe_subscriber<rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>,subscriber_type>::subscribe(void)' being compiled
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\rx-observable.hpp(514): message : see reference to class template instantiation 'rxcpp::detail::safe_subscriber<rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>,subscriber_type>' being compiled
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\rx-observable.hpp(649): message : see reference to function template instantiation 'rxcpp::composite_subscription rxcpp::observable<Value,with_latest_from>::detail_subscribe<rxcpp::subscriber<T,rxcpp::observer<T,rxcpp::detail::stateless_observer_tag,_Ty,void,void>>>(Subscriber) const' being compiled
1>        with
1>        [
1>            Value=std::tuple<int,int>,
1>            with_latest_from=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>,
1>            T=std::tuple<int,int>,
1>            _Ty=main::<lambda_1>,
1>            Subscriber=rxcpp::subscriber<std::tuple<int,int>,rxcpp::observer<std::tuple<int,int>,rxcpp::detail::stateless_observer_tag,main::<lambda_1>,void,void>>
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\rxcpp\rx-observable.hpp(650,9): message : see reference to function template instantiation 'rxcpp::composite_subscription rxcpp::observable<Value,with_latest_from>::detail_subscribe<rxcpp::subscriber<T,rxcpp::observer<T,rxcpp::detail::stateless_observer_tag,_Ty,void,void>>>(Subscriber) const' being compiled
1>        with
1>        [
1>            Value=std::tuple<int,int>,
1>            with_latest_from=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>,
1>            T=std::tuple<int,int>,
1>            _Ty=main::<lambda_1>,
1>            Subscriber=rxcpp::subscriber<std::tuple<int,int>,rxcpp::observer<std::tuple<int,int>,rxcpp::detail::stateless_observer_tag,main::<lambda_1>,void,void>>
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\main.cpp(10,27): message : see reference to function template instantiation 'rxcpp::composite_subscription rxcpp::observable<Value,with_latest_from>::subscribe<main::<lambda_1>>(main::<lambda_1> &&) const' being compiled
1>        with
1>        [
1>            Value=std::tuple<int,int>,
1>            with_latest_from=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>
1>        ]
1>D:\dev\rxcpp-msvc-error\rxcpp-msvc-error\main.cpp(9,19): message : see reference to function template instantiation 'rxcpp::composite_subscription rxcpp::observable<Value,with_latest_from>::subscribe<main::<lambda_1>>(main::<lambda_1> &&) const' being compiled
1>        with
1>        [
1>            Value=std::tuple<int,int>,
1>            with_latest_from=rxcpp::operators::detail::with_latest_from<rxcpp::identity_one_worker,rxcpp::util::detail::pack,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>,rxcpp::observable<int,rxcpp::sources::detail::iterate<std::array<int,1>,rxcpp::identity_one_worker>>>
1>        ]
1>C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.35.32215\include\utility(492): error C2065: 'value': undeclared identifier
1>C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.35.32215\include\utility(492): error C2131: expression did not evaluate to a constant
1>C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.35.32215\include\utility(492): message : a non-constant (sub-)expression was encountered
```
