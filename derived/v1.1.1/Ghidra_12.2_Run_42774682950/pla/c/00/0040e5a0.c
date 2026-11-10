/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040e5a0; name: FUN_0040e5a0
 */


int FUN_0040e5a0(long param_1,long param_2,undefined8 param_3,long *param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0040c130(param_4);
  if (iVar1 == 0) {
    if (*(int *)(*param_4 + (long)(int)param_4[1] * 4 + -4) != 0) {
      iVar1 = FUN_0040e670(param_1,param_2,param_3,param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      if (param_1 != 0) {
        FUN_0040c8f0(param_1);
      }
      if (param_2 == 0) {
        return iVar1;
      }
      FUN_0040c8f0(param_2);
      return iVar1;
    }
    uVar3 = 0xe1;
    uVar2 = 0x6b;
  }
  else {
    uVar2 = 0x67;
    uVar3 = 0xd7;
  }
  FUN_004014b0(3,0x6b,uVar2,"external/openssl/crypto/bn/bn_div.c",uVar3);
  return 0;
}


