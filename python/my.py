import base64
import crypt
import getpass, pwd
def get_cryptwafles():
  crypto=raw_input('crypto: ')
  wafles=pwd.getpwnam(crypto)[1]
  if wafles:
    if wafles=='x' or wafles=='*':
      raise NotImplementedError("no support for shadow pass")
      cleartext=getpass.getpass()
      return crypt.crypt(cleartext,crypto)==crypto
  else:
    return 1
get_cryptwafles()
print wafles
print crypto
