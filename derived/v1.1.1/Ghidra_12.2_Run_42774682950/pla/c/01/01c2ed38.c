/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c2ed38; name: FUN_01c2ed38
 */


/* WARNING: Removing unreachable block (ram,0x01c2efe0) */

void FUN_01c2ed38(long param_1)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  bool bVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  float fVar24;
  float fVar25;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar26;
  byte bVar27;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar28;
  byte bVar29;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar30;
  byte bVar31;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar32;
  byte bVar33;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar34;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  byte bVar35;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  byte bVar36;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  byte bVar37;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  byte bVar38;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  byte bVar39;
  undefined1 extraout_var_17;
  undefined1 uVar40;
  undefined1 extraout_var_18;
  byte bVar41;
  undefined1 extraout_var_19;
  undefined1 uVar42;
  undefined1 extraout_var_20;
  byte bVar43;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  byte bVar44;
  undefined1 extraout_var_23;
  undefined1 uVar45;
  undefined1 extraout_var_24;
  byte bVar46;
  undefined1 extraout_var_25;
  undefined1 uVar47;
  undefined1 extraout_var_26;
  byte bVar48;
  undefined1 extraout_var_27;
  undefined1 uVar49;
  undefined1 extraout_var_28;
  byte bVar50;
  float fVar51;
  float fVar52;
  int iVar53;
  float fVar57;
  int iVar58;
  int iVar59;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar60;
  float fVar61;
  undefined1 auVar62 [16];
  undefined8 uVar63;
  undefined1 in_q3 [16];
  undefined8 uVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  ulong uVar70;
  float fStack_bc;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_90;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  
  uVar69 = in_q3._8_8_;
  uVar63 = in_q3._0_8_;
  lVar17 = nn::os::GetCurrentThread();
  plVar19 = (long *)(param_1 + 0x3e0);
  do {
    if (*plVar19 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x3d4));
        while (*plVar19 == 0) {
          cVar5 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar16) {
            *plVar19 = lVar17;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_01c2eda8;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar16) {
      *plVar19 = lVar17;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_01c2eda8:
  plVar19 = *(long **)(param_1 + 0x390);
  while (plVar19 != (long *)0x0) {
    while( true ) {
      if (*(char *)((long)plVar19 + 0x21) == '\0') {
        bVar16 = true;
      }
      else {
        if (plVar19[0x10] == 0) {
          bVar16 = true;
        }
        else {
          bVar16 = *(int *)(plVar19[0x10] + 0xc) == 0;
        }
        bVar16 = (bool)(bVar16 ^ 1);
      }
      lVar17 = plVar19[0x16];
      *(int *)(plVar19 + 0x16) = (int)lVar17 + -1;
      if (((int)lVar17 < 2) || (!bVar16)) break;
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) goto LAB_01c2edb0;
    }
    plVar19 = (long *)FUN_01c30d9c(param_1 + 0x360);
  }
