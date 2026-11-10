/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031932b0; name: FUN_031932b0
 */


void FUN_031932b0(long param_1,int *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar23;
  undefined8 uVar22;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  undefined8 uVar34;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  
  sVar6 = (short)param_2[2];
  puVar8 = (undefined8 *)*param_3;
  iVar11 = *param_2;
  lVar10 = (long)iVar11;
  uVar12 = (long)(int)sVar6 & 0xfffffffffffffffe;
  if (0 < (int)uVar12) {
    lVar14 = 0;
    lVar15 = lVar10 * 0x14;
    puVar9 = puVar8;
    lVar17 = lVar10;
    do {
      lVar18 = *(long *)(param_1 + 0x20);
      if (lVar17 < *(int *)(lVar18 + 0x30)) {
        if (*(int *)(lVar18 + 0x78) == 0) {
          iVar16 = (int)lVar17;
        }
        else {
          iVar16 = *(int *)(*(long *)(lVar18 + 0x70) + lVar17 * 4);
        }
        if (iVar16 == -1) {
          piVar19 = (int *)(*(long *)(lVar18 + 0x28) + (lVar14 + lVar10) * 0x14);
        }
        else {
          piVar19 = (int *)(*(long *)(lVar18 + 0xc0) + (long)iVar16 * 0x14);
        }
      }
      else {
        piVar19 = (int *)(*(long *)(lVar18 + 0xe0) + (long)*(int *)(lVar18 + 0x30) * -0x14 + lVar15)
        ;
      }
      iVar5 = *(int *)(lVar18 + 0x40);
      iVar16 = *piVar19;
      iVar4 = piVar19[1];
      plVar13 = (long *)(lVar18 + 0x38);
      if (iVar5 <= iVar16) {
        plVar13 = (long *)(lVar18 + 0xf0);
      }
      iVar1 = 0;
      if (iVar5 <= iVar16) {
        iVar1 = iVar5;
      }
      plVar3 = (long *)(lVar18 + 0x38);
      if (iVar5 <= iVar4) {
        plVar3 = (long *)(lVar18 + 0xf0);
      }
      iVar2 = 0;
      if (iVar5 <= iVar4) {
        iVar2 = iVar5;
      }
      lVar14 = lVar14 + 2;
      lVar15 = lVar15 + 0x28;
      lVar17 = lVar17 + 2;
      puVar8 = (undefined8 *)(*plVar13 + (long)(iVar16 - iVar1) * 0x10);
      uVar21 = *puVar8;
      puVar7 = (undefined8 *)(*plVar3 + (long)(iVar4 - iVar2) * 0x10);
      uVar26 = *puVar7;
      fVar20 = (float)uVar21;
      fVar29 = (float)*(undefined8 *)(param_1 + 0x60);
      fVar30 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
      fVar31 = (float)*(undefined8 *)(param_1 + 0x68);
      fVar32 = (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20);
      fVar23 = (float)((ulong)uVar21 >> 0x20);
      fVar33 = (float)*(undefined8 *)(param_1 + 0x70);
      fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
      fVar36 = (float)*(undefined8 *)(param_1 + 0x78);
      fVar37 = (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20);
      fVar27 = (float)((ulong)uVar26 >> 0x20);
      fVar25 = (float)uVar26;
      fVar24 = (float)puVar8[1];
      fVar39 = (float)*(undefined8 *)(param_1 + 0x80);
      fVar40 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
      fVar41 = (float)*(undefined8 *)(param_1 + 0x88);
      fVar42 = (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20);
      fVar28 = (float)puVar7[1];
      fVar43 = (float)*(undefined8 *)(param_1 + 0x90);
      fVar44 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
      fVar45 = (float)*(undefined8 *)(param_1 + 0x98);
      fVar46 = (float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20);
      puVar8 = puVar9 + 4;
      puVar9[1] = CONCAT44(fVar46 + fVar42 * fVar24 + fVar32 * fVar20 + fVar37 * fVar23,
                           fVar45 + fVar41 * fVar24 + fVar31 * fVar20 + fVar36 * fVar23);
      *puVar9 = CONCAT44(fVar44 + fVar40 * fVar24 + fVar30 * fVar20 + fVar35 * fVar23,
                         fVar43 + fVar39 * fVar24 + fVar29 * fVar20 + fVar33 * fVar23);
      puVar9[3] = CONCAT44(fVar46 + fVar42 * fVar28 + fVar32 * fVar25 + fVar37 * fVar27,
                           fVar45 + fVar41 * fVar28 + fVar31 * fVar25 + fVar36 * fVar27);
      puVar9[2] = CONCAT44(fVar44 + fVar40 * fVar28 + fVar30 * fVar25 + fVar35 * fVar27,
                           fVar43 + fVar39 * fVar28 + fVar29 * fVar25 + fVar33 * fVar27);
      puVar9 = puVar8;
    } while (lVar14 < (long)uVar12);
  }
  if (((int)sVar6 & 1U) == 0) goto LAB_03193438;
  iVar11 = iVar11 + sVar6 + -1;
  lVar10 = *(long *)(param_1 + 0x20);
  if (iVar11 < *(int *)(lVar10 + 0x30)) {
    lVar14 = *(long *)(lVar10 + 0x28);
    iVar16 = iVar11;
    if (*(int *)(lVar10 + 0x78) != 0) {
      iVar16 = *(int *)(*(long *)(lVar10 + 0x70) + (long)iVar11 * 4);
    }
    if (iVar16 != -1) {
      plVar13 = (long *)(lVar10 + 0xc0);
      iVar11 = iVar16;
      goto LAB_03193484;
    }
  }
  else {
    plVar13 = (long *)(lVar10 + 0xe0);
    iVar11 = iVar11 - *(int *)(lVar10 + 0x30);
LAB_03193484:
    lVar14 = *plVar13;
  }
  iVar16 = *(int *)(lVar10 + 0x40);
  uVar21 = *(undefined8 *)(param_1 + 0x60);
  uVar26 = *(undefined8 *)(param_1 + 0x70);
  iVar11 = *(int *)(lVar14 + (long)iVar11 * 0x14);
  plVar13 = (long *)(lVar10 + 0x38);
  if (iVar16 <= iVar11) {
    plVar13 = (long *)(lVar10 + 0xf0);
  }
  uVar34 = *(undefined8 *)(param_1 + 0x80);
  uVar38 = *(undefined8 *)(param_1 + 0x90);
  iVar4 = 0;
  if (iVar16 <= iVar11) {
    iVar4 = iVar16;
  }
  puVar9 = (undefined8 *)(*plVar13 + (long)(iVar11 - iVar4) * 0x10);
  uVar22 = *puVar9;
  fVar20 = (float)uVar22;
  fVar23 = (float)((ulong)uVar22 >> 0x20);
  fVar24 = (float)puVar9[1];
  puVar8[1] = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) +
                       (float)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x20) * fVar24 +
                       (float)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x20) * fVar20 +
                       (float)((ulong)*(undefined8 *)(param_1 + 0x78) >> 0x20) * fVar23,
                       (float)*(undefined8 *)(param_1 + 0x98) +
                       (float)*(undefined8 *)(param_1 + 0x88) * fVar24 +
                       (float)*(undefined8 *)(param_1 + 0x68) * fVar20 +
                       (float)*(undefined8 *)(param_1 + 0x78) * fVar23);
  *puVar8 = CONCAT44((float)((ulong)uVar38 >> 0x20) +
                     (float)((ulong)uVar34 >> 0x20) * fVar24 +
                     (float)((ulong)uVar21 >> 0x20) * fVar20 +
                     (float)((ulong)uVar26 >> 0x20) * fVar23,
                     (float)uVar38 +
                     (float)uVar34 * fVar24 + (float)uVar21 * fVar20 + (float)uVar26 * fVar23);
LAB_03193438:
  puVar8 = (undefined8 *)*param_3;
  lVar10 = param_3[1];
  uVar21 = *puVar8;
  puVar8[(long)(int)lVar10 * 2 + -1] = puVar8[1];
  puVar8[(long)(int)lVar10 * 2 + -2] = uVar21;
  return;
}


