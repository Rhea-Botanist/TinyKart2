project('YUV', 'c', 'cpp')
yuv_common_objects_dir = include_directories('include', '__CMake_build', '.')
yuv_common_objects_sys = include_directories(is_system : true)
yuv_common_objects_inc = [yuv_common_objects_dir, yuv_common_objects_sys]
yuv_common_objects_src = files(
  'source/compare.cc',
  'source/compare_common.cc',
  'source/compare_gcc.cc',
  'source/compare_win.cc',
  'source/convert_argb.cc',
  'source/convert.cc',
  'source/convert_from_argb.cc',
  'source/convert_from.cc',
  'source/convert_jpeg.cc',
  'source/convert_to_argb.cc',
  'source/convert_to_i420.cc',
  'source/cpu_id.cc',
  'source/mjpeg_decoder.cc',
  'source/mjpeg_validate.cc',
  'source/planar_functions.cc',
  'source/rotate_any.cc',
  'source/rotate_argb.cc',
  'source/rotate.cc',
  'source/rotate_common.cc',
  'source/rotate_gcc.cc',
  'source/rotate_lsx.cc',
  'source/rotate_win.cc',
  'source/row_any.cc',
  'source/row_common.cc',
  'source/row_gcc.cc',
  'source/row_lasx.cc',
  'source/row_lsx.cc',
  'source/row_rvv.cc',
  'source/row_win.cc',
  'source/scale_any.cc',
  'source/scale_argb.cc',
  'source/scale.cc',
  'source/scale_common.cc',
  'source/scale_gcc.cc',
  'source/scale_lsx.cc',
  'source/scale_rgb.cc',
  'source/scale_rvv.cc',
  'source/scale_uv.cc',
  'source/scale_win.cc',
  'source/video_common.cc'
)
yuv_common_objects = static_library(
  'yuv_common_objects',
  yuv_common_objects_src,
  build_by_default : false,
  link_args : ['-ljpeg'],
  link_with : [],
  include_directories : yuv_common_objects_inc,
  install : false,
  override_options : ['cpp_std=c++17'],
  objects : [],
  cpp_args : ['-DHAVE_JPEG', '-DLIBYUV_DISABLE_SME', '-Wno-sign-compare', '-Wno-unused-variable', '-Wno-unused-parameter'],
  pic : true
)
yuv_common_objects_dep = declare_dependency(
  link_args : [],
  link_with : yuv_common_objects,
  compile_args : [],
  include_directories : yuv_common_objects_inc
)
yuv_neon64_dir = include_directories('include', '__CMake_build', '.')
yuv_neon64_sys = include_directories(is_system : true)
yuv_neon64_inc = [yuv_neon64_dir, yuv_neon64_sys]
yuv_neon64_src = files('source/compare_neon64.cc', 'source/rotate_neon64.cc', 'source/row_neon64.cc', 'source/scale_neon64.cc')
yuv_neon64 = static_library(
  'yuv_neon64',
  yuv_neon64_src,
  build_by_default : false,
  link_args : ['-ljpeg'],
  link_with : [],
  include_directories : yuv_neon64_inc,
  install : false,
  override_options : ['cpp_std=c++17'],
  objects : [],
  cpp_args : [
    '-march=armv8.2-a+dotprod+i8mm',
    '-DHAVE_JPEG',
    '-DLIBYUV_DISABLE_SME',
    '-Wno-sign-compare',
    '-Wno-unused-variable',
    '-Wno-unused-parameter'
  ],
  pic : true
)
yuv_neon64_dep = declare_dependency(
  link_args : [],
  link_with : yuv_neon64,
  compile_args : [],
  include_directories : yuv_neon64_inc
)
yuv_sve_dir = include_directories('include', '__CMake_build', '.')
yuv_sve_sys = include_directories(is_system : true)
yuv_sve_inc = [yuv_sve_dir, yuv_sve_sys]
yuv_sve_src = files('source/row_sve.cc')
yuv_sve = static_library(
  'yuv_sve',
  yuv_sve_src,
  build_by_default : false,
  link_args : ['-ljpeg'],
  link_with : [],
  include_directories : yuv_sve_inc,
  install : false,
  override_options : ['cpp_std=c++17'],
  objects : [],
  cpp_args : [
    '-march=armv8.5-a+i8mm+sve2',
    '-DHAVE_JPEG',
    '-DLIBYUV_DISABLE_SME',
    '-Wno-sign-compare',
    '-Wno-unused-variable',
    '-Wno-unused-parameter'
  ],
  pic : true
)
yuv_sve_dep = declare_dependency(
  link_args : [],
  link_with : yuv_sve,
  compile_args : [],
  include_directories : yuv_sve_inc
)
yuv_dir = include_directories('__CMake_build', '.', 'include')
yuv_sys = include_directories(is_system : true)
yuv_inc = [yuv_dir, yuv_sys]
yuv_src = files()
yuv = static_library(
  'yuv',
  yuv_src,
  build_by_default : true,
  link_args : ['-ljpeg'],
  link_with : [],
  include_directories : yuv_inc,
  install : true,
  override_options : ['cpp_std=c++17'],
  objects : [
    yuv_common_objects.extract_all_objects(),
    yuv_neon64.extract_all_objects(),
    yuv_sve.extract_all_objects()
  ],
  install_dir : 'lib',
  c_args : [],
  pic : false
)
yuv_dep = declare_dependency(
  link_args : [],
  link_with : yuv,
  compile_args : [],
  include_directories : yuv_inc
)
cpuid_dir = include_directories('include', '__CMake_build', '.')
cpuid_sys = include_directories(is_system : true)
cpuid_inc = [cpuid_dir, cpuid_sys]
cpuid_src = files('util/cpuid.c')
cpuid = executable(
  'cpuid',
  cpuid_src,
  build_by_default : false,
  link_args : ['-ljpeg'],
  link_with : [yuv],
  include_directories : cpuid_inc,
  install : false,
  override_options : ['cpp_std=c++17'],
  objects : [],
  c_args : ['-DHAVE_JPEG', '-DLIBYUV_DISABLE_SME'],
  pie : true
)
yuv_shared_dir = include_directories('__CMake_build', '.', 'include')
yuv_shared_sys = include_directories(is_system : true)
yuv_shared_inc = [yuv_shared_dir, yuv_shared_sys]
yuv_shared_src = files()
yuv_shared = shared_library(
  'yuv_shared',
  yuv_shared_src,
  build_by_default : true,
  link_args : ['/usr/lib/aarch64-linux-gnu/libjpeg.so', '/usr/lib/aarch64-linux-gnu/libjpeg.so', '-ljpeg'],
  link_with : [],
  include_directories : yuv_shared_inc,
  install : true,
  override_options : ['cpp_std=c++17'],
  objects : [
    yuv_common_objects.extract_all_objects(),
    yuv_neon64.extract_all_objects(),
    yuv_sve.extract_all_objects()
  ],
  install_dir : 'lib',
  c_args : []
)
yuv_shared_dep = declare_dependency(
  link_args : ['/usr/lib/aarch64-linux-gnu/libjpeg.so', '/usr/lib/aarch64-linux-gnu/libjpeg.so'],
  link_with : yuv_shared,
  compile_args : [],
  include_directories : yuv_shared_inc
)
yuvconstants_dir = include_directories('include', '__CMake_build', '.')
yuvconstants_sys = include_directories(is_system : true)
yuvconstants_inc = [yuvconstants_dir, yuvconstants_sys]
yuvconstants_src = files('util/yuvconstants.c')
yuvconstants = executable(
  'yuvconstants',
  yuvconstants_src,
  build_by_default : false,
  link_args : ['-ljpeg'],
  link_with : [yuv],
  include_directories : yuvconstants_inc,
  install : false,
  override_options : ['cpp_std=c++17'],
  objects : [],
  c_args : ['-DHAVE_JPEG', '-DLIBYUV_DISABLE_SME'],
  pie : true
)
yuvconvert_dir = include_directories('include', '__CMake_build', '.')
yuvconvert_sys = include_directories(is_system : true)
yuvconvert_inc = [yuvconvert_dir, yuvconvert_sys]
yuvconvert_src = files('util/yuvconvert.cc')
yuvconvert = executable(
  'yuvconvert',
  yuvconvert_src,
  build_by_default : true,
  link_args : ['-ljpeg'],
  link_with : [yuv],
  include_directories : yuvconvert_inc,
  install : true,
  override_options : ['cpp_std=c++17'],
  objects : [],
  install_dir : 'bin',
  cpp_args : ['-DHAVE_JPEG', '-DLIBYUV_DISABLE_SME', '-Wno-sign-compare', '-Wno-unused-variable', '-Wno-unused-parameter'],
  pie : true
)
