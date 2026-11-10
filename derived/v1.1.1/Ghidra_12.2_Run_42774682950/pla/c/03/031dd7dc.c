/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dd7dc; name: FUN_031dd7dc
 */


void FUN_031dd7dc(long *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  
  lVar6 = (long)(int)param_1[1] + -1;
  uVar2 = param_2[1];
  if (uVar2 != (uint)lVar6) {
    lVar6 = FUN_031dd758(param_1,*param_1 + lVar6 * 0x18);
    *(uint *)(lVar6 + 4) = uVar2;
  }
  puVar4 = PTR_PTR_0434a080;
  lVar6 = *param_1 + (long)(int)uVar2 * 0x18;
  uVar3 = *(uint *)(lVar6 + 0x14);
  *(undefined4 *)(lVar6 + 0x10) = 0;
  if ((-1 < (int)uVar3) && (lVar5 = *(long *)(lVar6 + 8), lVar5 != 0)) {
    FUN_032cf244(puVar4,lVar5,8,uVar3 & 0x3fffffff);
  }
  *(long *)(lVar6 + 8) = 0;
  *(uint *)(lVar6 + 0x14) = 0x80000000;
  lVar6 = (long)(int)param_1[1] + -1;
  *(uint *)(param_1 + 1) = (uint)lVar6;
  if ((uint)lVar6 != uVar2) {
    lVar5 = *param_1;
    puVar10 = (undefined4 *)(lVar5 + lVar6 * 0x18);
    puVar12 = (undefined4 *)(lVar5 + (long)(int)uVar2 * 0x18);
    *puVar12 = *puVar10;
    *(undefined8 *)(puVar12 + 2) = 0;
    *(undefined8 *)(puVar12 + 4) = 0x8000000000000000;
    piVar11 = puVar10 + 5;
    puVar9 = (undefined8 *)(puVar10 + 2);
    if (*piVar11 < 0) {
      FUN_032bcf84(puVar4,puVar9,8);
    }
    *(undefined8 *)(puVar12 + 2) = *puVar9;
    puVar12[4] = *(undefined4 *)(lVar5 + lVar6 * 0x18 + 0x10);
    puVar12[5] = *piVar11;
    *puVar9 = 0;
    *(undefined8 *)(puVar10 + 4) = 0;
    *piVar11 = -0x80000000;
  }
  lVar6 = param_1[2];
  uVar7 = (ulong)(int)param_1[3];
  uVar8 = ((long)param_2 - lVar6 >> 3) + 1U & uVar7;
  while (puVar1 = (uint *)(lVar6 + uVar8 * 8), -1 < (int)puVar1[1]) {
    lVar5 = lVar6 + ((ulong)*puVar1 & uVar7 & 0xffffffff) * 8;
    uVar8 = (ulong)(int)uVar7;
    if ((uVar8 & (long)param_2 - lVar5 >> 3) < (uVar8 & (long)puVar1 - lVar5 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar1;
      uVar7 = (ulong)*(uint *)(param_1 + 3);
      lVar6 = param_1[2];
      uVar8 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar1;
    }
    uVar8 = ((ulong)((long)puVar1 - lVar6) >> 3) + 1 & uVar8;
  }
  param_2[1] = 0xffffffff;
  return;
}


