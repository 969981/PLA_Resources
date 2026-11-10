/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dc578; name: FUN_031dc578
 */


void FUN_031dc578(long *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined4 *puVar12;
  uint *puVar13;
  undefined4 *puVar14;
  
  lVar7 = (long)(int)param_1[1] + -1;
  uVar1 = param_2[1];
  lVar11 = (long)(int)uVar1;
  if (uVar1 != (uint)lVar7) {
    lVar7 = FUN_031dc4f4(param_1,*param_1 + lVar7 * 0x28);
    *(uint *)(lVar7 + 4) = uVar1;
  }
  puVar5 = PTR_PTR_0434a080;
  lVar7 = *param_1 + lVar11 * 0x28;
  uVar3 = *(uint *)(lVar7 + 0x1c);
  *(undefined4 *)(lVar7 + 0x18) = 0;
  if ((-1 < (int)uVar3) && (lVar6 = *(long *)(lVar7 + 0x10), lVar6 != 0)) {
    FUN_032cf244(puVar5,lVar6,4,uVar3 & 0x3fffffff);
  }
  *(long *)(lVar7 + 0x10) = 0;
  *(uint *)(lVar7 + 0x1c) = 0x80000000;
  lVar7 = (long)(int)param_1[1] + -1;
  *(uint *)(param_1 + 1) = (uint)lVar7;
  if ((uint)lVar7 != uVar1) {
    lVar6 = *param_1;
    puVar12 = (undefined4 *)(lVar6 + lVar7 * 0x28);
    puVar14 = (undefined4 *)(lVar6 + lVar11 * 0x28);
    *puVar14 = *puVar12;
    uVar2 = puVar12[2];
    uVar4 = *(undefined2 *)(puVar12 + 3);
    *(undefined8 *)(puVar14 + 4) = 0;
    puVar14[2] = uVar2;
    *(undefined2 *)(puVar14 + 3) = uVar4;
    *(undefined8 *)(puVar14 + 6) = 0x8000000000000000;
    puVar13 = puVar12 + 7;
    puVar10 = (undefined8 *)(puVar12 + 4);
    if ((int)*puVar13 < 0) {
      FUN_032bcf84(puVar5,puVar10,4);
    }
    *(undefined8 *)(puVar14 + 4) = *puVar10;
    lVar7 = lVar6 + lVar7 * 0x28;
    puVar14[6] = *(undefined4 *)(lVar7 + 0x18);
    puVar14[7] = *puVar13;
    *puVar10 = 0;
    *(undefined8 *)(puVar12 + 6) = 0;
    *(undefined4 *)(lVar6 + lVar11 * 0x28 + 0x20) = *(undefined4 *)(lVar7 + 0x20);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    if ((-1 < (int)*puVar13) && (lVar11 = *(long *)(lVar7 + 0x10), lVar11 != 0)) {
      FUN_032cf244(puVar5,lVar11,4,*puVar13 & 0x3fffffff);
    }
    *(long *)(lVar7 + 0x10) = 0;
    *puVar13 = 0x80000000;
  }
  lVar7 = param_1[2];
  uVar8 = (ulong)(int)param_1[3];
  uVar9 = ((long)param_2 - lVar7 >> 3) + 1U & uVar8;
  while (puVar13 = (uint *)(lVar7 + uVar9 * 8), -1 < (int)puVar13[1]) {
    lVar11 = lVar7 + ((ulong)*puVar13 & uVar8 & 0xffffffff) * 8;
    uVar9 = (ulong)(int)uVar8;
    if ((uVar9 & (long)param_2 - lVar11 >> 3) < (uVar9 & (long)puVar13 - lVar11 >> 3)) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar13;
      uVar8 = (ulong)*(uint *)(param_1 + 3);
      lVar7 = param_1[2];
      uVar9 = (ulong)(int)*(uint *)(param_1 + 3);
      param_2 = puVar13;
    }
    uVar9 = ((ulong)((long)puVar13 - lVar7) >> 3) + 1 & uVar9;
  }
  param_2[1] = 0xffffffff;
  return;
}


