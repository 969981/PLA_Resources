/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3a2d0; name: FUN_02f3a2d0
 */


ulong FUN_02f3a2d0(long *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  double *pdVar15;
  uint *puVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  uint local_3c;
  
  lVar13 = *param_2;
  *param_2 = lVar13 + 4;
  bVar6 = *(byte *)(lVar13 + 4);
  *param_2 = lVar13 + 5;
  *(byte *)((long)param_1 + 0xf4) =
       bVar6 & 8 | bVar6 >> 1 & 1 | bVar6 >> 1 & 2 | *(byte *)((long)param_1 + 0xf4) & 0xf4;
  uVar9 = FUN_02ed7ba4();
  if ((int)uVar9 != 1) {
    return uVar9;
  }
  pdVar15 = (double *)((uint *)*param_2 + 1);
  uVar4 = *(uint *)*param_2;
  uVar9 = (ulong)uVar4;
  *param_2 = (long)pdVar15;
  if (uVar4 != 0) {
    lVar13 = (*DAT_0442d140)(0,uVar9 << 3,4);
    param_1[0x1a] = lVar13;
    if (lVar13 == 0) {
      return 0x34;
    }
    *(uint *)((long)param_1 + 0xdc) = uVar4;
    do {
      uVar5 = *(undefined4 *)*param_2;
      *param_2 = (long)((undefined4 *)*param_2 + 1);
      uVar10 = (**(code **)(*param_1 + 0x58))(param_1,uVar5);
      iVar14 = (int)uVar10;
      if (iVar14 != 0xf && iVar14 != 1) {
        return uVar10;
      }
      uVar4 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar4;
    } while (uVar4 != 0);
    if (iVar14 != 1) {
      return uVar10;
    }
    pdVar15 = (double *)*param_2;
  }
  puVar16 = (uint *)((long)pdVar15 + 0x17);
  dVar20 = *pdVar15;
  *param_2 = (long)(pdVar15 + 1);
  dVar21 = pdVar15[1];
  *param_2 = (long)(pdVar15 + 2);
  fVar22 = *(float *)(pdVar15 + 2);
  *param_2 = (long)((long)pdVar15 + 0x14);
  bVar6 = *(byte *)((long)pdVar15 + 0x14);
  *param_2 = (long)pdVar15 + 0x15;
  bVar7 = *(byte *)((long)pdVar15 + 0x15);
  *param_2 = (long)pdVar15 + 0x16;
  cVar8 = *(char *)((long)pdVar15 + 0x16);
  *param_2 = (long)puVar16;
  if (cVar8 != '\0') {
    *(float *)(param_1 + 0x1c) = fVar22;
    *(byte *)((long)param_1 + 0xf4) = *(byte *)((long)param_1 + 0xf4) | 4;
    dVar23 = (double)NEON_ucvtf((ulong)DAT_042ab258);
    iVar14 = (int)((dVar23 * 240.0) / ((double)bVar7 * (double)fVar22));
    *(int *)((long)param_1 + 0xe4) = iVar14;
    *(uint *)(param_1 + 0x1d) = iVar14 * (uint)bVar6;
    *(int *)((long)param_1 + 0xec) = (int)(dVar23 * 0.001 * dVar20);
    *(int *)(param_1 + 0x1e) = (int)(dVar23 * 0.001 * dVar21);
    puVar16 = (uint *)*param_2;
  }
  uVar4 = *puVar16;
  uVar9 = (ulong)uVar4;
  *param_2 = (long)(puVar16 + 1);
  if (uVar4 == 0) {
    plVar18 = (long *)param_1[0x1f];
    if (plVar18 == (long *)0x0) {
      return 1;
    }
    if (*plVar18 != 0) {
      *(undefined4 *)(plVar18 + 1) = 0;
      FUN_02f59e60(2);
      *plVar18 = 0;
      *(undefined4 *)((long)plVar18 + 0xc) = 0;
      plVar18 = (long *)param_1[0x1f];
      if (plVar18 == (long *)0x0) goto LAB_02f3a5a4;
    }
    FUN_02f59e60(2,plVar18);
LAB_02f3a5a4:
    param_1[0x1f] = 0;
    return 1;
  }
  puVar11 = (undefined8 *)FUN_02f59e30(0);
  if (puVar11 == (undefined8 *)0x0) {
    return 2;
  }
  lVar13 = 0;
  do {
    uVar5 = *(undefined4 *)*param_2;
    *param_2 = (long)((undefined4 *)*param_2 + 1);
    puVar1 = (undefined4 *)((long)puVar11 + lVar13);
    lVar13 = lVar13 + 0x18;
    *puVar1 = uVar5;
    uVar5 = *(undefined4 *)*param_2;
    *param_2 = (long)((undefined4 *)*param_2 + 1);
    puVar1[1] = uVar5;
    uVar5 = *(undefined4 *)*param_2;
    *param_2 = (long)((undefined4 *)*param_2 + 1);
    puVar1[2] = uVar5;
    uVar5 = *(undefined4 *)*param_2;
    *param_2 = (long)((undefined4 *)*param_2 + 1);
    puVar1[3] = uVar5;
    uVar5 = *(undefined4 *)*param_2;
    *param_2 = (long)((undefined4 *)*param_2 + 1);
    puVar1[4] = uVar5;
    uVar5 = *(undefined4 *)*param_2;
    *param_2 = (long)((undefined4 *)*param_2 + 1);
    puVar1[5] = uVar5;
  } while (uVar9 * 0x18 != lVar13);
  if (param_1[0x1f] == 0) {
    plVar18 = (long *)FUN_02f59e30(2,0x10);
    if (plVar18 == (long *)0x0) {
      param_1[0x1f] = 0;
LAB_02f3a600:
      local_3c = 2;
      goto LAB_02f3a608;
    }
    *plVar18 = 0;
    plVar18[1] = 0;
    param_1[0x1f] = (long)plVar18;
    local_3c = 2;
    lVar13 = FUN_02f59e30(2,uVar9 * 0x18);
    *plVar18 = lVar13;
    if (lVar13 == 0) goto LAB_02f3a608;
    *(uint *)((long)plVar18 + 0xc) = uVar4;
  }
  else {
    *(undefined4 *)(param_1[0x1f] + 8) = 0;
  }
  puVar19 = puVar11;
  do {
    puVar12 = (undefined8 *)FUN_02f3afc4(param_1[0x1f]);
    if (puVar12 == (undefined8 *)0x0) goto LAB_02f3a600;
    uVar2 = *puVar19;
    uVar3 = puVar19[1];
    uVar4 = (int)uVar9 - 1;
    uVar9 = (ulong)uVar4;
    uVar17 = puVar19[2];
    puVar19 = puVar19 + 3;
    *puVar12 = uVar2;
    puVar12[1] = uVar3;
    puVar12[2] = uVar17;
  } while (uVar4 != 0);
  local_3c = 1;
LAB_02f3a608:
  FUN_02f59e60(0,puVar11);
  return (ulong)local_3c;
}


