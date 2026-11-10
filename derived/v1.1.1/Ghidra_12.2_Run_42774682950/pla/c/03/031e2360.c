/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031e2360; name: FUN_031e2360
 */


undefined1  [16]
FUN_031e2360(long param_1,long param_2,undefined8 *param_3,int *param_4,int *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  float fVar10;
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  int iVar23;
  float fVar24;
  float fVar27;
  undefined8 uVar25;
  undefined8 uVar26;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 uVar37;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  
  lVar3 = *(long *)(param_1 + 0x20);
  iVar15 = *param_4;
  if (iVar15 < *(int *)(lVar3 + 0x30)) {
    lVar5 = *(long *)(lVar3 + 0x28);
    iVar17 = iVar15;
    if (*(int *)(lVar3 + 0x78) != 0) {
      iVar17 = *(int *)(*(long *)(lVar3 + 0x70) + (long)iVar15 * 4);
    }
    if (iVar17 != -1) {
      plVar4 = (long *)(lVar3 + 0xc0);
      iVar15 = iVar17;
      goto LAB_031e23a4;
    }
  }
  else {
    plVar4 = (long *)(lVar3 + 0xe0);
    iVar15 = iVar15 - *(int *)(lVar3 + 0x30);
LAB_031e23a4:
    lVar5 = *plVar4;
  }
  iVar17 = *(int *)(lVar3 + 0x40);
  iVar21 = *(int *)(lVar5 + (long)iVar15 * 0x14);
  iVar15 = *(int *)(lVar5 + (long)iVar15 * 0x14 + 4);
  plVar4 = (long *)(lVar3 + 0x38);
  if (iVar17 <= iVar21) {
    plVar4 = (long *)(lVar3 + 0xf0);
  }
  iVar23 = 0;
  if (iVar17 <= iVar21) {
    iVar23 = iVar17;
  }
  puVar1 = (undefined8 *)(*plVar4 + (long)(iVar21 - iVar23) * 0x10);
  uVar26 = *puVar1;
  lVar5 = *(long *)(param_2 + 0x20);
  iVar21 = *param_5;
  fVar13 = (float)uVar26;
  fVar7 = (float)*(undefined8 *)(param_1 + 0x60);
  fVar19 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20);
  fVar31 = (float)*(undefined8 *)(param_1 + 0x68);
  plVar4 = (long *)(lVar3 + 0x38);
  if (iVar17 <= iVar15) {
    plVar4 = (long *)(lVar3 + 0xf0);
  }
  fVar32 = (float)((ulong)uVar26 >> 0x20);
  fVar33 = (float)*(undefined8 *)(param_1 + 0x70);
  fVar34 = (float)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  fVar35 = (float)*(undefined8 *)(param_1 + 0x78);
  iVar23 = 0;
  if (iVar17 <= iVar15) {
    iVar23 = iVar17;
  }
  fVar36 = (float)puVar1[1];
  fVar16 = (float)*(undefined8 *)(param_1 + 0x80);
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x20);
  fVar39 = (float)*(undefined8 *)(param_1 + 0x88);
  puVar1 = (undefined8 *)(*plVar4 + (long)(iVar15 - iVar23) * 0x10);
  uVar26 = *puVar1;
  fVar6 = (float)*(undefined8 *)(param_1 + 0x90);
  fVar11 = fVar6 + fVar16 * fVar36 + fVar7 * fVar13 + fVar33 * fVar32;
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20);
  fVar12 = fVar9 + fVar18 * fVar36 + fVar19 * fVar13 + fVar34 * fVar32;
  fVar10 = (float)*(undefined8 *)(param_1 + 0x98);
  fVar13 = fVar10 + fVar39 * fVar36 + fVar31 * fVar13 + fVar35 * fVar32;
  fVar32 = (float)uVar26;
  fVar36 = (float)((ulong)uVar26 >> 0x20);
  fVar14 = (float)puVar1[1];
  fVar6 = fVar6 + fVar16 * fVar14 + fVar7 * fVar32 + fVar33 * fVar36;
  fVar9 = fVar9 + fVar18 * fVar14 + fVar19 * fVar32 + fVar34 * fVar36;
  fVar10 = fVar10 + fVar39 * fVar14 + fVar31 * fVar32 + fVar35 * fVar36;
  if (iVar21 < *(int *)(lVar5 + 0x30)) {
    lVar3 = *(long *)(lVar5 + 0x28);
    iVar15 = iVar21;
    if (*(int *)(lVar5 + 0x78) != 0) {
      iVar15 = *(int *)(*(long *)(lVar5 + 0x70) + (long)iVar21 * 4);
    }
    if (iVar15 == -1) goto LAB_031e2488;
    plVar4 = (long *)(lVar5 + 0xc0);
    iVar21 = iVar15;
  }
  else {
    plVar4 = (long *)(lVar5 + 0xe0);
    iVar21 = iVar21 - *(int *)(lVar5 + 0x30);
  }
  lVar3 = *plVar4;
