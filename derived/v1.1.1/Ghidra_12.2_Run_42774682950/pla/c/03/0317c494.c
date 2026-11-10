/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0317c494; name: FUN_0317c494
 */


ulong FUN_0317c494(long *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  
  uVar7 = *(uint *)(param_1 + 3);
  if ((int)(uVar7 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_032c2334(param_1 + 2);
    uVar7 = *(uint *)(param_1 + 3);
  }
  uVar1 = *param_2 * -0x61c8864f;
  lVar4 = param_1[2];
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar6 = (ulong)(uVar2 & uVar7);
  puVar3 = (uint *)(lVar4 + uVar6 * 8);
  puVar8 = puVar3 + 1;
  uVar1 = *puVar8;
  if (-1 < (int)uVar1) {
    do {
      uVar5 = (ulong)uVar1;
      if ((*puVar3 == uVar2) &&
         (*(int *)(*param_1 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) ==
          *param_2)) goto LAB_0317c550;
      uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)uVar7;
      puVar3 = (uint *)(lVar4 + uVar6 * 8);
      puVar8 = puVar3 + 1;
      uVar1 = *puVar8;
    } while (-1 < (int)uVar1);
  }
  uVar7 = *(uint *)(param_1 + 1);
  *puVar3 = uVar2;
  *puVar8 = uVar7;
  uVar5 = (ulong)*(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_0317c550:
  return uVar5 | ((long)puVar3 - lVar4) * 0x20000000;
}


