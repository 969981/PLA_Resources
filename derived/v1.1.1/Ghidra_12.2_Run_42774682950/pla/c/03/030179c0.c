/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030179c0; name: FUN_030179c0
 */


void FUN_030179c0(long *param_1,long *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 != param_1) {
    uVar3 = *(uint *)(param_2 + 1);
    if (*(uint *)(param_1 + 1) < uVar3) {
      FUN_03016d6c(param_1,0,uVar3,0x10);
    }
    piVar1 = (int *)((long)param_1 + 0x24);
    iVar2 = *(int *)((long)param_2 + 0x24);
    uVar4 = *piVar1 + 1;
    if (uVar4 <= iVar2 + 1U) {
      uVar4 = iVar2 + 1;
    }
    if (uVar3 <= uVar4) {
      uVar4 = uVar3;
    }
    FUN_03017acc(param_1,*param_2,*param_2 + (ulong)uVar4 * 0x70);
    if (uVar3 < *(uint *)(param_1 + 1)) {
      if (*piVar1 != -1) {
        uVar4 = uVar3 - 1;
        do {
          uVar4 = uVar4 + 1;
        } while (uVar4 <= *(uint *)((long)param_1 + 0x24));
      }
      FUN_03016d6c(param_1,0,uVar3,0x10);
    }
    *piVar1 = *(int *)((long)param_2 + 0x24);
    *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)((long)param_2 + 0x1c);
    *(int *)(param_1 + 4) = (int)param_2[4];
  }
  return;
}


