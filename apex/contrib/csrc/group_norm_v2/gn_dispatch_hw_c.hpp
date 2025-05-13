#pragma once

#define DISPATCH_HW_C(hw, c, HW, C, ...) [&] { \
    if (hw == 64 && c == 1280) { constexpr int HW = 64, C = 1280; return __VA_ARGS__(); } \
    if (hw == 64 && c == 2560) { constexpr int HW = 64, C = 2560; return __VA_ARGS__(); } \
    if (hw == 256 && c == 640) { constexpr int HW = 256, C = 640; return __VA_ARGS__(); } \
    if (hw == 256 && c == 1280) { constexpr int HW = 256, C = 1280; return __VA_ARGS__(); } \
    if (hw == 256 && c == 1920) { constexpr int HW = 256, C = 1920; return __VA_ARGS__(); } \
    if (hw == 256 && c == 2560) { constexpr int HW = 256, C = 2560; return __VA_ARGS__(); } \
    if (hw == 1024 && c == 320) { constexpr int HW = 1024, C = 320; return __VA_ARGS__(); } \
    if (hw == 1024 && c == 640) { constexpr int HW = 1024, C = 640; return __VA_ARGS__(); } \
    if (hw == 1024 && c == 960) { constexpr int HW = 1024, C = 960; return __VA_ARGS__(); } \
    if (hw == 1024 && c == 1280) { constexpr int HW = 1024, C = 1280; return __VA_ARGS__(); } \
    if (hw == 1024 && c == 1920) { constexpr int HW = 1024, C = 1920; return __VA_ARGS__(); } \
    if (hw == 4096 && c == 320) { constexpr int HW = 4096, C = 320; return __VA_ARGS__(); } \
    if (hw == 4096 && c == 640) { constexpr int HW = 4096, C = 640; return __VA_ARGS__(); } \
    if (hw == 4096 && c == 960) { constexpr int HW = 4096, C = 960; return __VA_ARGS__(); } \
    if (hw == 50176 && c == 128) { constexpr int HW = 50176, C = 128; return __VA_ARGS__(); } \
    if (hw == 200704 && c == 128) { constexpr int HW = 200704, C = 128; return __VA_ARGS__(); } \
    if (hw == 473088 && c == 128) { constexpr int HW = 473088, C = 128; return __VA_ARGS__(); } \
    if (hw == 1892352 && c == 128) { constexpr int HW = 1892352, C = 128; return __VA_ARGS__(); } \
    if (hw == 784 && c == 256) { constexpr int HW = 784, C = 256; return __VA_ARGS__(); } \
    if (hw == 3136 && c == 256) { constexpr int HW = 3136, C = 256; return __VA_ARGS__(); } \
    if (hw == 7392 && c == 256) { constexpr int HW = 7392, C = 256; return __VA_ARGS__(); } \
    if (hw == 12544 && c == 256) { constexpr int HW = 12544, C = 256; return __VA_ARGS__(); } \
    if (hw == 29568 && c == 256) { constexpr int HW = 29568, C = 256; return __VA_ARGS__(); } \
    if (hw == 50176 && c == 256) { constexpr int HW = 50176, C = 256; return __VA_ARGS__(); } \
    if (hw == 118272 && c == 256) { constexpr int HW = 118272, C = 256; return __VA_ARGS__(); } \
    if (hw == 200704 && c == 256) { constexpr int HW = 200704, C = 256; return __VA_ARGS__(); } \
    if (hw == 473088 && c == 256) { constexpr int HW = 473088, C = 256; return __VA_ARGS__(); } \
    if (hw == 1892352 && c == 256) { constexpr int HW = 1892352, C = 256; return __VA_ARGS__(); } \
    if (hw == 50176 && c == 384) { constexpr int HW = 50176, C = 384; return __VA_ARGS__(); } \
    if (hw == 200704 && c == 384) { constexpr int HW = 200704, C = 384; return __VA_ARGS__(); } \
    if (hw == 473088 && c == 384) { constexpr int HW = 473088, C = 384; return __VA_ARGS__(); } \
    if (hw == 1892352 && c == 384) { constexpr int HW = 1892352, C = 384; return __VA_ARGS__(); } \
    if (hw == 784 && c == 512) { constexpr int HW = 784, C = 512; return __VA_ARGS__(); } \
    if (hw == 3136 && c == 512) { constexpr int HW = 3136, C = 512; return __VA_ARGS__(); } \
    if (hw == 7392 && c == 512) { constexpr int HW = 7392, C = 512; return __VA_ARGS__(); } \
    if (hw == 12544 && c == 512) { constexpr int HW = 12544, C = 512; return __VA_ARGS__(); } \
    if (hw == 29568 && c == 512) { constexpr int HW = 29568, C = 512; return __VA_ARGS__(); } \
    if (hw == 50176 && c == 512) { constexpr int HW = 50176, C = 512; return __VA_ARGS__(); } \
    if (hw == 118272 && c == 512) { constexpr int HW = 118272, C = 512; return __VA_ARGS__(); } \
    if (hw == 473088 && c == 512) { constexpr int HW = 473088, C = 512; return __VA_ARGS__(); } \
    throw std::invalid_argument("DISPATCH_HW_C " + std::to_string(hw) + " " + std::to_string(c)); \
    }()
