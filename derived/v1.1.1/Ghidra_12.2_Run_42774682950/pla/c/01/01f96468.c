/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f96468; name: FUN_01f96468
 */


/* WARNING: Removing unreachable block (ram,0x01f96838) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01f96468(long param_1,long param_2,ulong param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined2 uVar10;
  int iVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  float fVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  int iVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  int iVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float extraout_s0;
  float extraout_s0_00;
  float fVar34;
  float fVar36;
  float fVar37;
  undefined8 uVar35;
  float fVar38;
  undefined8 extraout_var;
  undefined8 extraout_var_00;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [12];
  float fVar52;
  float fVar53;
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 in_q3 [16];
  undefined1 uVar57;
  float fVar58;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar63;
  float fVar64;
  float fVar70;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fStack_74;
  long *local_68;
  
  puVar24 = PTR_DAT_04379fe0;
  puVar23 = PTR_DAT_04379fd8;
  puVar22 = PTR_DAT_043795e0;
  uVar57 = in_q3[0xf];
  uVar56 = in_q3[0xe];
  uVar55 = in_q3[0xd];
  uVar47 = in_q3[0xc];
  uVar46 = in_q3[0xb];
  uVar45 = in_q3[10];
  uVar44 = in_q3[9];
  uVar43 = in_q3[8];
  uVar42 = in_q3[3];
  uVar41 = in_q3[2];
  uVar40 = in_q3[1];
  uVar39 = in_q3[0];
  if (((*(char *)(param_1 + 0x230) == '\0') && (lVar26 = *(long *)(param_1 + 0x1a0), lVar26 != 0))
     && (*(int *)(lVar26 + 0xc) != 0)) {
    piVar1 = (int *)(lVar26 + 0xc);
    iVar29 = *(int *)(lVar26 + 0xc);
    do {
      plVar28 = *(long **)(lVar26 + 0x10);
      if (((*puVar23 & 1) == 0) && (iVar25 = __cxa_guard_acquire(puVar23), iVar25 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar25 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar25 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar25 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar25 != 0)) {
            uVar35 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar35;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar22 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar24 = puVar22;
        __cxa_guard_release(puVar23);
      }
      while( true ) {
        if (plVar28 == (long *)0x0) {
          return 0;
        }
        if (plVar28 == (long *)puVar24) break;
        plVar28 = (long *)*plVar28;
      }
      iVar25 = *piVar1;
      if (iVar25 == iVar29) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar29 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar26 = *(long *)(lVar26 + 0x18);
          if (lVar26 == 0) {
            return 0;
          }
          plVar28 = (long *)(lVar26 + -0x50);
          FUN_009c69bc(&local_68,plVar28);
          if (local_68 == (long *)0x0) goto LAB_01f967d8;
          (**(code **)(*local_68 + 0x40))();
          fVar53 = (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
          fVar48 = (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
          (**(code **)(*plVar28 + 0x138))(plVar28);
          FUN_01a4bbac(plVar28);
          fVar34 = (float)*(undefined8 *)(param_2 + 0x20) + *(float *)(param_2 + 0x30);
          fVar36 = (float)((ulong)*(undefined8 *)(param_2 + 0x20) >> 0x20) +
                   *(float *)(param_2 + 0x34);
          fVar38 = (float)*(undefined8 *)(param_2 + 0x28) + *(float *)(param_2 + 0x38);
          fStack_74 = (float)(CONCAT17(uVar57,CONCAT16(uVar56,CONCAT15(uVar55,CONCAT14(uVar47,fVar53
                                                                                      )))) >> 0x20);
          fVar37 = (extraout_s0 + extraout_s0_00) - fVar48;
          fVar5 = ((float)extraout_var + (float)extraout_var_00) - fVar53;
          fVar6 = ((float)((ulong)extraout_var >> 0x20) + (float)((ulong)extraout_var_00 >> 0x20)) -
                  fStack_74;
          fVar48 = fVar34 - fVar48;
          fVar53 = fVar38 - fVar53;
          fStack_74 = ((float)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20) +
                      *(float *)(param_2 + 0x3c)) - fStack_74;
          fVar32 = fVar37 * fVar37;
          fVar33 = fVar5 * fVar5;
          uVar39 = (undefined1)((uint)fVar33 >> 8);
          uVar40 = (undefined1)((uint)fVar33 >> 0x10);
          uVar41 = (undefined1)((uint)fVar33 >> 0x18);
          fVar20 = fVar6 * fVar6;
          uVar42 = (undefined1)((uint)fVar20 >> 8);
          uVar43 = (undefined1)((uint)fVar20 >> 0x10);
          uVar44 = (undefined1)((uint)fVar20 >> 0x18);
          auVar13._4_4_ = 0;
          auVar13._0_4_ = fVar32;
          auVar13[8] = SUB41(fVar33,0);
          auVar13[9] = uVar39;
          auVar13[10] = uVar40;
          auVar13[0xb] = uVar41;
          auVar13[0xc] = SUB41(fVar20,0);
          auVar13[0xd] = uVar42;
          auVar13[0xe] = uVar43;
          auVar13[0xf] = uVar44;
          auVar14._4_4_ = 0;
          auVar14._0_4_ = fVar32;
          auVar14[8] = SUB41(fVar33,0);
          auVar14[9] = uVar39;
          auVar14[10] = uVar40;
          auVar14[0xb] = uVar41;
          auVar14[0xc] = SUB41(fVar20,0);
          auVar14[0xd] = uVar42;
          auVar14[0xe] = uVar43;
          auVar14[0xf] = uVar44;
          auVar59 = NEON_ext(auVar13,auVar14,8,1);
          fVar33 = fVar48 * fVar48;
          fVar20 = fVar53 * fVar53;
          uVar39 = (undefined1)((uint)fVar20 >> 8);
          uVar40 = (undefined1)((uint)fVar20 >> 0x10);
          uVar41 = (undefined1)((uint)fVar20 >> 0x18);
          fVar31 = fStack_74 * fStack_74;
          uVar42 = (undefined1)((uint)fVar31 >> 8);
          uVar43 = (undefined1)((uint)fVar31 >> 0x10);
          uVar44 = (undefined1)((uint)fVar31 >> 0x18);
          fVar32 = auVar59._0_4_ + fVar32;
          fVar17 = auVar59._4_4_ + 0.0;
          fVar30 = fVar32 + fVar17;
          fVar32 = fVar32 + fVar17;
          uVar45 = SUB41(fVar32,0);
          uVar46 = (undefined1)((uint)fVar32 >> 8);
          uVar47 = (undefined1)((uint)fVar32 >> 0x10);
          uVar55 = (undefined1)((uint)fVar32 >> 0x18);
          auVar15[4] = uVar45;
          auVar15._0_4_ = fVar30;
          auVar15[5] = uVar46;
          auVar15[6] = uVar47;
          auVar15[7] = uVar55;
          auVar15[8] = SUB41(fVar30,0);
          auVar15[9] = (char)((uint)fVar30 >> 8);
          auVar15[10] = (char)((uint)fVar30 >> 0x10);
          auVar15[0xb] = (char)((uint)fVar30 >> 0x18);
          auVar15[0xc] = uVar45;
          auVar15[0xd] = uVar46;
          auVar15[0xe] = uVar47;
          auVar15[0xf] = uVar55;
          auVar59 = NEON_frsqrte(auVar15,4);
          auVar65._0_4_ = auVar59._0_4_ * fVar30;
          auVar65._4_4_ = auVar59._4_4_ * fVar32;
          auVar65._8_4_ = auVar59._8_4_ * fVar30;
          uVar10 = (undefined2)(CONCAT15(uVar46,CONCAT14(uVar45,fVar30)) >> 0x20);
          auVar65._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar55,CONCAT12(uVar47,uVar10));
          auVar66 = NEON_frsqrts(auVar59,auVar65,4);
          auVar60._0_4_ = auVar59._0_4_ * auVar66._0_4_;
          auVar60._4_4_ = auVar59._4_4_ * auVar66._4_4_;
          auVar60._8_4_ = auVar59._8_4_ * auVar66._8_4_;
          auVar60._12_4_ = auVar59._12_4_ * auVar66._12_4_;
          auVar67._0_4_ = fVar30 * auVar60._0_4_;
          auVar67._4_4_ = fVar32 * auVar60._4_4_;
          auVar67._8_4_ = fVar30 * auVar60._8_4_;
          auVar67._12_4_ = (float)CONCAT13(uVar55,CONCAT12(uVar47,uVar10)) * auVar60._12_4_;
          iVar16 = -(uint)(fVar30 == 0.0);
          iVar18 = -(uint)(fVar32 == 0.0);
          iVar19 = -(uint)(fVar30 == 0.0);
          iVar21 = -(uint)((float)CONCAT13(uVar55,CONCAT12(uVar47,uVar10)) == 0.0);
          auVar59 = NEON_frsqrts(auVar60,auVar67,4);
          fVar37 = fVar37 * auVar60._0_4_ * auVar59._0_4_;
          fVar32 = auVar60._4_4_ * auVar59._4_4_ * 0.0;
          fVar5 = fVar5 * auVar60._8_4_ * auVar59._8_4_;
          fVar6 = fVar6 * auVar60._12_4_ * auVar59._12_4_;
          auVar7._4_4_ = 0;
          auVar7._0_4_ = fVar33;
          auVar7[8] = SUB41(fVar20,0);
          auVar7[9] = uVar39;
          auVar7[10] = uVar40;
          auVar7[0xb] = uVar41;
          auVar7[0xc] = SUB41(fVar31,0);
          auVar7[0xd] = uVar42;
          auVar7[0xe] = uVar43;
          auVar7[0xf] = uVar44;
          auVar8._4_4_ = 0;
          auVar8._0_4_ = fVar33;
          auVar8[8] = SUB41(fVar20,0);
          auVar8[9] = uVar39;
          auVar8[10] = uVar40;
          auVar8[0xb] = uVar41;
          auVar8[0xc] = SUB41(fVar31,0);
          auVar8[0xd] = uVar42;
          auVar8[0xe] = uVar43;
          auVar8[0xf] = uVar44;
          auVar59 = NEON_ext(auVar7,auVar8,8,1);
          fVar33 = auVar59._0_4_ + fVar33;
          fVar20 = auVar59._4_4_ + 0.0;
          fVar31 = fVar33 + fVar20;
          fVar33 = fVar33 + fVar20;
          uVar39 = SUB41(fVar33,0);
          uVar40 = (undefined1)((uint)fVar33 >> 8);
          uVar41 = (undefined1)((uint)fVar33 >> 0x10);
          uVar42 = (undefined1)((uint)fVar33 >> 0x18);
          auVar9[4] = uVar39;
          auVar9._0_4_ = fVar31;
          auVar9[5] = uVar40;
          auVar9[6] = uVar41;
          auVar9[7] = uVar42;
          auVar9[8] = SUB41(fVar31,0);
          auVar9[9] = (char)((uint)fVar31 >> 8);
          auVar9[10] = (char)((uint)fVar31 >> 0x10);
          auVar9[0xb] = (char)((uint)fVar31 >> 0x18);
          auVar9[0xc] = uVar39;
          auVar9[0xd] = uVar40;
          auVar9[0xe] = uVar41;
          auVar9[0xf] = uVar42;
          auVar59 = NEON_frsqrte(auVar9,4);
          auVar68._0_4_ = auVar59._0_4_ * fVar31;
          auVar68._4_4_ = auVar59._4_4_ * fVar33;
          auVar68._8_4_ = auVar59._8_4_ * fVar31;
          uVar10 = (undefined2)(CONCAT15(uVar40,CONCAT14(uVar39,fVar31)) >> 0x20);
          auVar68._12_4_ = auVar59._12_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar10));
          auVar66 = NEON_frsqrts(auVar59,auVar68,4);
          auVar61._0_4_ = auVar59._0_4_ * auVar66._0_4_;
          auVar61._4_4_ = auVar59._4_4_ * auVar66._4_4_;
          auVar61._8_4_ = auVar59._8_4_ * auVar66._8_4_;
          auVar61._12_4_ = auVar59._12_4_ * auVar66._12_4_;
          auVar69._0_4_ = fVar31 * auVar61._0_4_;
          auVar69._4_4_ = fVar33 * auVar61._4_4_;
          auVar69._8_4_ = fVar31 * auVar61._8_4_;
          auVar69._12_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar10)) * auVar61._12_4_;
          iVar29 = -(uint)(fVar31 == 0.0);
          iVar25 = -(uint)(fVar33 == 0.0);
          iVar11 = -(uint)(fVar31 == 0.0);
          iVar12 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,uVar10)) == 0.0);
          auVar59 = NEON_frsqrts(auVar61,auVar69,4);
          fVar48 = fVar48 * auVar61._0_4_ * auVar59._0_4_;
          fVar33 = auVar61._4_4_ * auVar59._4_4_ * 0.0;
          fVar53 = fVar53 * auVar61._8_4_ * auVar59._8_4_;
          fStack_74 = fStack_74 * auVar61._12_4_ * auVar59._12_4_;
          fVar48 = (float)CONCAT13((byte)((uint)fVar48 >> 0x18) & ~(byte)((uint)iVar29 >> 0x18),
                                   CONCAT12((byte)((uint)fVar48 >> 0x10) &
                                            ~(byte)((uint)iVar29 >> 0x10),
                                            CONCAT11((byte)((uint)fVar48 >> 8) &
                                                     ~(byte)((uint)iVar29 >> 8),
                                                     SUB41(fVar48,0) & ~(byte)iVar29)));
          auVar50._0_8_ =
               CONCAT17((byte)((uint)fVar33 >> 0x18) & ~(byte)((uint)iVar25 >> 0x18),
                        CONCAT16((byte)((uint)fVar33 >> 0x10) & ~(byte)((uint)iVar25 >> 0x10),
                                 CONCAT15((byte)((uint)fVar33 >> 8) & ~(byte)((uint)iVar25 >> 8),
                                          CONCAT14(SUB41(fVar33,0) & ~(byte)iVar25,fVar48))));
          auVar50[8] = SUB41(fVar53,0) & ~(byte)iVar11;
          auVar50[9] = (byte)((uint)fVar53 >> 8) & ~(byte)((uint)iVar11 >> 8);
          auVar50[10] = (byte)((uint)fVar53 >> 0x10) & ~(byte)((uint)iVar11 >> 0x10);
          auVar50[0xb] = (byte)((uint)fVar53 >> 0x18) & ~(byte)((uint)iVar11 >> 0x18);
          auVar51[0xc] = SUB41(fStack_74,0) & ~(byte)iVar12;
          auVar51._0_12_ = auVar50;
          auVar51[0xd] = (byte)((uint)fStack_74 >> 8) & ~(byte)((uint)iVar12 >> 8);
          auVar51[0xe] = (byte)((uint)fStack_74 >> 0x10) & ~(byte)((uint)iVar12 >> 0x10);
          auVar51[0xf] = (byte)((uint)fStack_74 >> 0x18) & ~(byte)((uint)iVar12 >> 0x18);
          fVar48 = (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar16 >> 0x18),
                                   CONCAT12((byte)((uint)fVar37 >> 0x10) &
                                            ~(byte)((uint)iVar16 >> 0x10),
                                            CONCAT11((byte)((uint)fVar37 >> 8) &
                                                     ~(byte)((uint)iVar16 >> 8),
                                                     SUB41(fVar37,0) & ~(byte)iVar16))) * fVar48;
          fVar37 = (float)CONCAT13((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                   CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                            ~(byte)((uint)iVar18 >> 0x10),
                                            CONCAT11((byte)((uint)fVar32 >> 8) &
                                                     ~(byte)((uint)iVar18 >> 8),
                                                     SUB41(fVar32,0) & ~(byte)iVar18))) *
                   (float)((ulong)auVar50._0_8_ >> 0x20);
          uVar39 = (undefined1)((uint)fVar37 >> 8);
          uVar40 = (undefined1)((uint)fVar37 >> 0x10);
          uVar41 = (undefined1)((uint)fVar37 >> 0x18);
          fVar32 = (float)CONCAT13((byte)((uint)fVar5 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18),
                                   CONCAT12((byte)((uint)fVar5 >> 0x10) &
                                            ~(byte)((uint)iVar19 >> 0x10),
                                            CONCAT11((byte)((uint)fVar5 >> 8) &
                                                     ~(byte)((uint)iVar19 >> 8),
                                                     SUB41(fVar5,0) & ~(byte)iVar19))) *
                   auVar50._8_4_;
          uVar42 = (undefined1)((uint)fVar32 >> 8);
          uVar43 = (undefined1)((uint)fVar32 >> 0x10);
          uVar44 = (undefined1)((uint)fVar32 >> 0x18);
          fVar5 = (float)CONCAT13((byte)((uint)fVar6 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18),
                                  CONCAT12((byte)((uint)fVar6 >> 0x10) &
                                           ~(byte)((uint)iVar21 >> 0x10),
                                           CONCAT11((byte)((uint)fVar6 >> 8) &
                                                    ~(byte)((uint)iVar21 >> 8),
                                                    SUB41(fVar6,0) & ~(byte)iVar21))) *
                  auVar51._12_4_;
          uVar45 = (undefined1)((uint)fVar5 >> 8);
          uVar46 = (undefined1)((uint)fVar5 >> 0x10);
          uVar47 = (undefined1)((uint)fVar5 >> 0x18);
          auVar59[4] = SUB41(fVar37,0);
          auVar59._0_4_ = fVar48;
          auVar59[5] = uVar39;
          auVar59[6] = uVar40;
          auVar59[7] = uVar41;
          auVar59[8] = SUB41(fVar32,0);
          auVar59[9] = uVar42;
          auVar59[10] = uVar43;
          auVar59[0xb] = uVar44;
          auVar59[0xc] = SUB41(fVar5,0);
          auVar59[0xd] = uVar45;
          auVar59[0xe] = uVar46;
          auVar59[0xf] = uVar47;
          auVar66[4] = SUB41(fVar37,0);
          auVar66._0_4_ = fVar48;
          auVar66[5] = uVar39;
          auVar66[6] = uVar40;
          auVar66[7] = uVar41;
          auVar66[8] = SUB41(fVar32,0);
          auVar66[9] = uVar42;
          auVar66[10] = uVar43;
          auVar66[0xb] = uVar44;
          auVar66[0xc] = SUB41(fVar5,0);
          auVar66[0xd] = uVar45;
          auVar66[0xe] = uVar46;
          auVar66[0xf] = uVar47;
          auVar59 = NEON_ext(auVar59,auVar66,8,1);
          if (auVar59._0_4_ + fVar48 + auVar59._4_4_ + fVar37 <= 0.0) {
LAB_01f9676c:
            bVar4 = false;
          }
          else {
            lVar27 = *(long *)(param_1 + 0x1b0);
            if (lVar27 == 0) {
              uVar35 = 0;
            }
            else {
              fVar6 = *(float *)(lVar27 + 0x60);
              fVar53 = *(float *)(lVar27 + 100);
              fVar33 = *(float *)(lVar27 + 0x68);
              fVar20 = *(float *)(lVar27 + 0x6c);
              fVar31 = *(float *)(lVar27 + 0x90);
              fVar17 = *(float *)(lVar27 + 0x94);
              fVar30 = *(float *)(lVar27 + 0x98);
              fVar54 = *(float *)(lVar27 + 0x9c);
              fVar49 = *(float *)(lVar27 + 0xa0);
              fVar52 = *(float *)(lVar27 + 0xa4);
              fVar58 = *(float *)(lVar27 + 0xa8);
              fVar62 = *(float *)(lVar27 + 0xac);
              fVar37 = (float)*(undefined8 *)(lVar27 + 0x50);
              fVar48 = (float)((ulong)*(undefined8 *)(lVar27 + 0x50) >> 0x20);
              fVar32 = (float)*(undefined8 *)(lVar27 + 0x58);
              fVar63 = (float)*(undefined8 *)(lVar27 + 0xb0);
              fVar64 = (float)((ulong)*(undefined8 *)(lVar27 + 0xb0) >> 0x20);
              fVar70 = (float)*(undefined8 *)(lVar27 + 0xb8);
              fVar71 = (float)((ulong)*(undefined8 *)(lVar27 + 0xb8) >> 0x20);
              fVar5 = (float)((ulong)*(undefined8 *)(lVar27 + 0x58) >> 0x20);
              fVar72 = (float)*(undefined8 *)(lVar27 + 0xc0);
              fVar73 = (float)((ulong)*(undefined8 *)(lVar27 + 0xc0) >> 0x20);
              fVar74 = (float)*(undefined8 *)(lVar27 + 200);
              fVar75 = (float)((ulong)*(undefined8 *)(lVar27 + 200) >> 0x20);
              fVar76 = fVar31 * fVar37 + fVar49 * fVar48 + fVar63 * fVar32 + fVar72 * fVar5;
              fVar77 = fVar17 * fVar37 + fVar52 * fVar48 + fVar64 * fVar32 + fVar73 * fVar5;
              fVar78 = fVar30 * fVar37 + fVar58 * fVar48 + fVar70 * fVar32 + fVar74 * fVar5;
              fVar79 = fVar54 * fVar37 + fVar62 * fVar48 + fVar71 * fVar32 + fVar75 * fVar5;
              fVar37 = (float)*(undefined8 *)(lVar27 + 0x70);
              fVar48 = (float)((ulong)*(undefined8 *)(lVar27 + 0x70) >> 0x20);
              fVar32 = (float)*(undefined8 *)(lVar27 + 0x78);
              fVar5 = (float)((ulong)*(undefined8 *)(lVar27 + 0x78) >> 0x20);
              fVar80 = fVar31 * fVar37 + fVar49 * fVar48 + fVar63 * fVar32 + fVar72 * fVar5;
              fVar81 = fVar17 * fVar37 + fVar52 * fVar48 + fVar64 * fVar32 + fVar73 * fVar5;
              fVar82 = fVar30 * fVar37 + fVar58 * fVar48 + fVar70 * fVar32 + fVar74 * fVar5;
              fVar83 = fVar54 * fVar37 + fVar62 * fVar48 + fVar71 * fVar32 + fVar75 * fVar5;
              fVar37 = fVar31 * fVar6 + fVar49 * fVar53 + fVar63 * fVar33 + fVar72 * fVar20;
              fVar32 = fVar17 * fVar6 + fVar52 * fVar53 + fVar64 * fVar33 + fVar73 * fVar20;
              fVar5 = fVar30 * fVar6 + fVar58 * fVar53 + fVar70 * fVar33 + fVar74 * fVar20;
              fVar6 = fVar54 * fVar6 + fVar62 * fVar53 + fVar71 * fVar33 + fVar75 * fVar20;
              fVar48 = (float)*(undefined8 *)(lVar27 + 0x80);
              fVar53 = (float)((ulong)*(undefined8 *)(lVar27 + 0x80) >> 0x20);
              auVar59 = *(undefined1 (*) [16])(param_1 + 0x1e0);
              auVar66 = *(undefined1 (*) [16])(param_1 + 0x1f0);
              fVar33 = (float)*(undefined8 *)(lVar27 + 0x88);
              fVar20 = (float)((ulong)*(undefined8 *)(lVar27 + 0x88) >> 0x20);
              fVar49 = fVar31 * fVar48 + fVar49 * fVar53 + fVar63 * fVar33 + fVar72 * fVar20;
              fVar52 = fVar17 * fVar48 + fVar52 * fVar53 + fVar64 * fVar33 + fVar73 * fVar20;
              fVar30 = fVar30 * fVar48 + fVar58 * fVar53 + fVar70 * fVar33 + fVar74 * fVar20;
              fVar54 = fVar54 * fVar48 + fVar62 * fVar53 + fVar71 * fVar33 + fVar75 * fVar20;
              fVar53 = (float)*(undefined8 *)(param_1 + 0x1c0);
              fVar33 = (float)((ulong)*(undefined8 *)(param_1 + 0x1c0) >> 0x20);
              fVar48 = (float)((ulong)*(undefined8 *)(param_1 + 0x1c8) >> 0x20);
              fVar20 = (float)*(undefined8 *)(param_1 + 0x1d0);
              fVar31 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d0) >> 0x20);
              fVar17 = (float)((ulong)*(undefined8 *)(param_1 + 0x1d8) >> 0x20);
              fVar58 = auVar59._0_4_;
              fVar62 = auVar59._4_4_;
              fVar63 = auVar59._12_4_;
              fVar64 = auVar66._0_4_;
              fVar70 = auVar66._4_4_;
              fVar71 = auVar66._12_4_;
              fVar48 = 1.0 / (fVar48 * fVar49 + fVar17 * fVar52 + fVar63 * fVar30 + fVar71 * fVar54
                             + (fVar48 * fVar76 + fVar17 * fVar77 + fVar63 * fVar78 +
                               fVar71 * fVar79) * fVar34 +
                               (fVar48 * fVar37 + fVar17 * fVar32 + fVar63 * fVar5 + fVar71 * fVar6)
                               * fVar36 +
                               (fVar48 * fVar80 + fVar17 * fVar81 + fVar63 * fVar82 +
                               fVar71 * fVar83) * fVar38);
              fVar53 = (fVar53 * fVar49 + fVar20 * fVar52 + fVar58 * fVar30 + fVar64 * fVar54 +
                       (fVar53 * fVar76 + fVar20 * fVar77 + fVar58 * fVar78 + fVar64 * fVar79) *
                       fVar34 + (fVar53 * fVar37 + fVar20 * fVar32 + fVar58 * fVar5 + fVar64 * fVar6
                                ) * fVar36 +
                       (fVar53 * fVar80 + fVar20 * fVar81 + fVar58 * fVar82 + fVar64 * fVar83) *
                       fVar38) * fVar48;
              fVar48 = (fVar33 * fVar49 + fVar31 * fVar52 + fVar62 * fVar30 + fVar70 * fVar54 +
                       (fVar33 * fVar76 + fVar31 * fVar77 + fVar62 * fVar78 + fVar70 * fVar79) *
                       fVar34 + (fVar33 * fVar37 + fVar31 * fVar32 + fVar62 * fVar5 + fVar70 * fVar6
                                ) * fVar36 +
                       (fVar33 * fVar80 + fVar31 * fVar81 + fVar62 * fVar82 + fVar70 * fVar83) *
                       fVar38) * fVar48;
              fVar37 = (float)CONCAT13((byte)((uint)fVar53 >> 0x18) &
                                       (byte)((ulong)_DAT_038897c0 >> 0x18),
                                       CONCAT12((byte)((uint)fVar53 >> 0x10) &
                                                (byte)((ulong)_DAT_038897c0 >> 0x10),
                                                CONCAT11((byte)((uint)fVar53 >> 8) &
                                                         (byte)((ulong)_DAT_038897c0 >> 8),
                                                         SUB41(fVar53,0) & (byte)_DAT_038897c0)));
              uVar35 = CONCAT17((byte)((uint)fVar48 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38),
                                CONCAT16((byte)((uint)fVar48 >> 0x10) &
                                         (byte)((ulong)_DAT_038897c0 >> 0x30),
                                         CONCAT15((byte)((uint)fVar48 >> 8) &
                                                  (byte)((ulong)_DAT_038897c0 >> 0x28),
                                                  CONCAT14(SUB41(fVar48,0) &
                                                           (byte)((ulong)_DAT_038897c0 >> 0x20),
                                                           fVar37))));
              if (fVar37 < 0.0) goto LAB_01f9676c;
            }
            if ((1920.0 < (float)uVar35) ||
               (((param_3 & 1) == 0 &&
                ((fVar37 = (float)((ulong)uVar35 >> 0x20), fVar37 < 0.0 || (1080.0 < fVar37))))))
            goto LAB_01f9676c;
            bVar4 = true;
          }
          if (local_68 != (long *)0x0) {
            lVar27 = local_68[0xb];
            piVar1 = (int *)(lVar27 + 0xc);
            do {
              iVar29 = *piVar1;
              cVar3 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar2) {
                *piVar1 = iVar29 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar29 + -1 == 0) {
              *(undefined8 *)(lVar27 + 0x18) = 0;
              (**(code **)(*local_68 + 0x20))();
            }
          }
          if (bVar4) {
            bVar4 = true;
          }
          else {
LAB_01f967d8:
            bVar4 = false;
          }
          lVar26 = *(long *)(lVar26 + 8);
          piVar1 = (int *)(lVar26 + 0xc);
          do {
            iVar29 = *piVar1;
            cVar3 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar2) {
              *piVar1 = iVar29 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar29 + -1 == 0) {
            *(undefined8 *)(lVar26 + 0x18) = 0;
            (**(code **)(*plVar28 + 0x20))(plVar28);
          }
          if (bVar4) {
            return 1;
          }
          return 0;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      param_3 = param_3 & 0xffffffff;
      iVar29 = iVar25;
    } while (iVar25 != 0);
  }
  return 0;
}


