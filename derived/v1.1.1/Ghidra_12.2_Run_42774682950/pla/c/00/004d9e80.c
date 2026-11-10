/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d9e80; name: FUN_004d9e80
 */


undefined8 FUN_004d9e80(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x768) != 0) {
    return 1;
  }
  uVar2 = FUN_004e77f0(param_1,1);
  if ((int)uVar2 != 0) {
    lVar3 = FUN_00444930();
    *(long *)(param_1 + 0x768) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0x941;
    }
    else {
      iVar1 = FUN_00444d20(lVar3,*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe8));
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = 0x948;
    }
    FUN_004c99a0(param_1,0x50,0x26a,0x44,"external/openssl/ssl/statem/statem_lib.c",uVar2);
    uVar2 = 0;
  }
  return uVar2;
}


