/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120d4d8; name: FUN_0120d4d8
 */


void FUN_0120d4d8(long param_1)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*(int *)(param_1 + 0x5d8) == 8) {
    *(undefined1 *)(*(long *)(param_1 + 0x5b0) + 0x16) = 0;
    FUN_0120d7b8(param_1);
    return;
  }
  FUN_0120e13c(param_1);
  psVar2 = (short *)FUN_0120e1b8(*(undefined8 *)(param_1 + 0x5e0));
  if (*psVar2 == -1) {
    if (*(int *)(param_1 + 0x5d8) == 6) {
      FUN_0120ddac(param_1,1);
    }
    *(undefined4 *)(param_1 + 0x5d8) = 8;
    FUN_0120e260(param_1);
    FUN_0120e340(param_1,8);
    *(undefined4 *)(param_1 + 0x5ac) = 2;
  }
  else {
    psVar2 = (short *)FUN_0120e1b8(*(undefined8 *)(param_1 + 0x5e0));
    if (((long)*psVar2 - 7U < 2) && (*(short *)(param_1 + 0x5e8) == 0)) {
      uVar5 = *(undefined8 *)(param_1 + 0x5e0);
      psVar2 = (short *)FUN_0120e1b8(uVar5);
      *(undefined **)(param_1 + 0x5e0) = &DAT_03a79cd4 + (long)*psVar2 * 0x10;
      psVar2 = (short *)FUN_0120e1b8();
      if (*psVar2 == -1) {
        *(undefined8 *)(param_1 + 0x5e0) = uVar5;
      }
    }
    psVar2 = (short *)FUN_0120e1b8(*(undefined8 *)(param_1 + 0x5e0));
    sVar1 = *psVar2;
    *(undefined **)(param_1 + 0x5e0) = &DAT_03a79cd4 + (long)sVar1 * 0x10;
    FUN_0120e4bc(param_1,*(undefined4 *)(&DAT_03a79cd4 + (long)sVar1 * 0x10));
    if (**(int **)(param_1 + 0x5e0) == 7) {
      uVar3 = *(undefined4 *)(param_1 + 0x5f4);
      uVar4 = *(undefined4 *)(param_1 + 0x5f8);
    }
    else if (**(int **)(param_1 + 0x5e0) == 6) {
      uVar3 = *(undefined4 *)(param_1 + 0x5ec);
      uVar4 = *(undefined4 *)(param_1 + 0x5f0);
    }
    else {
      uVar3 = 0;
      uVar4 = 0;
    }
    FUN_0120ef44(param_1,uVar3,uVar4);
    FUN_0120f25c(param_1);
    if (*(long *)(param_1 + 0x440) != 0) {
      FUN_02831440();
      return;
    }
  }
  return;
}


