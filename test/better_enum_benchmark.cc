#include "benchmark/benchmark.h"

#include "better-enum/better-enum.h"

#include "./data/a.h"

static void BenchmarkFromInteger(benchmark::State& state) {
    for (auto _ : state) {
        BetterEnum::FromInteger<A>(255);
    }
}

static void BenchmarkToInteger(benchmark::State& state) {
    for (auto _ : state) {
        BetterEnum::ToInteger(A::END);
    }
}

BENCHMARK(BenchmarkFromInteger);
BENCHMARK(BenchmarkToInteger);
