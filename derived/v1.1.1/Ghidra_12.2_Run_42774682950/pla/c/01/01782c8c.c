/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01782c8c; name: FUN_01782c8c
 */


undefined8 FUN_01782c8c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined2 uVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float extraout_s0;
  float fVar17;
  float fVar18;
  undefined8 extraout_var;
  float fVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 uVar24;
  undefined1 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 in_q3 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_60 [16];
  long *local_48;
  long *local_40;
  long *local_38;
  
  FUN_00be5694(&local_38,param_1 + 0x70);
  FUN_00be5694(&local_40,param_1 + 0xa0);
  if (*(long *)(param_1 + 0xb0) == 0) {
    local_60._0_8_ = (long *)0x0;
  }
  else {
    FUN_00ac64cc(local_60);
  }
  uVar11 = local_60._0_8_;
  FUN_01786b8c(&local_48,param_1 + 0xc0);
  if (((local_38 == (long *)0x0) || ((long *)uVar11 == (long *)0x0)) || (local_40 == (long *)0x0)) {
    uVar14 = 0;
  }
  else {
    if (local_48 != (long *)0x0) {
      if (*(char *)(param_1 + 0x18c) == '\0') {
        FUN_01782528(param_1,*(undefined4 *)(param_1 + 0x188));
        FUN_009c69bc(local_60,local_40);
        (**(code **)(*(long *)local_60._0_8_ + 0x40))();
        if ((long *)local_60._0_8_ != (long *)0x0) {
          lVar13 = *(long *)(local_60._0_8_ + 0x58);
          piVar1 = (int *)(lVar13 + 0xc);
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
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*(long *)local_60._0_8_ + 0x20))();
          }
        }
        fVar17 = extraout_s0 - in_q3._0_4_;
        fVar18 = (float)extraout_var - in_q3._8_4_;
        fVar19 = (float)((ulong)extraout_var >> 0x20) - in_q3._12_4_;
        fVar16 = fVar17 * fVar17;
        fVar8 = fVar18 * fVar18;
        uVar20 = (undefined1)((uint)fVar8 >> 8);
        uVar21 = (undefined1)((uint)fVar8 >> 0x10);
        uVar22 = (undefined1)((uint)fVar8 >> 0x18);
        fVar15 = fVar19 * fVar19;
        uVar23 = (undefined1)((uint)fVar15 >> 8);
        uVar24 = (undefined1)((uint)fVar15 >> 0x10);
        uVar25 = (undefined1)((uint)fVar15 >> 0x18);
        auVar26._4_4_ = 0;
        auVar26._0_4_ = fVar16;
        auVar26[8] = SUB41(fVar8,0);
        auVar26[9] = uVar20;
        auVar26[10] = uVar21;
        auVar26[0xb] = uVar22;
        auVar26[0xc] = SUB41(fVar15,0);
        auVar26[0xd] = uVar23;
        auVar26[0xe] = uVar24;
        auVar26[0xf] = uVar25;
        auVar29._4_4_ = 0;
        auVar29._0_4_ = fVar16;
        auVar29[8] = SUB41(fVar8,0);
        auVar29[9] = uVar20;
        auVar29[10] = uVar21;
        auVar29[0xb] = uVar22;
        auVar29[0xc] = SUB41(fVar15,0);
        auVar29[0xd] = uVar23;
        auVar29[0xe] = uVar24;
        auVar29[0xf] = uVar25;
        auVar26 = NEON_ext(auVar26,auVar29,8,1);
        fVar16 = auVar26._0_4_ + fVar16;
        fVar8 = auVar26._4_4_ + 0.0;
        fVar15 = fVar16 + fVar8;
        fVar16 = fVar16 + fVar8;
        uVar20 = SUB41(fVar16,0);
        uVar21 = (undefined1)((uint)fVar16 >> 8);
        uVar22 = (undefined1)((uint)fVar16 >> 0x10);
        uVar23 = (undefined1)((uint)fVar16 >> 0x18);
        auVar5[4] = uVar20;
        auVar5._0_4_ = fVar15;
        auVar5[5] = uVar21;
        auVar5[6] = uVar22;
        auVar5[7] = uVar23;
        auVar5[8] = SUB41(fVar15,0);
        auVar5[9] = (char)((uint)fVar15 >> 8);
        auVar5[10] = (char)((uint)fVar15 >> 0x10);
        auVar5[0xb] = (char)((uint)fVar15 >> 0x18);
        auVar5[0xc] = uVar20;
        auVar5[0xd] = uVar21;
        auVar5[0xe] = uVar22;
        auVar5[0xf] = uVar23;
        auVar26 = NEON_frsqrte(auVar5,4);
        auVar28._0_4_ = auVar26._0_4_ * fVar15;
        auVar28._4_4_ = auVar26._4_4_ * fVar16;
        auVar28._8_4_ = auVar26._8_4_ * fVar15;
        uVar6 = (undefined2)(CONCAT15(uVar21,CONCAT14(uVar20,fVar15)) >> 0x20);
        auVar28._12_4_ = auVar26._12_4_ * (float)CONCAT13(uVar23,CONCAT12(uVar22,uVar6));
        auVar29 = NEON_frsqrts(auVar26,auVar28,4);
        auVar27._0_4_ = auVar26._0_4_ * auVar29._0_4_;
        auVar27._4_4_ = auVar26._4_4_ * auVar29._4_4_;
        auVar27._8_4_ = auVar26._8_4_ * auVar29._8_4_;
        auVar27._12_4_ = auVar26._12_4_ * auVar29._12_4_;
        auVar30._0_4_ = fVar15 * auVar27._0_4_;
        auVar30._4_4_ = fVar16 * auVar27._4_4_;
        auVar30._8_4_ = fVar15 * auVar27._8_4_;
        auVar30._12_4_ = (float)CONCAT13(uVar23,CONCAT12(uVar22,uVar6)) * auVar27._12_4_;
        iVar2 = -(uint)(fVar15 == 0.0);
        iVar7 = -(uint)(fVar16 == 0.0);
        iVar9 = -(uint)(fVar15 == 0.0);
        iVar10 = -(uint)((float)CONCAT13(uVar23,CONCAT12(uVar22,uVar6)) == 0.0);
        auVar26 = NEON_frsqrts(auVar27,auVar30,4);
        fVar17 = fVar17 * auVar27._0_4_ * auVar26._0_4_;
        fVar16 = auVar27._4_4_ * auVar26._4_4_ * 0.0;
        fVar18 = fVar18 * auVar27._8_4_ * auVar26._8_4_;
        fVar19 = fVar19 * auVar27._12_4_ * auVar26._12_4_;
        local_60._0_8_ =
             CONCAT17((byte)((uint)fVar16 >> 0x18) & ~(byte)((uint)iVar7 >> 0x18),
                      CONCAT16((byte)((uint)fVar16 >> 0x10) & ~(byte)((uint)iVar7 >> 0x10),
                               CONCAT15((byte)((uint)fVar16 >> 8) & ~(byte)((uint)iVar7 >> 8),
                                        CONCAT14(SUB41(fVar16,0) & ~(byte)iVar7,
                                                 CONCAT13((byte)((uint)fVar17 >> 0x18) &
                                                          ~(byte)((uint)iVar2 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar17 >> 0x10) &
                                                                   ~(byte)((uint)iVar2 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar17 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar2 >> 8),SUB41(fVar17,0) & ~(byte)iVar2)))))));
        local_60._8_8_ =
             CONCAT17((byte)((uint)fVar19 >> 0x18) & ~(byte)((uint)iVar10 >> 0x18),
                      CONCAT16((byte)((uint)fVar19 >> 0x10) & ~(byte)((uint)iVar10 >> 0x10),
                               CONCAT15((byte)((uint)fVar19 >> 8) & ~(byte)((uint)iVar10 >> 8),
                                        CONCAT14(SUB41(fVar19,0) & ~(byte)iVar10,
                                                 CONCAT13((byte)((uint)fVar18 >> 0x18) &
                                                          ~(byte)((uint)iVar9 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar18 >> 0x10) &
                                                                   ~(byte)((uint)iVar9 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar18 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar9 >> 8),SUB41(fVar18,0) & ~(byte)iVar9)))))));
        (**(code **)(*local_40 + 0x150))(local_40,local_60);
        *(undefined1 *)(param_1 + 0x18c) = 1;
      }
      uVar12 = FUN_00cda0c4(param_1 + 0xa0);
      if ((uVar12 & 1) == 0) {
        local_60 = FUN_01782528(param_1,*(undefined4 *)(param_1 + 0x188));
        FUN_0181bb88(uVar11,local_60);
        *(undefined1 *)(param_1 + 0x171) = 0;
        *(undefined1 *)(param_1 + 0x18c) = 0;
        (**(code **)(*local_48 + 0x170))(local_48,0);
        uVar14 = 1;
        goto joined_r0x01782d28;
      }
    }
    uVar14 = 0;
  }
joined_r0x01782d28:
  if (local_48 != (long *)0x0) {
    lVar13 = local_48[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_48 + 0x20))();
    }
  }
  if ((long *)uVar11 != (long *)0x0) {
    lVar13 = *(long *)(uVar11 + 0x58);
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*(long *)uVar11 + 0x20))(uVar11);
    }
  }
  if (local_40 != (long *)0x0) {
    lVar13 = local_40[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_40 + 0x20))();
    }
  }
  if (local_38 != (long *)0x0) {
    lVar13 = local_38[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
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
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return uVar14;
}


