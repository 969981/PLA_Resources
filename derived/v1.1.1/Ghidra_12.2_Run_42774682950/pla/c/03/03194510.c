/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03194510; name: FUN_03194510
 */


void FUN_03194510(int *param_1,long param_2,undefined8 *param_3,int *param_4,undefined8 *param_5,
                 undefined8 *param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  
  iVar11 = *param_4;
  uVar46 = param_5[1];
  uVar34 = *param_5;
  *param_1 = -1;
  uVar24 = param_3[1];
  if (iVar11 < *(int *)(param_2 + 0x20)) {
    lVar12 = *(long *)(param_2 + 0x18);
    iVar13 = iVar11;
    if (*(int *)(param_2 + 0x98) != 0) {
      iVar13 = *(int *)(*(long *)(param_2 + 0x90) + (long)iVar11 * 4);
    }
    if (iVar13 != -1) {
      lVar12 = *(long *)(param_2 + 0xb0);
      iVar11 = iVar13;
    }
  }
  else {
    lVar12 = *(long *)(param_2 + 0xd0);
    iVar11 = iVar11 - *(int *)(param_2 + 0x20);
  }
  lVar17 = (long)*(short *)(lVar12 + (long)iVar11 * 0x10 + 8);
  uVar25 = 0;
  fVar26 = 0.0;
  fVar27 = 3.40282e+38;
  if (0 < lVar17) {
    fVar21 = (float)uVar34;
    fVar32 = (float)*param_3;
    fVar27 = fVar21 * fVar32;
    fVar22 = (float)((ulong)uVar34 >> 0x20);
    fVar33 = (float)((ulong)*param_3 >> 0x20);
    fVar30 = fVar22 * fVar33;
    fVar23 = (float)uVar46;
    fVar31 = fVar23 * (float)uVar24;
    uVar7 = (ulong)*(int *)(lVar12 + (long)iVar11 * 0x10);
    iVar5 = *(int *)(param_2 + 0x30);
    lVar18 = (long)iVar5;
    lVar19 = *(long *)(param_2 + 0xe0);
    lVar17 = uVar7 + lVar17;
    fVar28 = fVar27 + fVar30 + fVar31;
    lVar15 = *(long *)(param_2 + 0x28);
    fVar29 = fVar21 * fVar28;
    fVar30 = fVar22 * (fVar27 + fVar30 + fVar31);
    iVar11 = *(int *)(param_2 + 0x78);
    fVar32 = fVar32 - fVar29;
    fVar33 = fVar33 - fVar30;
    lVar20 = *(long *)(param_2 + 0x70);
    fVar27 = 3.40282e+38;
    lVar16 = *(long *)(param_2 + 0xc0);
    iVar13 = *(int *)(param_2 + 0x40);
    lVar12 = *(long *)(param_2 + 0x38);
    lVar14 = *(long *)(param_2 + 0xf0);
    piVar8 = (int *)(lVar19 + (uVar7 - lVar18) * 0x14);
    uVar34 = NEON_fmov(0x3f800000,4);
    uVar6 = 0xffffffff;
    do {
      iVar4 = (int)uVar7;
      piVar10 = piVar8;
      if ((long)uVar7 < lVar18) {
        iVar9 = iVar4;
        if (iVar11 != 0) {
          iVar9 = *(int *)(lVar20 + uVar7 * 4);
        }
        piVar10 = (int *)(lVar16 + (long)iVar9 * 0x14);
        if (iVar9 == -1) {
          piVar10 = (int *)(lVar15 + uVar7 * 0x14);
        }
      }
      if (piVar10[2] == -1) {
LAB_0319462c:
        piVar10 = piVar8;
        if ((long)uVar7 < lVar18) {
          iVar9 = iVar4;
          if (iVar11 != 0) {
            iVar9 = *(int *)(lVar20 + uVar7 * 4);
          }
          piVar10 = (int *)(lVar16 + (long)iVar9 * 0x14);
          if (iVar9 == -1) {
            piVar10 = (int *)(lVar15 + uVar7 * 0x14);
          }
        }
        iVar9 = *piVar10;
        iVar3 = piVar10[1];
        puVar1 = (undefined8 *)(lVar12 + (long)iVar9 * 0x10);
        if (iVar13 <= iVar9) {
          puVar1 = (undefined8 *)(lVar14 + (long)(iVar9 - iVar13) * 0x10);
        }
        puVar2 = (undefined8 *)(lVar12 + (long)iVar3 * 0x10);
        if (iVar13 <= iVar3) {
          puVar2 = (undefined8 *)(lVar14 + (long)(iVar3 - iVar13) * 0x10);
        }
        fVar31 = (float)*puVar1;
        fVar36 = fVar21 * fVar31;
        fVar35 = (float)((ulong)*puVar1 >> 0x20);
        fVar38 = fVar22 * fVar35;
        fVar39 = fVar23 * (float)puVar1[1];
        fVar37 = fVar39 + fVar36 + fVar38;
        fVar31 = fVar31 - fVar21 * fVar37;
        fVar35 = fVar35 - fVar22 * (fVar39 + fVar36 + fVar38);
        fVar38 = (float)puVar1[1] - fVar23 * fVar37;
        fVar36 = (float)*puVar2;
        fVar39 = fVar21 * fVar36;
        fVar37 = (float)((ulong)*puVar2 >> 0x20);
        fVar42 = fVar22 * fVar37;
        fVar44 = fVar23 * (float)puVar2[1];
        fVar40 = fVar39 + fVar42 + fVar44;
        fVar41 = fVar31 - fVar32;
        fVar43 = fVar35 - fVar33;
        fVar45 = fVar38 - ((float)uVar24 - fVar23 * fVar28);
        fVar31 = fVar31 - (fVar36 - fVar21 * fVar40);
        fVar35 = fVar35 - (fVar37 - fVar22 * (fVar39 + fVar42 + fVar44));
        fVar38 = fVar38 - ((float)puVar2[1] - fVar23 * fVar40);
        fVar36 = fVar41 * fVar31;
        fVar37 = fVar43 * fVar35;
        fVar39 = fVar45 * fVar38;
        uVar46 = CONCAT44(fVar31 * fVar31 + fVar35 * fVar35 + fVar38 * fVar38,
                          fVar31 * fVar31 + fVar35 * fVar35 + fVar38 * fVar38);
        uVar47 = NEON_frecpe(uVar46,4);
        uVar48 = NEON_frecps(uVar46,uVar47,4);
        fVar40 = (float)uVar47 * (float)uVar48;
        fVar42 = (float)((ulong)uVar47 >> 0x20) * (float)((ulong)uVar48 >> 0x20);
        uVar46 = NEON_frecps(uVar46,CONCAT44(fVar42,fVar40),4);
        uVar46 = NEON_fminnm(CONCAT44(fVar42 * (float)((ulong)uVar46 >> 0x20) *
                                      (fVar36 + fVar37 + fVar39),
                                      fVar40 * (float)uVar46 * (fVar36 + fVar37 + fVar39)),uVar34,4)
        ;
        uVar46 = NEON_fmax(uVar46,0,4);
        fVar36 = (float)uVar46;
        fVar41 = fVar41 - fVar31 * fVar36;
        fVar43 = fVar43 - fVar35 * (float)((ulong)uVar46 >> 0x20);
        fVar45 = fVar45 - fVar38 * fVar36;
        fVar31 = fVar41 * fVar41 + fVar43 * fVar43 + fVar45 * fVar45;
        if (fVar31 < fVar27) {
          uVar6 = uVar7 & 0xffffffff;
          *param_1 = iVar4;
          fVar29 = fVar36;
          fVar30 = fVar36;
          fVar27 = fVar31;
        }
      }
      else if ((*(byte *)(piVar10 + 4) >> 5 & 1) != 0) goto LAB_0319462c;
      iVar4 = (int)uVar6;
      uVar7 = uVar7 + 1;
      piVar8 = piVar8 + 5;
    } while ((long)uVar7 < lVar17);
    if (iVar4 != -1) {
      if (iVar4 < iVar5) {
        iVar5 = iVar4;
        if ((iVar11 == 0) || (iVar5 = *(int *)(lVar20 + (long)iVar4 * 4), iVar5 != -1)) {
          piVar8 = (int *)(lVar16 + (long)iVar5 * 0x14);
        }
        else {
          piVar8 = (int *)(lVar15 + (long)iVar4 * 0x14);
        }
      }
      else {
        piVar8 = (int *)(lVar19 + (long)(iVar4 - iVar5) * 0x14);
      }
      iVar11 = *piVar8;
      iVar5 = piVar8[1];
      puVar1 = (undefined8 *)(lVar12 + (long)iVar11 * 0x10);
      if (iVar13 <= iVar11) {
        puVar1 = (undefined8 *)(lVar14 + (long)(iVar11 - iVar13) * 0x10);
      }
      puVar2 = (undefined8 *)(lVar12 + (long)iVar5 * 0x10);
      if (iVar13 <= iVar5) {
        puVar2 = (undefined8 *)(lVar14 + (long)(iVar5 - iVar13) * 0x10);
      }
      fVar26 = (float)*puVar1;
      fVar21 = (float)((ulong)*puVar1 >> 0x20);
      uVar25 = CONCAT44(fVar21 + fVar30 * ((float)((ulong)*puVar2 >> 0x20) - fVar21),
                        fVar26 + fVar29 * ((float)*puVar2 - fVar26));
      fVar26 = (float)puVar1[1] + fVar29 * ((float)puVar2[1] - (float)puVar1[1]);
    }
  }
  param_6[1] = CONCAT44(fVar27,fVar26);
  *param_6 = uVar25;
  return;
}


