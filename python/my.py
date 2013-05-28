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
#crypt.crypt(word,salt)
salt_storage=[]
def get_salt():
  init_s=raw_input('salt: ')
  lenofs=len(init_s)
  if lenofs<=2:
    print "fu and ur short salt"
  init_s[::-1]
  salt_storage.append[init_s]
def get_word():
  init_w=raw_input('crypto: ')
def list_storage_s():
  for i in range(len(a)):
    print i, salt_storage[i]
get_salt()
get_word()
list_storage_s

