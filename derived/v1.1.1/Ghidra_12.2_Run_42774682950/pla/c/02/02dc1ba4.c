/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dc1ba4; name: FUN_02dc1ba4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dc1ba4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char cVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  undefined8 uVar16;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar17 [16];
  float fVar26;
  float fVar27;
  undefined8 uVar25;
  float fVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  undefined1 uVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  long *local_48;
  
  uVar25 = param_4._8_8_;
  uVar16 = param_4._0_8_;
  uVar43 = param_2[0xf];
  uVar41 = param_2[0xe];
  uVar39 = param_2[0xd];
  uVar38 = param_2[0xc];
  uVar36 = param_2[0xb];
  uVar34 = param_2[10];
  uVar32 = param_2[9];
  uVar44 = param_2[8];
  uVar42 = param_2[7];
  uVar40 = param_2[6];
  uVar37 = param_2[5];
  uVar35 = param_2[4];
  uVar33 = param_2[3];
  uVar31 = param_2[2];
  uVar30 = param_2[1];
  uVar29 = param_2[0];
  FUN_028a5cd4(&local_48,*(undefined8 *)(param_5 + 0x80));
  auVar17 = (**(code **)(*local_48 + 0x40))(local_48);
  fVar6 = (float)CONCAT13(uVar36,CONCAT12(uVar34,CONCAT11(uVar32,uVar44)));
  fVar4 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)));
  cVar12 = *(char *)(param_5 + 0x2603);
  lVar9 = FUN_02b6962c(*(undefined8 *)(param_5 + 0x98),*(undefined4 *)(param_5 + 0x150));
  if (1 < *(int *)(param_5 + 0x1df0)) {
    bVar13 = -(cVar12 == '\0');
    uVar8 = *(undefined8 *)(lVar9 + 0x38);
    uVar7 = *(undefined8 *)(lVar9 + 0x30);
    bVar45 = (byte)_DAT_038897c0;
    bVar46 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar47 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar48 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    bVar49 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar50 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar51 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar52 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    bVar53 = (byte)_UNK_038897c8;
    bVar54 = (byte)((ulong)_UNK_038897c8 >> 8);
    bVar55 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar56 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    local_70 = auVar17._0_4_;
    fStack_6c = auVar17._4_4_;
    fStack_68 = auVar17._8_4_;
    fStack_64 = auVar17._12_4_;
    fVar57 = (float)CONCAT13((byte)((ulong)uVar16 >> 0x18) & bVar13,
                             CONCAT12((byte)((ulong)uVar16 >> 0x10) & bVar13,
                                      CONCAT11((byte)((ulong)uVar16 >> 8) & bVar13,
                                               (byte)uVar16 & bVar13)));
    fVar59 = (float)CONCAT13((byte)((ulong)uVar25 >> 0x18) & bVar13,
                             CONCAT12((byte)((ulong)uVar25 >> 0x10) & bVar13,
                                      CONCAT11((byte)((ulong)uVar25 >> 8) & bVar13,
                                               (byte)uVar25 & bVar13)));
    lVar11 = 0x73c;
    fVar27 = (float)CONCAT13((byte)((ulong)uVar7 >> 0x18) & bVar48,
                             CONCAT12((byte)((ulong)uVar7 >> 0x10) & bVar47,
                                      CONCAT11((byte)((ulong)uVar7 >> 8) & bVar46,
                                               (byte)uVar7 & bVar45)));
    fVar28 = (float)CONCAT13((byte)((ulong)uVar7 >> 0x38) & bVar52,
                             CONCAT12((byte)((ulong)uVar7 >> 0x30) & bVar51,
                                      CONCAT11((byte)((ulong)uVar7 >> 0x28) & bVar50,
                                               (byte)((ulong)uVar7 >> 0x20) & bVar49)));
    fVar18 = (float)(CONCAT17(uVar42,CONCAT16(uVar40,CONCAT15(uVar37,CONCAT14(uVar35,fVar4)))) >>
                    0x20);
    fVar26 = (float)(CONCAT17(uVar43,CONCAT16(uVar41,CONCAT15(uVar39,CONCAT14(uVar38,fVar6)))) >>
                    0x20);
    fVar15 = (float)CONCAT13((byte)((ulong)uVar8 >> 0x18) & bVar56,
                             CONCAT12((byte)((ulong)uVar8 >> 0x10) & bVar55,
                                      CONCAT11((byte)((ulong)uVar8 >> 8) & bVar54,
                                               (byte)uVar8 & bVar53)));
    lVar9 = 0x1c0;
    fVar58 = (float)(CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar13,
                              CONCAT16((byte)((ulong)uVar16 >> 0x30) & bVar13,
                                       CONCAT15((byte)((ulong)uVar16 >> 0x28) & bVar13,
                                                CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar13,
                                                         fVar57)))) >> 0x20);
    fVar60 = (float)(CONCAT17((byte)((ulong)uVar25 >> 0x38) & bVar13,
                              CONCAT16((byte)((ulong)uVar25 >> 0x30) & bVar13,
                                       CONCAT15((byte)((ulong)uVar25 >> 0x28) & bVar13,
                                                CONCAT14((byte)((ulong)uVar25 >> 0x20) & bVar13,
                                                         fVar59)))) >> 0x20);
    fVar14 = fVar57 + local_70 * fVar27 + fVar4 * fVar28 + param_3._0_4_ * fVar15;
    fVar19 = fVar58 + fStack_6c * fVar27 + fVar18 * fVar28 + param_3._4_4_ * fVar15;
    fVar22 = fVar59 + fStack_68 * fVar27 + fVar6 * fVar28 + param_3._8_4_ * fVar15;
    fVar27 = fVar60 + fStack_64 * fVar27 + fVar26 * fVar28 + param_3._12_4_ * fVar15;
    do {
      lVar10 = FUN_02b6962c(*(undefined8 *)(param_5 + 0x98),*(undefined4 *)(param_5 + lVar9));
      uVar25 = *(undefined8 *)(lVar10 + 0x38);
      uVar16 = *(undefined8 *)(lVar10 + 0x30);
      lVar10 = lVar11 + -0x73a;
      lVar9 = lVar9 + 0x70;
      fVar28 = (float)CONCAT13((byte)((ulong)uVar16 >> 0x18) & bVar48,
                               CONCAT12((byte)((ulong)uVar16 >> 0x10) & bVar47,
                                        CONCAT11((byte)((ulong)uVar16 >> 8) & bVar46,
                                                 (byte)uVar16 & bVar45)));
      fVar23 = (float)CONCAT13((byte)((ulong)uVar25 >> 0x18) & bVar56,
                               CONCAT12((byte)((ulong)uVar25 >> 0x10) & bVar55,
                                        CONCAT11((byte)((ulong)uVar25 >> 8) & bVar54,
                                                 (byte)uVar25 & bVar53)));
      fVar20 = (float)(CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar52,
                                CONCAT16((byte)((ulong)uVar16 >> 0x30) & bVar51,
                                         CONCAT15((byte)((ulong)uVar16 >> 0x28) & bVar50,
                                                  CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar49,
                                                           fVar28)))) >> 0x20);
      fVar15 = fVar57 + local_70 * fVar28 + fVar4 * fVar20 + param_3._0_4_ * fVar23;
      fVar21 = fVar58 + fStack_6c * fVar28 + fVar18 * fVar20 + param_3._4_4_ * fVar23;
      fVar24 = fVar59 + fStack_68 * fVar28 + fVar6 * fVar20 + param_3._8_4_ * fVar23;
      fVar28 = fVar60 + fStack_64 * fVar28 + fVar26 * fVar20 + param_3._12_4_ * fVar23;
      fVar14 = fVar14 - fVar15;
      fVar19 = fVar19 - fVar21;
      fVar22 = fVar22 - fVar24;
      fVar27 = fVar27 - fVar28;
      fVar14 = fVar14 * fVar14;
      fVar19 = fVar19 * fVar19;
      uVar29 = (undefined1)((uint)fVar19 >> 8);
      uVar30 = (undefined1)((uint)fVar19 >> 0x10);
      uVar31 = (undefined1)((uint)fVar19 >> 0x18);
      fVar22 = fVar22 * fVar22;
      uVar33 = (undefined1)((uint)fVar22 >> 8);
      uVar35 = (undefined1)((uint)fVar22 >> 0x10);
      uVar37 = (undefined1)((uint)fVar22 >> 0x18);
      fVar27 = fVar27 * fVar27;
      uVar40 = (undefined1)((uint)fVar27 >> 8);
      uVar42 = (undefined1)((uint)fVar27 >> 0x10);
      uVar44 = (undefined1)((uint)fVar27 >> 0x18);
      auVar17[4] = SUB41(fVar19,0);
      auVar17._0_4_ = fVar14;
      auVar17[5] = uVar29;
      auVar17[6] = uVar30;
      auVar17[7] = uVar31;
      auVar17[8] = SUB41(fVar22,0);
      auVar17[9] = uVar33;
      auVar17[10] = uVar35;
      auVar17[0xb] = uVar37;
      auVar17[0xc] = SUB41(fVar27,0);
      auVar17[0xd] = uVar40;
      auVar17[0xe] = uVar42;
      auVar17[0xf] = uVar44;
      auVar5[4] = SUB41(fVar19,0);
      auVar5._0_4_ = fVar14;
      auVar5[5] = uVar29;
      auVar5[6] = uVar30;
      auVar5[7] = uVar31;
      auVar5[8] = SUB41(fVar22,0);
      auVar5[9] = uVar33;
      auVar5[10] = uVar35;
      auVar5[0xb] = uVar37;
      auVar5[0xc] = SUB41(fVar27,0);
      auVar5[0xd] = uVar40;
      auVar5[0xe] = uVar42;
      auVar5[0xf] = uVar44;
      auVar17 = NEON_ext(auVar17,auVar5,8,1);
      fVar27 = SQRT(auVar17._0_4_ + fVar14 + auVar17._4_4_ + fVar19);
      uVar29 = 0;
      uVar30 = 0;
      uVar31 = 0;
      uVar33 = 0;
      if (0.001 <= fVar27) {
        uVar29 = SUB41(fVar27,0);
        uVar30 = (char)((uint)fVar27 >> 8);
        uVar31 = (char)((uint)fVar27 >> 0x10);
        uVar33 = (char)((uint)fVar27 >> 0x18);
      }
      *(uint *)(param_5 + lVar11 * 4) = CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar30,uVar29)));
      lVar11 = lVar11 + 1;
      fVar14 = fVar15;
      fVar19 = fVar21;
      fVar22 = fVar24;
      fVar27 = fVar28;
    } while (lVar10 < *(int *)(param_5 + 0x1df0));
  }
  if (local_48 != (long *)0x0) {
    lVar9 = local_48[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar12 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar2 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))(local_48);
    }
  }
  return;
}


