/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e0060; name: FUN_004e0060
 */


long FUN_004e0060(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)(*(long *)(param_1 + 0x488) + 0x18) == 2) {
LAB_004e0130:
    lVar5 = FUN_00499210();
    return lVar5;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
  if ((*(byte *)(lVar5 + 0x20) & 0x14) == 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e0);
    if (lVar5 == 0) {
      return 0;
    }
    iVar2 = FUN_00422d50(*(undefined8 *)(lVar5 + 8));
    if (iVar2 < 0x80) {
      if (0x6f < iVar2) {
        lVar5 = FUN_00499290();
        return lVar5;
      }
      goto LAB_004e0130;
    }
    lVar5 = thunk_FUN_004242f0();
  }
  else {
    if (*(int *)(lVar5 + 0x44) != 0x100) goto LAB_004e0130;
    iVar2 = 0x80;
    lVar5 = thunk_FUN_004242f0();
  }
  if (lVar5 == 0) {
    return 0;
  }
  lVar3 = FUN_0040c260();
  if ((lVar3 == 0) || (iVar1 = FUN_0040c6b0(lVar3,2), iVar1 == 0)) {
    FUN_00424410(lVar5);
  }
  else {
    if (iVar2 < 0xc0) {
      lVar4 = FUN_004e0e80(0);
    }
    else {
      lVar4 = FUN_004e0ea0(0);
    }
    if ((lVar4 != 0) && (iVar2 = FUN_00424600(lVar5,lVar4,0,lVar3), iVar2 != 0)) {
      return lVar5;
    }
    FUN_00424410(lVar5);
    FUN_0040c1e0(lVar4);
  }
  FUN_0040c1e0(lVar3);
  return 0;
}


