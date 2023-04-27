#include "rxcpp/rx-includes.hpp"

int main()
{
    auto obs1 = rxcpp::observable<>::just(1);
    auto obs2 = rxcpp::observable<>::just(2);

    obs1.with_latest_from(obs2)
        .subscribe([](auto _v) { 
        auto [a, b] = _v;});
    return 0;
}