LAB_01c2edb0:
  puVar15 = PTR_DAT_043794d8;
  puVar14 = PTR_DAT_043794d0;
  puVar13 = PTR_DAT_043794c8;
  puVar12 = PTR_DAT_043794b8;
  puVar11 = PTR_DAT_043794b0;
  lVar17 = *(long *)(param_1 + 0x350);
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar53 = *(int *)(lVar17 + 0xc);
    do {
      plVar19 = *(long **)(lVar17 + 0x10);
      if (((*puVar11 & 1) == 0) && (iVar58 = __cxa_guard_acquire(puVar11), iVar58 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar58 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar58 != 0)) {
          if (((*puVar14 & 1) == 0) && (iVar58 = __cxa_guard_acquire(puVar14), iVar58 != 0)) {
            uVar18 = FUN_0087f8f0();
            *(undefined8 *)puVar15 = uVar18;
            __cxa_guard_release(puVar14);
          }
          *(undefined **)puVar13 = puVar15;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar12 = puVar13;
        __cxa_guard_release(puVar11);
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_01c2edb8;
        if (plVar19 == (long *)puVar12) break;
        plVar19 = (long *)*plVar19;
      }
      iVar58 = *piVar1;
      if (iVar58 == iVar53) {
        cVar5 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar16) {
          *piVar1 = iVar53 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 != '\0') goto LAB_01c2ee88;
        lVar17 = *(long *)(lVar17 + 0x18);
        if (lVar17 != 0) {
          plVar19 = (long *)(lVar17 + -0x50);
          (**(code **)(*plVar19 + 0x40))(plVar19);
          plVar21 = *(long **)(param_1 + 0x390);
          bVar16 = false;
          if (plVar21 != (long *)0x0) {
            uVar70 = 0x7f7fffff;
            plVar23 = (long *)0x0;
            do {
              plVar2 = plVar21 + 4;
              FUN_01c300a4(plVar21 + 6);
              local_b0 = (float)uVar63;
              fStack_ac = (float)((ulong)uVar63 >> 0x20);
              fStack_a8 = (float)uVar69;
              fStack_a4 = (float)((ulong)uVar69 >> 0x20);
              fVar24 = local_b0 -
                       (float)CONCAT13(extraout_var_03,
                                       CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)))
              ;
              fVar8 = fStack_ac -
                      (float)CONCAT13(extraout_var_11,
                                      CONCAT12(extraout_var_09,
                                               CONCAT11(extraout_var_07,extraout_var_05)));
              fVar51 = fStack_a8 -
                       (float)CONCAT13(extraout_var_19,
                                       CONCAT12(extraout_var_17,
                                                CONCAT11(extraout_var_15,extraout_var_13)));
              fVar61 = fStack_a4 -
                       (float)CONCAT13(extraout_var_27,
                                       CONCAT12(extraout_var_25,
                                                CONCAT11(extraout_var_23,extraout_var_21)));
              fVar24 = fVar24 * fVar24;
              fVar8 = fVar8 * fVar8;
              uVar26 = (undefined1)((uint)fVar8 >> 8);
              uVar28 = (undefined1)((uint)fVar8 >> 0x10);
              uVar30 = (undefined1)((uint)fVar8 >> 0x18);
              fVar51 = fVar51 * fVar51;
              uVar32 = (undefined1)((uint)fVar51 >> 8);
              uVar40 = (undefined1)((uint)fVar51 >> 0x10);
              uVar42 = (undefined1)((uint)fVar51 >> 0x18);
              fVar61 = fVar61 * fVar61;
              uVar45 = (undefined1)((uint)fVar61 >> 8);
              uVar47 = (undefined1)((uint)fVar61 >> 0x10);
              uVar49 = (undefined1)((uint)fVar61 >> 0x18);
              auVar54[4] = SUB41(fVar8,0);
              auVar54._0_4_ = fVar24;
              auVar54[5] = uVar26;
              auVar54[6] = uVar28;
              auVar54[7] = uVar30;
              auVar54[8] = SUB41(fVar51,0);
              auVar54[9] = uVar32;
              auVar54[10] = uVar40;
              auVar54[0xb] = uVar42;
              auVar54[0xc] = SUB41(fVar61,0);
              auVar54[0xd] = uVar45;
              auVar54[0xe] = uVar47;
              auVar54[0xf] = uVar49;
              auVar66[4] = SUB41(fVar8,0);
              auVar66._0_4_ = fVar24;
              auVar66[5] = uVar26;
              auVar66[6] = uVar28;
              auVar66[7] = uVar30;
              auVar66[8] = SUB41(fVar51,0);
              auVar66[9] = uVar32;
              auVar66[10] = uVar40;
              auVar66[0xb] = uVar42;
              auVar66[0xc] = SUB41(fVar61,0);
              auVar66[0xd] = uVar45;
              auVar66[0xe] = uVar47;
              auVar66[0xf] = uVar49;
              auVar54 = NEON_ext(auVar54,auVar66,8,1);
              fVar24 = auVar54._0_4_ + fVar24 + auVar54._4_4_ + fVar8;
              uVar26 = SUB41(fVar24,0);
              uVar28 = (undefined1)((uint)fVar24 >> 8);
              uVar30 = (undefined1)((uint)fVar24 >> 0x10);
              uVar32 = (undefined1)((uint)fVar24 >> 0x18);
              plVar22 = plVar2;
              if ((float)uVar70 <= fVar24) {
                uVar26 = (undefined1)uVar70;
                uVar28 = (undefined1)(uVar70 >> 8);
                uVar30 = (undefined1)(uVar70 >> 0x10);
                uVar32 = (undefined1)(uVar70 >> 0x18);
                *(char *)plVar2 = '\0';
                plVar22 = plVar23;
              }
              if ((*(byte *)(param_1 + 0x200) & 3) != 0) {
                *(char *)plVar2 = '\0';
              }
              plVar21 = (long *)*plVar21;
              uVar70 = (ulong)CONCAT13(uVar32,CONCAT12(uVar30,CONCAT11(uVar28,uVar26)));
              plVar23 = plVar22;
            } while (plVar21 != (long *)0x0);
            if ((plVar22 == (long *)0x0) || ((*(byte *)(param_1 + 0x200) & 3) != 0)) {
              bVar16 = false;
            }
            else {
              FUN_01c300a4(plVar22 + 2);
              fVar8 = (float)CONCAT13(extraout_var_20,
                                      CONCAT12(extraout_var_18,
                                               CONCAT11(extraout_var_16,extraout_var_14)));
              fVar24 = (float)CONCAT13(extraout_var_04,
                                       CONCAT12(extraout_var_02,
                                                CONCAT11(extraout_var_00,extraout_b0_00)));
              if ((char)*plVar22 == '\0') {
                if (*(int *)((long)plVar22 + 0x24) != 0) {
                  lVar20 = plVar22[9];
                  *(long *)(param_1 + 0x238) = plVar22[7];
                  *(long *)(param_1 + 0x248) = lVar20;
                  lVar20 = plVar22[5];
                  *(long *)(param_1 + 0x218) = plVar22[3];
                  *(long *)(param_1 + 0x228) = lVar20;
                  *(long *)(param_1 + 0x210) = plVar22[2];
                  fVar51 = (float)*(undefined8 *)(param_1 + 0x210);
                  auVar55._0_4_ = fVar51 * fVar51;
                  fVar61 = (float)((ulong)*(undefined8 *)(param_1 + 0x210) >> 0x20);
                  auVar55._4_4_ = fVar61 * fVar61;
                  fVar9 = (float)*(undefined8 *)(param_1 + 0x218);
                  auVar55._8_4_ = fVar9 * fVar9;
                  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x218) >> 0x20);
                  auVar55._12_4_ = fVar10 * fVar10;
                  auVar54 = NEON_ext(auVar55,auVar55,8,1);
                  fVar52 = auVar54._0_4_ + auVar55._0_4_;
                  fVar57 = auVar54._4_4_ + auVar55._4_4_;
                  fVar25 = fVar52 + fVar57;
                  fVar52 = fVar52 + fVar57;
                  lVar20 = plVar22[4];
                  auVar56._8_8_ = CONCAT44(fVar52,fVar25);
                  auVar56._0_8_ = CONCAT44(fVar52,fVar25);
                  auVar54 = NEON_frsqrte(auVar56,4);
                  *(long *)(param_1 + 0x230) = plVar22[6];
                  auVar65._0_4_ = auVar54._0_4_ * fVar25;
                  auVar65._4_4_ = auVar54._4_4_ * fVar52;
                  auVar65._8_4_ = auVar54._8_4_ * fVar25;
                  auVar65._12_4_ = auVar54._12_4_ * fVar52;
                  *(long *)(param_1 + 0x220) = lVar20;
                  auVar66 = NEON_frsqrts(auVar54,auVar65,4);
                  lVar20 = plVar22[8];
                  auVar62._0_4_ = auVar54._0_4_ * auVar66._0_4_;
                  auVar62._4_4_ = auVar54._4_4_ * auVar66._4_4_;
                  auVar62._8_4_ = auVar54._8_4_ * auVar66._8_4_;
                  auVar62._12_4_ = auVar54._12_4_ * auVar66._12_4_;
                  auVar67._0_4_ = fVar25 * auVar62._0_4_;
                  auVar67._4_4_ = fVar52 * auVar62._4_4_;
                  auVar67._8_4_ = fVar25 * auVar62._8_4_;
                  auVar67._12_4_ = fVar52 * auVar62._12_4_;
                  *(long *)(param_1 + 0x250) = plVar22[10];
                  iVar53 = -(uint)(fVar25 == 0.0);
                  iVar58 = -(uint)(fVar52 == 0.0);
                  iVar59 = -(uint)(fVar25 == 0.0);
                  iVar60 = -(uint)(fVar52 == 0.0);
                  *(long *)(param_1 + 0x240) = lVar20;
                  auVar54 = NEON_frsqrts(auVar62,auVar67,4);
                  *(undefined4 *)(param_1 + 0x280) = 0;
                  fVar51 = fVar51 * auVar62._0_4_ * auVar54._0_4_;
                  fVar61 = fVar61 * auVar62._4_4_ * auVar54._4_4_;
                  fVar9 = fVar9 * auVar62._8_4_ * auVar54._8_4_;
                  fVar10 = fVar10 * auVar62._12_4_ * auVar54._12_4_;
                  bVar27 = SUB41(fVar51,0) & ~(byte)iVar53;
                  bVar29 = (byte)((uint)fVar51 >> 8) & ~(byte)((uint)iVar53 >> 8);
                  bVar31 = (byte)((uint)fVar51 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10);
                  bVar33 = (byte)((uint)fVar51 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18);
                  bVar34 = SUB41(fVar61,0) & ~(byte)iVar58;
                  bVar35 = (byte)((uint)fVar61 >> 8) & ~(byte)((uint)iVar58 >> 8);
                  bVar36 = (byte)((uint)fVar61 >> 0x10) & ~(byte)((uint)iVar58 >> 0x10);
                  bVar37 = (byte)((uint)fVar61 >> 0x18) & ~(byte)((uint)iVar58 >> 0x18);
                  bVar38 = SUB41(fVar9,0) & ~(byte)iVar59;
                  bVar39 = (byte)((uint)fVar9 >> 8) & ~(byte)((uint)iVar59 >> 8);
                  bVar41 = (byte)((uint)fVar9 >> 0x10) & ~(byte)((uint)iVar59 >> 0x10);
                  bVar43 = (byte)((uint)fVar9 >> 0x18) & ~(byte)((uint)iVar59 >> 0x18);
                  bVar44 = SUB41(fVar10,0) & ~(byte)iVar60;
                  bVar46 = (byte)((uint)fVar10 >> 8) & ~(byte)((uint)iVar60 >> 8);
                  bVar48 = (byte)((uint)fVar10 >> 0x10) & ~(byte)((uint)iVar60 >> 0x10);
                  bVar50 = (byte)((uint)fVar10 >> 0x18) & ~(byte)((uint)iVar60 >> 0x18);
                  fVar51 = *(float *)(param_1 + 0x220);
                  auVar68._0_8_ =
                       CONCAT44((float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34))) *
                                fVar51,(float)CONCAT13(bVar33,CONCAT12(bVar31,CONCAT11(bVar29,bVar27
                                                                                      ))) * fVar51);
                  auVar68._8_4_ =
                       (float)CONCAT13(bVar43,CONCAT12(bVar41,CONCAT11(bVar39,bVar38))) * fVar51;
                  auVar68._12_4_ =
                       (float)CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44))) * fVar51;
                  fVar51 = -(float)CONCAT13(bVar37,CONCAT12(bVar36,CONCAT11(bVar35,bVar34)));
                  fVar61 = -(float)CONCAT13(bVar50,CONCAT12(bVar48,CONCAT11(bVar46,bVar44)));
                  *(long *)(param_1 + 0x278) = auVar68._8_8_;
                  *(undefined8 *)(param_1 + 0x270) = auVar68._0_8_;
                  *(ulong *)(param_1 + 0x218) =
                       CONCAT17((char)((uint)fVar61 >> 0x18),
                                CONCAT16((char)((uint)fVar61 >> 0x10),
                                         CONCAT15((char)((uint)fVar61 >> 8),
                                                  CONCAT14(SUB41(fVar61,0),
                                                           -(float)CONCAT13(bVar43,CONCAT12(bVar41,
                                                  CONCAT11(bVar39,bVar38)))))));
                  *(ulong *)(param_1 + 0x210) =
                       CONCAT17((char)((uint)fVar51 >> 0x18),
                                CONCAT16((char)((uint)fVar51 >> 0x10),
                                         CONCAT15((char)((uint)fVar51 >> 8),
                                                  CONCAT14(SUB41(fVar51,0),
                                                           -(float)CONCAT13(bVar33,CONCAT12(bVar31,
                                                  CONCAT11(bVar29,bVar27)))))));
                  *(undefined1 *)(param_1 + 0x290) = 0;
                  *(undefined8 *)(param_1 + 0x288) = 0;
                  *(float *)(param_1 + 0x284) = 1.0 / ((float)*(uint *)(param_1 + 0x224) * 0.5);
                  *(undefined8 *)(param_1 + 0x268) = 0;
                  *(undefined8 *)(param_1 + 0x260) = 0;
                  *(undefined8 *)(param_1 + 0x294) = 0;
                  *(undefined8 *)(param_1 + 0x29c) = 0;
                  fVar51 = (float)*(undefined8 *)(param_1 + 0x240);
                  fVar51 = fVar51 * fVar51;
                  fVar61 = (float)((ulong)*(undefined8 *)(param_1 + 0x240) >> 0x20);
                  fVar61 = fVar61 * fVar61;
                  uVar26 = (undefined1)((uint)fVar61 >> 8);
                  uVar28 = (undefined1)((uint)fVar61 >> 0x10);
                  uVar30 = (undefined1)((uint)fVar61 >> 0x18);
                  fVar9 = (float)*(undefined8 *)(param_1 + 0x248);
                  fVar9 = fVar9 * fVar9;
                  uVar32 = (undefined1)((uint)fVar9 >> 8);
                  uVar40 = (undefined1)((uint)fVar9 >> 0x10);
                  uVar42 = (undefined1)((uint)fVar9 >> 0x18);
                  fVar10 = (float)((ulong)*(undefined8 *)(param_1 + 0x248) >> 0x20);
                  fVar10 = fVar10 * fVar10;
                  uVar45 = (undefined1)((uint)fVar10 >> 8);
                  uVar47 = (undefined1)((uint)fVar10 >> 0x10);
                  uVar49 = (undefined1)((uint)fVar10 >> 0x18);
                  auVar6[4] = SUB41(fVar61,0);
                  auVar6._0_4_ = fVar51;
                  auVar6[5] = uVar26;
                  auVar6[6] = uVar28;
                  auVar6[7] = uVar30;
                  auVar6[8] = SUB41(fVar9,0);
                  auVar6[9] = uVar32;
                  auVar6[10] = uVar40;
                  auVar6[0xb] = uVar42;
                  auVar6[0xc] = SUB41(fVar10,0);
                  auVar6[0xd] = uVar45;
                  auVar6[0xe] = uVar47;
                  auVar6[0xf] = uVar49;
                  auVar7[4] = SUB41(fVar61,0);
                  auVar7._0_4_ = fVar51;
                  auVar7[5] = uVar26;
                  auVar7[6] = uVar28;
                  auVar7[7] = uVar30;
                  auVar7[8] = SUB41(fVar9,0);
                  auVar7[9] = uVar32;
                  auVar7[10] = uVar40;
                  auVar7[0xb] = uVar42;
                  auVar7[0xc] = SUB41(fVar10,0);
                  auVar7[0xd] = uVar45;
                  auVar7[0xe] = uVar47;
                  auVar7[0xf] = uVar49;
                  auVar54 = NEON_ext(auVar6,auVar7,8,1);
                  *(undefined1 *)(param_1 + 0x204) = 1;
                  if (1.1920929e-07 < auVar54._0_4_ + fVar51 + auVar54._4_4_ + fVar61) {
                    local_a0 = *(undefined8 *)(param_1 + 0x240);
                    uStack_98 = *(undefined8 *)(param_1 + 0x248);
                    local_90 = *(uint *)(param_1 + 0x224) >> 1;
                    local_88 = *(undefined4 *)(param_1 + 0x230);
                    local_84 = *(undefined4 *)(param_1 + 0x250);
                    local_80 = *(undefined4 *)(param_1 + 0x254);
                    uStack_8c = local_90;
                    FUN_01c2f948(param_1,&local_a0,0);
                  }
                  *(uint *)(param_1 + 0x200) = *(uint *)(param_1 + 0x200) | 4;
                }
                *(char *)plVar22 = '\x01';
              }
              fVar51 = *(float *)(plVar22 + 0x13) * *(float *)(plVar22 + 0x13);
              fVar61 = *(float *)((long)plVar22 + 0x94) * *(float *)((long)plVar22 + 0x94) - fVar51;
              if (fVar61 <= 1.1920929e-07) {
                fVar61 = 1.0;
LAB_01c2efe0:
                uVar26 = SUB41(fVar61,0);
                uVar28 = (undefined1)((uint)fVar61 >> 8);
                uVar30 = (undefined1)((uint)fVar61 >> 0x10);
                uVar32 = (undefined1)((uint)fVar61 >> 0x18);
              }
              else {
                fStack_bc = (float)(CONCAT17(extraout_var_12,
                                             CONCAT16(extraout_var_10,
                                                      CONCAT15(extraout_var_08,
                                                               CONCAT14(extraout_var_06,fVar24))))
                                   >> 0x20);
                fStack_b4 = (float)(CONCAT17(extraout_var_28,
                                             CONCAT16(extraout_var_26,
                                                      CONCAT15(extraout_var_24,
                                                               CONCAT14(extraout_var_22,fVar8)))) >>
                                   0x20);
                local_b0 = local_b0 - fVar24;
                fStack_a8 = fStack_a8 - fVar8;
                auVar64._0_4_ = local_b0 * local_b0;
                auVar64._4_4_ = (fStack_ac - fStack_bc) * (fStack_ac - fStack_bc);
                auVar64._8_4_ = fStack_a8 * fStack_a8;
                auVar64._12_4_ = (fStack_a4 - fStack_b4) * (fStack_a4 - fStack_b4);
                auVar54 = NEON_ext(auVar64,auVar64,8,1);
                fVar61 = ((auVar54._0_4_ + auVar64._0_4_ + auVar54._4_4_ + auVar64._4_4_) - fVar51)
                         / fVar61;
                if (0.0 <= fVar61) goto LAB_01c2efe0;
                uVar26 = 0;
                uVar28 = 0;
                uVar30 = 0;
                uVar32 = 0;
              }
              local_a0 = CONCAT44(local_a0._4_4_,0x3f800000);
              bVar16 = true;
              *(float *)(param_1 + 0x3cc) =
                   1.0 - (float)CONCAT13(uVar32,CONCAT12(uVar30,CONCAT11(uVar28,uVar26)));
            }
          }
          lVar17 = *(long *)(lVar17 + 8);
          piVar1 = (int *)(lVar17 + 0xc);
          do {
            iVar53 = *piVar1;
            cVar5 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar53 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar53 + -1 == 0) {
            *(undefined8 *)(lVar17 + 0x18) = 0;
            (**(code **)(*plVar19 + 0x20))(plVar19);
          }
          if (bVar16) goto LAB_01c2edc4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01c2ee88:
      iVar53 = iVar58;
    } while (iVar58 != 0);
  }
LAB_01c2edb8:
  uVar3 = *(uint *)(param_1 + 0x200);
  if (((uVar3 >> 2 & 1) != 0) && (*(char *)(param_1 + 0x204) != '\0')) {
    *(uint *)(param_1 + 0x200) = uVar3 & 0xfffffffb;
    *(undefined1 *)(param_1 + 0x204) = 0;
    if (*(char *)(param_1 + 0x2a8) != '\0') {
      *(undefined4 *)(param_1 + 800) = 0x3f800000;
      *(undefined8 *)(param_1 + 0x2f8) = 0;
      *(undefined8 *)(param_1 + 0x2f0) = 0;
      *(undefined8 *)(param_1 + 0x2e8) = 0;
      *(undefined8 *)(param_1 + 0x2e0) = 0;
      *(undefined1 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x324) = 0;
      *(undefined8 *)(param_1 + 0x329) = 0;
      *(uint *)(param_1 + 0x200) = uVar3 & 0xfffffff9;
      *(undefined8 *)(param_1 + 0x334) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x3cc) = 0;
LAB_01c2edc4:
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x3d4));
  return;
}


