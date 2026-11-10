/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015a490; name: FUN_0015a490
 */


void FUN_0015a490(long param_1,uint param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  uVar9 = (ulong)iVar1;
  lVar7 = *(long *)(param_1 + 0x38);
  lVar8 = (long)(int)param_2;
  lVar2 = FUN_00161510(param_1,lVar7,uVar9 << 4,
                       -(ulong)(param_2 >> 0x1f) & 0xfffffff000000000 | (ulong)param_2 << 4);
  *(long *)(param_1 + 0x38) = lVar2;
  if (iVar1 < (int)param_2) {
    uVar3 = ~uVar9;
    if ((param_2 - iVar1 & 1) != 0) {
      lVar6 = uVar9 * 0x10;
      uVar9 = uVar9 + 1;
      *(undefined4 *)(lVar2 + lVar6 + 8) = 0;
      lVar2 = *(long *)(param_1 + 0x38);
    }
    if (uVar3 + lVar8 != 0) {
      lVar4 = lVar8 - uVar9;
      lVar6 = uVar9 << 4;
      do {
        *(undefined4 *)(lVar2 + lVar6 + 8) = 0;
        lVar2 = *(long *)(param_1 + 0x38) + lVar6;
        lVar6 = lVar6 + 0x20;
        *(undefined4 *)(lVar2 + 0x18) = 0;
        lVar2 = *(long *)(param_1 + 0x38);
        lVar4 = lVar4 + -2;
      } while (lVar4 != 0);
    }
  }
  *(long *)(param_1 + 0x30) = lVar2 + lVar8 * 0x10 + -0x50;
  *(long *)(param_1 + 0x10) = lVar2 + (*(long *)(param_1 + 0x10) - lVar7);
  plVar5 = *(long **)(param_1 + 0x40);
  *(uint *)(param_1 + 0xb8) = param_2;
  if (plVar5 != (long *)0x0) {
    *plVar5 = lVar2 + (*plVar5 - lVar7);
    for (plVar5 = (long *)plVar5[2]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
      *plVar5 = *(long *)(param_1 + 0x38) + (*plVar5 - lVar7);
    }
  }
  for (plVar5 = *(long **)(param_1 + 0x20); plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
    plVar5[1] = *(long *)(param_1 + 0x38) + (plVar5[1] - lVar7);
    *plVar5 = *(long *)(param_1 + 0x38) + (*plVar5 - lVar7);
    if ((*(byte *)((long)plVar5 + 0x42) >> 1 & 1) != 0) {
      plVar5[4] = *(long *)(param_1 + 0x38) + (plVar5[4] - lVar7);
    }
  }
  return;
}


