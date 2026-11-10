/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03157a00; name: FUN_03157a00
 */


void FUN_03157a00(int *param_1,long param_2,ulong param_3,undefined8 *param_4,undefined8 *param_5,
                 undefined8 param_6,undefined8 *param_7)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  undefined8 uVar33;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined8 uVar39;
  float fVar40;
  float fVar42;
  undefined8 uVar41;
  float fVar43;
  undefined8 uVar44;
  undefined8 local_a0;
  
  *param_1 = -1;
  lVar8 = *(long *)(param_2 + 0x20);
  uVar9 = (uint)param_3 & 0x3fffff;
  uVar10 = (ulong)uVar9;
  if ((int)uVar9 < *(int *)(lVar8 + 0x20)) {
    if ((*(int *)(lVar8 + 0x98) == 0) ||
       (uVar9 = *(uint *)(*(long *)(lVar8 + 0x90) + uVar10 * 4), uVar9 != 0xffffffff)) {
      piVar13 = (int *)(*(long *)(lVar8 + 0xb0) + (long)(int)uVar9 * 0x10);
    }
    else {
      piVar13 = (int *)(*(long *)(lVar8 + 0x18) + uVar10 * 0x10);
    }
  }
  else {
    piVar13 = (int *)(*(long *)(lVar8 + 0xd0) + (long)(int)(uVar9 - *(int *)(lVar8 + 0x20)) * 0x10);
  }
  fVar21 = 3.40282e+38;
  if ((short)piVar13[2] < 1) {
    local_a0 = 0;
    fVar29 = 0.0;
  }
  else {
    fVar16 = (float)*param_4;
    fVar21 = (float)*param_5;
    fVar25 = fVar16 * fVar21;
    fVar18 = (float)((ulong)*param_4 >> 0x20);
    fVar29 = (float)((ulong)*param_5 >> 0x20);
    fVar27 = fVar18 * fVar29;
    fVar28 = (float)param_4[1] * (float)param_5[1];
    uVar10 = (ulong)*piVar13;
    uVar44 = NEON_fmov(0x3f800000,4);
    fVar26 = fVar25 + fVar27 + fVar28;
    fVar16 = fVar16 - fVar21 * fVar26;
    fVar18 = fVar18 - fVar29 * (fVar25 + fVar27 + fVar28);
    fVar25 = (float)param_4[1] - (float)param_5[1] * fVar26;
    lVar15 = uVar10 * 0x14;
    fVar21 = 3.40282e+38;
    fVar29 = 0.0;
    local_a0 = 0;
    while( true ) {
      iVar14 = (int)uVar10;
      if ((long)uVar10 < (long)*(int *)(lVar8 + 0x30)) {
        iVar12 = iVar14;
        if (*(int *)(lVar8 + 0x78) != 0) {
          iVar12 = *(int *)(*(long *)(lVar8 + 0x70) + uVar10 * 4);
        }
        if (iVar12 == -1) {
          lVar8 = *(long *)(lVar8 + 0x28) + uVar10 * 0x14;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0xc0) + (long)iVar12 * 0x14;
        }
      }
      else {
        lVar8 = *(long *)(lVar8 + 0xe0) + (long)*(int *)(lVar8 + 0x30) * -0x14 + lVar15;
      }
      if ((*(int *)(lVar8 + 8) != -1) && ((*(byte *)(lVar8 + 0x10) >> 5 & 1) == 0)) {
        uVar7 = FUN_03165564(param_6,uVar10 & 0xffffffff | param_3 & 0xffc00000,6);
        if ((uVar7 & 1) != 0) {
          lVar8 = *(long *)(param_2 + 0x20);
          if ((long)uVar10 < (long)*(int *)(lVar8 + 0x30)) {
            iVar12 = iVar14;
            if (*(int *)(lVar8 + 0x78) != 0) {
              iVar12 = *(int *)(*(long *)(lVar8 + 0x70) + uVar10 * 4);
            }
            if (iVar12 == -1) {
              piVar11 = (int *)(*(long *)(lVar8 + 0x28) + uVar10 * 0x14);
            }
            else {
              piVar11 = (int *)(*(long *)(lVar8 + 0xc0) + (long)iVar12 * 0x14);
            }
          }
          else {
            piVar11 = (int *)(*(long *)(lVar8 + 0xe0) + (long)*(int *)(lVar8 + 0x30) * -0x14 +
                             lVar15);
          }
          iVar4 = *(int *)(lVar8 + 0x40);
          iVar12 = *piVar11;
          iVar3 = piVar11[1];
          plVar2 = (long *)(lVar8 + 0x38);
          if (iVar4 <= iVar12) {
            plVar2 = (long *)(lVar8 + 0xf0);
          }
          iVar1 = 0;
          if (iVar4 <= iVar12) {
            iVar1 = iVar4;
          }
          puVar5 = (undefined8 *)(*plVar2 + (long)(iVar12 - iVar1) * 0x10);
          uVar33 = *puVar5;
          plVar2 = (long *)(lVar8 + 0x38);
          if (iVar4 <= iVar3) {
            plVar2 = (long *)(lVar8 + 0xf0);
          }
          fVar26 = (float)uVar33;
          fVar27 = (float)*(undefined8 *)(param_2 + 0x60);
          fVar28 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
          fVar31 = (float)*(undefined8 *)(param_2 + 0x68);
          iVar12 = 0;
          if (iVar4 <= iVar3) {
            iVar12 = iVar4;
          }
          fVar20 = (float)((ulong)uVar33 >> 0x20);
          fVar30 = (float)*(undefined8 *)(param_2 + 0x70);
          fVar34 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
          fVar36 = (float)*(undefined8 *)(param_2 + 0x78);
          puVar6 = (undefined8 *)(*plVar2 + (long)(iVar3 - iVar12) * 0x10);
          uVar33 = *puVar6;
          fVar35 = (float)uVar33;
          fVar32 = (float)puVar5[1];
          fVar40 = (float)*(undefined8 *)(param_2 + 0x80);
          fVar42 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
          fVar43 = (float)*(undefined8 *)(param_2 + 0x88);
          fVar37 = (float)((ulong)uVar33 >> 0x20);
          fVar38 = (float)puVar6[1];
          fVar22 = (float)*(undefined8 *)(param_2 + 0x90);
          fVar17 = fVar22 + fVar40 * fVar32 + fVar27 * fVar26 + fVar30 * fVar20;
          fVar23 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
          fVar19 = fVar23 + fVar42 * fVar32 + fVar28 * fVar26 + fVar34 * fVar20;
          fVar24 = (float)*(undefined8 *)(param_2 + 0x98);
          fVar20 = fVar24 + fVar43 * fVar32 + fVar31 * fVar26 + fVar36 * fVar20;
          fVar22 = fVar22 + fVar40 * fVar38 + fVar27 * fVar35 + fVar30 * fVar37;
          fVar23 = fVar23 + fVar42 * fVar38 + fVar28 * fVar35 + fVar34 * fVar37;
          fVar24 = fVar24 + fVar43 * fVar38 + fVar31 * fVar35 + fVar36 * fVar37;
          fVar26 = (float)*param_5;
          fVar31 = fVar26 * fVar17;
          fVar27 = (float)((ulong)*param_5 >> 0x20);
          fVar35 = fVar27 * fVar19;
          fVar28 = (float)param_5[1];
          fVar37 = fVar28 * fVar20;
          fVar32 = fVar31 + fVar35 + fVar37;
          fVar17 = fVar17 - fVar26 * fVar32;
          fVar19 = fVar19 - fVar27 * (fVar31 + fVar35 + fVar37);
          fVar20 = fVar20 - fVar28 * fVar32;
          fVar32 = fVar26 * fVar22;
          fVar37 = fVar27 * fVar23;
          fVar38 = fVar28 * fVar24;
          fVar35 = fVar32 + fVar37 + fVar38;
          fVar31 = fVar17 - (fVar22 - fVar26 * fVar35);
          fVar32 = fVar19 - (fVar23 - fVar27 * (fVar32 + fVar37 + fVar38));
          fVar35 = fVar20 - (fVar24 - fVar28 * fVar35);
          fVar17 = fVar17 - fVar16;
          fVar19 = fVar19 - fVar18;
          fVar20 = fVar20 - fVar25;
          fVar26 = fVar17 * fVar31;
          fVar27 = fVar19 * fVar32;
          fVar28 = fVar20 * fVar35;
          uVar33 = CONCAT44(fVar31 * fVar31 + fVar32 * fVar32 + fVar35 * fVar35,
                            fVar31 * fVar31 + fVar32 * fVar32 + fVar35 * fVar35);
          uVar39 = NEON_frecpe(uVar33,4);
          uVar41 = NEON_frecps(uVar33,uVar39,4);
          fVar22 = (float)uVar39 * (float)uVar41;
          fVar37 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar41 >> 0x20);
          uVar33 = NEON_frecps(uVar33,CONCAT44(fVar37,fVar22),4);
          uVar33 = NEON_fminnm(CONCAT44(fVar37 * (float)((ulong)uVar33 >> 0x20) *
                                        (fVar26 + fVar27 + fVar28),
                                        fVar22 * (float)uVar33 * (fVar26 + fVar27 + fVar28)),uVar44,
                               4);
          uVar33 = NEON_fmax(uVar33,0,4);
          fVar17 = fVar17 - fVar31 * (float)uVar33;
          fVar19 = fVar19 - fVar32 * (float)((ulong)uVar33 >> 0x20);
          fVar20 = fVar20 - fVar35 * (float)uVar33;
          fVar26 = fVar17 * fVar17 + fVar19 * fVar19 + fVar20 * fVar20;
          if (fVar26 < fVar21) {
            local_a0 = CONCAT44(fVar18 + fVar19,fVar16 + fVar17);
            fVar29 = fVar25 + fVar20;
            *param_1 = iVar14;
            fVar21 = fVar26;
          }
        }
      }
      uVar10 = uVar10 + 1;
      if ((long)*piVar13 + (long)(short)piVar13[2] <= (long)uVar10) break;
      lVar8 = *(long *)(param_2 + 0x20);
      lVar15 = lVar15 + 0x14;
    }
  }
  param_7[1] = CONCAT44(fVar21,fVar29);
  *param_7 = local_a0;
  return;
}


