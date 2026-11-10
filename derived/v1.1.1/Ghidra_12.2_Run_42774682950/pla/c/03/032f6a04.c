/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f6a04; name: FUN_032f6a04
 */


ulong FUN_032f6a04(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  
  puVar8 = (uint *)(param_1 + 1);
  if ((int)param_1[3] * 2 < (int)((*puVar8 + 1) * 3)) {
    FUN_032c2334(param_1 + 2);
  }
  uVar3 = FUN_032e3fe0(param_2);
  uVar6 = *(uint *)(param_1 + 3);
  lVar5 = param_1[2];
  uVar7 = (ulong)(uVar6 & uVar3);
  while( true ) {
    puVar2 = (uint *)(lVar5 + uVar7 * 8);
    puVar9 = puVar2 + 1;
    if ((int)*puVar9 < 0) break;
    if (*puVar2 == uVar3) {
      puVar1 = (undefined8 *)(*param_1 + (long)(int)*puVar9 * 0x10);
      iVar4 = FUN_032e3c78(*puVar1,puVar1[1],*param_2,param_2[1]);
      if (iVar4 == 0) goto LAB_032f6ac8;
      lVar5 = param_1[2];
      uVar6 = *(uint *)(param_1 + 3);
    }
    uVar7 = ((ulong)((long)puVar2 - lVar5) >> 3) + 1 & (long)(int)uVar6;
  }
  uVar6 = *puVar8;
  *puVar2 = uVar3;
  *puVar9 = uVar6;
  puVar9 = puVar8;
LAB_032f6ac8:
  return (ulong)*puVar9 | ((long)puVar2 - param_1[2]) * 0x20000000;
}


