/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dddd7c; name: FUN_02dddd7c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_02dddd7c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
            undefined1 param_4 [16],long param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar14;
  undefined8 uVar15;
  undefined1 auVar11 [16];
  float fVar13;
  undefined1 auVar12 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  float fStack_98;
  undefined8 local_90;
  undefined8 local_80;
  float fStack_78;
  undefined8 local_70;
  float fStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_28;
  
  uStack_d8 = param_4._8_8_;
  local_e0 = param_4._0_8_;
  uStack_a8 = param_3._8_8_;
  local_b0 = param_3._0_8_;
  uStack_b8 = param_2._8_8_;
  local_c0 = param_2._0_8_;
  uVar10 = 0;
  uVar15 = 0;
  if ((param_6 < 0) ||
     ((int)((ulong)(*(long *)(param_5 + 0x118) - *(long *)(param_5 + 0x110)) >> 4) * -0x5cc0ed73 <=
      param_6)) goto LAB_02dddfbc;
  iVar2 = *(int *)(*(long *)(param_5 + 0x110) + (long)param_6 * 0x450 + 0x380);
  if (iVar2 < 0) goto LAB_02dddfbc;
  lVar8 = (long)param_6;
  puVar6 = (undefined8 *)FUN_02b690d4(0,*(undefined8 *)(param_5 + 0x148),iVar2);
  local_58 = puVar6[1];
  local_60 = *puVar6;
  uStack_38 = puVar6[5];
  local_48 = puVar6[3];
  local_50 = puVar6[2];
  local_40 = puVar6[4];
  lVar7 = *(long *)(param_5 + 0x110);
  if (*(char *)(lVar7 + lVar8 * 0x450 + 0x60) == '\0') {
    if ((*(char *)(lVar7 + lVar8 * 0x450 + 0x290) != '\0') &&
       (*(char *)(lVar7 + lVar8 * 0x450 + 0x340) != '\0')) {
      lVar7 = lVar7 + lVar8 * 0x450;
      uStack_38 = *(undefined8 *)(lVar7 + 0x338);
      local_40 = *(undefined8 *)(lVar7 + 0x330);
    }
  }
  else {
    lVar7 = lVar7 + lVar8 * 0x450;
    uStack_b8 = *(undefined8 *)(lVar7 + 0xf8);
    local_c0 = *(undefined8 *)(lVar7 + 0xf0);
    local_40 = CONCAT44((float)((ulong)local_40 >> 0x20) + (float)((ulong)local_c0 >> 0x20),
                        (float)local_40 + (float)local_c0);
    uStack_38 = CONCAT44((float)((ulong)uStack_38 >> 0x20) + (float)((ulong)uStack_b8 >> 0x20),
                         (float)uStack_38 + (float)uStack_b8);
  }
  sVar5 = FUN_02b68b4c(*(undefined8 *)(param_5 + 0x148),iVar2);
  if (sVar5 < 0) {
    fStack_68 = (float)_UNK_03888d18;
    local_70 = _DAT_03888d10;
    fStack_78 = (float)DAT_0388a148;
    local_80 = DAT_0388a140;
    fVar14 = 0.0;
    local_90 = 0;
    fStack_98 = (float)_UNK_03889a88;
    local_a0 = _DAT_03889a80;
    lVar7 = *(long *)(param_5 + 0x148);
    if (lVar7 == 0) goto LAB_02dddf30;
LAB_02ddde88:
    uVar15 = *(undefined8 *)(lVar7 + 0x418);
    uVar10 = *(undefined8 *)(lVar7 + 0x410);
    bVar23 = (byte)_DAT_038897c0;
    bVar24 = (byte)((ulong)_DAT_038897c0 >> 8);
    auVar11[1] = (byte)((ulong)uVar10 >> 8) & bVar24;
    auVar11[0] = (byte)uVar10 & bVar23;
    bVar25 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    auVar11[2] = (byte)((ulong)uVar10 >> 0x10) & bVar25;
    bVar26 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    auVar11[3] = (byte)((ulong)uVar10 >> 0x18) & bVar26;
    bVar27 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    auVar11[4] = (byte)((ulong)uVar10 >> 0x20) & bVar27;
    bVar28 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    auVar11[5] = (byte)((ulong)uVar10 >> 0x28) & bVar28;
    bVar29 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    auVar11[6] = (byte)((ulong)uVar10 >> 0x30) & bVar29;
    bVar30 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar11[7] = (byte)((ulong)uVar10 >> 0x38) & bVar30;
    bVar31 = (byte)_UNK_038897c8;
    bVar32 = (byte)((ulong)_UNK_038897c8 >> 8);
    auVar11[9] = (byte)((ulong)uVar15 >> 8) & bVar32;
    auVar11[8] = (byte)uVar15 & bVar31;
    bVar33 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar11[10] = (byte)((ulong)uVar15 >> 0x10) & bVar33;
    bVar34 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar11[0xb] = (byte)((ulong)uVar15 >> 0x18) & bVar34;
    bVar35 = (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar11[0xc] = (byte)((ulong)uVar15 >> 0x20) & bVar35;
    bVar36 = (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar11[0xd] = (byte)((ulong)uVar15 >> 0x28) & bVar36;
    bVar37 = (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar11[0xe] = (byte)((ulong)uVar15 >> 0x30) & bVar37;
    bVar38 = (byte)((ulong)_UNK_038897c8 >> 0x38);
    auVar11[0xf] = (byte)((ulong)uVar15 >> 0x38) & bVar38;
    uVar17 = *(undefined8 *)(lVar7 + 0x428);
    uVar16 = *(undefined8 *)(lVar7 + 0x420);
    uVar19 = *(undefined8 *)(lVar7 + 0x438);
    uVar18 = *(undefined8 *)(lVar7 + 0x430);
    uVar15 = *(undefined8 *)(lVar7 + 0x448);
    uVar10 = *(undefined8 *)(lVar7 + 0x440);
    local_c0 = CONCAT17((byte)((ulong)uVar16 >> 0x38) & bVar30,
                        CONCAT16((byte)((ulong)uVar16 >> 0x30) & bVar29,
                                 CONCAT15((byte)((ulong)uVar16 >> 0x28) & bVar28,
                                          CONCAT14((byte)((ulong)uVar16 >> 0x20) & bVar27,
                                                   CONCAT13((byte)((ulong)uVar16 >> 0x18) & bVar26,
                                                            CONCAT12((byte)((ulong)uVar16 >> 0x10) &
                                                                     bVar25,CONCAT11((byte)((ulong)
                                                  uVar16 >> 8) & bVar24,(byte)uVar16 & bVar23)))))))
    ;
    uStack_b8 = CONCAT17((byte)((ulong)uVar17 >> 0x38) & bVar38,
                         CONCAT16((byte)((ulong)uVar17 >> 0x30) & bVar37,
                                  CONCAT15((byte)((ulong)uVar17 >> 0x28) & bVar36,
                                           CONCAT14((byte)((ulong)uVar17 >> 0x20) & bVar35,
                                                    CONCAT13((byte)((ulong)uVar17 >> 0x18) & bVar34,
                                                             CONCAT12((byte)((ulong)uVar17 >> 0x10)
                                                                      & bVar33,CONCAT11((byte)((
                                                  ulong)uVar17 >> 8) & bVar32,(byte)uVar17 & bVar31)
                                                  ))))));
    local_b0 = CONCAT17((byte)((ulong)uVar18 >> 0x38) & bVar30,
                        CONCAT16((byte)((ulong)uVar18 >> 0x30) & bVar29,
                                 CONCAT15((byte)((ulong)uVar18 >> 0x28) & bVar28,
                                          CONCAT14((byte)((ulong)uVar18 >> 0x20) & bVar27,
                                                   CONCAT13((byte)((ulong)uVar18 >> 0x18) & bVar26,
                                                            CONCAT12((byte)((ulong)uVar18 >> 0x10) &
                                                                     bVar25,CONCAT11((byte)((ulong)
                                                  uVar18 >> 8) & bVar24,(byte)uVar18 & bVar23)))))))
    ;
    uStack_a8 = CONCAT17((byte)((ulong)uVar19 >> 0x38) & bVar38,
                         CONCAT16((byte)((ulong)uVar19 >> 0x30) & bVar37,
                                  CONCAT15((byte)((ulong)uVar19 >> 0x28) & bVar36,
                                           CONCAT14((byte)((ulong)uVar19 >> 0x20) & bVar35,
                                                    CONCAT13((byte)((ulong)uVar19 >> 0x18) & bVar34,
                                                             CONCAT12((byte)((ulong)uVar19 >> 0x10)
                                                                      & bVar33,CONCAT11((byte)((
                                                  ulong)uVar19 >> 8) & bVar32,(byte)uVar19 & bVar31)
                                                  ))))));
    local_e0 = CONCAT17((byte)((ulong)uVar10 >> 0x38) & bVar30,
                        CONCAT16((byte)((ulong)uVar10 >> 0x30) & bVar29,
                                 CONCAT15((byte)((ulong)uVar10 >> 0x28) & bVar28,
                                          CONCAT14((byte)((ulong)uVar10 >> 0x20) & bVar27,
                                                   CONCAT13((byte)((ulong)uVar10 >> 0x18) & bVar26,
                                                            CONCAT12((byte)((ulong)uVar10 >> 0x10) &
                                                                     bVar25,CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) & bVar24,(byte)uVar10 & bVar23)))))))
    ;
    uStack_d8 = CONCAT17((byte)((ulong)uVar15 >> 0x38) & bVar38,
                         CONCAT16((byte)((ulong)uVar15 >> 0x30) & bVar37,
                                  CONCAT15((byte)((ulong)uVar15 >> 0x28) & bVar36,
                                           CONCAT14((byte)((ulong)uVar15 >> 0x20) & bVar35,
                                                    CONCAT13((byte)((ulong)uVar15 >> 0x18) & bVar34,
                                                             CONCAT12((byte)((ulong)uVar15 >> 0x10)
                                                                      & bVar33,CONCAT11((byte)((
                                                  ulong)uVar15 >> 8) & bVar32,(byte)uVar15 & bVar31)
                                                  ))))));
  }
  else {
    puVar6 = (undefined8 *)FUN_02b6962c(*(undefined8 *)(param_5 + 0x148));
    uVar15 = puVar6[1];
    uVar10 = *puVar6;
    uStack_b8 = puVar6[3];
    local_c0 = puVar6[2];
    bVar23 = (byte)_DAT_038897c0;
    bVar24 = (byte)((ulong)_DAT_038897c0 >> 8);
    bVar25 = (byte)((ulong)_DAT_038897c0 >> 0x10);
    bVar26 = (byte)((ulong)_DAT_038897c0 >> 0x18);
    bVar27 = (byte)((ulong)_DAT_038897c0 >> 0x20);
    bVar28 = (byte)((ulong)_DAT_038897c0 >> 0x28);
    bVar29 = (byte)((ulong)_DAT_038897c0 >> 0x30);
    bVar30 = (byte)((ulong)_DAT_038897c0 >> 0x38);
    local_a0 = CONCAT17((byte)((ulong)uVar10 >> 0x38) & bVar30,
                        CONCAT16((byte)((ulong)uVar10 >> 0x30) & bVar29,
                                 CONCAT15((byte)((ulong)uVar10 >> 0x28) & bVar28,
                                          CONCAT14((byte)((ulong)uVar10 >> 0x20) & bVar27,
                                                   CONCAT13((byte)((ulong)uVar10 >> 0x18) & bVar26,
                                                            CONCAT12((byte)((ulong)uVar10 >> 0x10) &
                                                                     bVar25,CONCAT11((byte)((ulong)
                                                  uVar10 >> 8) & bVar24,(byte)uVar10 & bVar23)))))))
    ;
    bVar31 = (byte)_UNK_038897c8;
    bVar32 = (byte)((ulong)_UNK_038897c8 >> 8);
    bVar33 = (byte)((ulong)_UNK_038897c8 >> 0x10);
    bVar34 = (byte)((ulong)_UNK_038897c8 >> 0x18);
    fStack_98 = (float)CONCAT13((byte)((ulong)uVar15 >> 0x18) & bVar34,
                                CONCAT12((byte)((ulong)uVar15 >> 0x10) & bVar33,
                                         CONCAT11((byte)((ulong)uVar15 >> 8) & bVar32,
                                                  (byte)uVar15 & bVar31)));
    uStack_a8 = puVar6[5];
    local_b0 = puVar6[4];
    uStack_d8 = puVar6[7];
    local_e0 = puVar6[6];
    local_80 = CONCAT17((byte)((ulong)local_c0 >> 0x38) & bVar30,
                        CONCAT16((byte)((ulong)local_c0 >> 0x30) & bVar29,
                                 CONCAT15((byte)((ulong)local_c0 >> 0x28) & bVar28,
                                          CONCAT14((byte)((ulong)local_c0 >> 0x20) & bVar27,
                                                   CONCAT13((byte)((ulong)local_c0 >> 0x18) & bVar26
                                                            ,CONCAT12((byte)((ulong)local_c0 >> 0x10
                                                                            ) & bVar25,
                                                                      CONCAT11((byte)((ulong)
                                                  local_c0 >> 8) & bVar24,(byte)local_c0 & bVar23)))
                                                  ))));
    fStack_78 = (float)CONCAT13((byte)((ulong)uStack_b8 >> 0x18) & bVar34,
                                CONCAT12((byte)((ulong)uStack_b8 >> 0x10) & bVar33,
                                         CONCAT11((byte)((ulong)uStack_b8 >> 8) & bVar32,
                                                  (byte)uStack_b8 & bVar31)));
    local_70 = CONCAT17((byte)((ulong)local_b0 >> 0x38) & bVar30,
                        CONCAT16((byte)((ulong)local_b0 >> 0x30) & bVar29,
                                 CONCAT15((byte)((ulong)local_b0 >> 0x28) & bVar28,
                                          CONCAT14((byte)((ulong)local_b0 >> 0x20) & bVar27,
                                                   CONCAT13((byte)((ulong)local_b0 >> 0x18) & bVar26
                                                            ,CONCAT12((byte)((ulong)local_b0 >> 0x10
                                                                            ) & bVar25,
                                                                      CONCAT11((byte)((ulong)
                                                  local_b0 >> 8) & bVar24,(byte)local_b0 & bVar23)))
                                                  ))));
    fStack_68 = (float)CONCAT13((byte)((ulong)uStack_a8 >> 0x18) & bVar34,
                                CONCAT12((byte)((ulong)uStack_a8 >> 0x10) & bVar33,
                                         CONCAT11((byte)((ulong)uStack_a8 >> 8) & bVar32,
                                                  (byte)uStack_a8 & bVar31)));
    local_90 = CONCAT17((byte)((ulong)local_e0 >> 0x38) & bVar30,
                        CONCAT16((byte)((ulong)local_e0 >> 0x30) & bVar29,
                                 CONCAT15((byte)((ulong)local_e0 >> 0x28) & bVar28,
                                          CONCAT14((byte)((ulong)local_e0 >> 0x20) & bVar27,
                                                   CONCAT13((byte)((ulong)local_e0 >> 0x18) & bVar26
                                                            ,CONCAT12((byte)((ulong)local_e0 >> 0x10
                                                                            ) & bVar25,
                                                                      CONCAT11((byte)((ulong)
                                                  local_e0 >> 8) & bVar24,(byte)local_e0 & bVar23)))
                                                  ))));
    fVar14 = (float)CONCAT13((byte)((ulong)uStack_d8 >> 0x18) & bVar34,
                             CONCAT12((byte)((ulong)uStack_d8 >> 0x10) & bVar33,
                                      CONCAT11((byte)((ulong)uStack_d8 >> 8) & bVar32,
                                               (byte)uStack_d8 & bVar31)));
    lVar7 = *(long *)(param_5 + 0x148);
    if (lVar7 != 0) goto LAB_02ddde88;
LAB_02dddf30:
    FUN_028a5cd4(&local_28,*(undefined8 *)(param_5 + 0x80));
    auVar11 = (**(code **)(*local_28 + 0x40))(local_28);
    uVar10 = local_e0;
    uVar15 = uStack_d8;
    if (local_28 != (long *)0x0) {
      lVar7 = local_28[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))(local_28);
      }
    }
  }
  fVar22 = (float)uVar15;
  FUN_02bcb330(&local_60);
  fVar20 = (float)uVar10;
  fVar21 = (float)((ulong)uVar10 >> 0x20);
  fVar9 = (float)local_90 +
          (float)local_a0 * fVar20 + (float)local_80 * fVar21 + (float)local_70 * fVar22;
  fVar13 = (float)((ulong)local_90 >> 0x20) +
           (float)((ulong)local_a0 >> 0x20) * fVar20 + (float)((ulong)local_80 >> 0x20) * fVar21 +
           (float)((ulong)local_70 >> 0x20) * fVar22;
  fVar14 = fVar14 + fStack_98 * fVar20 + fStack_78 * fVar21 + fStack_68 * fVar22;
  uVar10 = CONCAT44((float)((ulong)local_e0 >> 0x20) +
                    auVar11._4_4_ * fVar9 + (float)((ulong)local_c0 >> 0x20) * fVar13 +
                    (float)((ulong)local_b0 >> 0x20) * fVar14,
                    (float)local_e0 +
                    auVar11._0_4_ * fVar9 + (float)local_c0 * fVar13 + (float)local_b0 * fVar14);
  uVar15 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) +
                    auVar11._12_4_ * fVar9 + (float)((ulong)uStack_b8 >> 0x20) * fVar13 +
                    (float)((ulong)uStack_a8 >> 0x20) * fVar14,
                    (float)uStack_d8 +
                    auVar11._8_4_ * fVar9 + (float)uStack_b8 * fVar13 + (float)uStack_a8 * fVar14);
LAB_02dddfbc:
  auVar12._8_8_ = uVar15;
  auVar12._0_8_ = uVar10;
  return auVar12;
}


