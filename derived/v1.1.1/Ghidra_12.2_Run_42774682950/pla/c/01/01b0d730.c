/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b0d730; name: FUN_01b0d730
 */


void FUN_01b0d730(undefined1 param_1 [16],float param_2,long *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined2 uVar11;
  float fVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar24;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 uVar25;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 uVar26;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 uVar27;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 uVar28;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 uVar29;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 uVar30;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 uVar31;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  undefined1 uVar32;
  undefined1 extraout_var_27;
  undefined1 extraout_var_28;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  float fStack_6c;
  float fStack_64;
  undefined8 *local_60;
  undefined8 uStack_58;
  float local_50;
  long *local_38;
  undefined8 local_28;
  
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  fVar37 = param_1._8_4_;
  fVar33 = param_1._0_4_;
  FUN_01a2bf84(&local_60,param_3 + 0xb9);
  if (local_60 == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_009cf990(&local_38);
    puVar4 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60 + 1);
      do {
        iVar17 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar17 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar17 = __cxa_guard_acquire(PTR_DAT_04379498), iVar17 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar20 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar20;
        local_28 = *puVar4;
        FUN_02a44274(lVar20 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 != (long *)0x0) {
    fVar23 = fVar33 * fVar33;
    fVar36 = param_1._4_4_;
    fVar12 = fVar36 * fVar36;
    uVar24 = (undefined1)((uint)fVar12 >> 8);
    uVar25 = (undefined1)((uint)fVar12 >> 0x10);
    uVar26 = (undefined1)((uint)fVar12 >> 0x18);
    fVar22 = fVar37 * fVar37;
    uVar27 = (undefined1)((uint)fVar22 >> 8);
    uVar28 = (undefined1)((uint)fVar22 >> 0x10);
    uVar29 = (undefined1)((uint)fVar22 >> 0x18);
    fVar38 = param_1._12_4_;
    fVar15 = fVar38 * fVar38;
    uVar30 = (undefined1)((uint)fVar15 >> 8);
    uVar31 = (undefined1)((uint)fVar15 >> 0x10);
    uVar32 = (undefined1)((uint)fVar15 >> 0x18);
    auVar34[4] = SUB41(fVar12,0);
    auVar34._0_4_ = fVar23;
    auVar34[5] = uVar24;
    auVar34[6] = uVar25;
    auVar34[7] = uVar26;
    auVar34[8] = SUB41(fVar22,0);
    auVar34[9] = uVar27;
    auVar34[10] = uVar28;
    auVar34[0xb] = uVar29;
    auVar34[0xc] = SUB41(fVar15,0);
    auVar34[0xd] = uVar30;
    auVar34[0xe] = uVar31;
    auVar34[0xf] = uVar32;
    auVar40[4] = SUB41(fVar12,0);
    auVar40._0_4_ = fVar23;
    auVar40[5] = uVar24;
    auVar40[6] = uVar25;
    auVar40[7] = uVar26;
    auVar40[8] = SUB41(fVar22,0);
    auVar40[9] = uVar27;
    auVar40[10] = uVar28;
    auVar40[0xb] = uVar29;
    auVar40[0xc] = SUB41(fVar15,0);
    auVar40[0xd] = uVar30;
    auVar40[0xe] = uVar31;
    auVar40[0xf] = uVar32;
    auVar34 = NEON_ext(auVar34,auVar40,8,1);
    fVar23 = auVar34._0_4_ + fVar23;
    fVar12 = auVar34._4_4_ + fVar12;
    fVar22 = fVar23 + fVar12;
    fVar23 = fVar23 + fVar12;
    uVar24 = SUB41(fVar23,0);
    uVar25 = (undefined1)((uint)fVar23 >> 8);
    uVar26 = (undefined1)((uint)fVar23 >> 0x10);
    uVar27 = (undefined1)((uint)fVar23 >> 0x18);
    if (fVar22 == 0.0) {
      FUN_01bedb9c(0,ZEXT816(0));
    }
    else {
      auVar5[4] = uVar24;
      auVar5._0_4_ = fVar22;
      auVar5[5] = uVar25;
      auVar5[6] = uVar26;
      auVar5[7] = uVar27;
      auVar5[8] = SUB41(fVar22,0);
      auVar5[9] = (char)((uint)fVar22 >> 8);
      auVar5[10] = (char)((uint)fVar22 >> 0x10);
      auVar5[0xb] = (char)((uint)fVar22 >> 0x18);
      auVar5[0xc] = uVar24;
      auVar5[0xd] = uVar25;
      auVar5[0xe] = uVar26;
      auVar5[0xf] = uVar27;
      auVar34 = NEON_frsqrte(auVar5,4);
      auVar39._0_4_ = auVar34._0_4_ * fVar22;
      auVar39._4_4_ = auVar34._4_4_ * fVar23;
      auVar39._8_4_ = auVar34._8_4_ * fVar22;
      uVar11 = (undefined2)(CONCAT15(uVar25,CONCAT14(uVar24,fVar22)) >> 0x20);
      auVar39._12_4_ = auVar34._12_4_ * (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar11));
      auVar40 = NEON_frsqrts(auVar34,auVar39,4);
      auVar35._0_4_ = auVar34._0_4_ * auVar40._0_4_;
      auVar35._4_4_ = auVar34._4_4_ * auVar40._4_4_;
      auVar35._8_4_ = auVar34._8_4_ * auVar40._8_4_;
      auVar35._12_4_ = auVar34._12_4_ * auVar40._12_4_;
      auVar41._0_4_ = fVar22 * auVar35._0_4_;
      auVar41._4_4_ = fVar23 * auVar35._4_4_;
      auVar41._8_4_ = fVar22 * auVar35._8_4_;
      auVar41._12_4_ = (float)CONCAT13(uVar27,CONCAT12(uVar26,uVar11)) * auVar35._12_4_;
      iVar17 = -(uint)(fVar22 == 0.0);
      iVar13 = -(uint)(fVar23 == 0.0);
      iVar14 = -(uint)(fVar22 == 0.0);
      iVar16 = -(uint)((float)CONCAT13(uVar27,CONCAT12(uVar26,uVar11)) == 0.0);
      auVar34 = NEON_frsqrts(auVar35,auVar41,4);
      fVar33 = fVar33 * auVar35._0_4_ * auVar34._0_4_;
      fVar36 = fVar36 * auVar35._4_4_ * auVar34._4_4_;
      fVar37 = fVar37 * auVar35._8_4_ * auVar34._8_4_;
      fVar38 = fVar38 * auVar35._12_4_ * auVar34._12_4_;
      fVar37 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                               CONCAT12((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar37 >> 8) &
                                                  ~(byte)((uint)iVar14 >> 8),
                                                  SUB41(fVar37,0) & ~(byte)iVar14)));
      uVar10 = CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                        CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar16 >> 0x10),
                                 CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar16 >> 8),
                                          CONCAT14(SUB41(fVar38,0) & ~(byte)iVar16,fVar37))));
      fVar33 = (float)CONCAT13((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                               CONCAT12((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar33 >> 8) &
                                                  ~(byte)((uint)iVar17 >> 8),
                                                  SUB41(fVar33,0) & ~(byte)iVar17)));
      puVar4 = (undefined8 *)
               CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar13 >> 0x18),
                        CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar13 >> 0x10),
                                 CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar13 >> 8),
                                          CONCAT14(SUB41(fVar36,0) & ~(byte)iVar13,fVar33))));
      FUN_01a831dc(param_3);
      fStack_6c = (float)((ulong)puVar4 >> 0x20);
      fStack_64 = (float)((ulong)uVar10 >> 0x20);
      fVar23 = fVar33 * (float)CONCAT13(extraout_var_03,
                                        CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))
                                       );
      fVar12 = fStack_6c *
               (float)CONCAT13(extraout_var_11,
                               CONCAT12(extraout_var_09,CONCAT11(extraout_var_07,extraout_var_05)));
      uVar24 = (undefined1)((uint)fVar12 >> 8);
      uVar25 = (undefined1)((uint)fVar12 >> 0x10);
      uVar26 = (undefined1)((uint)fVar12 >> 0x18);
      fVar22 = fVar37 * (float)CONCAT13(extraout_var_19,
                                        CONCAT12(extraout_var_17,
                                                 CONCAT11(extraout_var_15,extraout_var_13)));
      uVar27 = (undefined1)((uint)fVar22 >> 8);
      uVar28 = (undefined1)((uint)fVar22 >> 0x10);
      uVar29 = (undefined1)((uint)fVar22 >> 0x18);
      fVar15 = fStack_64 *
               (float)CONCAT13(extraout_var_27,
                               CONCAT12(extraout_var_25,CONCAT11(extraout_var_23,extraout_var_21)));
      uVar30 = (undefined1)((uint)fVar15 >> 8);
      uVar31 = (undefined1)((uint)fVar15 >> 0x10);
      uVar32 = (undefined1)((uint)fVar15 >> 0x18);
      auVar6[4] = SUB41(fVar12,0);
      auVar6._0_4_ = fVar23;
      auVar6[5] = uVar24;
      auVar6[6] = uVar25;
      auVar6[7] = uVar26;
      auVar6[8] = SUB41(fVar22,0);
      auVar6[9] = uVar27;
      auVar6[10] = uVar28;
      auVar6[0xb] = uVar29;
      auVar6[0xc] = SUB41(fVar15,0);
      auVar6[0xd] = uVar30;
      auVar6[0xe] = uVar31;
      auVar6[0xf] = uVar32;
      auVar7[4] = SUB41(fVar12,0);
      auVar7._0_4_ = fVar23;
      auVar7[5] = uVar24;
      auVar7[6] = uVar25;
      auVar7[7] = uVar26;
      auVar7[8] = SUB41(fVar22,0);
      auVar7[9] = uVar27;
      auVar7[10] = uVar28;
      auVar7[0xb] = uVar29;
      auVar7[0xc] = SUB41(fVar15,0);
      auVar7[0xd] = uVar30;
      auVar7[0xe] = uVar31;
      auVar7[0xf] = uVar32;
      auVar34 = NEON_ext(auVar6,auVar7,8,1);
      FUN_01a833d4(param_3);
      fVar33 = fVar33 * (float)CONCAT13(extraout_var_04,
                                        CONCAT12(extraout_var_02,
                                                 CONCAT11(extraout_var_00,extraout_b0_00)));
      fStack_6c = fStack_6c *
                  (float)CONCAT13(extraout_var_12,
                                  CONCAT12(extraout_var_10,CONCAT11(extraout_var_08,extraout_var_06)
                                          ));
      uVar24 = (undefined1)((uint)fStack_6c >> 8);
      uVar25 = (undefined1)((uint)fStack_6c >> 0x10);
      uVar26 = (undefined1)((uint)fStack_6c >> 0x18);
      fVar37 = fVar37 * (float)CONCAT13(extraout_var_20,
                                        CONCAT12(extraout_var_18,
                                                 CONCAT11(extraout_var_16,extraout_var_14)));
      uVar27 = (undefined1)((uint)fVar37 >> 8);
      uVar28 = (undefined1)((uint)fVar37 >> 0x10);
      uVar29 = (undefined1)((uint)fVar37 >> 0x18);
      fStack_64 = fStack_64 *
                  (float)CONCAT13(extraout_var_28,
                                  CONCAT12(extraout_var_26,CONCAT11(extraout_var_24,extraout_var_22)
                                          ));
      uVar30 = (undefined1)((uint)fStack_64 >> 8);
      uVar31 = (undefined1)((uint)fStack_64 >> 0x10);
      uVar32 = (undefined1)((uint)fStack_64 >> 0x18);
      auVar8[4] = SUB41(fStack_6c,0);
      auVar8._0_4_ = fVar33;
      auVar8[5] = uVar24;
      auVar8[6] = uVar25;
      auVar8[7] = uVar26;
      auVar8[8] = SUB41(fVar37,0);
      auVar8[9] = uVar27;
      auVar8[10] = uVar28;
      auVar8[0xb] = uVar29;
      auVar8[0xc] = SUB41(fStack_64,0);
      auVar8[0xd] = uVar30;
      auVar8[0xe] = uVar31;
      auVar8[0xf] = uVar32;
      auVar9[4] = SUB41(fStack_6c,0);
      auVar9._0_4_ = fVar33;
      auVar9[5] = uVar24;
      auVar9[6] = uVar25;
      auVar9[7] = uVar26;
      auVar9[8] = SUB41(fVar37,0);
      auVar9[9] = uVar27;
      auVar9[10] = uVar28;
      auVar9[0xb] = uVar29;
      auVar9[0xc] = SUB41(fStack_64,0);
      auVar9[0xd] = uVar30;
      auVar9[0xe] = uVar31;
      auVar9[0xf] = uVar32;
      NEON_ext(auVar8,auVar9,8,1);
      FUN_01bedb9c(SUB41(param_2 * (auVar34._0_4_ + fVar23 + auVar34._4_4_ + fVar12),0),local_38);
      local_60 = puVar4;
      uStack_58 = uVar10;
      local_50 = param_2;
      FUN_0180fadc(param_3 + 0x12a,&local_60);
      lVar20 = param_3[0xb8];
      if (param_2 < *(float *)(lVar20 + 0x70)) {
        uVar19 = 0;
      }
      else if (param_2 < *(float *)(lVar20 + 0x74)) {
        uVar19 = 1;
      }
      else {
        uVar19 = 2;
        if (*(float *)(lVar20 + 0x78) <= param_2) {
          uVar19 = 3;
        }
      }
      uVar18 = (**(code **)(*param_3 + 0x238))(param_3);
      uVar21 = uVar19;
      if (((uVar18 & 1) != 0) &&
         (uVar21 = *(uint *)((long)param_3 + 0x9d4), uVar19 <= *(uint *)((long)param_3 + 0x9d4))) {
        uVar21 = uVar19;
      }
      *(uint *)(param_3[0xb8] + 0x68) = uVar21;
      (**(code **)(*param_3 + 0x2d0))(SUB41(param_2,0),param_3);
      uVar18 = FUN_01a5785c(local_38);
      if (((uVar18 & 1) != 0) &&
         (uVar18 = (**(code **)(*param_3 + 0x1b0))(param_3), (uVar18 & 1) == 0)) {
        *(undefined1 *)((long)param_3 + 0x9c4) = 1;
      }
    }
    if (local_38 != (long *)0x0) {
      lVar20 = local_38[0xb];
      piVar1 = (int *)(lVar20 + 0xc);
      do {
        iVar17 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar17 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar17 + -1 == 0) {
        *(undefined8 *)(lVar20 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
  }
  return;
}


