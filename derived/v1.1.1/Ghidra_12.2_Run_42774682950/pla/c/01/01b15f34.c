/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b15f34; name: FUN_01b15f34
 */


/* WARNING: Removing unreachable block (ram,0x01b161f4) */

void FUN_01b15f34(long param_1,float *param_2,ulong param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [12];
  undefined8 *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  int iVar27;
  int iVar28;
  ulong uVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float extraout_s0;
  float extraout_s0_00;
  undefined1 auVar38 [12];
  float fVar40;
  float extraout_var;
  float extraout_var_00;
  float fVar41;
  float extraout_var_01;
  float extraout_var_02;
  float fVar42;
  undefined1 auVar39 [16];
  float extraout_var_03;
  float fVar43;
  float extraout_var_04;
  float fVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  FUN_01a2bf84(&local_78,param_1 + 0x5c8);
  puVar22 = local_78;
  puVar26 = PTR_DAT_0437a3d0;
  puVar25 = PTR_DAT_0437a3c8;
  puVar24 = PTR_DAT_043795e0;
  puVar23 = PTR_DAT_043794d0;
  if (local_78 != (undefined8 *)0x0) {
    if (*(int *)((long)local_78 + 0xc) != 0) {
      piVar1 = (int *)((long)local_78 + 0xc);
      iVar28 = *(int *)((long)local_78 + 0xc);
      do {
        plVar32 = (long *)puVar22[2];
        if (((*puVar25 & 1) == 0) && (iVar27 = __cxa_guard_acquire(puVar25), iVar27 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar27 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar27 != 0)) {
            if (((*puVar23 & 1) == 0) && (iVar27 = __cxa_guard_acquire(puVar23), iVar27 != 0)) {
              uVar30 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar30;
              __cxa_guard_release(puVar23);
            }
            *(undefined **)puVar24 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar26 = puVar24;
          __cxa_guard_release(puVar25);
        }
        while( true ) {
          if (plVar32 == (long *)0x0) goto LAB_01b16264;
          if (plVar32 == (long *)puVar26) break;
          plVar32 = (long *)*plVar32;
        }
        iVar27 = *piVar1;
        if (iVar27 == iVar28) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar28 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar31 = puVar22[3];
            plVar32 = (long *)0x0;
            puVar22 = local_78;
            if (lVar31 != 0) {
              plVar32 = (long *)(lVar31 + -0x50);
            }
            goto joined_r0x01b1602c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar28 = iVar27;
      } while (iVar27 != 0);
    }
LAB_01b16264:
    plVar32 = (long *)0x0;
    puVar22 = local_78;
joined_r0x01b1602c:
    local_78 = puVar22;
    if (puVar22 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar22 + 1);
      do {
        iVar28 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar28 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 + -1 == 0) {
        puVar22[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar28 = __cxa_guard_acquire(PTR_DAT_04379498), iVar28 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar31 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar31;
        local_68 = *puVar22;
        FUN_02a44274(lVar31 + 0xd8,&local_68);
      }
    }
    if (plVar32 != (long *)0x0) {
      if (((param_3 & 1) == 0) && (uVar29 = FUN_01a57b48(plVar32), (uVar29 & 1) != 0)) {
        FUN_01a83548(param_1);
        if (*(char *)(param_1 + 0xa30) != '\0') {
          *(undefined1 *)(param_1 + 0xa30) = 0;
        }
        fVar36 = *param_2;
        fVar40 = param_2[1];
        fVar41 = param_2[2];
        fVar42 = param_2[3];
        fVar35 = fVar36 * fVar36;
        fVar37 = fVar40 * fVar40;
        uVar45 = (undefined1)((uint)fVar37 >> 8);
        uVar46 = (undefined1)((uint)fVar37 >> 0x10);
        uVar47 = (undefined1)((uint)fVar37 >> 0x18);
        fVar33 = fVar41 * fVar41;
        uVar48 = (undefined1)((uint)fVar33 >> 8);
        uVar49 = (undefined1)((uint)fVar33 >> 0x10);
        uVar50 = (undefined1)((uint)fVar33 >> 0x18);
        fVar34 = fVar42 * fVar42;
        uVar51 = (undefined1)((uint)fVar34 >> 8);
        uVar52 = (undefined1)((uint)fVar34 >> 0x10);
        uVar53 = (undefined1)((uint)fVar34 >> 0x18);
        auVar54[4] = SUB41(fVar37,0);
        auVar54._0_4_ = fVar35;
        auVar54[5] = uVar45;
        auVar54[6] = uVar46;
        auVar54[7] = uVar47;
        auVar54[8] = SUB41(fVar33,0);
        auVar54[9] = uVar48;
        auVar54[10] = uVar49;
        auVar54[0xb] = uVar50;
        auVar54[0xc] = SUB41(fVar34,0);
        auVar54[0xd] = uVar51;
        auVar54[0xe] = uVar52;
        auVar54[0xf] = uVar53;
        auVar60[4] = SUB41(fVar37,0);
        auVar60._0_4_ = fVar35;
        auVar60[5] = uVar45;
        auVar60[6] = uVar46;
        auVar60[7] = uVar47;
        auVar60[8] = SUB41(fVar33,0);
        auVar60[9] = uVar48;
        auVar60[10] = uVar49;
        auVar60[0xb] = uVar50;
        auVar60[0xc] = SUB41(fVar34,0);
        auVar60[0xd] = uVar51;
        auVar60[0xe] = uVar52;
        auVar60[0xf] = uVar53;
        auVar54 = NEON_ext(auVar54,auVar60,8,1);
        fVar35 = auVar54._0_4_ + fVar35;
        fVar37 = auVar54._4_4_ + fVar37;
        fVar33 = fVar35 + fVar37;
        fVar35 = fVar35 + fVar37;
        uVar45 = SUB41(fVar35,0);
        uVar46 = (undefined1)((uint)fVar35 >> 8);
        uVar47 = (undefined1)((uint)fVar35 >> 0x10);
        uVar48 = (undefined1)((uint)fVar35 >> 0x18);
        auVar4[4] = uVar45;
        auVar4._0_4_ = fVar33;
        auVar4[5] = uVar46;
        auVar4[6] = uVar47;
        auVar4[7] = uVar48;
        auVar4[8] = SUB41(fVar33,0);
        auVar4[9] = (char)((uint)fVar33 >> 8);
        auVar4[10] = (char)((uint)fVar33 >> 0x10);
        auVar4[0xb] = (char)((uint)fVar33 >> 0x18);
        auVar4[0xc] = uVar45;
        auVar4[0xd] = uVar46;
        auVar4[0xe] = uVar47;
        auVar4[0xf] = uVar48;
        auVar54 = NEON_frsqrte(auVar4,4);
        auVar59._0_4_ = auVar54._0_4_ * fVar33;
        auVar59._4_4_ = auVar54._4_4_ * fVar35;
        auVar59._8_4_ = auVar54._8_4_ * fVar33;
        uVar13 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar33)) >> 0x20);
        auVar59._12_4_ = auVar54._12_4_ * (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13));
        auVar60 = NEON_frsqrts(auVar54,auVar59,4);
        auVar55._0_4_ = auVar54._0_4_ * auVar60._0_4_;
        auVar55._4_4_ = auVar54._4_4_ * auVar60._4_4_;
        auVar55._8_4_ = auVar54._8_4_ * auVar60._8_4_;
        auVar55._12_4_ = auVar54._12_4_ * auVar60._12_4_;
        auVar61._0_4_ = fVar33 * auVar55._0_4_;
        auVar61._4_4_ = fVar35 * auVar55._4_4_;
        auVar61._8_4_ = fVar33 * auVar55._8_4_;
        auVar61._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar55._12_4_;
        iVar28 = -(uint)(fVar33 == 0.0);
        iVar27 = -(uint)(fVar35 == 0.0);
        iVar14 = -(uint)(fVar33 == 0.0);
        iVar17 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) == 0.0);
        auVar54 = NEON_frsqrts(auVar55,auVar61,4);
        fVar36 = fVar36 * auVar55._0_4_ * auVar54._0_4_;
        fVar40 = fVar40 * auVar55._4_4_ * auVar54._4_4_;
        fVar41 = fVar41 * auVar55._8_4_ * auVar54._8_4_;
        fVar42 = fVar42 * auVar55._12_4_ * auVar54._12_4_;
        fVar37 = (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                 CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                          ~(byte)((uint)iVar28 >> 0x10),
                                          CONCAT11((byte)((uint)fVar36 >> 8) &
                                                   ~(byte)((uint)iVar28 >> 8),
                                                   SUB41(fVar36,0) & ~(byte)iVar28)));
        auVar38._0_8_ =
             CONCAT17((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar27 >> 0x18),
                      CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar27 >> 0x10),
                               CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar27 >> 8),
                                        CONCAT14(SUB41(fVar40,0) & ~(byte)iVar27,fVar37))));
        auVar38[8] = SUB41(fVar41,0) & ~(byte)iVar14;
        auVar38[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar14 >> 8);
        auVar38[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10);
        auVar38[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18);
        auVar39[0xc] = SUB41(fVar42,0) & ~(byte)iVar17;
        auVar39._0_12_ = auVar38;
        auVar39[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar17 >> 8);
        auVar39[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10);
        auVar39[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18);
        FUN_01a831dc(param_1);
        fVar35 = extraout_s0 * extraout_s0;
        fVar33 = extraout_var * extraout_var;
        uVar45 = (undefined1)((uint)fVar33 >> 8);
        uVar46 = (undefined1)((uint)fVar33 >> 0x10);
        uVar47 = (undefined1)((uint)fVar33 >> 0x18);
        fVar34 = extraout_var_01 * extraout_var_01;
        uVar48 = (undefined1)((uint)fVar34 >> 8);
        uVar49 = (undefined1)((uint)fVar34 >> 0x10);
        uVar50 = (undefined1)((uint)fVar34 >> 0x18);
        fVar36 = extraout_var_03 * extraout_var_03;
        uVar51 = (undefined1)((uint)fVar36 >> 8);
        uVar52 = (undefined1)((uint)fVar36 >> 0x10);
        uVar53 = (undefined1)((uint)fVar36 >> 0x18);
        auVar5[4] = SUB41(fVar33,0);
        auVar5._0_4_ = fVar35;
        auVar5[5] = uVar45;
        auVar5[6] = uVar46;
        auVar5[7] = uVar47;
        auVar5[8] = SUB41(fVar34,0);
        auVar5[9] = uVar48;
        auVar5[10] = uVar49;
        auVar5[0xb] = uVar50;
        auVar5[0xc] = SUB41(fVar36,0);
        auVar5[0xd] = uVar51;
        auVar5[0xe] = uVar52;
        auVar5[0xf] = uVar53;
        auVar6[4] = SUB41(fVar33,0);
        auVar6._0_4_ = fVar35;
        auVar6[5] = uVar45;
        auVar6[6] = uVar46;
        auVar6[7] = uVar47;
        auVar6[8] = SUB41(fVar34,0);
        auVar6[9] = uVar48;
        auVar6[10] = uVar49;
        auVar6[0xb] = uVar50;
        auVar6[0xc] = SUB41(fVar36,0);
        auVar6[0xd] = uVar51;
        auVar6[0xe] = uVar52;
        auVar6[0xf] = uVar53;
        auVar54 = NEON_ext(auVar5,auVar6,8,1);
        fVar35 = auVar54._0_4_ + fVar35;
        fVar33 = auVar54._4_4_ + fVar33;
        fVar34 = fVar35 + fVar33;
        fVar35 = fVar35 + fVar33;
        uVar45 = SUB41(fVar35,0);
        uVar46 = (undefined1)((uint)fVar35 >> 8);
        uVar47 = (undefined1)((uint)fVar35 >> 0x10);
        uVar48 = (undefined1)((uint)fVar35 >> 0x18);
        auVar7[4] = uVar45;
        auVar7._0_4_ = fVar34;
        auVar7[5] = uVar46;
        auVar7[6] = uVar47;
        auVar7[7] = uVar48;
        auVar7[8] = SUB41(fVar34,0);
        auVar7[9] = (char)((uint)fVar34 >> 8);
        auVar7[10] = (char)((uint)fVar34 >> 0x10);
        auVar7[0xb] = (char)((uint)fVar34 >> 0x18);
        auVar7[0xc] = uVar45;
        auVar7[0xd] = uVar46;
        auVar7[0xe] = uVar47;
        auVar7[0xf] = uVar48;
        auVar54 = NEON_frsqrte(auVar7,4);
        auVar62._0_4_ = auVar54._0_4_ * fVar34;
        auVar62._4_4_ = auVar54._4_4_ * fVar35;
        auVar62._8_4_ = auVar54._8_4_ * fVar34;
        uVar13 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar34)) >> 0x20);
        auVar62._12_4_ = auVar54._12_4_ * (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13));
        auVar60 = NEON_frsqrts(auVar54,auVar62,4);
        auVar56._0_4_ = auVar54._0_4_ * auVar60._0_4_;
        auVar56._4_4_ = auVar54._4_4_ * auVar60._4_4_;
        auVar56._8_4_ = auVar54._8_4_ * auVar60._8_4_;
        auVar56._12_4_ = auVar54._12_4_ * auVar60._12_4_;
        auVar63._0_4_ = fVar34 * auVar56._0_4_;
        auVar63._4_4_ = fVar35 * auVar56._4_4_;
        auVar63._8_4_ = fVar34 * auVar56._8_4_;
        auVar63._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar56._12_4_;
        iVar28 = -(uint)(fVar34 == 0.0);
        iVar14 = -(uint)(fVar35 == 0.0);
        iVar15 = -(uint)(fVar34 == 0.0);
        iVar18 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) == 0.0);
        auVar54 = NEON_frsqrts(auVar56,auVar63,4);
        fVar40 = extraout_s0 * auVar56._0_4_ * auVar54._0_4_;
        fVar41 = extraout_var * auVar56._4_4_ * auVar54._4_4_;
        fVar42 = extraout_var_01 * auVar56._8_4_ * auVar54._8_4_;
        fVar43 = extraout_var_03 * auVar56._12_4_ * auVar54._12_4_;
        FUN_01a833d4(param_1);
        fVar35 = extraout_s0_00 * extraout_s0_00;
        fVar33 = extraout_var_00 * extraout_var_00;
        uVar45 = (undefined1)((uint)fVar33 >> 8);
        uVar46 = (undefined1)((uint)fVar33 >> 0x10);
        uVar47 = (undefined1)((uint)fVar33 >> 0x18);
        fVar34 = extraout_var_02 * extraout_var_02;
        uVar48 = (undefined1)((uint)fVar34 >> 8);
        uVar49 = (undefined1)((uint)fVar34 >> 0x10);
        uVar50 = (undefined1)((uint)fVar34 >> 0x18);
        fVar36 = extraout_var_04 * extraout_var_04;
        uVar51 = (undefined1)((uint)fVar36 >> 8);
        uVar52 = (undefined1)((uint)fVar36 >> 0x10);
        uVar53 = (undefined1)((uint)fVar36 >> 0x18);
        auVar8[4] = SUB41(fVar33,0);
        auVar8._0_4_ = fVar35;
        auVar8[5] = uVar45;
        auVar8[6] = uVar46;
        auVar8[7] = uVar47;
        auVar8[8] = SUB41(fVar34,0);
        auVar8[9] = uVar48;
        auVar8[10] = uVar49;
        auVar8[0xb] = uVar50;
        auVar8[0xc] = SUB41(fVar36,0);
        auVar8[0xd] = uVar51;
        auVar8[0xe] = uVar52;
        auVar8[0xf] = uVar53;
        auVar9[4] = SUB41(fVar33,0);
        auVar9._0_4_ = fVar35;
        auVar9[5] = uVar45;
        auVar9[6] = uVar46;
        auVar9[7] = uVar47;
        auVar9[8] = SUB41(fVar34,0);
        auVar9[9] = uVar48;
        auVar9[10] = uVar49;
        auVar9[0xb] = uVar50;
        auVar9[0xc] = SUB41(fVar36,0);
        auVar9[0xd] = uVar51;
        auVar9[0xe] = uVar52;
        auVar9[0xf] = uVar53;
        auVar54 = NEON_ext(auVar8,auVar9,8,1);
        fVar35 = auVar54._0_4_ + fVar35;
        fVar33 = auVar54._4_4_ + fVar33;
        fVar34 = fVar35 + fVar33;
        fVar35 = fVar35 + fVar33;
        uVar45 = SUB41(fVar35,0);
        uVar46 = (undefined1)((uint)fVar35 >> 8);
        uVar47 = (undefined1)((uint)fVar35 >> 0x10);
        uVar48 = (undefined1)((uint)fVar35 >> 0x18);
        auVar10[4] = uVar45;
        auVar10._0_4_ = fVar34;
        auVar10[5] = uVar46;
        auVar10[6] = uVar47;
        auVar10[7] = uVar48;
        auVar10[8] = SUB41(fVar34,0);
        auVar10[9] = (char)((uint)fVar34 >> 8);
        auVar10[10] = (char)((uint)fVar34 >> 0x10);
        auVar10[0xb] = (char)((uint)fVar34 >> 0x18);
        auVar10[0xc] = uVar45;
        auVar10[0xd] = uVar46;
        auVar10[0xe] = uVar47;
        auVar10[0xf] = uVar48;
        auVar54 = NEON_frsqrte(auVar10,4);
        auVar64._0_4_ = auVar54._0_4_ * fVar34;
        auVar64._4_4_ = auVar54._4_4_ * fVar35;
        auVar64._8_4_ = auVar54._8_4_ * fVar34;
        uVar13 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar34)) >> 0x20);
        auVar64._12_4_ = auVar54._12_4_ * (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13));
        auVar60 = NEON_frsqrts(auVar54,auVar64,4);
        auVar57._0_4_ = auVar54._0_4_ * auVar60._0_4_;
        auVar57._4_4_ = auVar54._4_4_ * auVar60._4_4_;
        auVar57._8_4_ = auVar54._8_4_ * auVar60._8_4_;
        auVar57._12_4_ = auVar54._12_4_ * auVar60._12_4_;
        auVar65._0_4_ = fVar34 * auVar57._0_4_;
        auVar65._4_4_ = fVar35 * auVar57._4_4_;
        auVar65._8_4_ = fVar34 * auVar57._8_4_;
        auVar65._12_4_ = (float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) * auVar57._12_4_;
        iVar27 = -(uint)(fVar34 == 0.0);
        iVar17 = -(uint)(fVar35 == 0.0);
        iVar16 = -(uint)(fVar34 == 0.0);
        iVar19 = -(uint)((float)CONCAT13(uVar48,CONCAT12(uVar47,uVar13)) == 0.0);
        auVar54 = NEON_frsqrts(auVar57,auVar65,4);
        fVar33 = extraout_s0_00 * auVar57._0_4_ * auVar54._0_4_;
        fVar34 = extraout_var_00 * auVar57._4_4_ * auVar54._4_4_;
        fVar36 = extraout_var_02 * auVar57._8_4_ * auVar54._8_4_;
        fVar44 = extraout_var_04 * auVar57._12_4_ * auVar54._12_4_;
        fVar35 = (float)CONCAT13((byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                 CONCAT12((byte)((uint)fVar40 >> 0x10) &
                                          ~(byte)((uint)iVar28 >> 0x10),
                                          CONCAT11((byte)((uint)fVar40 >> 8) &
                                                   ~(byte)((uint)iVar28 >> 8),
                                                   SUB41(fVar40,0) & ~(byte)iVar28)));
        uVar30 = CONCAT17((byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar14 >> 0x18),
                          CONCAT16((byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar14 >> 0x10),
                                   CONCAT15((byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar14 >> 8),
                                            CONCAT14(SUB41(fVar41,0) & ~(byte)iVar14,fVar35))));
        auVar21[8] = SUB41(fVar42,0) & ~(byte)iVar15;
        auVar21._0_8_ = uVar30;
        auVar21[9] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar15 >> 8);
        auVar21[10] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar15 >> 0x10);
        auVar21[0xb] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar15 >> 0x18);
        auVar20[0xc] = SUB41(fVar43,0) & ~(byte)iVar18;
        auVar20._0_12_ = auVar21;
        auVar20[0xd] = (byte)((uint)fVar43 >> 8) & ~(byte)((uint)iVar18 >> 8);
        auVar20[0xe] = (byte)((uint)fVar43 >> 0x10) & ~(byte)((uint)iVar18 >> 0x10);
        auVar20[0xf] = (byte)((uint)fVar43 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18);
        fStack_8c = (float)((ulong)auVar38._0_8_ >> 0x20);
        fStack_88 = auVar38._8_4_;
        fStack_84 = auVar39._12_4_;
        auVar58._0_4_ = fVar37 * fVar35;
        auVar58._4_4_ = fStack_8c * (float)((ulong)uVar30 >> 0x20);
        auVar58._8_4_ = fStack_88 * auVar21._8_4_;
        auVar58._12_4_ = fStack_84 * auVar20._12_4_;
        NEON_ext(auVar58,auVar58,8,1);
        FUN_0095d8f0();
        fVar37 = fVar37 * (float)CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                          ~(byte)((uint)iVar27 >> 0x18),
                                          CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                                   ~(byte)((uint)iVar27 >> 0x10),
                                                   CONCAT11((byte)((uint)fVar33 >> 8) &
                                                            ~(byte)((uint)iVar27 >> 8),
                                                            SUB41(fVar33,0) & ~(byte)iVar27)));
        fStack_8c = fStack_8c *
                    (float)CONCAT13((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                                    CONCAT12((byte)((uint)fVar34 >> 0x10) &
                                             ~(byte)((uint)iVar17 >> 0x10),
                                             CONCAT11((byte)((uint)fVar34 >> 8) &
                                                      ~(byte)((uint)iVar17 >> 8),
                                                      SUB41(fVar34,0) & ~(byte)iVar17)));
        uVar45 = (undefined1)((uint)fStack_8c >> 8);
        uVar46 = (undefined1)((uint)fStack_8c >> 0x10);
        uVar47 = (undefined1)((uint)fStack_8c >> 0x18);
        fStack_88 = fStack_88 *
                    (float)CONCAT13((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                    CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                             ~(byte)((uint)iVar16 >> 0x10),
                                             CONCAT11((byte)((uint)fVar36 >> 8) &
                                                      ~(byte)((uint)iVar16 >> 8),
                                                      SUB41(fVar36,0) & ~(byte)iVar16)));
        uVar48 = (undefined1)((uint)fStack_88 >> 8);
        uVar49 = (undefined1)((uint)fStack_88 >> 0x10);
        uVar50 = (undefined1)((uint)fStack_88 >> 0x18);
        fStack_84 = fStack_84 *
                    (float)CONCAT13((byte)((uint)fVar44 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                    CONCAT12((byte)((uint)fVar44 >> 0x10) &
                                             ~(byte)((uint)iVar19 >> 0x10),
                                             CONCAT11((byte)((uint)fVar44 >> 8) &
                                                      ~(byte)((uint)iVar19 >> 8),
                                                      SUB41(fVar44,0) & ~(byte)iVar19)));
        uVar51 = (undefined1)((uint)fStack_84 >> 8);
        uVar52 = (undefined1)((uint)fStack_84 >> 0x10);
        uVar53 = (undefined1)((uint)fStack_84 >> 0x18);
        auVar11[4] = SUB41(fStack_8c,0);
        auVar11._0_4_ = fVar37;
        auVar11[5] = uVar45;
        auVar11[6] = uVar46;
        auVar11[7] = uVar47;
        auVar11[8] = SUB41(fStack_88,0);
        auVar11[9] = uVar48;
        auVar11[10] = uVar49;
        auVar11[0xb] = uVar50;
        auVar11[0xc] = SUB41(fStack_84,0);
        auVar11[0xd] = uVar51;
        auVar11[0xe] = uVar52;
        auVar11[0xf] = uVar53;
        auVar12[4] = SUB41(fStack_8c,0);
        auVar12._0_4_ = fVar37;
        auVar12[5] = uVar45;
        auVar12[6] = uVar46;
        auVar12[7] = uVar47;
        auVar12[8] = SUB41(fStack_88,0);
        auVar12[9] = uVar48;
        auVar12[10] = uVar49;
        auVar12[0xb] = uVar50;
        auVar12[0xc] = SUB41(fStack_84,0);
        auVar12[0xd] = uVar51;
        auVar12[0xe] = uVar52;
        auVar12[0xf] = uVar53;
        NEON_ext(auVar11,auVar12,8,1);
        (**(code **)(*plVar32 + 0x1a0))(plVar32);
      }
      else {
        FUN_01a860fc(param_1,param_2);
      }
      lVar31 = plVar32[0xb];
      piVar1 = (int *)(lVar31 + 0xc);
      do {
        iVar28 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar28 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar28 + -1 == 0) {
        *(undefined8 *)(lVar31 + 0x18) = 0;
        (**(code **)(*plVar32 + 0x20))(plVar32);
      }
    }
  }
  return;
}


