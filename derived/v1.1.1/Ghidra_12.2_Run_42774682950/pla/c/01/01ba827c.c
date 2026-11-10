/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba827c; name: FUN_01ba827c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ba827c(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 undefined1 param_4 [16],long *param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined3 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  float fVar20;
  float fVar21;
  float extraout_s0;
  float fVar22;
  float extraout_var;
  float extraout_var_00;
  float fVar25;
  float fVar26;
  float extraout_var_01;
  float fVar27;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 uVar28;
  undefined1 uVar29;
  byte bVar30;
  undefined1 uVar31;
  byte bVar32;
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
  undefined1 uVar45;
  undefined7 uVar46;
  undefined1 auVar47 [12];
  byte bVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar52;
  int iVar53;
  float fVar54;
  float fVar63;
  int iVar65;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  int iVar64;
  int iVar66;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  int iVar73;
  undefined8 uVar67;
  int iVar74;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  float fVar82;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined8 uVar83;
  undefined8 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  
  uVar67 = param_4._8_8_;
  uVar83 = param_4._0_8_;
  fVar21 = param_3._12_4_;
  fVar26 = param_3._8_4_;
  fVar25 = param_3._4_4_;
  fVar22 = param_3._0_4_;
  uVar44 = param_2[0xf];
  uVar42 = param_2[0xe];
  uVar40 = param_2[0xd];
  uVar39 = param_2[0xc];
  uVar37 = param_2[0xb];
  uVar35 = param_2[10];
  uVar34 = param_2[9];
  uVar45 = param_2[8];
  uVar43 = param_2[7];
  uVar41 = param_2[6];
  uVar38 = param_2[5];
  uVar36 = param_2[4];
  uVar33 = param_2[3];
  uVar31 = param_2[2];
  uVar29 = param_2[1];
  uVar28 = param_2[0];
  if (*param_5 == 0) {
    return;
  }
  lVar16 = nn::os::GetCurrentThread();
  plVar19 = param_5 + 4;
  do {
    if (*plVar19 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)((long)param_5 + 0x14));
        while (*plVar19 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar3) {
            *plVar19 = lVar16;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_01ba82f0;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar19,0x10);
    if (bVar3) {
      *plVar19 = lVar16;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_01ba82f0:
  puVar10 = PTR_DAT_043794b0;
  if (param_5[1] != 0) {
    *(undefined1 *)(param_5[1] + 0x44) = 1;
    puVar15 = PTR_DAT_043794d8;
    puVar14 = PTR_DAT_043794d0;
    puVar13 = PTR_DAT_043794c8;
    puVar12 = PTR_DAT_043794c0;
    puVar11 = PTR_DAT_043794b8;
    lVar16 = *(long *)(*param_5 + 0x1a8);
    piVar1 = (int *)(lVar16 + 0xc);
    iVar53 = *(int *)(lVar16 + 0xc);
    do {
      while( true ) {
        plVar19 = *(long **)(lVar16 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar64 = __cxa_guard_acquire(puVar10), iVar64 != 0)) {
          if (((*puVar12 & 1) == 0) && (iVar64 = __cxa_guard_acquire(puVar12), iVar64 != 0)) {
            if (((*puVar14 & 1) == 0) && (iVar64 = __cxa_guard_acquire(puVar14), iVar64 != 0)) {
              uVar84 = FUN_0087f8f0();
              *(undefined8 *)puVar15 = uVar84;
              __cxa_guard_release(puVar14);
            }
            *(undefined **)puVar13 = puVar15;
            __cxa_guard_release(puVar12);
          }
          *(undefined **)puVar11 = puVar13;
          __cxa_guard_release(puVar10);
        }
        for (; plVar19 != (long *)puVar11; plVar19 = (long *)*plVar19) {
        }
        iVar64 = *piVar1;
        if (iVar64 == iVar53) break;
        ClearExclusiveLocal();
        iVar53 = iVar64;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar53 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar53 = iVar64;
    } while (cVar2 != '\0');
    lVar16 = *(long *)(lVar16 + 0x18);
    plVar19 = (long *)0x0;
    if (lVar16 != 0) {
      plVar19 = (long *)(lVar16 + -0x50);
    }
    (**(code **)(*plVar19 + 0x40))(plVar19);
    puVar17 = (undefined8 *)param_5[1];
    puVar17[1] = uVar67;
    *puVar17 = uVar83;
    if (lVar16 != 0) {
      lVar16 = plVar19[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar53 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar53 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar53 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
    lVar16 = *(long *)(*param_5 + 0x1a8);
    piVar1 = (int *)(lVar16 + 0xc);
    iVar53 = *(int *)(lVar16 + 0xc);
    do {
      while( true ) {
        plVar19 = *(long **)(lVar16 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar64 = __cxa_guard_acquire(puVar10), iVar64 != 0)) {
          if (((*puVar12 & 1) == 0) && (iVar64 = __cxa_guard_acquire(puVar12), iVar64 != 0)) {
            if (((*puVar14 & 1) == 0) && (iVar64 = __cxa_guard_acquire(puVar14), iVar64 != 0)) {
              uVar83 = FUN_0087f8f0();
              *(undefined8 *)puVar15 = uVar83;
              __cxa_guard_release(puVar14);
            }
            *(undefined **)puVar13 = puVar15;
            __cxa_guard_release(puVar12);
          }
          *(undefined **)puVar11 = puVar13;
          __cxa_guard_release(puVar10);
        }
        for (; plVar19 != (long *)puVar11; plVar19 = (long *)*plVar19) {
        }
        iVar64 = *piVar1;
        if (iVar64 == iVar53) break;
        ClearExclusiveLocal();
        iVar53 = iVar64;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar53 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      iVar53 = iVar64;
    } while (cVar2 != '\0');
    lVar16 = *(long *)(lVar16 + 0x18);
    plVar19 = (long *)0x0;
    if (lVar16 != 0) {
      plVar19 = (long *)(lVar16 + -0x50);
    }
    (**(code **)(*plVar19 + 0x40))(plVar19);
    auVar55._0_4_ = extraout_s0 * extraout_s0;
    auVar55._4_4_ = extraout_var * extraout_var;
    auVar55._8_4_ = extraout_var_00 * extraout_var_00;
    auVar55._12_4_ = extraout_var_01 * extraout_var_01;
    auVar68 = NEON_ext(auVar55,auVar55,8,1);
    fVar52 = auVar68._0_4_ + auVar55._0_4_;
    fVar63 = auVar68._4_4_ + auVar55._4_4_;
    fVar20 = fVar52 + fVar63;
    fVar52 = fVar52 + fVar63;
    auVar56._8_8_ = CONCAT44(fVar52,fVar20);
    auVar56._0_8_ = CONCAT44(fVar52,fVar20);
    auVar68 = NEON_frsqrte(auVar56,4);
    auVar75._0_4_ = auVar68._0_4_ * fVar20;
    auVar75._4_4_ = auVar68._4_4_ * fVar52;
    auVar75._8_4_ = auVar68._8_4_ * fVar20;
    auVar75._12_4_ = auVar68._12_4_ * fVar52;
    auVar76 = NEON_frsqrts(auVar68,auVar75,4);
    auVar69._0_4_ = auVar68._0_4_ * auVar76._0_4_;
    auVar69._4_4_ = auVar68._4_4_ * auVar76._4_4_;
    auVar69._8_4_ = auVar68._8_4_ * auVar76._8_4_;
    auVar69._12_4_ = auVar68._12_4_ * auVar76._12_4_;
    auVar77._0_4_ = fVar20 * auVar69._0_4_;
    auVar77._4_4_ = fVar52 * auVar69._4_4_;
    auVar77._8_4_ = fVar20 * auVar69._8_4_;
    auVar77._12_4_ = fVar52 * auVar69._12_4_;
    iVar53 = -(uint)(fVar20 == 0.0);
    iVar64 = -(uint)(fVar52 == 0.0);
    iVar65 = -(uint)(fVar20 == 0.0);
    iVar66 = -(uint)(fVar52 == 0.0);
    auVar68 = NEON_frsqrts(auVar69,auVar77,4);
    fVar20 = extraout_s0 * auVar69._0_4_ * auVar68._0_4_;
    fVar52 = extraout_var * auVar69._4_4_ * auVar68._4_4_;
    fVar63 = extraout_var_00 * auVar69._8_4_ * auVar68._8_4_;
    fVar27 = extraout_var_01 * auVar69._12_4_ * auVar68._12_4_;
    fVar54 = (float)CONCAT13((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                             CONCAT12((byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                                      CONCAT11((byte)((uint)fVar20 >> 8) &
                                               ~(byte)((uint)iVar53 >> 8),
                                               SUB41(fVar20,0) & ~(byte)iVar53)));
    auVar57._0_8_ =
         CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                  CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                           CONCAT15((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                    CONCAT14(SUB41(fVar52,0) & ~(byte)iVar64,fVar54))));
    auVar57[8] = SUB41(fVar63,0) & ~(byte)iVar65;
    auVar57[9] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar65 >> 8);
    auVar57[10] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
    auVar57[0xb] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
    auVar57[0xc] = SUB41(fVar27,0) & ~(byte)iVar66;
    auVar57[0xd] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar66 >> 8);
    auVar57[0xe] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
    auVar57[0xf] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
    auVar70._0_4_ =
         (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar28))) *
         (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar28)));
    auVar70._4_4_ =
         (float)CONCAT13(uVar43,CONCAT12(uVar41,CONCAT11(uVar38,uVar36))) *
         (float)CONCAT13(uVar43,CONCAT12(uVar41,CONCAT11(uVar38,uVar36)));
    auVar70._8_4_ =
         (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar34,uVar45))) *
         (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar34,uVar45)));
    auVar70._12_4_ =
         (float)CONCAT13(uVar44,CONCAT12(uVar42,CONCAT11(uVar40,uVar39))) *
         (float)CONCAT13(uVar44,CONCAT12(uVar42,CONCAT11(uVar40,uVar39)));
    auVar68 = NEON_ext(auVar70,auVar70,8,1);
    fVar52 = auVar68._0_4_ + auVar70._0_4_;
    fVar63 = auVar68._4_4_ + auVar70._4_4_;
    fVar20 = fVar52 + fVar63;
    fVar52 = fVar52 + fVar63;
    auVar71._8_8_ = CONCAT44(fVar52,fVar20);
    auVar71._0_8_ = CONCAT44(fVar52,fVar20);
    auVar68 = NEON_frsqrte(auVar71,4);
    auVar85._0_4_ = auVar68._0_4_ * fVar20;
    auVar85._4_4_ = auVar68._4_4_ * fVar52;
    auVar85._8_4_ = auVar68._8_4_ * fVar20;
    auVar85._12_4_ = auVar68._12_4_ * fVar52;
    auVar76 = NEON_frsqrts(auVar68,auVar85,4);
    auVar78._0_4_ = auVar68._0_4_ * auVar76._0_4_;
    auVar78._4_4_ = auVar68._4_4_ * auVar76._4_4_;
    auVar78._8_4_ = auVar68._8_4_ * auVar76._8_4_;
    auVar78._12_4_ = auVar68._12_4_ * auVar76._12_4_;
    auVar86._0_4_ = fVar20 * auVar78._0_4_;
    auVar86._4_4_ = fVar52 * auVar78._4_4_;
    auVar86._8_4_ = fVar20 * auVar78._8_4_;
    auVar86._12_4_ = fVar52 * auVar78._12_4_;
    iVar66 = -(uint)(fVar20 == 0.0);
    iVar73 = -(uint)(fVar52 == 0.0);
    iVar74 = -(uint)(fVar20 == 0.0);
    auVar68 = NEON_frsqrts(auVar78,auVar86,4);
    fVar20 = (float)CONCAT13(uVar33,CONCAT12(uVar31,CONCAT11(uVar29,uVar28))) *
             auVar78._0_4_ * auVar68._0_4_;
    fVar52 = (float)CONCAT13(uVar43,CONCAT12(uVar41,CONCAT11(uVar38,uVar36))) *
             auVar78._4_4_ * auVar68._4_4_;
    fVar63 = (float)CONCAT13(uVar37,CONCAT12(uVar35,CONCAT11(uVar34,uVar45))) *
             auVar78._8_4_ * auVar68._8_4_;
    bVar30 = (byte)((uint)fVar20 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
    bVar32 = (byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
    auVar79._0_4_ = fVar22 * fVar22;
    auVar79._4_4_ = fVar25 * fVar25;
    auVar79._8_4_ = fVar26 * fVar26;
    auVar79._12_4_ = fVar21 * fVar21;
    auVar68 = NEON_ext(auVar79,auVar79,8,1);
    fVar27 = auVar68._0_4_ + auVar79._0_4_;
    fVar82 = auVar68._4_4_ + auVar79._4_4_;
    fVar21 = fVar27 + fVar82;
    fVar27 = fVar27 + fVar82;
    auVar80._8_8_ = CONCAT44(fVar27,fVar21);
    auVar80._0_8_ = CONCAT44(fVar27,fVar21);
    auVar68 = NEON_frsqrte(auVar80,4);
    auVar90._0_4_ = auVar68._0_4_ * fVar21;
    auVar90._4_4_ = auVar68._4_4_ * fVar27;
    auVar90._8_4_ = auVar68._8_4_ * fVar21;
    auVar90._12_4_ = auVar68._12_4_ * fVar27;
    auVar76 = NEON_frsqrts(auVar68,auVar90,4);
    auVar87._0_4_ = auVar68._0_4_ * auVar76._0_4_;
    auVar87._4_4_ = auVar68._4_4_ * auVar76._4_4_;
    auVar87._8_4_ = auVar68._8_4_ * auVar76._8_4_;
    auVar87._12_4_ = auVar68._12_4_ * auVar76._12_4_;
    auVar91._0_4_ = fVar21 * auVar87._0_4_;
    auVar91._4_4_ = fVar27 * auVar87._4_4_;
    auVar91._8_4_ = fVar21 * auVar87._8_4_;
    auVar91._12_4_ = fVar27 * auVar87._12_4_;
    auVar68 = NEON_frsqrts(auVar87,auVar91,4);
    fVar22 = fVar22 * auVar87._0_4_ * auVar68._0_4_;
    fVar25 = fVar25 * auVar87._4_4_ * auVar68._4_4_;
    fVar26 = fVar26 * auVar87._8_4_ * auVar68._8_4_;
    iVar53 = -(uint)(fVar21 == 0.0);
    iVar64 = -(uint)(fVar27 == 0.0);
    iVar65 = -(uint)(fVar21 == 0.0);
    uVar46 = CONCAT16((byte)((uint)fVar25 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                      CONCAT15((byte)((uint)fVar25 >> 8) & ~(byte)((uint)iVar64 >> 8),
                               CONCAT14(SUB41(fVar25,0) & ~(byte)iVar64,
                                        CONCAT13((byte)((uint)fVar22 >> 0x18) &
                                                 ~(byte)((uint)iVar53 >> 0x18),
                                                 CONCAT12((byte)((uint)fVar22 >> 0x10) &
                                                          ~(byte)((uint)iVar53 >> 0x10),
                                                          CONCAT11((byte)((uint)fVar22 >> 8) &
                                                                   ~(byte)((uint)iVar53 >> 8),
                                                                   SUB41(fVar22,0) & ~(byte)iVar53))
                                                ))));
    bVar51 = (byte)((uint)fVar25 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
    auVar47._0_8_ = CONCAT17(bVar51,uVar46);
    auVar47[8] = SUB41(fVar26,0) & ~(byte)iVar65;
    auVar47[9] = (byte)((uint)fVar26 >> 8) & ~(byte)((uint)iVar65 >> 8);
    auVar47[10] = (byte)((uint)fVar26 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
    auVar47[0xb] = (byte)((uint)fVar26 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
    uVar83 = NEON_ext(auVar57._0_8_,auVar47._0_8_,4,1);
    auVar68 = NEON_ext(auVar57,auVar57,8,1);
    fVar22 = (float)CONCAT13((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar73 >> 0x18),
                             CONCAT12((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar73 >> 0x10),
                                      CONCAT11((byte)((uint)fVar52 >> 8) &
                                               ~(byte)((uint)iVar73 >> 8),
                                               SUB41(fVar52,0) & ~(byte)iVar73)));
    fVar52 = auVar47._8_4_;
    auVar76 = NEON_fmov(0x3f800000,4);
    fVar25 = (float)_DAT_03889820 * fVar54 + (float)_DAT_0388a450 * fVar22 +
             (float)_DAT_03889eb0 * fVar52 + auVar76._0_4_;
    fVar26 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar54 +
             (float)((ulong)_DAT_0388a450 >> 0x20) * fVar22 +
             (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar52 + auVar76._4_4_;
    fVar21 = (float)_UNK_03889828 * fVar54 + (float)_UNK_0388a458 * fVar22 +
             (float)_UNK_03889eb8 * fVar52 + auVar76._8_4_;
    fVar52 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar54 +
             (float)((ulong)_UNK_0388a458 >> 0x20) * fVar22 +
             (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar52 + auVar76._12_4_;
    fVar22 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar74 >> 0x18),
                             CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar74 >> 0x10),
                                      CONCAT11((byte)((uint)fVar63 >> 8) &
                                               ~(byte)((uint)iVar74 >> 8),
                                               SUB41(fVar63,0) & ~(byte)iVar74)));
    uVar4 = CONCAT11((byte)((uint)fVar20 >> 8) & ~(byte)((uint)iVar66 >> 8),
                     SUB41(fVar20,0) & ~(byte)iVar66);
    auVar48._0_4_ = (float)uVar83 + (float)CONCAT13(bVar32,CONCAT12(bVar30,uVar4));
    fVar20 = (float)((ulong)uVar83 >> 0x20);
    auVar48._4_4_ = fVar20 + auVar68._0_4_;
    uVar8 = (undefined3)((uint7)uVar46 >> 0x20);
    auVar48._8_4_ = fVar22 + (float)CONCAT13(bVar51,uVar8);
    auVar48._12_4_ = 0;
    auVar58._0_4_ = (float)uVar83 - (float)CONCAT13(bVar32,CONCAT12(bVar30,uVar4));
    auVar58._4_4_ = fVar20 - auVar68._0_4_;
    auVar58._8_4_ = fVar22 - (float)CONCAT13(bVar51,uVar8);
    auVar58._12_4_ = 0;
    uVar9 = a64_TBL(ZEXT816(0),auVar48,auVar58,DAT_0388a888);
    uVar83 = a64_TBL(ZEXT816(0),auVar48,auVar58,DAT_0388a710);
    auVar81._8_8_ = uVar83;
    auVar81._0_8_ = uVar9 & 0xffffffff00000000;
    uVar67 = a64_TBL(ZEXT816(0),auVar48,auVar58,DAT_0388a758);
    auVar93._4_12_ = auVar81._4_12_;
    auVar93._0_4_ = fVar25;
    auVar72._0_8_ = a64_TBL(ZEXT816(0),auVar48,auVar58,DAT_0388a880);
    uVar84 = a64_TBL(ZEXT816(0),auVar48,auVar58,DAT_0388a640);
    lVar18 = param_5[1];
    auVar88._0_8_ = a64_TBL(ZEXT816(0),auVar48,auVar58,DAT_0388a700);
    uVar83 = a64_TBL(ZEXT816(0),auVar48,auVar58,DAT_0388a590);
    auVar59._4_4_ = fVar26;
    auVar59._0_4_ = fVar26;
    auVar59._8_4_ = fVar26;
    auVar59._12_4_ = fVar26;
    auVar72._12_4_ = (undefined4)((ulong)uVar84 >> 0x20);
    auVar72._8_4_ = fVar21;
    auVar88._8_8_ = uVar83;
    auVar95._4_4_ = fVar25;
    auVar95._0_4_ = fVar25;
    auVar95._8_4_ = fVar25;
    auVar95._12_4_ = fVar25;
    auVar92._0_8_ = CONCAT44(-(uint)(fVar25 <= fVar26),-(uint)(fVar25 <= fVar26));
    auVar92._8_4_ = -(uint)(fVar25 <= fVar26);
    auVar92._12_4_ = -(uint)(fVar25 <= fVar26);
    auVar94._8_8_ = auVar92._8_8_;
    auVar94._0_8_ = auVar92._0_8_;
    auVar68[4] = SUB41(fVar26,0);
    auVar68._0_4_ = (int)uVar9;
    auVar68[5] = (char)((uint)fVar26 >> 8);
    auVar68[6] = (char)((uint)fVar26 >> 0x10);
    auVar68[7] = (char)((uint)fVar26 >> 0x18);
    auVar68[8] = (char)uVar67;
    auVar68[9] = (char)((ulong)uVar67 >> 8);
    auVar68[10] = (char)((ulong)uVar67 >> 0x10);
    auVar68[0xb] = (char)((ulong)uVar67 >> 0x18);
    auVar68[0xc] = (char)((ulong)uVar67 >> 0x20);
    auVar68[0xd] = (char)((ulong)uVar67 >> 0x28);
    auVar68[0xe] = (char)((ulong)uVar67 >> 0x30);
    auVar68[0xf] = (char)((ulong)uVar67 >> 0x38);
    auVar93 = auVar93 ^ (auVar93 ^ auVar68) & auVar92;
    uVar28 = SUB41(fVar21,0);
    uVar29 = (undefined1)((uint)fVar21 >> 8);
    uVar31 = (undefined1)((uint)fVar21 >> 0x10);
    uVar33 = (undefined1)((uint)fVar21 >> 0x18);
    auVar89._0_12_ = auVar88._0_12_;
    auVar89._12_4_ = fVar52;
    auVar95 = auVar95 ^ (auVar95 ^ auVar59) & auVar94;
    auVar49._0_8_ = CONCAT44(-(uint)(auVar95._4_4_ <= fVar21),-(uint)(auVar95._0_4_ <= fVar21));
    auVar49._8_4_ = -(uint)(auVar95._8_4_ <= fVar21);
    auVar49._12_4_ = -(uint)(auVar95._12_4_ <= fVar21);
    auVar60._8_8_ = auVar49._8_8_;
    auVar60._0_8_ = auVar49._0_8_;
    auVar93 = auVar93 ^ (auVar93 ^ auVar72) & auVar49;
    auVar76[4] = uVar28;
    auVar76._0_4_ = fVar21;
    auVar76[5] = uVar29;
    auVar76[6] = uVar31;
    auVar76[7] = uVar33;
    auVar76[8] = uVar28;
    auVar76[9] = uVar29;
    auVar76[10] = uVar31;
    auVar76[0xb] = uVar33;
    auVar76[0xc] = uVar28;
    auVar76[0xd] = uVar29;
    auVar76[0xe] = uVar31;
    auVar76[0xf] = uVar33;
    auVar95 = auVar95 ^ (auVar95 ^ auVar76) & auVar60;
    auVar23._0_4_ = -(uint)(auVar95._0_4_ <= fVar52);
    auVar23._4_4_ = -(uint)(auVar95._4_4_ <= fVar52);
    auVar23._8_4_ = -(uint)(auVar95._8_4_ <= fVar52);
    auVar23._12_4_ = -(uint)(auVar95._12_4_ <= fVar52);
    auVar93 = auVar93 ^ (auVar93 ^ auVar89) & auVar23;
    fVar20 = auVar93._0_4_;
    fVar22 = fVar20 * fVar20;
    fVar52 = auVar93._4_4_;
    fVar25 = fVar52 * fVar52;
    uVar28 = (undefined1)((uint)fVar25 >> 8);
    uVar29 = (undefined1)((uint)fVar25 >> 0x10);
    uVar31 = (undefined1)((uint)fVar25 >> 0x18);
    fVar63 = auVar93._8_4_;
    fVar26 = fVar63 * fVar63;
    uVar33 = (undefined1)((uint)fVar26 >> 8);
    uVar36 = (undefined1)((uint)fVar26 >> 0x10);
    uVar38 = (undefined1)((uint)fVar26 >> 0x18);
    fVar27 = auVar93._12_4_;
    fVar21 = fVar27 * fVar27;
    uVar41 = (undefined1)((uint)fVar21 >> 8);
    uVar43 = (undefined1)((uint)fVar21 >> 0x10);
    uVar45 = (undefined1)((uint)fVar21 >> 0x18);
    auVar5[4] = SUB41(fVar25,0);
    auVar5._0_4_ = fVar22;
    auVar5[5] = uVar28;
    auVar5[6] = uVar29;
    auVar5[7] = uVar31;
    auVar5[8] = SUB41(fVar26,0);
    auVar5[9] = uVar33;
    auVar5[10] = uVar36;
    auVar5[0xb] = uVar38;
    auVar5[0xc] = SUB41(fVar21,0);
    auVar5[0xd] = uVar41;
    auVar5[0xe] = uVar43;
    auVar5[0xf] = uVar45;
    auVar6[4] = SUB41(fVar25,0);
    auVar6._0_4_ = fVar22;
    auVar6[5] = uVar28;
    auVar6[6] = uVar29;
    auVar6[7] = uVar31;
    auVar6[8] = SUB41(fVar26,0);
    auVar6[9] = uVar33;
    auVar6[10] = uVar36;
    auVar6[0xb] = uVar38;
    auVar6[0xc] = SUB41(fVar21,0);
    auVar6[0xd] = uVar41;
    auVar6[0xe] = uVar43;
    auVar6[0xf] = uVar45;
    auVar68 = NEON_ext(auVar5,auVar6,8,1);
    fVar22 = auVar68._0_4_ + fVar22;
    fVar25 = auVar68._4_4_ + fVar25;
    fVar26 = fVar22 + fVar25;
    fVar22 = fVar22 + fVar25;
    uVar28 = SUB41(fVar22,0);
    uVar29 = (undefined1)((uint)fVar22 >> 8);
    uVar31 = (undefined1)((uint)fVar22 >> 0x10);
    uVar33 = (undefined1)((uint)fVar22 >> 0x18);
    auVar7[4] = uVar28;
    auVar7._0_4_ = fVar26;
    auVar7[5] = uVar29;
    auVar7[6] = uVar31;
    auVar7[7] = uVar33;
    auVar7[8] = SUB41(fVar26,0);
    auVar7[9] = (char)((uint)fVar26 >> 8);
    auVar7[10] = (char)((uint)fVar26 >> 0x10);
    auVar7[0xb] = (char)((uint)fVar26 >> 0x18);
    auVar7[0xc] = uVar28;
    auVar7[0xd] = uVar29;
    auVar7[0xe] = uVar31;
    auVar7[0xf] = uVar33;
    auVar68 = NEON_frsqrte(auVar7,4);
    auVar61._0_4_ = auVar68._0_4_ * fVar26;
    auVar61._4_4_ = auVar68._4_4_ * fVar22;
    auVar61._8_4_ = auVar68._8_4_ * fVar26;
    uVar4 = (undefined2)(CONCAT15(uVar29,CONCAT14(uVar28,fVar26)) >> 0x20);
    auVar61._12_4_ = auVar68._12_4_ * (float)CONCAT13(uVar33,CONCAT12(uVar31,uVar4));
    auVar76 = NEON_frsqrts(auVar68,auVar61,4);
    auVar50._0_4_ = auVar68._0_4_ * auVar76._0_4_;
    auVar50._4_4_ = auVar68._4_4_ * auVar76._4_4_;
    auVar50._8_4_ = auVar68._8_4_ * auVar76._8_4_;
    auVar50._12_4_ = auVar68._12_4_ * auVar76._12_4_;
    auVar62._0_4_ = fVar26 * auVar50._0_4_;
    auVar62._4_4_ = fVar22 * auVar50._4_4_;
    auVar62._8_4_ = fVar26 * auVar50._8_4_;
    auVar62._12_4_ = (float)CONCAT13(uVar33,CONCAT12(uVar31,uVar4)) * auVar50._12_4_;
    iVar53 = -(uint)(fVar26 == 0.0);
    iVar64 = -(uint)(fVar22 == 0.0);
    iVar65 = -(uint)(fVar26 == 0.0);
    iVar66 = -(uint)((float)CONCAT13(uVar33,CONCAT12(uVar31,uVar4)) == 0.0);
    auVar68 = NEON_frsqrts(auVar50,auVar62,4);
    fVar20 = auVar50._0_4_ * auVar68._0_4_ * fVar20;
    fVar52 = auVar50._4_4_ * auVar68._4_4_ * fVar52;
    fVar63 = auVar50._8_4_ * auVar68._8_4_ * fVar63;
    fVar27 = auVar50._12_4_ * auVar68._12_4_ * fVar27;
    auVar24._0_8_ =
         CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                  CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10),
                           CONCAT15((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar64 >> 8),
                                    CONCAT14(SUB41(fVar52,0) & ~(byte)iVar64,
                                             CONCAT13((byte)((uint)fVar20 >> 0x18) &
                                                      ~(byte)((uint)iVar53 >> 0x18),
                                                      CONCAT12((byte)((uint)fVar20 >> 0x10) &
                                                               ~(byte)((uint)iVar53 >> 0x10),
                                                               CONCAT11((byte)((uint)fVar20 >> 8) &
                                                                        ~(byte)((uint)iVar53 >> 8),
                                                                        SUB41(fVar20,0) &
                                                                        ~(byte)iVar53)))))));
    auVar24[8] = SUB41(fVar63,0) & ~(byte)iVar65;
    auVar24[9] = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar65 >> 8);
    auVar24[10] = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar65 >> 0x10);
    auVar24[0xb] = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar65 >> 0x18);
    auVar24[0xc] = SUB41(fVar27,0) & ~(byte)iVar66;
    auVar24[0xd] = (byte)((uint)fVar27 >> 8) & ~(byte)((uint)iVar66 >> 8);
    auVar24[0xe] = (byte)((uint)fVar27 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10);
    auVar24[0xf] = (byte)((uint)fVar27 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18);
    *(long *)(lVar18 + 0x18) = auVar24._8_8_;
    *(undefined8 *)(lVar18 + 0x10) = auVar24._0_8_;
    if (lVar16 != 0) {
      lVar16 = plVar19[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar53 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar53 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar53 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
    *(undefined4 *)(param_5[1] + 0x28) = *(undefined4 *)(*param_5 + 0x7f8);
    *(undefined4 *)(param_5[1] + 0x2c) = *(undefined4 *)(*param_5 + 0x7fc);
    *(undefined4 *)(param_5[1] + 0x30) = *(undefined4 *)(*param_5 + 0x800);
    *(undefined4 *)(param_5[1] + 0x34) = *(undefined4 *)(*param_5 + 0x898);
    *(undefined4 *)(param_5[1] + 0x38) = *(undefined4 *)(*param_5 + 0x88c);
    *(undefined4 *)(param_5[1] + 0x3c) = *(undefined4 *)(*param_5 + 0x8a4);
    *(undefined1 *)(param_5[1] + 0x40) = *(undefined1 *)(*param_5 + 0x95f);
    *(undefined1 *)(param_5[1] + 0x41) = *(undefined1 *)(*param_5 + 0x955);
  }
  param_5[4] = 0;
  nn::os::SignalLightEvent((LightEventType *)((long)param_5 + 0x14));
  return;
}


