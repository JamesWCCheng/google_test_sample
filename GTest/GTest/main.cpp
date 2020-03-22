#include <src/gtest-all.cc>
#include <src/gmock-all.cc>

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    int r = RUN_ALL_TESTS();
    return r;
}
