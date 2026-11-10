/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03144d7c; name: FUN_03144d7c
 */


void FUN_03144d7c(long *param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(int *)((long)param_1 + 0xc) < (int)param_1[1] * 2) {
    FUN_03144e5c(param_1,param_2,*(int *)((long)param_1 + 0xc) * 2 + 2);
  }
  iVar3 = 1;
  *param_4 = 1;
  uVar1 = (ulong)((int)param_3[1] * -0x61c8864f & *(uint *)((long)param_1 + 0xc));
  lVar2 = *param_1;
  lVar4 = *(long *)(lVar2 + uVar1 * 0x18);
  if (lVar4 != -1) {
    do {
      lVar5 = *(long *)(lVar2 + uVar1 * 0x18 + 8);
      if (lVar5 == -1) break;
      if ((lVar4 == *param_3) && (lVar5 == param_3[1])) {
        iVar3 = 0;
        *param_4 = 0;
        goto LAB_03144e40;
      }
      uVar1 = (ulong)((int)uVar1 + 1U & *(uint *)((long)param_1 + 0xc));
      lVar4 = *(long *)(lVar2 + uVar1 * 0x18);
    } while (lVar4 != -1);
    iVar3 = 1;
  }
LAB_03144e40:
  *(int *)(param_1 + 1) = (int)param_1[1] + iVar3;
  return;
}


