/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f1a25c; name: FUN_01f1a25c
 */


void FUN_01f1a25c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char *pcVar3;
  int *piVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined *puVar16;
  undefined *puVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  ulong uVar22;
  undefined4 uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  long *plVar31;
  long *plVar32;
  long lVar33;
  float *pfVar34;
  long lVar35;
  long *plVar36;
  float *pfVar37;
  long *plVar38;
  long lVar39;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  double dVar40;
  ulong extraout_d0;
  undefined8 extraout_d0_00;
  undefined4 extraout_var;
  ulong extraout_d0_01;
  undefined8 extraout_d0_02;
  undefined4 extraout_var_00;
  ulong extraout_d0_03;
  undefined8 extraout_d0_04;
  ulong extraout_d0_05;
  undefined8 extraout_d0_06;
  float extraout_var_01;
  ulong extraout_d0_07;
  undefined8 extraout_d0_08;
  float extraout_var_02;
  ulong extraout_d0_09;
  undefined8 extraout_d0_10;
  ulong extraout_d0_11;
  undefined8 extraout_d0_12;
  undefined4 extraout_var_03;
  ulong extraout_d0_13;
  undefined8 extraout_d0_14;
  undefined4 extraout_var_04;
  ulong extraout_d0_15;
  undefined8 extraout_d0_16;
  undefined4 extraout_var_05;
  ulong extraout_d0_17;
  undefined8 extraout_d0_18;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  float extraout_var_09;
  float extraout_var_10;
  undefined4 extraout_var_11;
  undefined4 extraout_var_12;
  undefined4 extraout_var_13;
  undefined4 extraout_var_14;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar41;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  char *extraout_var_15;
  char *extraout_var_16;
  char *extraout_var_17;
  char *extraout_var_18;
  char *extraout_var_19;
  char *extraout_var_20;
  char *extraout_var_21;
  char *extraout_var_22;
  char *extraout_var_23;
  char *extraout_var_24;
  char *extraout_var_25;
  char *extraout_var_26;
  char *extraout_var_27;
  char *extraout_var_28;
  char *extraout_var_29;
  char *extraout_var_30;
  char *extraout_var_31;
  char *extraout_var_32;
  char *extraout_var_33;
  char *extraout_var_34;
  float fVar52;
  float fVar53;
  float fVar54;
  float local_110;
  float fStack_108;
  float fStack_104;
  undefined8 local_e0;
  char *pcStack_d8;
  undefined8 local_d0;
  long *local_c8;
  ulong local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined1 auStack_9c [4];
  undefined1 auStack_98 [4];
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  
  puVar17 = PTR_DAT_04379d88;
  puVar16 = PTR_DAT_04379d80;
  lVar35 = *(long *)(param_1 + 0x88);
  if ((lVar35 == 0) || (*(int *)(lVar35 + 0xc) == 0)) {
    return;
  }
  pcVar3 = (char *)(param_1 + 0xdc7b8);
  piVar4 = (int *)(param_1 + 0x5e640);
  piVar1 = (int *)(lVar35 + 0xc);
  iVar21 = *(int *)(lVar35 + 0xc);
