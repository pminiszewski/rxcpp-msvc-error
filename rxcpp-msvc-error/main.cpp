#include "rxcpp/rx-includes.hpp"

int main()
{
    auto obs1 = rxcpp::observable<>::create<int>([](rxcpp::subscriber<int> _sub) {
        _sub.on_next(1);
    _sub.on_next(2);
    _sub.on_next(3);
    _sub.on_completed();
        });

    auto obs2 = rxcpp::observable<>::create<int>([](rxcpp::subscriber<int> _sub) {
        _sub.on_next(98);
    _sub.on_next(99);
    _sub.on_next(100);
    _sub.on_completed();
        });

    obs1.with_latest_from(obs2) //join values from first observable and the most recent value from second observable
        .subscribe([](std::tuple<int, int> _v) {
        auto [a, b] = _v;

            });
            return 0;

}