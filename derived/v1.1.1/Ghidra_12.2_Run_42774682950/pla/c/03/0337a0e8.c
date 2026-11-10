/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337a0e8; name: FUN_0337a0e8
 */


ulong FUN_0337a0e8(long *param_1)

{
  uint uVar1;
  int *piVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = *(uint *)(param_1 + 3);
  if ((int)(uVar6 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_032c2334(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  lVar3 = param_1[2];
  uVar5 = (ulong)(uVar6 & 0x9e3779b9);
  piVar2 = (int *)(lVar3 + uVar5 * 8);
  puVar7 = (uint *)(piVar2 + 1);
  uVar1 = *puVar7;
  if (-1 < (int)uVar1) {
    do {
      uVar4 = (ulong)uVar1;
      if ((*piVar2 == -0x61c88647) &&
         (*(long *)(*param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | uVar4 << 4)) == 0))
      goto LAB_0337a18c;
      uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)uVar6;
      piVar2 = (int *)(lVar3 + uVar5 * 8);
      puVar7 = (uint *)(piVar2 + 1);
      uVar1 = *puVar7;
    } while (-1 < (int)uVar1);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *piVar2 = -0x61c88647;
  *puVar7 = uVar6;
  uVar4 = (ulong)*(uint *)(param_1 + 1);
  lVar3 = param_1[2];
LAB_0337a18c:
  return uVar4 | ((long)piVar2 - lVar3) * 0x20000000;
}