LAB_01f1a38c:
  plVar38 = *(long **)(lVar35 + 0x10);
  if (((*puVar16 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar16), iVar20 != 0)) {
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
      uVar41 = FUN_0087f8f0();
      *(undefined8 *)PTR_DAT_043794d8 = uVar41;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    *(undefined **)puVar17 = PTR_DAT_043794d8;
    __cxa_guard_release(puVar16);
  }
  while( true ) {
    if (plVar38 == (long *)0x0) {
      return;
    }
    if (plVar38 == (long *)puVar17) break;
    plVar38 = (long *)*plVar38;
  }
  iVar20 = *piVar1;
  if (iVar20 == iVar21) {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar9) {
      *piVar1 = iVar21 + 1;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 == '\0') {
      lVar35 = *(long *)(lVar35 + 0x18);
      if (lVar35 == 0) {
        return;
      }
      plVar38 = (long *)(lVar35 + -0x50);
      if (*(char *)(param_1 + 0x1009b8) != '\0') goto LAB_01f1a468;
      if (*(char *)(param_1 + 0x6118) == '\0') {
        *(undefined4 *)(param_1 + 0x1e170) = *(undefined4 *)(param_1 + 0x6150);
        lVar33 = 0;
        do {
          lVar25 = param_1 + lVar33;
          puVar7 = (undefined8 *)(param_1 + 0x1e178 + lVar33);
          *puVar7 = *(undefined8 *)(lVar25 + 0x6158);
          puVar7[1] = *(undefined8 *)(lVar25 + 0x6160);
          puVar7[2] = *(undefined8 *)(lVar25 + 0x6168);
          plVar36 = *(long **)(lVar25 + 0x6170);
          if (plVar36 != (long *)0x0) {
            (**(code **)(*plVar36 + 0x18))(plVar36);
          }
          plVar31 = *(long **)(param_1 + 0x1e190 + lVar33);
          *(long **)(param_1 + 0x1e190 + lVar33) = plVar36;
          if (plVar31 != (long *)0x0) {
            (**(code **)(*plVar31 + 0x20))();
          }
          puVar7[4] = *(undefined8 *)(lVar25 + 0x6178);
          puVar7[5] = *(undefined8 *)(lVar25 + 0x6180);
          puVar7[6] = *(undefined8 *)(lVar25 + 0x6188);
          plVar36 = *(long **)(lVar25 + 0x6190);
          if (plVar36 != (long *)0x0) {
            (**(code **)(*plVar36 + 0x18))(plVar36);
          }
          plVar31 = *(long **)(param_1 + 0x1e1b0 + lVar33);
          *(long **)(param_1 + 0x1e1b0 + lVar33) = plVar36;
          if (plVar31 != (long *)0x0) {
            (**(code **)(*plVar31 + 0x20))();
          }
          uVar41 = *(undefined8 *)(lVar25 + 0x6198);
          puVar7 = (undefined8 *)(param_1 + 0x1e1b8 + lVar33);
          lVar33 = lVar33 + 0x60;
          uVar26 = *(undefined8 *)(lVar25 + 0x61a0);
          uVar27 = *(undefined8 *)(lVar25 + 25000);
          *(undefined4 *)(puVar7 + 3) = *(undefined4 *)(lVar25 + 0x61b0);
          puVar7[1] = uVar26;
          puVar7[2] = uVar27;
          *puVar7 = uVar41;
        } while (lVar33 != 0x6000);
        FUN_01f1eec8(param_1 + 0x27238,param_1 + 0x24178);
      }
      else {
        FUN_025acc5c(plVar38,&local_94,auStack_98,auStack_9c);
        iVar21 = local_94 + -0x17;
        if (local_94 + 1U < 0x18) {
          iVar21 = local_94 + 1;
        }
        uVar18 = FUN_025acc08(plVar38);
        uVar19 = FUN_025acc08(plVar38,iVar21);
        if (uVar18 == uVar19) goto LAB_01f1a434;
        uVar22 = (ulong)uVar19;
        auVar47 = FUN_025acf84(plVar38);
        auVar42 = FUN_025ac72c(local_94,0,0);
        dVar40 = (double)FUN_025ac72c(1,0,0);
        if (dVar40 <= 0.0) {
          dVar40 = 1.0;
        }
        else {
          dVar40 = (auVar47._0_8_ - auVar42._0_8_) / dVar40;
        }
        uVar28 = (ulong)uVar18;
        if (3 < uVar18) {
          uVar28 = 0xffffffffffffffff;
        }
        if (3 < uVar19) {
          uVar22 = 0xffffffffffffffff;
        }
        if ((3 < uVar28) || (3 < uVar22)) goto LAB_01f1b368;
        fStack_108 = (float)dVar40;
        FUN_01f1ed2c(param_1 + 0x1e170,param_1 + 0x6150 + uVar28 * 0x6008,
                     param_1 + 0x6150 + uVar22 * 0x6008);
        lVar33 = *(long *)(param_1 + 0x27278);
        if (lVar33 == -0x5552164181650ed6) {
          lVar33 = param_1 + 0x24178 + uVar28 * 0x9c0;
          FUN_009a7ff4(*(undefined4 *)(lVar33 + 0x4c),*(undefined4 *)(lVar33 + 0x48),
                       *(undefined4 *)(lVar33 + 0x50));
          lVar33 = param_1 + 0x24178 + uVar22 * 0x9c0;
          local_c0 = extraout_d0_11;
          pcStack_b8 = extraout_var_27;
          FUN_009a7ff4(*(undefined4 *)(lVar33 + 0x4c),*(undefined4 *)(lVar33 + 0x48),
                       *(undefined4 *)(lVar33 + 0x50));
          local_e0 = extraout_d0_12;
          pcStack_d8 = extraout_var_28;
          auVar47 = FUN_009c6b1c(fStack_108,&local_c0,&local_e0);
          uStack_88 = auVar47._8_8_;
          local_90 = auVar47._0_8_;
          FUN_00cb8d18(&local_90);
          *(undefined4 *)(param_1 + 0x27280) = extraout_s0_03;
          *(undefined4 *)(param_1 + 0x27284) = extraout_var_03;
          *(undefined4 *)(param_1 + 0x27288) = extraout_var_11;
          *(undefined4 *)(param_1 + 0x2728c) = 0;
        }
        else {
          lVar30 = param_1 + 0x24178 + uVar28 * 0x9c0;
          lVar25 = param_1 + 0x24178 + uVar22 * 0x9c0;
          uVar41 = *(undefined8 *)(lVar25 + 0x48);
          uVar26 = *(undefined8 *)(lVar25 + 0x50);
          auVar47._0_8_ =
               CONCAT44(*(float *)(lVar30 + 0x4c) +
                        ((float)((ulong)uVar41 >> 0x20) - *(float *)(lVar30 + 0x4c)) * fStack_108,
                        *(float *)(lVar30 + 0x48) +
                        ((float)uVar41 - *(float *)(lVar30 + 0x48)) * fStack_108);
          auVar47._8_4_ =
               *(float *)(lVar30 + 0x50) + ((float)uVar26 - *(float *)(lVar30 + 0x50)) * fStack_108;
          auVar47._12_4_ =
               *(float *)(lVar30 + 0x54) +
               ((float)((ulong)uVar26 >> 0x20) - *(float *)(lVar30 + 0x54)) * fStack_108;
          *(undefined8 *)(param_1 + 0x27280) = auVar47._0_8_;
          auVar47 = NEON_ext(auVar47,auVar47,8,1);
          *(long *)(param_1 + 0x27288) = auVar47._0_8_;
          if ((lVar33 == 0x5d486426e00af3fc) || (lVar33 == -0x730a4df14d6436b4)) {
            *(undefined4 *)(param_1 + 0x2728c) = 0x3f800000;
          }
        }
        lVar33 = *(long *)(param_1 + 0x272d8);
        if (lVar33 == -0x5552164181650ed6) {
          lVar33 = param_1 + 0x24178 + uVar28 * 0x9c0;
          FUN_009a7ff4(*(undefined4 *)(lVar33 + 0xac),*(undefined4 *)(lVar33 + 0xa8),
                       *(undefined4 *)(lVar33 + 0xb0));
          lVar33 = param_1 + 0x24178 + uVar22 * 0x9c0;
          local_c0 = extraout_d0_13;
          pcStack_b8 = extraout_var_29;
          FUN_009a7ff4(*(undefined4 *)(lVar33 + 0xac),*(undefined4 *)(lVar33 + 0xa8),
                       *(undefined4 *)(lVar33 + 0xb0));
          local_e0 = extraout_d0_14;
          pcStack_d8 = extraout_var_30;
          auVar47 = FUN_009c6b1c(fStack_108,&local_c0,&local_e0);
          uStack_88 = auVar47._8_8_;
          local_90 = auVar47._0_8_;
          FUN_00cb8d18(&local_90);
          *(undefined4 *)(param_1 + 0x272e0) = extraout_s0_04;
          *(undefined4 *)(param_1 + 0x272e4) = extraout_var_04;
          *(undefined4 *)(param_1 + 0x272e8) = extraout_var_12;
          *(undefined4 *)(param_1 + 0x272ec) = 0;
        }
        else {
          lVar30 = param_1 + 0x24178 + uVar28 * 0x9c0;
          lVar25 = param_1 + 0x24178 + uVar22 * 0x9c0;
          auVar42._0_8_ =
               CONCAT44(*(float *)(lVar30 + 0xac) +
                        (*(float *)(lVar25 + 0xac) - *(float *)(lVar30 + 0xac)) * fStack_108,
                        *(float *)(lVar30 + 0xa8) +
                        (*(float *)(lVar25 + 0xa8) - *(float *)(lVar30 + 0xa8)) * fStack_108);
          auVar42._8_4_ =
               *(float *)(lVar30 + 0xb0) +
               ((float)*(undefined8 *)(lVar25 + 0xb0) - *(float *)(lVar30 + 0xb0)) * fStack_108;
          auVar42._12_4_ =
               *(float *)(lVar30 + 0xb4) +
               ((float)((ulong)*(undefined8 *)(lVar25 + 0xb0) >> 0x20) - *(float *)(lVar30 + 0xb4))
               * fStack_108;
          *(undefined8 *)(param_1 + 0x272e0) = auVar42._0_8_;
          auVar47 = NEON_ext(auVar42,auVar42,8,1);
          *(long *)(param_1 + 0x272e8) = auVar47._0_8_;
          if ((lVar33 == 0x5d486426e00af3fc) || (lVar33 == -0x730a4df14d6436b4)) {
            *(undefined4 *)(param_1 + 0x272ec) = 0x3f800000;
          }
        }
        lVar33 = param_1 + 0x24280;
        lVar39 = uVar28 * 0x9c0;
        lVar30 = uVar22 * 0x9c0;
        lVar25 = 8;
        do {
          lVar24 = *(long *)(lVar33 + 0x30b8);
          if (lVar24 == -0x5552164181650ed6) {
            puVar6 = (undefined4 *)(lVar33 + lVar39);
            FUN_009a7ff4(puVar6[1],*puVar6,puVar6[2]);
            puVar6 = (undefined4 *)(lVar33 + lVar30);
            local_c0 = extraout_d0;
            pcStack_b8 = extraout_var_15;
            FUN_009a7ff4(puVar6[1],*puVar6,puVar6[2]);
            local_e0 = extraout_d0_00;
            pcStack_d8 = extraout_var_16;
            auVar47 = FUN_009c6b1c(fStack_108,&local_c0,&local_e0);
            uStack_88 = auVar47._8_8_;
            local_90 = auVar47._0_8_;
            FUN_00cb8d18(&local_90);
            *(undefined4 *)(lVar33 + 0x30c0) = extraout_s0;
            *(undefined4 *)(lVar33 + 0x30c4) = extraout_var;
            *(undefined4 *)(lVar33 + 0x30c8) = extraout_var_07;
            *(undefined4 *)(lVar33 + 0x30cc) = 0;
          }
          else {
            pfVar37 = (float *)(lVar33 + lVar39);
            uVar41 = *(undefined8 *)(lVar33 + lVar30);
            uVar26 = ((undefined8 *)(lVar33 + lVar30))[1];
            auVar43._0_8_ =
                 CONCAT44(pfVar37[1] + ((float)((ulong)uVar41 >> 0x20) - pfVar37[1]) * fStack_108,
                          *pfVar37 + ((float)uVar41 - *pfVar37) * fStack_108);
            auVar43._8_4_ = pfVar37[2] + ((float)uVar26 - pfVar37[2]) * fStack_108;
            auVar43._12_4_ = pfVar37[3] + ((float)((ulong)uVar26 >> 0x20) - pfVar37[3]) * fStack_108
            ;
            *(undefined8 *)(lVar33 + 0x30c0) = auVar43._0_8_;
            auVar47 = NEON_ext(auVar43,auVar43,8,1);
            *(long *)(lVar33 + 0x30c8) = auVar47._0_8_;
            if ((lVar24 == 0x5d486426e00af3fc) || (lVar24 == -0x730a4df14d6436b4)) {
              *(undefined4 *)(lVar33 + 0x30cc) = 0x3f800000;
            }
          }
          lVar24 = *(long *)(lVar33 + 0x3118);
          if (lVar24 == -0x5552164181650ed6) {
            lVar24 = lVar33 + lVar39;
            FUN_009a7ff4(*(undefined4 *)(lVar24 + 100),*(undefined4 *)(lVar24 + 0x60),
                         *(undefined4 *)(lVar24 + 0x68));
            lVar24 = lVar33 + lVar30;
            local_c0 = extraout_d0_01;
            pcStack_b8 = extraout_var_17;
            FUN_009a7ff4(*(undefined4 *)(lVar24 + 100),*(undefined4 *)(lVar24 + 0x60),
                         *(undefined4 *)(lVar24 + 0x68));
            local_e0 = extraout_d0_02;
            pcStack_d8 = extraout_var_18;
            auVar47 = FUN_009c6b1c(fStack_108,&local_c0,&local_e0);
            uStack_88 = auVar47._8_8_;
            local_90 = auVar47._0_8_;
            FUN_00cb8d18(&local_90);
            *(undefined4 *)(lVar33 + 0x3120) = extraout_s0_00;
            *(undefined4 *)(lVar33 + 0x3124) = extraout_var_00;
            *(undefined4 *)(lVar33 + 0x3128) = extraout_var_08;
            *(undefined4 *)(lVar33 + 0x312c) = 0;
          }
          else {
            lVar5 = lVar33 + lVar39;
            uVar41 = *(undefined8 *)(lVar33 + lVar30 + 0x60);
            uVar26 = *(undefined8 *)(lVar33 + lVar30 + 0x68);
            auVar44._0_8_ =
                 CONCAT44(*(float *)(lVar5 + 100) +
                          ((float)((ulong)uVar41 >> 0x20) - *(float *)(lVar5 + 100)) * fStack_108,
                          *(float *)(lVar5 + 0x60) +
                          ((float)uVar41 - *(float *)(lVar5 + 0x60)) * fStack_108);
            auVar44._8_4_ =
                 *(float *)(lVar5 + 0x68) + ((float)uVar26 - *(float *)(lVar5 + 0x68)) * fStack_108;
            auVar44._12_4_ =
                 *(float *)(lVar5 + 0x6c) +
                 ((float)((ulong)uVar26 >> 0x20) - *(float *)(lVar5 + 0x6c)) * fStack_108;
            *(undefined8 *)(lVar33 + 0x3120) = auVar44._0_8_;
            auVar47 = NEON_ext(auVar44,auVar44,8,1);
            *(long *)(lVar33 + 0x3128) = auVar47._0_8_;
            if ((lVar24 == 0x5d486426e00af3fc) || (lVar24 == -0x730a4df14d6436b4)) {
              *(undefined4 *)(lVar33 + 0x312c) = 0x3f800000;
            }
          }
          lVar24 = *(long *)(lVar33 + 0x3178);
          if (lVar24 == -0x5552164181650ed6) {
            lVar24 = lVar33 + lVar39;
            FUN_009a7ff4(*(undefined4 *)(lVar24 + 0xc4),*(undefined4 *)(lVar24 + 0xc0),
                         *(undefined4 *)(lVar24 + 200));
            lVar24 = lVar33 + lVar30;
            local_c0 = extraout_d0_03;
            pcStack_b8 = extraout_var_19;
            FUN_009a7ff4(*(undefined4 *)(lVar24 + 0xc4),*(undefined4 *)(lVar24 + 0xc0),
                         *(undefined4 *)(lVar24 + 200));
            local_e0 = extraout_d0_04;
            pcStack_d8 = extraout_var_20;
            auVar47 = FUN_009c6b1c(fStack_108,&local_c0,&local_e0);
            uStack_88 = auVar47._8_8_;
            local_90 = auVar47._0_8_;
            auVar47 = FUN_00cb8d18(&local_90);
            *(long *)(lVar33 + 0x3180) = auVar47._0_8_;
            *(int *)(lVar33 + 0x3188) = auVar47._8_4_;
            *(undefined4 *)(lVar33 + 0x318c) = 0;
          }
          else {
            lVar5 = lVar33 + lVar39;
            uVar41 = *(undefined8 *)(lVar33 + lVar30 + 0xc0);
            uVar26 = *(undefined8 *)(lVar33 + lVar30 + 200);
            auVar45._0_8_ =
                 CONCAT44(*(float *)(lVar5 + 0xc4) +
                          ((float)((ulong)uVar41 >> 0x20) - *(float *)(lVar5 + 0xc4)) * fStack_108,
                          *(float *)(lVar5 + 0xc0) +
                          ((float)uVar41 - *(float *)(lVar5 + 0xc0)) * fStack_108);
            auVar45._8_4_ =
                 *(float *)(lVar5 + 200) + ((float)uVar26 - *(float *)(lVar5 + 200)) * fStack_108;
            auVar45._12_4_ =
                 *(float *)(lVar5 + 0xcc) +
                 ((float)((ulong)uVar26 >> 0x20) - *(float *)(lVar5 + 0xcc)) * fStack_108;
            *(undefined8 *)(lVar33 + 0x3180) = auVar45._0_8_;
            auVar47 = NEON_ext(auVar45,auVar45,8,1);
            *(long *)(lVar33 + 0x3188) = auVar47._0_8_;
            if ((lVar24 == 0x5d486426e00af3fc) || (lVar24 == -0x730a4df14d6436b4)) {
              *(undefined4 *)(lVar33 + 0x318c) = 0x3f800000;
            }
          }
          lVar25 = lVar25 + -1;
          lVar33 = lVar33 + 0x120;
          fStack_104 = fStack_108;
        } while (lVar25 != 0);
      }
LAB_01f1a434:
      puVar17 = PTR_DAT_0437eee0;
      puVar16 = PTR_DAT_0437eed8;
      if (((*(char *)(param_1 + 0x285c1) != '\0') &&
          (lVar33 = *(long *)(param_1 + 0x98), lVar33 != 0)) && (*(int *)(lVar33 + 0xc) != 0)) {
        piVar1 = (int *)(lVar33 + 0xc);
        iVar21 = *(int *)(lVar33 + 0xc);
        do {
          plVar36 = *(long **)(lVar33 + 0x10);
          if (((*puVar16 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar16), iVar20 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
              uVar41 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar41;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar17 = PTR_DAT_043794d8;
            __cxa_guard_release(puVar16);
            if (plVar36 != (long *)0x0) goto LAB_01f1b204;
            break;
          }
          while( true ) {
            if (plVar36 == (long *)0x0) goto LAB_01f1a448;
LAB_01f1b204:
            if (plVar36 == (long *)puVar17) break;
            plVar36 = (long *)*plVar36;
          }
          iVar20 = *piVar1;
          if (iVar20 == iVar21) {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar9) {
              *piVar1 = iVar21 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') {
              lVar33 = *(long *)(lVar33 + 0x18);
              if (lVar33 == 0) break;
              plVar36 = (long *)(lVar33 + -0x50);
              iVar21 = FUN_025993f4(plVar36);
              lVar33 = *(long *)(lVar33 + 8);
              piVar1 = (int *)(lVar33 + 0xc);
              do {
                iVar20 = *piVar1;
                cVar8 = '\x01';
                bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar9) {
                  *piVar1 = iVar20 + -1;
                  cVar8 = ExclusiveMonitorsStatus();
                }
              } while (cVar8 != '\0');
              if (iVar20 + -1 == 0) {
                *(undefined8 *)(lVar33 + 0x18) = 0;
                (**(code **)(*plVar36 + 0x20))(plVar36);
              }
              if (iVar21 != 0) {
                if (*(char *)(param_1 + 0x5e644) == '\0') {
                  if (*(int *)(param_1 + 0x285c4) == iVar21) break;
                  fVar53 = 0.008333334;
                  fVar54 = 0.0;
                  *(undefined8 *)(param_1 + 0x5e648) = 0x3c08888900000000;
                  *piVar4 = iVar21;
                  *(undefined1 *)(param_1 + 0x5e644) = 1;
                }
                else {
                  fVar54 = *(float *)(param_1 + 0x5e648);
                  fVar53 = *(float *)(param_1 + 0x5e64c);
                }
                fVar53 = fVar53 + fVar54;
                pfVar34 = (float *)(param_1 + 0x5e648);
                *pfVar34 = fVar53;
                local_e0._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
                local_e0 = CONCAT44(local_e0._4_4_,0x3f800000);
                pfVar37 = (float *)&local_e0;
                if (fVar53 <= 1.0) {
                  pfVar37 = pfVar34;
                }
                local_c0 = local_c0 & 0xffffffff00000000;
                if (fVar53 < 0.0) {
                  pfVar37 = (float *)&local_c0;
                }
                uVar18 = *(int *)(param_1 + 0x285c4) - 1;
                uVar22 = (ulong)uVar18;
                if (7 < uVar18) {
                  uVar22 = 0xffffffffffffffff;
                }
                *(float *)(param_1 + 0x5e648) = *pfVar37;
                uVar28 = (ulong)(*piVar4 - 1U);
                if (7 < *piVar4 - 1U) {
                  uVar28 = 0xffffffffffffffff;
                }
                if ((7 < uVar22) || (7 < uVar28)) {
LAB_01f1b368:
                    /* WARNING: Subroutine does not return */
                  FUN_01f22c10();
                }
                FUN_01f1ed2c(param_1 + 0x58638,param_1 + 0x285f8 + uVar22 * 0x6008,
                             param_1 + 0x285f8 + uVar28 * 0x6008);
                if (1.0 <= *pfVar34) {
                  *(int *)(param_1 + 0x285c4) = *piVar4;
                  *(undefined1 *)(param_1 + 0x5e644) = 0;
                }
              }
              break;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar21 = iVar20;
        } while (iVar20 != 0);
      }
LAB_01f1a448:
      puVar17 = PTR_DAT_043796f8;
      puVar16 = PTR_DAT_043796f0;
      if (*(char *)(param_1 + 0x285b8) == '\0') goto LAB_01f1a468;
      lVar33 = *(long *)(param_1 + 0xb8);
      if ((lVar33 == 0) || (*(int *)(lVar33 + 0xc) == 0)) {
LAB_01f1a45c:
        if (*(char *)(param_1 + 0x285b9) != '\0') {
          local_c0 = 0xeb3fbf251277e21a;
          pcStack_b8 = "environment";
          local_b0 = 0xb;
          local_a8 = (long *)0x0;
          local_e0 = 0xb17d6a4f20bce18;
          pcStack_d8 = "cave_light_change_easing";
          local_d0 = 0x18;
          local_c8 = (long *)0x0;
          uVar22 = FUN_00ea3f80(&local_c0,&local_e0);
          if (local_c8 != (long *)0x0) {
            (**(code **)(*local_c8 + 0x20))();
          }
          if (local_a8 != (long *)0x0) {
            (**(code **)(*local_a8 + 0x20))();
          }
          uVar41 = (**(code **)(PTR_PTR_0437a4c8 + (uVar22 & 0xffffffff) * 8))();
          local_110 = (float)uVar41;
          lVar33 = *(long *)(param_1 + 0x27c38);
          if (lVar33 == -0x5552164181650ed6) {
            FUN_009a7ff4(*(undefined4 *)(param_1 + 0x268c4),*(float *)(param_1 + 0x268c0),
                         *(undefined4 *)(param_1 + 0x268c8));
            local_c0 = extraout_d0_15;
            pcStack_b8 = extraout_var_31;
            FUN_009a7ff4(*(undefined4 *)(param_1 + 0x27284),*(undefined4 *)(param_1 + 0x27280),
                         *(undefined4 *)(param_1 + 0x27288));
            auVar14._8_4_ = fStack_108;
            auVar14._0_8_ = uVar41;
            auVar14._12_4_ = fStack_104;
            local_e0 = extraout_d0_16;
            pcStack_d8 = extraout_var_32;
            auVar47 = FUN_009c6b1c(auVar14,&local_c0,&local_e0);
            uStack_88 = auVar47._8_8_;
            local_90 = auVar47._0_8_;
            FUN_00cb8d18(&local_90);
            *(undefined4 *)(param_1 + 0x27c40) = extraout_s0_05;
            *(undefined4 *)(param_1 + 0x27c44) = extraout_var_05;
            *(undefined4 *)(param_1 + 0x27c48) = extraout_var_13;
            *(undefined4 *)(param_1 + 0x27c4c) = 0;
          }
          else {
            fVar53 = *(float *)(param_1 + 0x268c0);
            auVar46._0_8_ =
                 CONCAT44(*(float *)(param_1 + 0x268c4) +
                          ((float)((ulong)*(undefined8 *)(param_1 + 0x27280) >> 0x20) -
                          *(float *)(param_1 + 0x268c4)) * local_110,
                          fVar53 + ((float)*(undefined8 *)(param_1 + 0x27280) - fVar53) * local_110)
            ;
            auVar46._8_4_ =
                 *(float *)(param_1 + 0x268c8) +
                 ((float)*(undefined8 *)(param_1 + 0x27288) - *(float *)(param_1 + 0x268c8)) *
                 local_110;
            auVar46._12_4_ =
                 *(float *)(param_1 + 0x268cc) +
                 ((float)((ulong)*(undefined8 *)(param_1 + 0x27288) >> 0x20) -
                 *(float *)(param_1 + 0x268cc)) * local_110;
            *(undefined8 *)(param_1 + 0x27c40) = auVar46._0_8_;
            auVar47 = NEON_ext(auVar46,auVar46,8,1);
            *(long *)(param_1 + 0x27c48) = auVar47._0_8_;
            if ((lVar33 == 0x5d486426e00af3fc) || (lVar33 == -0x730a4df14d6436b4)) {
              *(undefined4 *)(param_1 + 0x27c4c) = 0x3f800000;
            }
          }
          lVar33 = *(long *)(param_1 + 0x27c98);
          if (lVar33 == -0x5552164181650ed6) {
            FUN_009a7ff4(*(undefined4 *)(param_1 + 0x26924),*(undefined4 *)(param_1 + 0x26920),
                         *(undefined4 *)(param_1 + 0x26928));
            local_c0 = extraout_d0_17;
            pcStack_b8 = extraout_var_33;
            FUN_009a7ff4(*(undefined4 *)(param_1 + 0x272e4),*(undefined4 *)(param_1 + 0x272e0),
                         *(undefined4 *)(param_1 + 0x272e8));
            auVar15._8_4_ = fStack_108;
            auVar15._0_8_ = uVar41;
            auVar15._12_4_ = fStack_104;
            local_e0 = extraout_d0_18;
            pcStack_d8 = extraout_var_34;
            auVar47 = FUN_009c6b1c(auVar15,&local_c0,&local_e0);
            uStack_88 = auVar47._8_8_;
            local_90 = auVar47._0_8_;
            FUN_00cb8d18(&local_90);
            *(undefined4 *)(param_1 + 0x27ca0) = extraout_s0_06;
            *(undefined4 *)(param_1 + 0x27ca4) = extraout_var_06;
            *(undefined4 *)(param_1 + 0x27ca8) = extraout_var_14;
            *(undefined4 *)(param_1 + 0x27cac) = 0;
          }
          else {
            auVar48._0_8_ =
                 CONCAT44(*(float *)(param_1 + 0x26924) +
                          ((float)((ulong)*(undefined8 *)(param_1 + 0x272e0) >> 0x20) -
                          *(float *)(param_1 + 0x26924)) * local_110,
                          *(float *)(param_1 + 0x26920) +
                          ((float)*(undefined8 *)(param_1 + 0x272e0) - *(float *)(param_1 + 0x26920)
                          ) * local_110);
            auVar48._8_4_ =
                 *(float *)(param_1 + 0x26928) +
                 ((float)*(undefined8 *)(param_1 + 0x272e8) - *(float *)(param_1 + 0x26928)) *
                 local_110;
            auVar48._12_4_ =
                 *(float *)(param_1 + 0x2692c) +
                 ((float)((ulong)*(undefined8 *)(param_1 + 0x272e8) >> 0x20) -
                 *(float *)(param_1 + 0x2692c)) * local_110;
            *(undefined8 *)(param_1 + 0x27ca0) = auVar48._0_8_;
            auVar47 = NEON_ext(auVar48,auVar48,8,1);
            *(long *)(param_1 + 0x27ca8) = auVar47._0_8_;
            if ((lVar33 == 0x5d486426e00af3fc) || (lVar33 == -0x730a4df14d6436b4)) {
              *(undefined4 *)(param_1 + 0x27cac) = 0x3f800000;
            }
          }
          lVar33 = 8;
          pfVar37 = (float *)(param_1 + 0x26980);
          do {
            lVar25 = *(long *)(pfVar37 + 0x4de);
            if (lVar25 == -0x5552164181650ed6) {
              FUN_009a7ff4(pfVar37[1],*pfVar37,pfVar37[2]);
              local_c0 = extraout_d0_05;
              pcStack_b8 = extraout_var_21;
              FUN_009a7ff4(pfVar37[0x271],pfVar37[0x270],pfVar37[0x272]);
              auVar11._8_4_ = fStack_108;
              auVar11._0_8_ = uVar41;
              auVar11._12_4_ = fStack_104;
              local_e0 = extraout_d0_06;
              pcStack_d8 = extraout_var_22;
              auVar47 = FUN_009c6b1c(auVar11,&local_c0,&local_e0);
              uStack_88 = auVar47._8_8_;
              local_90 = auVar47._0_8_;
              FUN_00cb8d18(&local_90);
              pfVar37[0x4e0] = extraout_s0_01;
              pfVar37[0x4e1] = extraout_var_01;
              pfVar37[0x4e2] = extraout_var_09;
              pfVar37[0x4e3] = 0.0;
            }
            else {
              auVar49._0_8_ =
                   CONCAT44(pfVar37[1] +
                            ((float)((ulong)*(undefined8 *)(pfVar37 + 0x270) >> 0x20) - pfVar37[1])
                            * local_110,
                            *pfVar37 +
                            ((float)*(undefined8 *)(pfVar37 + 0x270) - *pfVar37) * local_110);
              auVar49._8_4_ =
                   pfVar37[2] + ((float)*(undefined8 *)(pfVar37 + 0x272) - pfVar37[2]) * local_110;
              auVar49._12_4_ =
                   pfVar37[3] +
                   ((float)((ulong)*(undefined8 *)(pfVar37 + 0x272) >> 0x20) - pfVar37[3]) *
                   local_110;
              *(undefined8 *)(pfVar37 + 0x4e0) = auVar49._0_8_;
              auVar47 = NEON_ext(auVar49,auVar49,8,1);
              *(long *)(pfVar37 + 0x4e2) = auVar47._0_8_;
              if ((lVar25 == 0x5d486426e00af3fc) || (lVar25 == -0x730a4df14d6436b4)) {
                pfVar37[0x4e3] = 1.0;
              }
            }
            lVar25 = *(long *)(pfVar37 + 0x50e);
            if (lVar25 == -0x5552164181650ed6) {
              FUN_009a7ff4(pfVar37[0x31],pfVar37[0x30],pfVar37[0x32]);
              local_c0 = extraout_d0_07;
              pcStack_b8 = extraout_var_23;
              FUN_009a7ff4(pfVar37[0x2a1],pfVar37[0x2a0],pfVar37[0x2a2]);
              auVar12._8_4_ = fStack_108;
              auVar12._0_8_ = uVar41;
              auVar12._12_4_ = fStack_104;
              local_e0 = extraout_d0_08;
              pcStack_d8 = extraout_var_24;
              auVar47 = FUN_009c6b1c(auVar12,&local_c0,&local_e0);
              uStack_88 = auVar47._8_8_;
              local_90 = auVar47._0_8_;
              FUN_00cb8d18(&local_90);
              pfVar37[0x510] = extraout_s0_02;
              pfVar37[0x511] = extraout_var_02;
              pfVar37[0x512] = extraout_var_10;
              pfVar37[0x513] = 0.0;
            }
            else {
              auVar50._0_8_ =
                   CONCAT44(pfVar37[0x31] +
                            ((float)((ulong)*(undefined8 *)(pfVar37 + 0x2a0) >> 0x20) -
                            pfVar37[0x31]) * local_110,
                            pfVar37[0x30] +
                            ((float)*(undefined8 *)(pfVar37 + 0x2a0) - pfVar37[0x30]) * local_110);
              auVar50._8_4_ =
                   pfVar37[0x32] +
                   ((float)*(undefined8 *)(pfVar37 + 0x2a2) - pfVar37[0x32]) * local_110;
              auVar50._12_4_ =
                   pfVar37[0x33] +
                   ((float)((ulong)*(undefined8 *)(pfVar37 + 0x2a2) >> 0x20) - pfVar37[0x33]) *
                   local_110;
              *(undefined8 *)(pfVar37 + 0x510) = auVar50._0_8_;
              auVar47 = NEON_ext(auVar50,auVar50,8,1);
              *(long *)(pfVar37 + 0x512) = auVar47._0_8_;
              if ((lVar25 == 0x5d486426e00af3fc) || (lVar25 == -0x730a4df14d6436b4)) {
                pfVar37[0x513] = 1.0;
              }
            }
            lVar25 = *(long *)(pfVar37 + 0x4f6);
            if (lVar25 == -0x5552164181650ed6) {
              FUN_009a7ff4(pfVar37[0x19],pfVar37[0x18],pfVar37[0x1a]);
              local_c0 = extraout_d0_09;
              pcStack_b8 = extraout_var_25;
              FUN_009a7ff4(pfVar37[0x289],pfVar37[0x288],pfVar37[0x28a]);
              auVar13._8_4_ = fStack_108;
              auVar13._0_8_ = uVar41;
              auVar13._12_4_ = fStack_104;
              local_e0 = extraout_d0_10;
              pcStack_d8 = extraout_var_26;
              auVar47 = FUN_009c6b1c(auVar13,&local_c0,&local_e0);
              uStack_88 = auVar47._8_8_;
              local_90 = auVar47._0_8_;
              auVar47 = FUN_00cb8d18(&local_90);
              *(long *)(pfVar37 + 0x4f8) = auVar47._0_8_;
              pfVar37[0x4fa] = auVar47._8_4_;
              pfVar37[0x4fb] = 0.0;
            }
            else {
              auVar51._0_8_ =
                   CONCAT44(pfVar37[0x19] +
                            ((float)((ulong)*(undefined8 *)(pfVar37 + 0x288) >> 0x20) -
                            pfVar37[0x19]) * local_110,
                            pfVar37[0x18] +
                            ((float)*(undefined8 *)(pfVar37 + 0x288) - pfVar37[0x18]) * local_110);
              auVar51._8_4_ =
                   pfVar37[0x1a] +
                   ((float)*(undefined8 *)(pfVar37 + 0x28a) - pfVar37[0x1a]) * local_110;
              auVar51._12_4_ =
                   pfVar37[0x1b] +
                   ((float)((ulong)*(undefined8 *)(pfVar37 + 0x28a) >> 0x20) - pfVar37[0x1b]) *
                   local_110;
              *(undefined8 *)(pfVar37 + 0x4f8) = auVar51._0_8_;
              auVar47 = NEON_ext(auVar51,auVar51,8,1);
              *(long *)(pfVar37 + 0x4fa) = auVar47._0_8_;
              if ((lVar25 == 0x5d486426e00af3fc) || (lVar25 == -0x730a4df14d6436b4)) {
                pfVar37[0x4fb] = 1.0;
              }
            }
            lVar33 = lVar33 + -1;
            pfVar37 = pfVar37 + 0x48;
          } while (lVar33 != 0);
        }
LAB_01f1a468:
        lVar35 = *(long *)(lVar35 + 8);
        piVar1 = (int *)(lVar35 + 0xc);
        do {
          iVar21 = *piVar1;
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar9) {
            *piVar1 = iVar21 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
        if (iVar21 + -1 == 0) {
          *(undefined8 *)(lVar35 + 0x18) = 0;
          (**(code **)(*plVar38 + 0x20))();
          return;
        }
        return;
      }
      piVar1 = (int *)(lVar33 + 0xc);
      iVar21 = *(int *)(lVar33 + 0xc);
LAB_01f1b40c:
      plVar36 = *(long **)(lVar33 + 0x10);
      if (((*puVar16 & 1) == 0) && (iVar20 = __cxa_guard_acquire(puVar16), iVar20 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar20 != 0)) {
          uVar41 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar41;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar17 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar16);
        if (plVar36 != (long *)0x0) goto LAB_01f1b41c;
        goto LAB_01f1a45c;
      }
      while( true ) {
        if (plVar36 == (long *)0x0) goto LAB_01f1a45c;
LAB_01f1b41c:
        if (plVar36 == (long *)puVar17) break;
        plVar36 = (long *)*plVar36;
      }
      iVar20 = *piVar1;
      if (iVar20 == iVar21) {
        cVar8 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar9) {
          *piVar1 = iVar21 + 1;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 == '\0') {
          lVar33 = *(long *)(lVar33 + 0x18);
          if (lVar33 == 0) goto LAB_01f1a45c;
          plVar36 = (long *)(lVar33 + -0x50);
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar21 = __cxa_guard_acquire(PTR_DAT_04379660), iVar21 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar25 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar25;
          uVar22 = *(ulong *)(lVar25 + 0x60);
          fVar53 = 1.0;
          if (uVar22 == 0) {
LAB_01f1b88c:
            iVar21 = 0;
LAB_01f1b67c:
            pfVar37 = (float *)(param_1 + 0x285bc);
            fVar54 = *pfVar37;
            cVar8 = *(char *)(param_1 + 0x285c0);
            uVar22 = FUN_01f26cf4(plVar36,&DAT_03a7d1c0);
            bVar9 = (uVar22 & 1) == 0;
            if (bVar9) {
              fVar53 = fVar53 + *pfVar37;
              *pfVar37 = fVar53;
            }
            else {
              fVar53 = *pfVar37 - fVar53;
              *pfVar37 = fVar53;
            }
            local_c0 = local_c0 & 0xffffffff00000000;
            local_e0 = CONCAT44(local_e0._4_4_,0x3f800000);
            fVar52 = 1.0;
            pfVar34 = (float *)&local_e0;
            if (fVar53 <= 1.0) {
              pfVar34 = pfVar37;
            }
            pfVar37 = (float *)&local_c0;
            if (0.0 <= fVar53) {
              pfVar37 = pfVar34;
            }
            fVar53 = *pfVar37;
            *(bool *)(param_1 + 0x285c0) = bVar9;
            *(float *)(param_1 + 0x285bc) = fVar53;
            *(bool *)(param_1 + 0x285b9) = 0.0 < fVar53;
            if (((bool)cVar8 != bVar9) && (*(char *)(param_1 + 0x5e651) != '\0')) {
              fVar54 = fVar54 * (float)iVar21;
              if (bVar9) {
                if (*(int *)(param_1 + 0xdc7bc) != 0x12) {
                  if ((((*(char *)(param_1 + 0xfa880) != '\0') ||
                       (*(char *)(param_1 + 0xf4858) != '\0')) ||
                      (*(char *)(param_1 + 0xee830) != '\0')) ||
                     ((*(char *)(param_1 + 0xe8808) != '\0' ||
                      (*(char *)(param_1 + 0xe27e0) != '\0')))) {
                    *(long *)(param_1 + 0xdc7c0) = param_1 + 0xca718;
                    if (*pcVar3 != '\0') {
                      *(undefined1 *)(param_1 + 0xe27d8) = 1;
                    }
                    uVar23 = 0x12;
                    goto LAB_01f1ba1c;
                  }
                  fVar53 = ((float)iVar21 - fVar54) / 30.0;
                  *(long *)(param_1 + 0xdc7c0) = param_1 + 0xca718;
                  if (*pcVar3 != '\0') {
                    *(undefined1 *)(param_1 + 0xe27d8) = 1;
                  }
                  *(undefined4 *)(param_1 + 0xdc7bc) = 0x12;
                  *(undefined4 *)(param_1 + 0xdc7c8) = 0;
                  if (0.0 < fVar53) {
                    fVar52 = 1.0 / (fVar53 * 30.0);
                  }
                  *(float *)(param_1 + 0xdc7cc) = fVar52;
                  goto LAB_01f1ba2c;
                }
              }
              else if (*(int *)(param_1 + 0xdc7bc) != 0xff) {
                if (((*(char *)(param_1 + 0xfa880) == '\0') &&
                    (*(char *)(param_1 + 0xf4858) == '\0')) &&
                   ((*(char *)(param_1 + 0xee830) == '\0' &&
                    ((*(char *)(param_1 + 0xe8808) == '\0' && (*(char *)(param_1 + 0xe27e0) == '\0')
                     ))))) {
                  fVar54 = fVar54 / 30.0;
                  *(undefined4 *)(param_1 + 0xdc7bc) = 0xff;
                  *(undefined4 *)(param_1 + 0xdc7c8) = 0;
                  if (fVar54 <= 0.0) {
                    fVar53 = 1.0;
                  }
                  else {
                    fVar53 = 1.0 / (fVar54 * 30.0);
                  }
                  *(float *)(param_1 + 0xdc7cc) = fVar53;
                }
                else {
                  uVar23 = 0xff;
LAB_01f1ba1c:
                  *(undefined4 *)(param_1 + 0xdc7bc) = uVar23;
                  *(undefined8 *)(param_1 + 0xdc7c8) = 0x3f80000000000000;
                }
LAB_01f1ba2c:
                *pcVar3 = '\x01';
              }
            }
            lVar33 = *(long *)(lVar33 + 8);
            piVar1 = (int *)(lVar33 + 0xc);
            do {
              iVar21 = *piVar1;
              cVar8 = '\x01';
              bVar9 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar9) {
                *piVar1 = iVar21 + -1;
                cVar8 = ExclusiveMonitorsStatus();
              }
            } while (cVar8 != '\0');
            if (iVar21 + -1 == 0) {
              *(undefined8 *)(lVar33 + 0x18) = 0;
              (**(code **)(*plVar36 + 0x20))(plVar36);
            }
            goto LAB_01f1a45c;
          }
          uVar28 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
          uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
          uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar28 < 2) {
            uVar29 = uVar22 - 1 & 0xeb3fbf251277e21a;
          }
          else if (uVar22 < 0xeb3fbf251277e21b) {
            uVar29 = 0;
            if (uVar22 != 0) {
              uVar29 = 0xeb3fbf251277e21a / uVar22;
            }
            uVar29 = 0xeb3fbf251277e21a - uVar29 * uVar22;
          }
          else {
            uVar29 = 0xeb3fbf251277e21a;
          }
          plVar31 = *(long **)(*(long *)(lVar25 + 0x58) + uVar29 * 8);
          if ((plVar31 == (long *)0x0) || (plVar31 = (long *)*plVar31, plVar31 == (long *)0x0))
          goto LAB_01f1b88c;
          if (uVar28 < 2) {
            do {
              if (plVar31[1] == 0xeb3fbf251277e21a) {
                if (plVar31[2] == -0x14c040daed881de6) goto LAB_01f1b508;
              }
              else if ((plVar31[1] & uVar22 - 1) != uVar29) break;
              plVar31 = (long *)*plVar31;
            } while (plVar31 != (long *)0x0);
            goto LAB_01f1b88c;
          }
          while( true ) {
            uVar28 = plVar31[1];
            if (uVar28 != 0xeb3fbf251277e21a) {
              if (uVar22 <= uVar28) {
                uVar10 = 0;
                if (uVar22 != 0) {
                  uVar10 = uVar28 / uVar22;
                }
                uVar28 = uVar28 - uVar10 * uVar22;
              }
              if (uVar28 == uVar29) goto LAB_01f1b5fc;
              goto LAB_01f1b88c;
            }
            if (plVar31[2] == -0x14c040daed881de6) break;
LAB_01f1b5fc:
            plVar31 = (long *)*plVar31;
            if (plVar31 == (long *)0x0) goto LAB_01f1b88c;
          }
LAB_01f1b508:
          plVar31 = (long *)plVar31[3];
          if (plVar31 == (long *)0x0) goto LAB_01f1b88c;
          plVar2 = plVar31 + 10;
          do {
            cVar8 = '\x01';
            bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar9) {
              *(int *)plVar2 = (int)*plVar2 + 1;
              cVar8 = ExclusiveMonitorsStatus();
            }
          } while (cVar8 != '\0');
          uVar22 = plVar31[0x14];
          if (uVar22 == 0) {
            iVar21 = 0;
          }
          else {
            uVar28 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
            uVar28 = (uVar28 & 0x3333333333333333) + (uVar28 >> 2 & 0x3333333333333333);
            uVar28 = (uVar28 + (uVar28 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar28 < 2) {
              uVar29 = uVar22 - 1 & 0x46b50d4e0d763f6;
            }
            else if (uVar22 < 0x46b50d4e0d763f7) {
              uVar29 = 0;
              if (uVar22 != 0) {
                uVar29 = 0x46b50d4e0d763f6 / uVar22;
              }
              uVar29 = 0x46b50d4e0d763f6 - uVar29 * uVar22;
            }
            else {
              uVar29 = 0x46b50d4e0d763f6;
            }
            plVar32 = *(long **)(plVar31[0x13] + uVar29 * 8);
            if (plVar32 == (long *)0x0) {
              iVar21 = 0;
            }
            else {
              plVar32 = (long *)*plVar32;
              if (plVar32 == (long *)0x0) {
                iVar21 = 0;
              }
              else if (uVar28 < 2) {
                do {
                  if (plVar32[1] == 0x46b50d4e0d763f6) {
                    if (plVar32[2] == 0x46b50d4e0d763f6) goto LAB_01f1b650;
                  }
                  else if ((plVar32[1] & uVar22 - 1) != uVar29) {
                    iVar21 = 0;
                    break;
                  }
                  plVar32 = (long *)*plVar32;
                  iVar21 = 0;
                } while (plVar32 != (long *)0x0);
              }
              else {
                do {
                  uVar28 = plVar32[1];
                  if (uVar28 != 0x46b50d4e0d763f6) {
                    if (uVar22 <= uVar28) {
                      uVar10 = 0;
                      if (uVar22 != 0) {
                        uVar10 = uVar28 / uVar22;
                      }
                      uVar28 = uVar28 - uVar10 * uVar22;
                    }
                    if (uVar28 == uVar29) goto LAB_01f1b5d4;
                    iVar21 = 0;
                    goto LAB_01f1b654;
                  }
                  if (plVar32[2] == 0x46b50d4e0d763f6) goto LAB_01f1b650;
LAB_01f1b5d4:
                  plVar32 = (long *)*plVar32;
                } while (plVar32 != (long *)0x0);
                iVar21 = 0;
              }
            }
          }
          goto LAB_01f1b654;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar21 = iVar20;
      if (iVar20 == 0) goto LAB_01f1a45c;
      goto LAB_01f1b40c;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar21 = iVar20;
  if (iVar20 == 0) {
    return;
  }
  goto LAB_01f1a38c;
LAB_01f1b650:
  iVar21 = (int)plVar32[6];
LAB_01f1b654:
  do {
    iVar20 = (int)*plVar2 + -1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar9) {
      *(int *)plVar2 = iVar20;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar31 + 0x10))();
  }
  if (0 < iVar21) {
    fVar53 = 1.0 / (float)iVar21;
  }
  goto LAB_01f1b67c;
}


