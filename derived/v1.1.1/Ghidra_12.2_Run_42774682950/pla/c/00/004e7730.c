/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e7730; name: FUN_004e7730
 */


undefined8 FUN_004e7730(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xa8) + 0xe8);
  if (lVar2 == 0) {
    if (param_3 >> 0x1f == 0) {
      iVar1 = FUN_004042b0(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),param_2,
                           param_3 & 0xffffffff);
      if (0 < iVar1 && iVar1 == (int)param_3) {
        return 1;
      }
      uVar3 = 0x44;
      uVar4 = 0x16a;
    }
    else {
      uVar3 = 0xed;
      uVar4 = 0x164;
    }
  }
  else {
    iVar1 = FUN_00444ad0(lVar2,param_2,param_3);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = 0x44;
    uVar4 = 0x171;
  }
  FUN_004c99a0(param_1,0x50,0x24b,uVar3,"external/openssl/ssl/s3_enc.c",uVar4);
  return 0;
}


