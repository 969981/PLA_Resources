/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d8264; name: FUN_003d8264
 */


void FUN_003d8264(long *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    uVar3 = (ulong)*(byte *)(param_1 + 1);
    lVar4 = (long)param_1 + 9;
LAB_003d82cc:
    uVar1 = FUN_003da780(lVar4,uVar3,*(undefined4 *)PTR_DAT_043740a8);
    lVar4 = param_1[4];
    if (lVar4 != 0) goto LAB_003d82e8;
LAB_003d82bc:
    uVar3 = (ulong)*(byte *)(param_1 + 5);
    lVar4 = (long)param_1 + 0x29;
  }
  else {
    if (*(int *)(lVar4 + 8) == 1) {
      uVar1 = *(uint *)(lVar4 + 0x68);
      lVar4 = param_1[4];
    }
    else {
      if (*(int *)(lVar4 + 8) != 0) {
        uVar3 = param_1[1];
        lVar4 = param_1[2];
        goto LAB_003d82cc;
      }
      uVar1 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
      lVar4 = param_1[4];
    }
    if (lVar4 == 0) goto LAB_003d82bc;
LAB_003d82e8:
    if (*(int *)(lVar4 + 8) == 1) {
      uVar2 = *(uint *)(lVar4 + 0x68);
      goto LAB_003d8328;
    }
    if (*(int *)(lVar4 + 8) == 0) {
      uVar2 = *(uint *)(PTR_DAT_043740a0 + (ulong)*(uint *)(lVar4 + 0x28) * 4);
      goto LAB_003d8328;
    }
    uVar3 = param_1[5];
    lVar4 = param_1[6];
  }
  uVar2 = FUN_003da780(lVar4,uVar3,*(undefined4 *)PTR_DAT_043740a8);
LAB_003d8328:
  *(uint *)(param_1 + 8) = uVar2 ^ (uVar1 >> 0x1e | uVar1 << 2);
  return;
}


