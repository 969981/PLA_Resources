/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00405020; name: FUN_00405020
 */


void * FUN_00405020(void *param_1,ulong param_2,undefined8 param_3,undefined4 param_4)

{
  void *__dest;
  
  __dest = (void *)0x0;
  if ((param_1 != (void *)0x0) && (param_2 < 0x7fffffff)) {
    __dest = (void *)FUN_00400260(param_2,param_3,param_4);
    if (__dest == (void *)0x0) {
      FUN_004014b0(0xf,0x73,0x41,"external/openssl/crypto/o_str.c",0x42);
      return (void *)0x0;
    }
    memcpy(__dest,param_1,param_2);
  }
  return __dest;
}


