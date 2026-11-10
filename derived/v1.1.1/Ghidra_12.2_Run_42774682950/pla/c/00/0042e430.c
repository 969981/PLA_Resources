/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042e430; name: FUN_0042e430
 */


size_t FUN_0042e430(long param_1,void *param_2,size_t param_3)

{
  void *__dest;
  size_t sVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)(param_1 + 0x30);
  FUN_00400420(*puVar2,"external/openssl/crypto/ec/ec_lib.c",0x187);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  sVar1 = 1;
  if ((param_2 != (void *)0x0) && (param_3 != 0)) {
    __dest = (void *)FUN_00400260(param_3,"external/openssl/crypto/ec/ec_lib.c",0x18e);
    *puVar2 = __dest;
    if (__dest == (void *)0x0) {
      FUN_004014b0(0x10,0x11e,0x41,"external/openssl/crypto/ec/ec_lib.c",399);
      return 0;
    }
    memcpy(__dest,param_2,param_3);
    *(size_t *)(param_1 + 0x38) = param_3;
    sVar1 = param_3;
  }
  return sVar1;
}


