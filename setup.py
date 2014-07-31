from distutils.core import setup, Extension

luffa_hash_module = Extension('luffa_hash',
                               sources = ['luffamodule.c',
                                          'luffa.c',
										  'sha3/luffa.c',
                                                                               ],
                               include_dirs=['.', './sha3'])

setup (name = 'luffa_hashs',
       version = '1.0',
       description = 'Bindings for proof of work used by DoomCoin',
       ext_modules = [luffa_hash_module])
