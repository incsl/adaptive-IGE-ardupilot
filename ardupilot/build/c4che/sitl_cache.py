AP_LIBRARIES = ['AP_HAL_SITL', 'SITL', 'AP_Scripting', 'AP_Scripting/lua/src']
AP_LIBRARIES_OBJECTS_KW = {}
AR = ['/usr/bin/ar']
ARFLAGS = ['rcs']
BINDIR = '/usr/bin'
BOARD = 'sitl'
BOOTLOADER = False
BUILD_SUMMARY_HEADER = ['target', 'size_text', 'size_data', 'size_bss', 'size_total']
CC = ['/usr/lib/ccache/gcc']
CCLNK_SRC_F = []
CCLNK_TGT_F = ['-o']
CC_NAME = 'gcc'
CC_SRC_F = []
CC_TGT_F = ['-c', '-o']
CC_VERSION = ('7', '5', '0')
CFLAGS = ['-ffunction-sections', '-fdata-sections', '-fsigned-char', '-Wall', '-Wextra', '-Wformat', '-Wpointer-arith', '-Wcast-align', '-Wundef', '-Wno-missing-field-initializers', '-Wno-unused-parameter', '-Wno-redundant-decls', '-Wno-unknown-pragmas', '-Wno-trigraphs', '-Wno-format-contains-nul', '-Werror=shadow', '-Werror=return-type', '-Werror=unused-result', '-Werror=unused-variable', '-Werror=narrowing', '-Werror=attributes', '-Werror=overflow', '-Werror=parentheses', '-Werror=format-extra-args', '-Werror=ignored-qualifiers', '-MMD']
CFLAGS_MACBUNDLE = ['-fPIC']
CFLAGS_cshlib = ['-fPIC']
COMPILER_CC = 'gcc'
COMPILER_CXX = 'g++'
CONFIGURE_FILES = ['/usr/lib/python2.7/heapq.pyc', 'Tools/ardupilotwaf/ardupilotwaf.pyc', '/usr/lib/python2.7/functools.pyc', '/usr/lib/python2.7/sysconfig.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/waf_unit_test.pyc', '/usr/lib/python2.7/ctypes/_endian.pyc', '/usr/lib/python2.7/struct.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Runner.pyc', '/usr/lib/python2.7/xml/__init__.pyc', '/usr/lib/python2.7/tempfile.pyc', '/usr/lib/python2.7/base64.pyc', '/usr/lib/python2.7/lib-dynload/_json.x86_64-linux-gnu.so', '/home/incsl/ardupilot/modules/waf/waflib/Tools/gxx.pyc', '/usr/lib/python2.7/collections.pyc', '/usr/lib/python2.7/xml/etree/ElementTree.pyc', '/home/incsl/ardupilot/modules/waf/waflib/extras/c_nec.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Node.pyc', '/usr/lib/python2.7/string.pyc', '/usr/lib/python2.7/encodings/utf_8.pyc', 'Tools/ardupilotwaf/mavgen.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/compiler_cxx.pyc', '/usr/lib/python2.7/json/encoder.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Configure.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Task.pyc', 'Tools/ardupilotwaf/ap_persistent.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/c_osx.pyc', '/usr/lib/python2.7/random.pyc', '/usr/lib/python2.7/threading.pyc', '/usr/lib/python2.7/token.pyc', '/usr/lib/python2.7/shlex.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/gcc.pyc', '/home/incsl/ardupilot/modules/waf/waflib/extras/gccdeps.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/c_aliases.pyc', '/usr/lib/python2.7/dis.pyc', '/usr/lib/python2.7/locale.pyc', '/home/incsl/ardupilot/modules/waf/waflib/extras/c_bgxlc.pyc', 'Tools/ardupilotwaf/ap_library.pyc', '/usr/lib/python2.7/atexit.pyc', '/usr/lib/python2.7/encodings/__init__.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/cxx.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Logs.pyc', '/usr/lib/python2.7/abc.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/c_tests.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Scripting.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/python.pyc', '/usr/lib/python2.7/re.pyc', 'Tools/ardupilotwaf/gtest.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Context.pyc', '/usr/lib/python2.7/xml/etree/ElementPath.pyc', '/usr/lib/python2.7/optparse.pyc', '/usr/lib/python2.7/UserDict.pyc', 'Tools/ardupilotwaf/git_submodule.pyc', '/usr/lib/python2.7/inspect.pyc', '/usr/lib/python2.7/lib-dynload/_ctypes.x86_64-linux-gnu.so', '/usr/lib/python2.7/Queue.pyc', '/usr/lib/python2.7/json/scanner.pyc', '/usr/lib/python2.7/ctypes/__init__.pyc', '/usr/lib/python2.7/codecs.pyc', '/usr/lib/python2.7/plat-x86_64-linux-gnu/_sysconfigdata_nd.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Build.pyc', '/usr/lib/python2.7/logging/__init__.pyc', 'Tools/ardupilotwaf/boards.pyc', '/usr/lib/python2.7/xml/etree/__init__.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Utils.pyc', '/usr/lib/python2.7/traceback.pyc', '/usr/lib/python2.7/weakref.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/c_config.pyc', '/usr/lib/python2.7/opcode.pyc', '/usr/lib/python2.7/dist-packages/_posixsubprocess.x86_64-linux-gnu.so', '/home/incsl/ardupilot/modules/waf/waflib/extras/c_emscripten.pyc', '/usr/lib/python2.7/os.pyc', '/usr/lib/python2.7/__future__.pyc', 'Tools/ardupilotwaf/uavcangen.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/compiler_c.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/ccroot.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/icpc.pyc', 'Tools/ardupilotwaf/build_summary.pyc', '/usr/lib/python2.7/posixpath.pyc', '/usr/lib/python2.7/platform.pyc', '/usr/lib/python2.7/sre_constants.pyc', '/usr/lib/python2.7/json/__init__.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/ar.pyc', '/usr/lib/python2.7/tokenize.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/c_preproc.pyc', '/usr/lib/python2.7/dist-packages/subprocess32.pyc', '/usr/lib/python2.7/lib-dynload/termios.x86_64-linux-gnu.so', 'Tools/ardupilotwaf/toolchain.pyc', '/usr/lib/python2.7/copy.pyc', '/usr/lib/python2.7/_sysconfigdata.pyc', '/usr/lib/python2.7/hashlib.pyc', '/usr/lib/python2.7/keyword.pyc', '/home/incsl/ardupilot/modules/waf/waflib/TaskGen.pyc', '/usr/lib/python2.7/encodings/aliases.pyc', '/usr/lib/python2.7/fnmatch.pyc', '/usr/lib/python2.7/sre_parse.pyc', '/usr/lib/python2.7/pickle.pyc', '/usr/lib/python2.7/json/decoder.pyc', '/home/incsl/ardupilot/modules/waf/waflib/extras/__init__.pyc', '/usr/lib/python2.7/copy_reg.pyc', '/usr/lib/python2.7/sre_compile.pyc', '/usr/lib/python2.7/lib-dynload/_hashlib.x86_64-linux-gnu.so', '/usr/lib/python2.7/subprocess.pyc', '/usr/lib/python2.7/site.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/c.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/xlc.pyc', '/usr/lib/python2.7/io.pyc', '/home/incsl/ardupilot/modules/waf/waf-light', '/usr/lib/python2.7/shutil.pyc', 'Tools/ardupilotwaf/cxx_checks.pyc', '/usr/lib/python2.7/dist-packages/queue/__init__.pyc', '/usr/lib/python2.7/linecache.pyc', '/home/incsl/ardupilot/modules/waf/waflib/ansiterm.pyc', '/usr/lib/python2.7/gettext.pyc', '/usr/lib/python2.7/encodings/hex_codec.pyc', '/usr/lib/python2.7/_abcoll.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/clangxx.pyc', '/home/incsl/ardupilot/modules/waf/waflib/__init__.pyc', '/usr/lib/python2.7/genericpath.pyc', '/usr/lib/python2.7/stat.pyc', '/home/incsl/ardupilot/modules/waf/waflib/ConfigSet.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/__init__.pyc', '/usr/lib/python2.7/warnings.pyc', '/usr/lib/python2.7/encodings/ascii.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/clang.pyc', '/usr/lib/python2.7/textwrap.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Errors.pyc', '/usr/lib/python2.7/types.pyc', '/usr/lib/python2.7/lib-dynload/bz2.x86_64-linux-gnu.so', '/usr/lib/python2.7/sitecustomize.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Options.pyc', '/home/incsl/ardupilot/modules/waf/waflib/extras/clang_compilation_database.pyc', 'Tools/ardupilotwaf/static_linking.pyc', '/usr/lib/python2.7/_weakrefset.pyc', '/home/incsl/ardupilot/modules/waf/waflib/Tools/icc.pyc', '/usr/lib/python2.7/pipes.pyc', '/home/incsl/ardupilot/wscript']
CONFIGURE_HASH = '1\x9a*\xef\xb1\x8e\xdb\xf1\xe5&L\x8aYM\x9d\x0c'
CPPPATH_ST = '-I%s'
CXX = ['/usr/lib/ccache/g++']
CXXFLAGS = ['-std=gnu++11', '-fdata-sections', '-ffunction-sections', '-fno-exceptions', '-fsigned-char', '-Wall', '-Wextra', '-Wformat', '-Wpointer-arith', '-Wcast-align', '-Wundef', '-Wno-unused-parameter', '-Wno-missing-field-initializers', '-Wno-reorder', '-Wno-redundant-decls', '-Wno-unknown-pragmas', '-Wno-expansion-to-defined', '-Wno-format-contains-nul', '-Werror=attributes', '-Werror=format-security', '-Werror=format-extra-args', '-Werror=enum-compare', '-Werror=array-bounds', '-Werror=uninitialized', '-Werror=init-self', '-Werror=narrowing', '-Werror=return-type', '-Werror=switch', '-Werror=sign-compare', '-Werror=type-limits', '-Werror=unused-result', '-Werror=shadow', '-Werror=unused-variable', '-Werror=delete-non-virtual-dtor', '-Wfatal-errors', '-Wno-trigraphs', '-Werror=parentheses', '-Werror=unused-but-set-variable', '-Werror=suggest-override', '-Werror=float-equal', '-O3', '-DHAL_HAVE_AP_ROMFS_EMBEDDED_H', '-MMD']
CXXFLAGS_MACBUNDLE = ['-fPIC']
CXXFLAGS_cxxshlib = ['-fPIC']
CXXLNK_SRC_F = []
CXXLNK_TGT_F = ['-o']
CXX_NAME = 'gcc'
CXX_SRC_F = []
CXX_TGT_F = ['-c', '-o']
DEBUG = False
DEFINES = ['SKETCHBOOK="/home/incsl/ardupilot"', 'AP_SCRIPTING_CHECKS=1', 'CONFIG_HAL_BOARD=HAL_BOARD_SITL', 'CONFIG_HAL_BOARD_SUBTYPE=HAL_BOARD_SUBTYPE_NONE', 'ENABLE_HEAP=1', 'ENABLE_SCRIPTING=1', 'LUA_32BITS=1']
DEFINES_ST = '-D%s'
DEFINE_COMMENTS = {'HAVE_MEMRCHR': '', 'HAVE_CMATH_ISINF': '', 'NEED_CMATH_ISFINITE_STD_NAMESPACE': '', 'NEED_CMATH_ISNAN_STD_NAMESPACE': '', 'WAF_BUILD': '', 'NEED_CMATH_ISINF_STD_NAMESPACE': '', '__STDC_FORMAT_MACROS': '', 'HAVE_ENDIAN_H': '', 'HAVE_BYTESWAP_H': '', 'PYTHONDIR': '', 'HAVE_FEENABLEEXCEPT': '', 'HAVE_CMATH_ISNAN': '', '_GNU_SOURCE': '', 'PYTHONARCHDIR': '', 'HAVE_CMATH_ISFINITE': ''}
DEST_BINFMT = 'elf'
DEST_CPU = 'x86_64'
DEST_OS = 'linux'
DSDL_COMPILER = '/home/incsl/ardupilot/modules/uavcan/libuavcan/dsdl_compiler/libuavcan_dsdlc'
DSDL_COMPILER_DIR = '/home/incsl/ardupilot/modules/uavcan/libuavcan/dsdl_compiler'
ENABLE_ASSERTS = False
ENABLE_GCCDEPS = ['c', 'cxx']
ENABLE_HEADER_CHECKS = False
GIT = ['/usr/bin/git']
GIT_SUBMODULES = ['gtest', 'mavlink']
HAS_GTEST = True
HAVE_BYTESWAP_H = 1
HAVE_CMATH_ISFINITE = 1
HAVE_CMATH_ISINF = 1
HAVE_CMATH_ISNAN = 1
HAVE_ENDIAN_H = 1
HAVE_FEENABLEEXCEPT = 1
HAVE_MEMRCHR = 1
INCLUDES = ['/home/incsl/ardupilot/libraries/', '/home/incsl/ardupilot/libraries/AP_Common/missing']
LIB = ['m']
LIBDIR = '/usr/lib'
LIBPATH_ST = '-L%s'
LIB_ST = '-l%s'
LINKFLAGS = ['-Wl,--gc-sections', '-pthread']
LINKFLAGS_MACBUNDLE = ['-bundle', '-undefined', 'dynamic_lookup']
LINKFLAGS_cshlib = ['-shared']
LINKFLAGS_cstlib = ['-Wl,-Bstatic']
LINKFLAGS_cxxshlib = ['-shared']
LINKFLAGS_cxxstlib = ['-Wl,-Bstatic']
LINK_CC = ['/usr/lib/ccache/gcc']
LINK_CXX = ['/usr/lib/ccache/g++']
MAVLINK_DIR = '/home/incsl/ardupilot/modules/mavlink'
NEED_CMATH_ISFINITE_STD_NAMESPACE = 1
NEED_CMATH_ISINF_STD_NAMESPACE = 1
NEED_CMATH_ISNAN_STD_NAMESPACE = 1
OPTIONS = {'apstatedir': '', 'sitl_osd': False, 'force': False, 'verbose': 0, 'enable_sfml_audio': False, 'enable_sfml': False, 'colors': 'auto', 'no_lock_in_out': '', 'whelp': 0, 'pyc': 1, 'destdir': '', 'scripting_checks': True, 'zones': '', 'sitl_flash_storage': False, 'prefix': '/usr', 'static': False, 'summary_all': None, 'testcmd': False, 'enable_benchmarks': False, 'out': '', 'bootloader': False, 'disable_gccdeps': False, 'progress_bar': 0, 'rsync_dest': '', 'top': '', 'libdir': None, 'enable_lttng': False, 'targets': '', 'python': None, 'board': 'sitl', 'build_dates': False, 'all_tests': False, 'no_tests': False, 'check_cxx_compiler': None, 'clear_failed_tests': False, 'bindir': None, 'enable_math_check_indexes': False, 'files': '', 'no_lock_in_run': '', 'check_verbose': None, 'jobs': 4, 'submodule_update': True, 'disable_libiio': False, 'sitl_rgbled': False, 'distcheck_args': None, 'enable_asserts': False, 'profile': 0, 'clean_all_sigs': None, 'pyo': 1, 'nopycache': None, 'program_group': [], 'disable_scripting': False, 'default_parameters': None, 'toolchain': None, 'keep': 0, 'upload': None, 'autoconfig': True, 'dump_test_scripts': False, 'pythondir': None, 'disable_tests': False, 'pythonarchdir': None, 'debug': False, 'enable_header_checks': False, 'no_lock_in_top': '', 'upload_port': None, 'pdb': 0, 'check_c_compiler': None}
PREFIX = '/usr'
PYC = 1
PYFLAGS = ''
PYFLAGS_OPT = '-O'
PYO = 1
PYTHON = ['/usr/bin/python']
PYTHONARCHDIR = '/usr/lib/python2.7/dist-packages'
PYTHONDIR = '/usr/lib/python2.7/dist-packages'
PYTHON_VERSION = '2.7'
ROMFS_FILES = [('sandbox.lua', 'libraries/AP_Scripting/scripts/sandbox.lua')]
RPATH_ST = '-Wl,-rpath,%s'
RSYNC = ['/usr/bin/rsync']
SHLIB_MARKER = '-Wl,-Bdynamic'
SIZE = ['/usr/bin/size']
SONAME_ST = '-Wl,-h,%s'
STLIBPATH_ST = '-L%s'
STLIB_MARKER = '-Wl,-Bstatic'
STLIB_ST = '-l%s'
SUBMODULE_UPDATE = True
TOOLCHAIN = 'native'
cfg_files = ['/home/incsl/ardupilot/build/sitl/ap_config.h']
cprogram_PATTERN = '%s'
cshlib_PATTERN = 'lib%s.so'
cstlib_PATTERN = 'lib%s.a'
cxxprogram_PATTERN = '%s'
cxxshlib_PATTERN = 'lib%s.so'
cxxstlib_PATTERN = 'lib%s.a'
define_key = []
macbundle_PATTERN = '%s.bundle'
