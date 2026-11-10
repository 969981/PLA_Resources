/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00422b50; name: FUN_00422b50
 */


undefined8 FUN_00422b50(undefined8 param_1,undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_4 != 0) {
    lVar1 = FUN_00446540(param_4);
    if (lVar1 != 0) {
      uVar2 = FUN_00422a60(param_1,0xffffffff,param_2,param_3,0,lVar1);
      return uVar2;
    }
  }
  FUN_004014b0(6,0xa8,0x98,"external/openssl/crypto/evp/pmeth_lib.c",0x1c5);
  return 0;
}


