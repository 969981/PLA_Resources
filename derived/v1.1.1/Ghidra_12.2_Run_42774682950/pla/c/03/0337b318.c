/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337b318; name: FUN_0337b318
 */


ulong FUN_0337b318(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  uint *puVar9;
  
  uVar7 = *(uint *)(param_1 + 3);
  if ((int)(uVar7 * 2) < ((int)param_1[1] + 1) * 3) {
    FUN_032c2334(param_1 + 2);
    uVar7 = *(uint *)(param_1 + 3);
  }
  lVar8 = *param_2;
  uVar1 = (int)lVar8 * -0x61c8864f;
  uVar5 = (int)((ulong)lVar8 >> 0x20) * -0x61c8864f;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  uVar2 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar1 = uVar2 + (uVar2 >> 2) + uVar1 * 0x40 + 0x9e3779b9 ^ uVar1;
  lVar4 = param_1[2];
  uVar6 = (ulong)(uVar1 & uVar7);
  puVar3 = (uint *)(lVar4 + uVar6 * 8);
  puVar9 = puVar3 + 1;
  uVar5 = *puVar9;
  if (-1 < (int)uVar5) {
    if (lVar8 == 0) {
      do {
        if ((*puVar3 == uVar1) && (*(long *)(*param_1 + (long)(int)uVar5 * 0x28) == 0))
        goto LAB_0337b468;
        uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)uVar7;
        puVar3 = (uint *)(lVar4 + uVar6 * 8);
        puVar9 = puVar3 + 1;
        uVar5 = *puVar9;
      } while (-1 < (int)uVar5);
    }
    else {
      do {
        if (((*puVar3 == uVar1) && (*(long *)(*param_1 + (long)(int)uVar5 * 0x28) == lVar8)) &&
           (*(long *)(*param_1 + (long)(int)uVar5 * 0x28 + 8) == param_2[1])) goto LAB_0337b468;
        uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)uVar7;
        puVar3 = (uint *)(lVar4 + uVar6 * 8);
        puVar9 = puVar3 + 1;
        uVar5 = *puVar9;
      } while (-1 < (int)uVar5);
    }
  }
  uVar7 = *(uint *)(param_1 + 1);
  *puVar3 = uVar1;
  *puVar9 = uVar7;
  uVar5 = *(uint *)(param_1 + 1);
  lVar4 = param_1[2];
LAB_0337b468:
  return (ulong)uVar5 | ((long)puVar3 - lVar4) * 0x20000000;
}


