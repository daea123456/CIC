from distutils.core import setup
setup(name='cicspendfrom',
      version='1.0',
      description='Command-line utility for CICcoin "coin control"',
      author='Gavin Andresen',
      author_email='gavin@CICcoinfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
