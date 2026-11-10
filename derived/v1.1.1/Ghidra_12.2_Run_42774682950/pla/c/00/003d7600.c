/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d7600; name: FUN_003d7600
 */


long FUN_003d7600(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = (ulong)(uint)((int)param_2 << 4) + 0xa0;
  if (param_2 != 0) {
    if (param_2 < 4) {
      uVar3 = 0;
      uVar4 = 0xffffffffffffffff;
    }
    else {
      uVar3 = param_2 & 0xfffffffffffffffc;
      lVar7 = 0;
      lVar6 = 0;
      lVar5 = 0;
      plVar2 = (long *)(param_1 + 0x10);
      uVar4 = uVar3;
      do {
        uVar4 = uVar4 - 4;
        lVar5 = ((ulong)(*(int *)(plVar2[1] + 0x30) + 0xf) & 0xfffffff0) + lVar5;
        lVar1 = ((ulong)(*(int *)(plVar2[-2] + 0x30) + 0xf) & 0xfffffff0) + lVar1;
        lVar7 = ((ulong)(*(int *)(plVar2[-1] + 0x30) + 0xf) & 0xfffffff0) + lVar7;
        lVar6 = ((ulong)(*(int *)(*plVar2 + 0x30) + 0xf) & 0xfffffff0) + lVar6;
        plVar2 = plVar2 + 4;
      } while (uVar4 != 0);
      lVar1 = lVar5 + lVar6 + lVar7 + lVar1;
      if (uVar3 == param_2) {
        return lVar1;
      }
      uVar4 = ~uVar3;
    }
    if ((param_2 & 1) != 0) {
      lVar5 = uVar3 * 8;
      uVar3 = uVar3 | 1;
      lVar1 = ((ulong)(*(int *)(*(long *)(param_1 + lVar5) + 0x30) + 0xf) & 0xfffffff0) + lVar1;
    }
    if (uVar4 + param_2 != 0) {
      lVar5 = param_2 - uVar3;
      plVar2 = (long *)(param_1 + uVar3 * 8 + 8);
      do {
        lVar5 = lVar5 + -2;
        lVar1 = ((ulong)(*(int *)(*plVar2 + 0x30) + 0xf) & 0xfffffff0) +
                ((ulong)(*(int *)(plVar2[-1] + 0x30) + 0xf) & 0xfffffff0) + lVar1;
        plVar2 = plVar2 + 2;
      } while (lVar5 != 0);
    }
  }
  return lVar1;
}


