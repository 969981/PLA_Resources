/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b56acc; name: FUN_01b56acc
 */


undefined1  [16] FUN_01b56acc(long param_1,long *param_2,ulong param_3)

{
  float *pfVar1;
  ulong uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong *puVar10;
  long *plVar11;
  byte *pbVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined8 uVar30;
  undefined8 uVar31;
  
  if (param_2[1] == *param_2) {
    puVar8 = (undefined8 *)(param_1 + 0x2a0);
  }
  else {
    puVar8 = (undefined8 *)(*param_2 + (param_3 & 0xffffffff) * 0x80 + 0x10);
  }
  uVar31 = puVar8[1];
  uVar30 = *puVar8;
  if ((*PTR_DAT_04379678 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379678);
    if (iVar7 != 0) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
  }
  plVar11 = (long *)PTR_DAT_04379688;
  plVar13 = (long *)PTR_DAT_04379680;
  pbVar12 = PTR_DAT_04379678;
  lVar9 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar9;
  puVar10 = *(ulong **)(lVar9 + 0xd8);
  uVar2 = *puVar10;
  uVar15 = puVar10[1];
  uVar14 = uVar15 ^ uVar2;
  *puVar10 = uVar14 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar14 << 0x10;
  puVar10[1] = uVar14 >> 0x1b | uVar14 << 0x25;
  fVar18 = (float)(uVar15 + uVar2) * 5.421011e-20;
  fVar18 = fVar18 + fVar18 + 0.0 + -1.0;
  if ((*pbVar12 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379678);
    plVar11 = (long *)PTR_DAT_04379688;
    pbVar12 = PTR_DAT_04379678;
    plVar13 = (long *)PTR_DAT_04379680;
    if (iVar7 != 0) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
      plVar11 = (long *)PTR_DAT_04379688;
      pbVar12 = PTR_DAT_04379678;
      plVar13 = (long *)PTR_DAT_04379680;
    }
  }
  lVar9 = *plVar13;
  *plVar11 = lVar9;
  puVar10 = *(ulong **)(lVar9 + 0xd8);
  uVar2 = *puVar10;
  uVar15 = puVar10[1] ^ uVar2;
  fVar24 = (float)(puVar10[1] + uVar2) * 5.421011e-20;
  fVar24 = fVar24 + fVar24 + 0.0 + -1.0;
  fVar17 = fVar24 * fVar24 + fVar18 * fVar18;
  fVar16 = fVar17 + 0.0;
  fVar17 = fVar17 + 0.0;
  uVar20 = SUB41(fVar17,0);
  uVar21 = (undefined1)((uint)fVar17 >> 8);
  uVar22 = (undefined1)((uint)fVar17 >> 0x10);
  uVar23 = (undefined1)((uint)fVar17 >> 0x18);
  auVar25[4] = uVar20;
  auVar25._0_4_ = fVar16;
  auVar25[5] = uVar21;
  auVar25[6] = uVar22;
  auVar25[7] = uVar23;
  auVar25[8] = SUB41(fVar16,0);
  auVar25[9] = (char)((uint)fVar16 >> 8);
  auVar25[10] = (char)((uint)fVar16 >> 0x10);
  auVar25[0xb] = (char)((uint)fVar16 >> 0x18);
  auVar25[0xc] = uVar20;
  auVar25[0xd] = uVar21;
  auVar25[0xe] = uVar22;
  auVar25[0xf] = uVar23;
  auVar25 = NEON_frsqrte(auVar25,4);
  *puVar10 = uVar15 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar15 << 0x10;
  puVar10[1] = uVar15 >> 0x1b | uVar15 << 0x25;
  auVar28._0_4_ = auVar25._0_4_ * fVar16;
  auVar28._4_4_ = auVar25._4_4_ * fVar17;
  auVar28._8_4_ = auVar25._8_4_ * fVar16;
  uVar3 = (undefined2)(CONCAT15(uVar21,CONCAT14(uVar20,fVar16)) >> 0x20);
  auVar28._12_4_ = auVar25._12_4_ * (float)CONCAT13(uVar23,CONCAT12(uVar22,uVar3));
  auVar29 = NEON_frsqrts(auVar25,auVar28,4);
  auVar26._0_4_ = auVar25._0_4_ * auVar29._0_4_;
  auVar26._4_4_ = auVar25._4_4_ * auVar29._4_4_;
  auVar26._8_4_ = auVar25._8_4_ * auVar29._8_4_;
  auVar26._12_4_ = auVar25._12_4_ * auVar29._12_4_;
  auVar29._0_4_ = fVar16 * auVar26._0_4_;
  auVar29._4_4_ = fVar17 * auVar26._4_4_;
  auVar29._8_4_ = fVar16 * auVar26._8_4_;
  auVar29._12_4_ = (float)CONCAT13(uVar23,CONCAT12(uVar22,uVar3)) * auVar26._12_4_;
  pfVar1 = (float *)(param_1 + 0x2d0);
  if (param_2[1] != *param_2) {
    pfVar1 = (float *)(*param_2 + (param_3 & 0xffffffff) * 0x80 + 0x40);
  }
  iVar7 = -(uint)(fVar16 == 0.0);
  iVar4 = -(uint)(fVar17 == 0.0);
  iVar5 = -(uint)(fVar16 == 0.0);
  iVar6 = -(uint)((float)CONCAT13(uVar23,CONCAT12(uVar22,uVar3)) == 0.0);
  auVar25 = NEON_frsqrts(auVar26,auVar29,4);
  fVar18 = auVar26._0_4_ * auVar25._0_4_ * fVar18;
  fVar17 = auVar26._4_4_ * auVar25._4_4_ * 0.0;
  fVar24 = auVar26._8_4_ * auVar25._8_4_ * fVar24;
  fVar16 = auVar26._12_4_ * auVar25._12_4_ * 0.0;
  fVar27 = (float)CONCAT13((byte)((uint)fVar18 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                           CONCAT12((byte)((uint)fVar18 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                                    CONCAT11((byte)((uint)fVar18 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                             SUB41(fVar18,0) & ~(byte)iVar7)));
  fVar24 = (float)CONCAT13((byte)((uint)fVar24 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                           CONCAT12((byte)((uint)fVar24 >> 0x10) & ~(byte)((uint)iVar5 >> 0x10),
                                    CONCAT11((byte)((uint)fVar24 >> 8) & ~(byte)((uint)iVar5 >> 8),
                                             SUB41(fVar24,0) & ~(byte)iVar5)));
  fVar18 = *pfVar1;
  if ((*pbVar12 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04379678);
    plVar11 = (long *)PTR_DAT_04379688;
    plVar13 = (long *)PTR_DAT_04379680;
    if (iVar7 != 0) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
      plVar11 = (long *)PTR_DAT_04379688;
      plVar13 = (long *)PTR_DAT_04379680;
    }
  }
  lVar9 = *plVar13;
  *plVar11 = lVar9;
  puVar10 = *(ulong **)(lVar9 + 0xd8);
  uVar2 = *puVar10;
  uVar15 = puVar10[1];
  uVar14 = uVar15 ^ uVar2;
  *puVar10 = uVar14 ^ (uVar2 >> 0x28 | uVar2 << 0x18) ^ uVar14 << 0x10;
  puVar10[1] = uVar14 >> 0x1b | uVar14 << 0x25;
  fVar18 = fVar18 * (float)(uVar15 + uVar2) * 5.421011e-20 + 0.0;
  auVar19._0_4_ = (float)uVar30 + fVar27 * fVar18;
  auVar19._4_4_ =
       (float)((ulong)uVar30 >> 0x20) +
       (float)(CONCAT17((byte)((uint)fVar17 >> 0x18) & ~(byte)((uint)iVar4 >> 0x18),
                        CONCAT16((byte)((uint)fVar17 >> 0x10) & ~(byte)((uint)iVar4 >> 0x10),
                                 CONCAT15((byte)((uint)fVar17 >> 8) & ~(byte)((uint)iVar4 >> 8),
                                          CONCAT14(SUB41(fVar17,0) & ~(byte)iVar4,fVar27)))) >> 0x20
              ) * fVar18;
  auVar19._8_4_ = (float)uVar31 + fVar24 * fVar18;
  auVar19._12_4_ =
       (float)((ulong)uVar31 >> 0x20) +
       (float)(CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar6 >> 0x18),
                        CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar6 >> 0x10),
                                 CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar6 >> 8),
                                          CONCAT14(SUB41(fVar16,0) & ~(byte)iVar6,fVar24)))) >> 0x20
              ) * fVar18;
  return auVar19;
}


