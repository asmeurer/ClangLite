# -*-python-*-

import os
from SCons import Errors

env = Environment(tools = ['system',
                           'toolchain',
                           'boost_python'])

SYSTEM = env['SYSTEM']

if not SYSTEM == 'win':
	env.AppendUnique(CXXFLAGS=['-ffunction-sections',
		                       '-fdata-sections',
		                       '-Wno-deprecated-declarations'])
else:
   env.AppendUnique(CPPDEFINES = ['_WINDOWS', 'NDEBUG',
                                  '_HAS_EXCEPTIONS=0',
                                  '_DEBUG_POINTER_IMPL=',
                                  '_CRT_SECURE_NO_DEPRECATE',
                                  '_CRT_SECURE_NO_WARNINGS',
                                  '_CRT_NONSTDC_NO_DEPRECATE',
                                  '_CRT_NONSTDC_NO_WARNINGS',
                                  '_SCL_SECURE_NO_DEPRECATE',
                                  '_SCL_SECURE_NO_WARNINGS',
                                  'CLANG_ENABLE_ARCMT',
                                  'CLANG_ENABLE_OBJC_REWRITER',
                                  'CLANG_ENABLE_STATIC_ANALYZER'],
                   CCFLAGS=['/wd4141', '/wd4146', '/wd4180',
                            '/wd4244', '/wd4258', '/wd4267',
                            '/wd4291', '/wd4345', '/wd4351',
                            '/wd4355', '/wd4456', '/wd4457',
                            '/wd4458', '/wd4459', '/wd4503',
                            '/wd4624', '/wd4722', '/wd4800',
                            '/wd4100', '/wd4127', '/wd4512',
                            '/wd4505', '/wd4610', '/wd4510',
                            '/wd4702', '/wd4245', '/wd4706',
                            '/wd4310', '/wd4701', '/wd4703',
                            '/wd4389', '/wd4611', '/wd4805',
                            '/wd4204', '/wd4577', '/wd4091',
                            '/wd4592', '/wd4324', '/errorReport:queue',
                            '/we4238', '-w14062', '/Zc:inline'])
    
env.Append(CPPDEFINES = ['_GNU_SOURCE', '__STDC_CONSTANT_MACROS',
                         '__STDC_FORMAT_MACROS', '__STDC_LIMIT_MACROS'])

env.AppendUnique(LIBS=['clangIndex',
                       'clangARCMigrate',
                       'clangRewriteFrontend',
                       'clangFormat',
                       'clangTooling',
                       'clangToolingCore',
                       'clangFrontend',
                       'clangDriver',
                       'clangSerialization',
                       'clangParse',
                       'clangSema',
                       'clangStaticAnalyzerCheckers',
                       'clangStaticAnalyzerCore',
                       'clangRewrite',
                       'clangAnalysis',
                       'clangEdit',
                       'clangASTMatchers',
                       'clangAST',
                       'clangLex',
                       'clangBasic'])

import subprocess
process = subprocess.Popen(['llvm-config', '--libs'], stdout=subprocess.PIPE)
out, err = process.communicate()
print("llvm-config --libs")
print(out.decode('ascii', 'ignore').strip())
env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split('-l') if lib])


process = subprocess.Popen(['llvm-config', '--system-libs'], stdout=subprocess.PIPE)
out, err = process.communicate()
print("llvm-config --system-libs")
print(out.decode('ascii', 'ignore').strip())
env.AppendUnique(LIBS=[lib.strip() for lib in out.decode('ascii', 'ignore').strip().split('-l') if lib])

# env.AppendUnique(RPATH=['$PREFIX/lib/gcc/x86_64-conda_cos6-linux-gnu/7.2.0',
#                        '$PREFIX/x86_64-conda_cos6-linux-gnu/sysroot/lib',
#                        '$PREFIX/x86_64-conda_cos6-linux-gnu/lib',
#                        '$PREFIX/x86_64-conda_cos6-linux-gnu/sysroot/usr/lib',
#                        '$PREFIX/lib/gcc'],
#                  LIBPATH=['$PREFIX/lib/gcc/x86_64-conda_cos6-linux-gnu/7.2.0',
#                        '$PREFIX/x86_64-conda_cos6-linux-gnu/sysroot/lib',
#                        '$PREFIX/x86_64-conda_cos6-linux-gnu/lib',
#                        '$PREFIX/x86_64-conda_cos6-linux-gnu/sysroot/usr/lib',
#                        '$PREFIX/lib/gcc'])

VariantDir('build', 'src')
SConscript(os.path.join('build', 'cpp', 'SConscript'), exports="env")
SConscript(os.path.join('build', 'py', 'SConscript'), exports="env")

Default("install")
