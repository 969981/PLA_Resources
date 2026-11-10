/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ce824; name: FUN_031ce824
 */


ulong FUN_031ce824(long *param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  uint *puVar7;
  
  uVar6 = *(uint *)(param_1 + 3);
  if ((int)(uVar6 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_032c2334(param_1 + 2);
    uVar6 = *(uint *)(param_1 + 3);
  }
  uVar4 = *param_2 * -0x61c8864f;
  lVar3 = param_1[2];
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  uVar1 = uVar4 >> 0x10 | uVar4 << 0x10;
  uVar5 = (ulong)(uVar1 & uVar6);
  puVar2 = (uint *)(lVar3 + uVar5 * 8);
  puVar7 = puVar2 + 1;
  uVar4 = *puVar7;
  if (-1 < (int)uVar4) {
    do {
      if ((*puVar2 == uVar1) && (*(int *)(*param_1 + (long)(int)uVar4 * 0x30) == *param_2))
      goto LAB_031ce8e4;
      uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)uVar6;
      puVar2 = (uint *)(lVar3 + uVar5 * 8);
      puVar7 = puVar2 + 1;
      uVar4 = *puVar7;
    } while (-1 < (int)uVar4);
  }
  uVar6 = *(uint *)(param_1 + 1);
  *puVar2 = uVar1;
  *puVar7 = uVar6;
  uVar4 = *(uint *)(param_1 + 1);
  lVar3 = param_1[2];
LAB_031ce8e4:
  return (ulong)uVar4 | ((long)puVar2 - lVar3) * 0x20000000;
}


