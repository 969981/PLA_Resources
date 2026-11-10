/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bf2e8; name: FUN_031bf2e8
 */


void FUN_031bf2e8(long *param_1,ulong param_2,undefined8 *param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long *plVar5;
  undefined4 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  float *pfVar10;
  short sVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  
  plVar5 = (long *)*param_1;
  uVar8 = param_2 >> 0x16 & 0x3ff;
  iVar7 = (int)uVar8;
  if (*(int *)((long)plVar5 + 100) != iVar7) {
    plVar5[0xb] = *(long *)(*(long *)(*plVar5 + 0x38) + uVar8 * 0xf0 + 8);
    *(int *)((long)plVar5 + 100) = iVar7;
    plVar5 = (long *)*param_1;
  }
  FUN_031bf4b0(plVar5,param_2 & 0xffffffff);
  uVar16 = *param_3;
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + 0x108) = param_3[1];
  *(undefined8 *)(lVar9 + 0x100) = uVar16;
  puVar6 = (undefined4 *)FUN_031befdc(param_1 + 2,param_2 & 0xffffffff);
  *puVar6 = 0;
  fVar15 = (float)FUN_031c01d0(param_1 + 0x10);
  puVar6[1] = fVar15;
  *(ushort *)((long)puVar6 + 0xe) = *(ushort *)((long)puVar6 + 0xe) | 5;
  iVar7 = (int)param_2;
  if (fVar15 < *(float *)((long)param_1 + 0x44)) {
    *(float *)((long)param_1 + 0x44) = fVar15;
    *(int *)(param_1 + 8) = iVar7;
    fVar15 = (float)puVar6[1];
  }
  if (fVar15 < 3.40282e+38) {
    sVar11 = *(short *)(param_1[4] + (ulong)((uint)(iVar7 * -0x61c8864f) >> 0x18) * 2);
    if (-1 < sVar11) {
      do {
        if (*(int *)(param_1[2] + (long)sVar11 * 0x10 + 8) == iVar7) {
          pfVar10 = (float *)(param_1[2] + (long)sVar11 * 0x10);
          goto LAB_031bf3d4;
        }
        sVar11 = *(short *)(param_1[3] + (long)sVar11 * 2);
      } while (-1 < sVar11);
    }
    pfVar10 = (float *)(param_1 + 6);
LAB_031bf3d4:
    fVar15 = *(float *)((long)param_1 + 0x4c);
    fVar17 = *pfVar10;
    fVar18 = pfVar10[1];
    uVar12 = *(uint *)(param_1 + 0xf);
    uVar13 = (ulong)uVar12;
    uVar8 = -(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | uVar13 << 3;
    piVar1 = (int *)(param_1[0xe] + uVar8);
    *(uint *)(param_1 + 0xf) = uVar12 + 1;
    *piVar1 = iVar7;
    piVar1[1] = (int)(fVar17 + fVar15 * fVar18);
    lVar9 = param_1[0xe];
    puVar6 = (undefined4 *)(lVar9 + uVar8);
    uVar3 = *puVar6;
    iVar7 = puVar6[1];
    if ((int)uVar12 < 1) {
LAB_031bf458:
      lVar14 = (long)(int)uVar12;
    }
    else {
      do {
        uVar12 = (uint)uVar13;
        uVar4 = uVar12 - 1;
        uVar2 = uVar12;
        if (-1 < (int)uVar4) {
          uVar2 = uVar4;
        }
        if (*(int *)(lVar9 + (long)((int)uVar2 >> 1) * 8 + 4) <= iVar7) goto LAB_031bf458;
        lVar14 = (long)((ulong)uVar2 << 0x20) >> 0x21;
        *(undefined8 *)(lVar9 + (long)(int)uVar12 * 8) = *(undefined8 *)(lVar9 + lVar14 * 8);
        lVar9 = param_1[0xe];
        uVar13 = (ulong)(uint)((int)uVar2 >> 1);
      } while (1 < (int)uVar4);
    }
    *(undefined4 *)(lVar9 + lVar14 * 8) = uVar3;
    *(int *)(param_1[0xe] + lVar14 * 8 + 4) = iVar7;
  }
  return;
}


