/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c0114; name: FUN_031c0114
 */


void FUN_031c0114(long *param_1,undefined8 param_2,int *param_3,undefined4 *param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_031bffc4(param_1,param_2,*(int *)((long)param_1 + 0xc) * 2 + 2);
  }
  iVar3 = 1;
  *param_4 = 1;
  uVar1 = *param_3 * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar2 = (ulong)((uVar1 >> 0x10 | uVar1 << 0x10) & *(uint *)((long)param_1 + 0xc));
  iVar4 = *(int *)(*param_1 + uVar2 * 8);
  if (iVar4 != -1) {
    do {
      if (iVar4 == *param_3) {
        iVar3 = 0;
        *param_4 = 0;
        goto LAB_031c01b4;
      }
      uVar2 = (ulong)((int)uVar2 + 1U & *(uint *)((long)param_1 + 0xc));
      iVar4 = *(int *)(*param_1 + uVar2 * 8);
    } while (iVar4 != -1);
    iVar3 = 1;
  }
LAB_031c01b4:
  *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
  return;
}