LAB_031e2488:
  iVar15 = *(int *)(lVar5 + 0x40);
  iVar17 = *(int *)(lVar3 + (long)iVar21 * 0x14);
  plVar4 = (long *)(lVar5 + 0x38);
  if (iVar15 <= iVar17) {
    plVar4 = (long *)(lVar5 + 0xf0);
  }
  iVar23 = 0;
  if (iVar15 <= iVar17) {
    iVar23 = iVar15;
  }
  puVar1 = (undefined8 *)(*plVar4 + (long)(iVar17 - iVar23) * 0x10);
  uVar26 = *puVar1;
  iVar17 = *(int *)(lVar3 + (long)iVar21 * 0x14 + 4);
  fVar7 = (float)uVar26;
  fVar31 = (float)*(undefined8 *)(param_2 + 0x60);
  fVar32 = (float)((ulong)*(undefined8 *)(param_2 + 0x60) >> 0x20);
  fVar33 = (float)*(undefined8 *)(param_2 + 0x68);
  fVar19 = (float)((ulong)uVar26 >> 0x20);
  fVar34 = (float)*(undefined8 *)(param_2 + 0x70);
  fVar35 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  fVar36 = (float)*(undefined8 *)(param_2 + 0x78);
  plVar4 = (long *)(lVar5 + 0x38);
  if (iVar15 <= iVar17) {
    plVar4 = (long *)(lVar5 + 0xf0);
  }
  iVar21 = 0;
  if (iVar15 <= iVar17) {
    iVar21 = iVar15;
  }
  puVar2 = (undefined8 *)(*plVar4 + (long)(iVar17 - iVar21) * 0x10);
  uVar26 = *puVar2;
  fVar18 = (float)puVar1[1];
  fVar43 = (float)*(undefined8 *)(param_2 + 0x80);
  fVar44 = (float)((ulong)*(undefined8 *)(param_2 + 0x80) >> 0x20);
  fVar45 = (float)*(undefined8 *)(param_2 + 0x88);
  fVar39 = (float)uVar26;
  fVar40 = (float)((ulong)uVar26 >> 0x20);
  fVar41 = (float)puVar2[1];
  fVar20 = (float)*(undefined8 *)(param_2 + 0x90);
  fVar14 = fVar20 + fVar43 * fVar18 + fVar31 * fVar7 + fVar34 * fVar19;
  fVar22 = (float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20);
  fVar16 = fVar22 + fVar44 * fVar18 + fVar32 * fVar7 + fVar35 * fVar19;
  fVar24 = (float)*(undefined8 *)(param_2 + 0x98);
  fVar19 = fVar24 + fVar45 * fVar18 + fVar33 * fVar7 + fVar36 * fVar19;
  fVar18 = (float)*param_3;
  fVar29 = fVar11 * fVar18;
  fVar27 = (float)((ulong)*param_3 >> 0x20);
  fVar38 = fVar12 * fVar27;
  fVar28 = (float)param_3[1];
  fVar42 = fVar13 * fVar28;
  fVar30 = -(fVar29 + fVar38 + fVar42);
  fVar20 = fVar20 + fVar43 * fVar41 + fVar31 * fVar39 + fVar34 * fVar40;
  fVar22 = fVar22 + fVar44 * fVar41 + fVar32 * fVar39 + fVar35 * fVar40;
  fVar24 = fVar24 + fVar45 * fVar41 + fVar33 * fVar39 + fVar36 * fVar40;
  fVar31 = fVar6 * fVar18;
  fVar39 = fVar9 * fVar27;
  fVar43 = fVar10 * fVar28;
  fVar32 = -(fVar31 + fVar39 + fVar43);
  fVar33 = fVar18 * fVar14;
  fVar40 = fVar27 * fVar16;
  fVar44 = fVar28 * fVar19;
  fVar34 = -(fVar33 + fVar40 + fVar44);
  fVar35 = fVar18 * fVar20;
  fVar41 = fVar27 * fVar22;
  fVar45 = fVar28 * fVar24;
  fVar36 = -(fVar45 + fVar35 + fVar41);
  fVar7 = (fVar6 + fVar18 * fVar32) - (fVar14 + fVar18 * fVar34);
  fVar31 = (fVar9 + fVar27 * -(fVar31 + fVar39 + fVar43)) -
           (fVar16 + fVar27 * -(fVar33 + fVar40 + fVar44));
  fVar32 = (fVar10 + fVar28 * fVar32) - (fVar19 + fVar28 * fVar34);
  fVar7 = fVar7 * fVar7;
  fVar31 = fVar31 * fVar31;
  fVar32 = fVar32 * fVar32;
  fVar19 = fVar7 + fVar31 + fVar32;
  fVar32 = fVar7 + fVar31 + fVar32;
  uVar26 = CONCAT44(fVar32,fVar19);
  fVar7 = (fVar11 + fVar18 * fVar30) - (fVar20 + fVar18 * fVar36);
  fVar31 = (fVar12 + fVar27 * -(fVar29 + fVar38 + fVar42)) -
           (fVar22 + fVar27 * -(fVar45 + fVar35 + fVar41));
  fVar33 = (fVar13 + fVar28 * fVar30) - (fVar24 + fVar28 * fVar36);
  iVar15 = -(uint)(fVar19 <= 0.0);
  iVar17 = -(uint)(fVar32 <= 0.0);
  fVar7 = fVar7 * fVar7;
  fVar31 = fVar31 * fVar31;
  fVar33 = fVar33 * fVar33;
  fVar13 = fVar7 + fVar31 + fVar33;
  fVar33 = fVar7 + fVar31 + fVar33;
  uVar37 = CONCAT44(fVar33,fVar13);
  uVar25 = NEON_frsqrte(uVar37,4);
  fVar7 = (float)uVar25;
  fVar31 = (float)((ulong)uVar25 >> 0x20);
  uVar25 = NEON_frsqrts(uVar37,CONCAT44(fVar31 * fVar31,fVar7 * fVar7),4);
  fVar7 = fVar7 * (float)uVar25;
  fVar31 = fVar31 * (float)((ulong)uVar25 >> 0x20);
  uVar37 = NEON_frsqrts(uVar37,CONCAT44(fVar31 * fVar31,fVar7 * fVar7),4);
  iVar21 = -(uint)(fVar13 <= 0.0);
  iVar23 = -(uint)(fVar33 <= 0.0);
  fVar13 = (float)uVar37 * fVar7 * fVar13;
  fVar33 = (float)((ulong)uVar37 >> 0x20) * fVar31 * fVar33;
  fVar7 = (float)CONCAT13((byte)((uint)fVar13 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                          CONCAT12((byte)((uint)fVar13 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10),
                                   CONCAT11((byte)((uint)fVar13 >> 8) & ~(byte)((uint)iVar21 >> 8),
                                            SUB41(fVar13,0) & ~(byte)iVar21)));
  uVar37 = NEON_frsqrte(uVar26,4);
  fVar13 = (float)uVar37;
  fVar31 = (float)((ulong)uVar37 >> 0x20);
  uVar37 = NEON_frsqrts(uVar26,CONCAT44(fVar31 * fVar31,fVar13 * fVar13),4);
  fVar13 = fVar13 * (float)uVar37;
  fVar31 = fVar31 * (float)((ulong)uVar37 >> 0x20);
  uVar26 = NEON_frsqrts(uVar26,CONCAT44(fVar31 * fVar31,fVar13 * fVar13),4);
  fVar19 = fVar19 * (float)uVar26 * fVar13;
  fVar32 = fVar32 * (float)((ulong)uVar26 >> 0x20) * fVar31;
  fVar13 = (float)CONCAT13((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18),
                           CONCAT12((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10),
                                    CONCAT11((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar15 >> 8),
                                             SUB41(fVar19,0) & ~(byte)iVar15)));
  auVar8._0_4_ = fVar7 + fVar13;
  auVar8._4_4_ = (float)(CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar23 >> 0x18),
                                  CONCAT16((byte)((uint)fVar33 >> 0x10) &
                                           ~(byte)((uint)iVar23 >> 0x10),
                                           CONCAT15((byte)((uint)fVar33 >> 8) &
                                                    ~(byte)((uint)iVar23 >> 8),
                                                    CONCAT14(SUB41(fVar33,0) & ~(byte)iVar23,fVar7))
                                          )) >> 0x20) +
                 (float)(CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                  CONCAT16((byte)((uint)fVar32 >> 0x10) &
                                           ~(byte)((uint)iVar17 >> 0x10),
                                           CONCAT15((byte)((uint)fVar32 >> 8) &
                                                    ~(byte)((uint)iVar17 >> 8),
                                                    CONCAT14(SUB41(fVar32,0) & ~(byte)iVar17,fVar13)
                                                   ))) >> 0x20);
  auVar8._8_8_ = 0;
  return auVar8;
}


