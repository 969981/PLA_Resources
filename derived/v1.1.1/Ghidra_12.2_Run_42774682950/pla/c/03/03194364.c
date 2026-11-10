/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03194364; name: FUN_03194364
 */


void FUN_03194364(undefined4 *param_1,long param_2,undefined8 *param_3,int *param_4,
                 undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  
  iVar1 = *param_4;
  uVar12 = 0;
  fVar14 = 0.0;
  lVar7 = *(long *)(param_2 + 0x18);
  fVar19 = 3.40282e+38;
  lVar6 = *(long *)(param_2 + 0x28);
  lVar5 = *(long *)(param_2 + 0x38);
  uVar38 = param_5[1];
  uVar24 = *param_5;
  *param_1 = 0xffffffff;
  lVar9 = (long)*(short *)(lVar7 + (long)iVar1 * 0x10 + 8);
  if (0 < lVar9) {
    uVar18 = param_3[1];
    fVar11 = (float)uVar24;
    fVar16 = (float)*param_3;
    fVar19 = fVar11 * fVar16;
    fVar13 = (float)((ulong)uVar24 >> 0x20);
    fVar17 = (float)((ulong)*param_3 >> 0x20);
    fVar21 = fVar13 * fVar17;
    fVar15 = (float)uVar38;
    fVar23 = fVar15 * (float)uVar18;
    fVar20 = fVar19 + fVar21 + fVar23;
    fVar22 = fVar19 + fVar21 + fVar23;
    uVar24 = NEON_fmov(0x3f800000,4);
    uVar8 = (ulong)*(int *)(lVar7 + (long)iVar1 * 0x10);
    fVar19 = 3.40282e+38;
    lVar9 = uVar8 + lVar9;
    piVar4 = (int *)(lVar6 + uVar8 * 0x14 + 8);
    uVar10 = 0xffffffff;
    fVar21 = fVar23;
    do {
      if (*piVar4 == -1) {
LAB_0319440c:
        puVar2 = (undefined8 *)(lVar5 + (long)piVar4[-1] * 0x10);
        uVar39 = *puVar2;
        puVar3 = (undefined8 *)(lVar5 + (long)piVar4[-2] * 0x10);
        uVar38 = *puVar3;
        fVar25 = (float)uVar38;
        fVar28 = fVar11 * fVar25;
        fVar26 = (float)((ulong)uVar38 >> 0x20);
        fVar32 = fVar13 * fVar26;
        fVar27 = (float)puVar3[1];
        fVar35 = fVar15 * fVar27;
        fVar29 = fVar35 + fVar28 + fVar32;
        fVar25 = fVar25 - fVar11 * fVar29;
        fVar26 = fVar26 - fVar13 * (fVar35 + fVar28 + fVar32);
        fVar27 = fVar27 - fVar15 * fVar29;
        fVar28 = (float)uVar39;
        fVar30 = fVar11 * fVar28;
        fVar29 = (float)((ulong)uVar39 >> 0x20);
        fVar33 = fVar13 * fVar29;
        fVar32 = (float)puVar2[1];
        fVar36 = fVar15 * fVar32;
        fVar31 = fVar30 + fVar33 + fVar36;
        fVar35 = fVar25 - (fVar16 - fVar11 * fVar20);
        fVar34 = fVar26 - (fVar17 - fVar13 * fVar22);
        fVar37 = fVar27 - ((float)uVar18 - fVar15 * fVar20);
        fVar25 = fVar25 - (fVar28 - fVar11 * fVar31);
        fVar26 = fVar26 - (fVar29 - fVar13 * (fVar30 + fVar33 + fVar36));
        fVar27 = fVar27 - (fVar32 - fVar15 * fVar31);
        fVar28 = fVar35 * fVar25;
        fVar29 = fVar34 * fVar26;
        fVar32 = fVar37 * fVar27;
        uVar38 = CONCAT44(fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27,
                          fVar25 * fVar25 + fVar26 * fVar26 + fVar27 * fVar27);
        uVar39 = NEON_frecpe(uVar38,4);
        uVar40 = NEON_frecps(uVar38,uVar39,4);
        fVar30 = (float)uVar39 * (float)uVar40;
        fVar31 = (float)((ulong)uVar39 >> 0x20) * (float)((ulong)uVar40 >> 0x20);
        uVar38 = NEON_frecps(uVar38,CONCAT44(fVar31,fVar30),4);
        uVar38 = NEON_fminnm(CONCAT44(fVar31 * (float)((ulong)uVar38 >> 0x20) *
                                      (fVar28 + fVar29 + fVar32),
                                      fVar30 * (float)uVar38 * (fVar28 + fVar29 + fVar32)),uVar24,4)
        ;
        uVar38 = NEON_fmax(uVar38,0,4);
        fVar28 = (float)uVar38;
        fVar35 = fVar35 - fVar25 * fVar28;
        fVar34 = fVar34 - fVar26 * (float)((ulong)uVar38 >> 0x20);
        fVar37 = fVar37 - fVar27 * fVar28;
        fVar25 = fVar35 * fVar35 + fVar34 * fVar34 + fVar37 * fVar37;
        if (fVar25 < fVar19) {
          uVar10 = uVar8 & 0xffffffff;
          *param_1 = (int)uVar8;
          fVar23 = fVar28;
          fVar21 = fVar28;
          fVar19 = fVar25;
        }
      }
      else if ((*(byte *)(piVar4 + 2) >> 5 & 1) != 0) goto LAB_0319440c;
      uVar8 = uVar8 + 1;
      piVar4 = piVar4 + 5;
    } while ((long)uVar8 < lVar9);
    if ((int)uVar10 != -1) {
      piVar4 = (int *)(lVar6 + (long)(int)uVar10 * 0x14);
      puVar2 = (undefined8 *)(lVar5 + (long)piVar4[1] * 0x10);
      uVar24 = *puVar2;
      puVar3 = (undefined8 *)(lVar5 + (long)*piVar4 * 0x10);
      uVar12 = *puVar3;
      fVar11 = (float)uVar12;
      fVar13 = (float)((ulong)uVar12 >> 0x20);
      fVar14 = (float)puVar3[1];
      uVar12 = CONCAT44(fVar13 + fVar21 * ((float)((ulong)uVar24 >> 0x20) - fVar13),
                        fVar11 + fVar23 * ((float)uVar24 - fVar11));
      fVar14 = fVar14 + fVar23 * ((float)puVar2[1] - fVar14);
    }
  }
  param_6[1] = CONCAT44(fVar19,fVar14);
  *param_6 = uVar12;
  return;
}


