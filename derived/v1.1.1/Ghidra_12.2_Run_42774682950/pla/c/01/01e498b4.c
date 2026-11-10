/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e498b4; name: FUN_01e498b4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01e498b4(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
                 long param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined3 uVar14;
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  int iVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long *plVar29;
  float fVar30;
  float fVar31;
  float extraout_s0;
  undefined1 auVar33 [12];
  float extraout_var;
  float fVar32;
  float fVar40;
  float extraout_var_00;
  float fVar41;
  float extraout_var_01;
  float fVar42;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  byte bVar46;
  undefined1 uVar47;
  byte bVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  undefined1 uVar55;
  undefined1 uVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined7 uVar61;
  undefined1 auVar62 [12];
  byte bVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar67;
  int iVar68;
  float fVar69;
  float fVar80;
  int iVar81;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  int iVar82;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  int iVar91;
  undefined8 uVar83;
  int iVar92;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar102;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined8 uVar103;
  undefined8 uVar104;
  undefined8 uVar105;
  float fVar111;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined8 uVar112;
  undefined8 uVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined8 uVar120;
  undefined8 uVar121;
  float fVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  long *local_78;
  long *local_68;
  
  puVar23 = PTR_DAT_0437a258;
  puVar22 = PTR_DAT_0437a250;
  puVar21 = PTR_DAT_04379e80;
  puVar20 = PTR_DAT_04379e78;
  puVar19 = PTR_DAT_043795e0;
  puVar18 = PTR_DAT_043795d8;
  puVar17 = PTR_DAT_043794d8;
  puVar16 = PTR_DAT_043794d0;
  fVar31 = param_3._12_4_;
  fVar41 = param_3._8_4_;
  fVar40 = param_3._4_4_;
  fVar32 = param_3._0_4_;
  if (*(int *)(param_4 + 800) == 3) {
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0x80;
    uVar47 = 0x3f;
    uVar49 = 0;
    uVar50 = 0;
    uVar51 = 0;
    uVar52 = 0;
    uVar53 = 0;
    uVar54 = 0;
    uVar55 = 0;
    uVar56 = 0;
    uVar57 = 0;
    uVar58 = 0;
    uVar59 = 0;
    uVar60 = 0;
    if (*(float *)(param_4 + 0x328) <= 1.0) {
      lVar28 = *(long *)(param_4 + 0x300);
      if ((lVar28 != 0) && (*(int *)(lVar28 + 0xc) != 0)) {
        piVar1 = (int *)(lVar28 + 0xc);
        iVar68 = *(int *)(lVar28 + 0xc);
        do {
          plVar29 = *(long **)(lVar28 + 0x10);
          if (((*puVar20 & 1) == 0) && (iVar24 = __cxa_guard_acquire(puVar20), iVar24 != 0)) {
            uVar26 = FUN_0095a420();
            *(undefined8 *)puVar21 = uVar26;
            __cxa_guard_release(puVar20);
          }
          while( true ) {
            if (plVar29 == (long *)0x0) {
              return;
            }
            if (plVar29 == (long *)puVar21) break;
            plVar29 = (long *)*plVar29;
          }
          iVar24 = *piVar1;
          if (iVar24 == iVar68) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar68 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar28 = *(long *)(lVar28 + 0x18);
              if (lVar28 == 0) {
                return;
              }
              lVar27 = *(long *)(lVar28 + 0x1a0);
              if ((lVar27 == 0) || (*(int *)(lVar27 + 0xc) == 0)) goto LAB_01e499f0;
              piVar1 = (int *)(lVar27 + 0xc);
              iVar68 = *(int *)(lVar27 + 0xc);
              goto LAB_01e49a54;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar68 = iVar24;
        } while (iVar24 != 0);
      }
    }
    else {
      lVar28 = *(long *)(param_4 + 0x310);
      if ((lVar28 != 0) && (*(int *)(lVar28 + 0xc) != 0)) {
        piVar1 = (int *)(lVar28 + 0xc);
        iVar68 = *(int *)(lVar28 + 0xc);
        do {
          plVar29 = *(long **)(lVar28 + 0x10);
          if (((*puVar22 & 1) == 0) && (iVar24 = __cxa_guard_acquire(puVar22), iVar24 != 0)) {
            if (((*puVar18 & 1) == 0) && (iVar24 = __cxa_guard_acquire(puVar18), iVar24 != 0)) {
              if (((*puVar16 & 1) == 0) && (iVar24 = __cxa_guard_acquire(puVar16), iVar24 != 0)) {
                uVar26 = FUN_0087f8f0();
                *(undefined8 *)puVar17 = uVar26;
                __cxa_guard_release(puVar16);
              }
              *(undefined **)puVar19 = puVar17;
              __cxa_guard_release(puVar18);
            }
            *(undefined **)puVar23 = puVar19;
            __cxa_guard_release(puVar22);
          }
          while( true ) {
            if (plVar29 == (long *)0x0) {
              return;
            }
            if (plVar29 == (long *)puVar23) break;
            plVar29 = (long *)*plVar29;
          }
          iVar24 = *piVar1;
          if (iVar24 == iVar68) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar68 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar28 = *(long *)(lVar28 + 0x18);
              if (lVar28 == 0) {
                return;
              }
              plVar29 = (long *)(lVar28 + -0x50);
              FUN_01836814(plVar29,0);
              lVar28 = *(long *)(lVar28 + 8);
              piVar1 = (int *)(lVar28 + 0xc);
              do {
                iVar68 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar68 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar68 + -1 == 0) {
                *(undefined8 *)(lVar28 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01e4a024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar29 + 0x20))(plVar29);
                return;
              }
              return;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar68 = iVar24;
        } while (iVar24 != 0);
      }
    }
  }
  return;
LAB_01e49a54:
  plVar29 = *(long **)(lVar27 + 0x10);
  lVar25 = FUN_00a3edb8();
  while( true ) {
    if (plVar29 == (long *)0x0) goto LAB_01e499f0;
    if (plVar29 == (long *)lVar25) break;
    plVar29 = (long *)*plVar29;
  }
  iVar24 = *piVar1;
  if (iVar24 == iVar68) {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar68 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
    if (cVar2 == '\0') {
      lVar27 = *(long *)(lVar27 + 0x18);
      if (lVar27 != 0) {
        plVar29 = (long *)(lVar27 + -0x50);
        FUN_009c69bc(&local_68,plVar29);
        FUN_009c69bc(&local_78,param_4);
        (**(code **)(*local_78 + 0x40))();
        uVar26 = DAT_0388a880;
        auVar70._0_4_ = extraout_s0 * extraout_s0;
        auVar70._4_4_ = extraout_var * extraout_var;
        auVar70._8_4_ = extraout_var_00 * extraout_var_00;
        auVar70._12_4_ = extraout_var_01 * extraout_var_01;
        auVar84 = NEON_ext(auVar70,auVar70,8,1);
        fVar67 = auVar84._0_4_ + auVar70._0_4_;
        fVar80 = auVar84._4_4_ + auVar70._4_4_;
        fVar30 = fVar67 + fVar80;
        fVar67 = fVar67 + fVar80;
        auVar71._8_8_ = CONCAT44(fVar67,fVar30);
        auVar71._0_8_ = CONCAT44(fVar67,fVar30);
        auVar84 = NEON_frsqrte(auVar71,4);
        auVar94._0_4_ = auVar84._0_4_ * fVar30;
        auVar94._4_4_ = auVar84._4_4_ * fVar67;
        auVar94._8_4_ = auVar84._8_4_ * fVar30;
        auVar94._12_4_ = auVar84._12_4_ * fVar67;
        auVar95 = NEON_frsqrts(auVar84,auVar94,4);
        auVar85._0_4_ = auVar84._0_4_ * auVar95._0_4_;
        auVar85._4_4_ = auVar84._4_4_ * auVar95._4_4_;
        auVar85._8_4_ = auVar84._8_4_ * auVar95._8_4_;
        auVar85._12_4_ = auVar84._12_4_ * auVar95._12_4_;
        auVar96._0_4_ = fVar30 * auVar85._0_4_;
        auVar96._4_4_ = fVar67 * auVar85._4_4_;
        auVar96._8_4_ = fVar30 * auVar85._8_4_;
        auVar96._12_4_ = fVar67 * auVar85._12_4_;
        iVar68 = -(uint)(fVar30 == 0.0);
        iVar24 = -(uint)(fVar67 == 0.0);
        iVar81 = -(uint)(fVar30 == 0.0);
        iVar82 = -(uint)(fVar67 == 0.0);
        auVar84 = NEON_frsqrts(auVar85,auVar96,4);
        fVar30 = extraout_s0 * auVar85._0_4_ * auVar84._0_4_;
        fVar67 = extraout_var * auVar85._4_4_ * auVar84._4_4_;
        fVar80 = extraout_var_00 * auVar85._8_4_ * auVar84._8_4_;
        fVar42 = extraout_var_01 * auVar85._12_4_ * auVar84._12_4_;
        fVar69 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                                 CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                          ~(byte)((uint)iVar68 >> 0x10),
                                          CONCAT11((byte)((uint)fVar30 >> 8) &
                                                   ~(byte)((uint)iVar68 >> 8),
                                                   SUB41(fVar30,0) & ~(byte)iVar68)));
        auVar72._0_8_ =
             CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                      CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                               CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                        CONCAT14(SUB41(fVar67,0) & ~(byte)iVar24,fVar69))));
        auVar72[8] = SUB41(fVar80,0) & ~(byte)iVar81;
        auVar72[9] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar81 >> 8);
        auVar72[10] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
        auVar72[0xb] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
        auVar72[0xc] = SUB41(fVar42,0) & ~(byte)iVar82;
        auVar72[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar82 >> 8);
        auVar72[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
        auVar72[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
        auVar86._0_4_ =
             (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) *
             (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
        auVar86._4_4_ =
             (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) *
             (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49)));
        auVar86._8_4_ =
             (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) *
             (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53)));
        auVar86._12_4_ =
             (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57))) *
             (float)CONCAT13(uVar60,CONCAT12(uVar59,CONCAT11(uVar58,uVar57)));
        auVar84 = NEON_ext(auVar86,auVar86,8,1);
        fVar67 = auVar84._0_4_ + auVar86._0_4_;
        fVar80 = auVar84._4_4_ + auVar86._4_4_;
        fVar30 = fVar67 + fVar80;
        fVar67 = fVar67 + fVar80;
        auVar87._8_8_ = CONCAT44(fVar67,fVar30);
        auVar87._0_8_ = CONCAT44(fVar67,fVar30);
        auVar84 = NEON_frsqrte(auVar87,4);
        auVar106._0_4_ = auVar84._0_4_ * fVar30;
        auVar106._4_4_ = auVar84._4_4_ * fVar67;
        auVar106._8_4_ = auVar84._8_4_ * fVar30;
        auVar106._12_4_ = auVar84._12_4_ * fVar67;
        auVar95 = NEON_frsqrts(auVar84,auVar106,4);
        auVar97._0_4_ = auVar84._0_4_ * auVar95._0_4_;
        auVar97._4_4_ = auVar84._4_4_ * auVar95._4_4_;
        auVar97._8_4_ = auVar84._8_4_ * auVar95._8_4_;
        auVar97._12_4_ = auVar84._12_4_ * auVar95._12_4_;
        auVar107._0_4_ = fVar30 * auVar97._0_4_;
        auVar107._4_4_ = fVar67 * auVar97._4_4_;
        auVar107._8_4_ = fVar30 * auVar97._8_4_;
        auVar107._12_4_ = fVar67 * auVar97._12_4_;
        iVar82 = -(uint)(fVar30 == 0.0);
        iVar91 = -(uint)(fVar67 == 0.0);
        iVar92 = -(uint)(fVar30 == 0.0);
        auVar84 = NEON_frsqrts(auVar97,auVar107,4);
        fVar30 = (float)CONCAT13(uVar47,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) *
                 auVar97._0_4_ * auVar84._0_4_;
        fVar67 = (float)CONCAT13(uVar52,CONCAT12(uVar51,CONCAT11(uVar50,uVar49))) *
                 auVar97._4_4_ * auVar84._4_4_;
        fVar80 = (float)CONCAT13(uVar56,CONCAT12(uVar55,CONCAT11(uVar54,uVar53))) *
                 auVar97._8_4_ * auVar84._8_4_;
        bVar46 = (byte)((uint)fVar30 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
        bVar48 = (byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
        auVar98._0_4_ = fVar32 * fVar32;
        auVar98._4_4_ = fVar40 * fVar40;
        auVar98._8_4_ = fVar41 * fVar41;
        auVar98._12_4_ = fVar31 * fVar31;
        auVar84 = NEON_ext(auVar98,auVar98,8,1);
        fVar42 = auVar84._0_4_ + auVar98._0_4_;
        fVar102 = auVar84._4_4_ + auVar98._4_4_;
        fVar31 = fVar42 + fVar102;
        fVar42 = fVar42 + fVar102;
        auVar99._8_8_ = CONCAT44(fVar42,fVar31);
        auVar99._0_8_ = CONCAT44(fVar42,fVar31);
        auVar84 = NEON_frsqrte(auVar99,4);
        auVar114._0_4_ = auVar84._0_4_ * fVar31;
        auVar114._4_4_ = auVar84._4_4_ * fVar42;
        auVar114._8_4_ = auVar84._8_4_ * fVar31;
        auVar114._12_4_ = auVar84._12_4_ * fVar42;
        auVar95 = NEON_frsqrts(auVar84,auVar114,4);
        auVar108._0_4_ = auVar84._0_4_ * auVar95._0_4_;
        auVar108._4_4_ = auVar84._4_4_ * auVar95._4_4_;
        auVar108._8_4_ = auVar84._8_4_ * auVar95._8_4_;
        auVar108._12_4_ = auVar84._12_4_ * auVar95._12_4_;
        auVar115._0_4_ = fVar31 * auVar108._0_4_;
        auVar115._4_4_ = fVar42 * auVar108._4_4_;
        auVar115._8_4_ = fVar31 * auVar108._8_4_;
        auVar115._12_4_ = fVar42 * auVar108._12_4_;
        auVar84 = NEON_frsqrts(auVar108,auVar115,4);
        fVar32 = fVar32 * auVar108._0_4_ * auVar84._0_4_;
        fVar40 = fVar40 * auVar108._4_4_ * auVar84._4_4_;
        fVar41 = fVar41 * auVar108._8_4_ * auVar84._8_4_;
        iVar68 = -(uint)(fVar31 == 0.0);
        iVar24 = -(uint)(fVar42 == 0.0);
        iVar81 = -(uint)(fVar31 == 0.0);
        uVar61 = CONCAT16((byte)((uint)fVar40 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                          CONCAT15((byte)((uint)fVar40 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                   CONCAT14(SUB41(fVar40,0) & ~(byte)iVar24,
                                            CONCAT13((byte)((uint)fVar32 >> 0x18) &
                                                     ~(byte)((uint)iVar68 >> 0x18),
                                                     CONCAT12((byte)((uint)fVar32 >> 0x10) &
                                                              ~(byte)((uint)iVar68 >> 0x10),
                                                              CONCAT11((byte)((uint)fVar32 >> 8) &
                                                                       ~(byte)((uint)iVar68 >> 8),
                                                                       SUB41(fVar32,0) &
                                                                       ~(byte)iVar68))))));
        bVar66 = (byte)((uint)fVar40 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
        auVar62._0_8_ = CONCAT17(bVar66,uVar61);
        auVar62[8] = SUB41(fVar41,0) & ~(byte)iVar81;
        auVar62[9] = (byte)((uint)fVar41 >> 8) & ~(byte)((uint)iVar81 >> 8);
        auVar62[10] = (byte)((uint)fVar41 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
        auVar62[0xb] = (byte)((uint)fVar41 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
        uVar103 = NEON_ext(auVar72._0_8_,auVar62._0_8_,4,1);
        auVar84 = NEON_ext(auVar72,auVar72,8,1);
        fVar32 = (float)CONCAT13((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar91 >> 0x18),
                                 CONCAT12((byte)((uint)fVar67 >> 0x10) &
                                          ~(byte)((uint)iVar91 >> 0x10),
                                          CONCAT11((byte)((uint)fVar67 >> 8) &
                                                   ~(byte)((uint)iVar91 >> 8),
                                                   SUB41(fVar67,0) & ~(byte)iVar91)));
        fVar67 = auVar62._8_4_;
        auVar95 = NEON_fmov(0x3f800000,4);
        fVar40 = (float)_DAT_03889820 * fVar69 + (float)_DAT_0388a450 * fVar32 +
                 (float)_DAT_03889eb0 * fVar67 + auVar95._0_4_;
        fVar41 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar69 +
                 (float)((ulong)_DAT_0388a450 >> 0x20) * fVar32 +
                 (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar67 + auVar95._4_4_;
        fVar31 = (float)_UNK_03889828 * fVar69 + (float)_UNK_0388a458 * fVar32 +
                 (float)_UNK_03889eb8 * fVar67 + auVar95._8_4_;
        fVar67 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar69 +
                 (float)((ulong)_UNK_0388a458 >> 0x20) * fVar32 +
                 (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar67 + auVar95._12_4_;
        fVar32 = (float)CONCAT13((byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar92 >> 0x18),
                                 CONCAT12((byte)((uint)fVar80 >> 0x10) &
                                          ~(byte)((uint)iVar92 >> 0x10),
                                          CONCAT11((byte)((uint)fVar80 >> 8) &
                                                   ~(byte)((uint)iVar92 >> 8),
                                                   SUB41(fVar80,0) & ~(byte)iVar92)));
        uVar4 = CONCAT11((byte)((uint)fVar30 >> 8) & ~(byte)((uint)iVar82 >> 8),
                         SUB41(fVar30,0) & ~(byte)iVar82);
        auVar63._0_4_ = (float)uVar103 + (float)CONCAT13(bVar48,CONCAT12(bVar46,uVar4));
        fVar30 = (float)((ulong)uVar103 >> 0x20);
        auVar63._4_4_ = fVar30 + auVar84._0_4_;
        uVar14 = (undefined3)((uint7)uVar61 >> 0x20);
        auVar63._8_4_ = fVar32 + (float)CONCAT13(bVar66,uVar14);
        auVar63._12_4_ = 0;
        auVar73._0_4_ = (float)uVar103 - (float)CONCAT13(bVar48,CONCAT12(bVar46,uVar4));
        auVar73._4_4_ = fVar30 - auVar84._0_4_;
        auVar73._8_4_ = fVar32 - (float)CONCAT13(bVar66,uVar14);
        auVar73._12_4_ = 0;
        uVar15 = a64_TBL(ZEXT816(0),auVar63,auVar73,DAT_0388a888);
        uVar103 = a64_TBL(ZEXT816(0),auVar63,auVar73,DAT_0388a710);
        auVar100._8_8_ = uVar103;
        auVar100._0_8_ = uVar15 & 0xffffffff00000000;
        uVar83 = a64_TBL(ZEXT816(0),auVar63,auVar73,DAT_0388a758);
        uVar104 = a64_TBL(ZEXT816(0),auVar63,auVar73,DAT_0388a640);
        auVar117._4_12_ = auVar100._4_12_;
        auVar117._0_4_ = fVar40;
        auVar88._0_8_ = a64_TBL(ZEXT816(0),auVar63,auVar73,DAT_0388a880);
        auVar109._0_8_ = a64_TBL(ZEXT816(0),auVar63,auVar73,DAT_0388a700);
        uVar103 = a64_TBL(ZEXT816(0),auVar63,auVar73,DAT_0388a590);
        auVar74._4_4_ = fVar41;
        auVar74._0_4_ = fVar41;
        auVar74._8_4_ = fVar41;
        auVar74._12_4_ = fVar41;
        auVar88._12_4_ = (undefined4)((ulong)uVar104 >> 0x20);
        auVar88._8_4_ = fVar31;
        auVar109._8_8_ = uVar103;
        auVar119._4_4_ = fVar40;
        auVar119._0_4_ = fVar40;
        auVar119._8_4_ = fVar40;
        auVar119._12_4_ = fVar40;
        auVar116._0_8_ = CONCAT44(-(uint)(fVar40 <= fVar41),-(uint)(fVar40 <= fVar41));
        auVar116._8_4_ = -(uint)(fVar40 <= fVar41);
        auVar116._12_4_ = -(uint)(fVar40 <= fVar41);
        auVar118._8_8_ = auVar116._8_8_;
        auVar118._0_8_ = auVar116._0_8_;
        auVar84[4] = SUB41(fVar41,0);
        auVar84._0_4_ = (int)uVar15;
        auVar84[5] = (char)((uint)fVar41 >> 8);
        auVar84[6] = (char)((uint)fVar41 >> 0x10);
        auVar84[7] = (char)((uint)fVar41 >> 0x18);
        auVar84[8] = (char)uVar83;
        auVar84[9] = (char)((ulong)uVar83 >> 8);
        auVar84[10] = (char)((ulong)uVar83 >> 0x10);
        auVar84[0xb] = (char)((ulong)uVar83 >> 0x18);
        auVar84[0xc] = (char)((ulong)uVar83 >> 0x20);
        auVar84[0xd] = (char)((ulong)uVar83 >> 0x28);
        auVar84[0xe] = (char)((ulong)uVar83 >> 0x30);
        auVar84[0xf] = (char)((ulong)uVar83 >> 0x38);
        auVar117 = auVar117 ^ (auVar117 ^ auVar84) & auVar116;
        uVar43 = SUB41(fVar31,0);
        uVar44 = (undefined1)((uint)fVar31 >> 8);
        uVar45 = (undefined1)((uint)fVar31 >> 0x10);
        uVar47 = (undefined1)((uint)fVar31 >> 0x18);
        auVar110._0_12_ = auVar109._0_12_;
        auVar110._12_4_ = fVar67;
        auVar119 = auVar119 ^ (auVar119 ^ auVar74) & auVar118;
        auVar64._0_8_ =
             CONCAT44(-(uint)(auVar119._4_4_ <= fVar31),-(uint)(auVar119._0_4_ <= fVar31));
        auVar64._8_4_ = -(uint)(auVar119._8_4_ <= fVar31);
        auVar64._12_4_ = -(uint)(auVar119._12_4_ <= fVar31);
        auVar75._8_8_ = auVar64._8_8_;
        auVar75._0_8_ = auVar64._0_8_;
        auVar117 = auVar117 ^ (auVar117 ^ auVar88) & auVar64;
        auVar95[4] = uVar43;
        auVar95._0_4_ = fVar31;
        auVar95[5] = uVar44;
        auVar95[6] = uVar45;
        auVar95[7] = uVar47;
        auVar95[8] = uVar43;
        auVar95[9] = uVar44;
        auVar95[10] = uVar45;
        auVar95[0xb] = uVar47;
        auVar95[0xc] = uVar43;
        auVar95[0xd] = uVar44;
        auVar95[0xe] = uVar45;
        auVar95[0xf] = uVar47;
        auVar119 = auVar119 ^ (auVar119 ^ auVar95) & auVar75;
        auVar34._0_4_ = -(uint)(auVar119._0_4_ <= fVar67);
        auVar34._4_4_ = -(uint)(auVar119._4_4_ <= fVar67);
        auVar34._8_4_ = -(uint)(auVar119._8_4_ <= fVar67);
        auVar34._12_4_ = -(uint)(auVar119._12_4_ <= fVar67);
        auVar117 = auVar117 ^ (auVar117 ^ auVar110) & auVar34;
        fVar30 = auVar117._0_4_;
        fVar32 = fVar30 * fVar30;
        fVar67 = auVar117._4_4_;
        fVar40 = fVar67 * fVar67;
        uVar43 = (undefined1)((uint)fVar40 >> 8);
        uVar44 = (undefined1)((uint)fVar40 >> 0x10);
        uVar45 = (undefined1)((uint)fVar40 >> 0x18);
        fVar80 = auVar117._8_4_;
        fVar41 = fVar80 * fVar80;
        uVar47 = (undefined1)((uint)fVar41 >> 8);
        uVar49 = (undefined1)((uint)fVar41 >> 0x10);
        uVar50 = (undefined1)((uint)fVar41 >> 0x18);
        fVar42 = auVar117._12_4_;
        fVar31 = fVar42 * fVar42;
        uVar51 = (undefined1)((uint)fVar31 >> 8);
        uVar52 = (undefined1)((uint)fVar31 >> 0x10);
        uVar53 = (undefined1)((uint)fVar31 >> 0x18);
        auVar5[4] = SUB41(fVar40,0);
        auVar5._0_4_ = fVar32;
        auVar5[5] = uVar43;
        auVar5[6] = uVar44;
        auVar5[7] = uVar45;
        auVar5[8] = SUB41(fVar41,0);
        auVar5[9] = uVar47;
        auVar5[10] = uVar49;
        auVar5[0xb] = uVar50;
        auVar5[0xc] = SUB41(fVar31,0);
        auVar5[0xd] = uVar51;
        auVar5[0xe] = uVar52;
        auVar5[0xf] = uVar53;
        auVar6[4] = SUB41(fVar40,0);
        auVar6._0_4_ = fVar32;
        auVar6[5] = uVar43;
        auVar6[6] = uVar44;
        auVar6[7] = uVar45;
        auVar6[8] = SUB41(fVar41,0);
        auVar6[9] = uVar47;
        auVar6[10] = uVar49;
        auVar6[0xb] = uVar50;
        auVar6[0xc] = SUB41(fVar31,0);
        auVar6[0xd] = uVar51;
        auVar6[0xe] = uVar52;
        auVar6[0xf] = uVar53;
        auVar84 = NEON_ext(auVar5,auVar6,8,1);
        fVar32 = auVar84._0_4_ + fVar32;
        fVar40 = auVar84._4_4_ + fVar40;
        fVar41 = fVar32 + fVar40;
        fVar32 = fVar32 + fVar40;
        uVar43 = SUB41(fVar32,0);
        uVar44 = (undefined1)((uint)fVar32 >> 8);
        uVar45 = (undefined1)((uint)fVar32 >> 0x10);
        uVar47 = (undefined1)((uint)fVar32 >> 0x18);
        auVar7[4] = uVar43;
        auVar7._0_4_ = fVar41;
        auVar7[5] = uVar44;
        auVar7[6] = uVar45;
        auVar7[7] = uVar47;
        auVar7[8] = SUB41(fVar41,0);
        auVar7[9] = (char)((uint)fVar41 >> 8);
        auVar7[10] = (char)((uint)fVar41 >> 0x10);
        auVar7[0xb] = (char)((uint)fVar41 >> 0x18);
        auVar7[0xc] = uVar43;
        auVar7[0xd] = uVar44;
        auVar7[0xe] = uVar45;
        auVar7[0xf] = uVar47;
        auVar84 = NEON_frsqrte(auVar7,4);
        auVar76._0_4_ = auVar84._0_4_ * fVar41;
        auVar76._4_4_ = auVar84._4_4_ * fVar32;
        auVar76._8_4_ = auVar84._8_4_ * fVar41;
        uVar4 = (undefined2)(CONCAT15(uVar44,CONCAT14(uVar43,fVar41)) >> 0x20);
        auVar76._12_4_ = auVar84._12_4_ * (float)CONCAT13(uVar47,CONCAT12(uVar45,uVar4));
        auVar95 = NEON_frsqrts(auVar84,auVar76,4);
        auVar65._0_4_ = auVar84._0_4_ * auVar95._0_4_;
        auVar65._4_4_ = auVar84._4_4_ * auVar95._4_4_;
        auVar65._8_4_ = auVar84._8_4_ * auVar95._8_4_;
        auVar65._12_4_ = auVar84._12_4_ * auVar95._12_4_;
        auVar77._0_4_ = fVar41 * auVar65._0_4_;
        auVar77._4_4_ = fVar32 * auVar65._4_4_;
        auVar77._8_4_ = fVar41 * auVar65._8_4_;
        auVar77._12_4_ = (float)CONCAT13(uVar47,CONCAT12(uVar45,uVar4)) * auVar65._12_4_;
        iVar68 = -(uint)(fVar41 == 0.0);
        iVar24 = -(uint)(fVar32 == 0.0);
        iVar81 = -(uint)(fVar41 == 0.0);
        iVar82 = -(uint)((float)CONCAT13(uVar47,CONCAT12(uVar45,uVar4)) == 0.0);
        auVar84 = NEON_frsqrts(auVar65,auVar77,4);
        fVar30 = auVar65._0_4_ * auVar84._0_4_ * fVar30;
        fVar67 = auVar65._4_4_ * auVar84._4_4_ * fVar67;
        fVar80 = auVar65._8_4_ * auVar84._8_4_ * fVar80;
        fVar42 = auVar65._12_4_ * auVar84._12_4_ * fVar42;
        fVar32 = (float)CONCAT13((byte)((uint)fVar30 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                                 CONCAT12((byte)((uint)fVar30 >> 0x10) &
                                          ~(byte)((uint)iVar68 >> 0x10),
                                          CONCAT11((byte)((uint)fVar30 >> 8) &
                                                   ~(byte)((uint)iVar68 >> 8),
                                                   SUB41(fVar30,0) & ~(byte)iVar68)));
        auVar33._0_8_ =
             CONCAT17((byte)((uint)fVar67 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                      CONCAT16((byte)((uint)fVar67 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                               CONCAT15((byte)((uint)fVar67 >> 8) & ~(byte)((uint)iVar24 >> 8),
                                        CONCAT14(SUB41(fVar67,0) & ~(byte)iVar24,fVar32))));
        auVar33[8] = SUB41(fVar80,0) & ~(byte)iVar81;
        auVar33[9] = (byte)((uint)fVar80 >> 8) & ~(byte)((uint)iVar81 >> 8);
        auVar33[10] = (byte)((uint)fVar80 >> 0x10) & ~(byte)((uint)iVar81 >> 0x10);
        auVar33[0xb] = (byte)((uint)fVar80 >> 0x18) & ~(byte)((uint)iVar81 >> 0x18);
        auVar35[0xc] = SUB41(fVar42,0) & ~(byte)iVar82;
        auVar35._0_12_ = auVar33;
        auVar35[0xd] = (byte)((uint)fVar42 >> 8) & ~(byte)((uint)iVar82 >> 8);
        auVar35[0xe] = (byte)((uint)fVar42 >> 0x10) & ~(byte)((uint)iVar82 >> 0x10);
        auVar35[0xf] = (byte)((uint)fVar42 >> 0x18) & ~(byte)((uint)iVar82 >> 0x18);
        if (local_78 != (long *)0x0) {
          lVar25 = local_78[0xb];
          piVar1 = (int *)(lVar25 + 0xc);
          do {
            iVar68 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar68 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar68 + -1 == 0) {
            *(undefined8 *)(lVar25 + 0x18) = 0;
            (**(code **)(*local_78 + 0x20))();
          }
        }
        fStack_8c = (float)((ulong)auVar33._0_8_ >> 0x20);
        fStack_88 = auVar33._8_4_;
        fStack_84 = auVar35._12_4_;
        auVar39._0_4_ = fVar32 * (float)_DAT_03889ac0;
        fVar40 = (float)((ulong)_DAT_03889ac0 >> 0x20);
        auVar39._4_4_ = fStack_8c * fVar40;
        auVar39._8_4_ = fStack_88 * (float)_UNK_03889ac8;
        fVar41 = (float)((ulong)_UNK_03889ac8 >> 0x20);
        auVar39._12_4_ = fStack_84 * fVar41;
        auVar36._0_4_ = fVar32 * fVar32;
        auVar36._4_4_ = fStack_8c * fStack_8c;
        auVar36._8_4_ = fStack_88 * fStack_88;
        auVar36._12_4_ = fStack_84 * fStack_84;
        auVar84 = NEON_ext(auVar36,auVar36,8,1);
        fVar31 = auVar84._0_4_ + auVar36._0_4_;
        fVar30 = auVar84._4_4_ + auVar36._4_4_;
        fVar32 = fVar31 + fVar30;
        fVar31 = fVar31 + fVar30;
        auVar37._8_8_ = CONCAT44(fVar31,fVar32);
        auVar37._0_8_ = CONCAT44(fVar31,fVar32);
        auVar84 = NEON_frecpe(auVar37,4);
        auVar95 = NEON_frecps(auVar84,auVar37,4);
        auVar78._0_4_ = auVar84._0_4_ * auVar95._0_4_;
        auVar78._4_4_ = auVar84._4_4_ * auVar95._4_4_;
        auVar78._8_4_ = auVar84._8_4_ * auVar95._8_4_;
        auVar78._12_4_ = auVar84._12_4_ * auVar95._12_4_;
        auVar84 = NEON_frecps(auVar78,auVar37,4);
        iVar68 = -(uint)(fVar32 == 0.0);
        iVar24 = -(uint)(fVar31 == 0.0);
        iVar81 = -(uint)(fVar32 == 0.0);
        iVar82 = -(uint)(fVar31 == 0.0);
        auVar38[0] = ~(byte)iVar68;
        auVar38[1] = ~(byte)((uint)iVar68 >> 8);
        auVar38[2] = ~(byte)((uint)iVar68 >> 0x10);
        auVar38[3] = ~(byte)((uint)iVar68 >> 0x18);
        auVar38[4] = ~(byte)iVar24;
        auVar38[5] = ~(byte)((uint)iVar24 >> 8);
        auVar38[6] = ~(byte)((uint)iVar24 >> 0x10);
        auVar38[7] = ~(byte)((uint)iVar24 >> 0x18);
        auVar38[8] = ~(byte)iVar81;
        auVar38[9] = ~(byte)((uint)iVar81 >> 8);
        auVar38[10] = ~(byte)((uint)iVar81 >> 0x10);
        auVar38[0xb] = ~(byte)((uint)iVar81 >> 0x18);
        auVar38[0xc] = ~(byte)iVar82;
        auVar38[0xd] = ~(byte)((uint)iVar82 >> 8);
        auVar38[0xe] = ~(byte)((uint)iVar82 >> 0x10);
        auVar38[0xf] = ~(byte)((uint)iVar82 >> 0x18);
        auVar79._0_4_ = auVar39._0_4_ * auVar78._0_4_ * auVar84._0_4_;
        auVar79._4_4_ = auVar39._4_4_ * auVar78._4_4_ * auVar84._4_4_;
        auVar79._8_4_ = auVar39._8_4_ * auVar78._8_4_ * auVar84._8_4_;
        auVar79._12_4_ = auVar39._12_4_ * auVar78._12_4_ * auVar84._12_4_;
        auVar39 = auVar39 ^ (auVar39 ^ auVar79) & auVar38;
        auVar101._8_8_ = DAT_0388a148;
        auVar101._0_8_ = DAT_0388a140;
        fVar30 = auVar39._0_4_;
        fVar31 = fVar30 * (float)_DAT_03889ac0;
        fVar40 = auVar39._4_4_ * fVar40;
        auVar89._0_8_ = CONCAT44(fVar40,fVar31);
        auVar89._8_4_ = auVar39._8_4_ * (float)_UNK_03889ac8;
        auVar89._12_4_ = auVar39._12_4_ * fVar41;
        uVar103 = a64_TBL(ZEXT816(0),auVar101,DAT_0388a580);
        uVar112 = a64_TBL(ZEXT816(0),auVar89,DAT_0388a580);
        uVar105 = a64_TBL(ZEXT816(0),auVar101,DAT_0388a680);
        uVar120 = a64_TBL(ZEXT816(0),auVar89,DAT_0388a6c8);
        fVar32 = (float)((ulong)uVar103 >> 0x20);
        fVar122 = (float)((ulong)DAT_0388a7e8 >> 0x20);
        fVar111 = (float)((ulong)uVar105 >> 0x20);
        uVar121 = a64_TBL(ZEXT816(0),auVar89,DAT_0388a680);
        uVar123 = a64_TBL(ZEXT816(0),auVar89,uVar26);
        uVar124 = a64_TBL(ZEXT816(0),auVar89,DAT_0388a790);
        auVar90._8_8_ = auVar89._0_8_;
        auVar90._0_8_ = auVar89._0_8_;
        uVar83 = a64_TBL(ZEXT816(0),auVar90,DAT_0388a648);
        uVar104 = a64_TBL(ZEXT816(0),auVar101,uVar26);
        fVar102 = (float)((ulong)uVar104 >> 0x20);
        uVar93 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a580);
        fVar67 = (float)_DAT_03889ad0;
        fVar42 = (float)((ulong)_DAT_03889ad0 >> 0x20);
        fVar69 = (float)_UNK_03889ad8;
        fVar80 = (float)((ulong)_UNK_03889ad8 >> 0x20);
        uVar113 = a64_TBL(ZEXT816(0),auVar39,uVar26);
        fVar41 = ((float)uVar103 * fVar31 + fVar67 * (float)uVar112 * (float)DAT_0388a7e8 +
                 fVar67 * (float)uVar104 * (float)uVar121) - (float)uVar105 * (float)uVar123;
        fVar40 = (fVar32 * fVar40 + fVar42 * (float)((ulong)uVar112 >> 0x20) * fVar122 +
                 fVar42 * fVar102 * (float)((ulong)uVar121 >> 0x20)) -
                 fVar111 * (float)((ulong)uVar123 >> 0x20);
        uVar43 = SUB41(fVar40,0);
        uVar44 = (undefined1)((uint)fVar40 >> 8);
        uVar45 = (undefined1)((uint)fVar40 >> 0x10);
        uVar47 = (undefined1)((uint)fVar40 >> 0x18);
        fVar31 = ((float)uVar103 * auVar89._8_4_ + fVar69 * (float)uVar105 * (float)uVar120 +
                 fVar69 * (float)uVar83 * (float)DAT_0388a7e8) - (float)uVar104 * (float)uVar124;
        uVar49 = SUB41(fVar31,0);
        uVar50 = (undefined1)((uint)fVar31 >> 8);
        uVar51 = (undefined1)((uint)fVar31 >> 0x10);
        uVar52 = (undefined1)((uint)fVar31 >> 0x18);
        fVar32 = (fVar32 * auVar89._12_4_ + fVar80 * fVar111 * (float)((ulong)uVar120 >> 0x20) +
                 fVar80 * (float)((ulong)uVar83 >> 0x20) * fVar122) -
                 fVar102 * (float)((ulong)uVar124 >> 0x20);
        uVar53 = SUB41(fVar32,0);
        uVar54 = (undefined1)((uint)fVar32 >> 8);
        uVar55 = (undefined1)((uint)fVar32 >> 0x10);
        uVar56 = (undefined1)((uint)fVar32 >> 0x18);
        uVar105 = a64_TBL(ZEXT816(0),auVar39,DAT_0388a680);
        auVar8[4] = uVar43;
        auVar8._0_4_ = fVar41;
        auVar8[5] = uVar44;
        auVar8[6] = uVar45;
        auVar8[7] = uVar47;
        auVar8[8] = uVar49;
        auVar8[9] = uVar50;
        auVar8[10] = uVar51;
        auVar8[0xb] = uVar52;
        auVar8[0xc] = uVar53;
        auVar8[0xd] = uVar54;
        auVar8[0xe] = uVar55;
        auVar8[0xf] = uVar56;
        uVar83 = a64_TBL(ZEXT816(0),auVar8,DAT_0388a580);
        auVar9[4] = uVar43;
        auVar9._0_4_ = fVar41;
        auVar9[5] = uVar44;
        auVar9[6] = uVar45;
        auVar9[7] = uVar47;
        auVar9[8] = uVar49;
        auVar9[9] = uVar50;
        auVar9[10] = uVar51;
        auVar9[0xb] = uVar52;
        auVar9[0xc] = uVar53;
        auVar9[0xd] = uVar54;
        auVar9[0xe] = uVar55;
        auVar9[0xf] = uVar56;
        uVar112 = a64_TBL(ZEXT816(0),auVar9,DAT_0388a6c8);
        auVar10[4] = uVar43;
        auVar10._0_4_ = fVar41;
        auVar10[5] = uVar44;
        auVar10[6] = uVar45;
        auVar10[7] = uVar47;
        auVar10[8] = uVar49;
        auVar10[9] = uVar50;
        auVar10[10] = uVar51;
        auVar10[0xb] = uVar52;
        auVar10[0xc] = uVar53;
        auVar10[0xd] = uVar54;
        auVar10[0xe] = uVar55;
        auVar10[0xf] = uVar56;
        uVar120 = a64_TBL(ZEXT816(0),auVar10,DAT_0388a790);
        auVar11[4] = uVar43;
        auVar11._0_4_ = fVar41;
        auVar11[5] = uVar44;
        auVar11[6] = uVar45;
        auVar11[7] = uVar47;
        auVar11[8] = uVar49;
        auVar11[9] = uVar50;
        auVar11[10] = uVar51;
        auVar11[0xb] = uVar52;
        auVar11[0xc] = uVar53;
        auVar11[0xd] = uVar54;
        auVar11[0xe] = uVar55;
        auVar11[0xf] = uVar56;
        uVar103 = a64_TBL(ZEXT816(0),auVar11,DAT_0388a680);
        auVar12[4] = uVar43;
        auVar12._0_4_ = fVar41;
        auVar12[5] = uVar44;
        auVar12[6] = uVar45;
        auVar12[7] = uVar47;
        auVar12[8] = uVar49;
        auVar12[9] = uVar50;
        auVar12[10] = uVar51;
        auVar12[0xb] = uVar52;
        auVar12[0xc] = uVar53;
        auVar12[0xd] = uVar54;
        auVar12[0xe] = uVar55;
        auVar12[0xf] = uVar56;
        uVar104 = a64_TBL(ZEXT816(0),auVar12,uVar26);
        auVar13[4] = uVar43;
        auVar13._0_4_ = fVar41;
        auVar13[5] = uVar44;
        auVar13[6] = uVar45;
        auVar13[7] = uVar47;
        auVar13[8] = SUB41(fVar41,0);
        auVar13[9] = (char)((uint)fVar41 >> 8);
        auVar13[10] = (char)((uint)fVar41 >> 0x10);
        auVar13[0xb] = (char)((uint)fVar41 >> 0x18);
        auVar13[0xc] = uVar43;
        auVar13[0xd] = uVar44;
        auVar13[0xe] = uVar45;
        auVar13[0xf] = uVar47;
        uVar26 = a64_TBL(ZEXT816(0),auVar13,DAT_0388a648);
        fVar32 = (float)FUN_01e4a52c(param_4);
        puVar16 = PTR_PTR_0437a4c8;
        fVar32 = fVar32 * -1.5;
        fVar41 = (((float)uVar93 * fVar41 + fVar67 * fVar30 * (float)uVar83 +
                  fVar67 * (float)uVar113 * (float)uVar103) - (float)uVar105 * (float)uVar104) *
                 fVar32;
        fVar67 = (float)(**(code **)(PTR_PTR_0437a4c8 + 0x18))();
        fVar80 = (float)(**(code **)(puVar16 + 0x18))();
        fVar40 = fVar80 * (((float)((ulong)uVar93 >> 0x20) * fVar40 +
                            fVar42 * auVar39._4_4_ * (float)((ulong)uVar83 >> 0x20) +
                           fVar42 * (float)((ulong)uVar113 >> 0x20) *
                                    (float)((ulong)uVar103 >> 0x20)) -
                          (float)((ulong)uVar105 >> 0x20) * (float)((ulong)uVar104 >> 0x20)) *
                          fVar32 + 0.0;
        fVar80 = (float)(**(code **)(puVar16 + 0x18))
                                  (*(undefined4 *)(param_4 + 0x328),SUB41(fVar41,0));
        local_68[0x1b] =
             (ulong)(uint)(fVar80 * (((float)uVar93 * fVar31 +
                                      fVar69 * (float)uVar105 * (float)uVar112 +
                                     fVar69 * fVar30 * (float)uVar26) -
                                    (float)uVar113 * (float)uVar120) * fVar32 + 0.0);
        local_68[0x1a] =
             CONCAT17((char)((uint)fVar40 >> 0x18),
                      CONCAT16((char)((uint)fVar40 >> 0x10),
                               CONCAT15((char)((uint)fVar40 >> 8),
                                        CONCAT14(SUB41(fVar40,0),fVar67 * fVar41 + 0.0))));
        *(undefined1 *)(local_68 + 0x1c) = 1;
        *(float *)(param_4 + 0x328) = *(float *)(param_4 + 0x328) + 0.011111111;
        if (local_68 != (long *)0x0) {
          lVar25 = local_68[0xb];
          piVar1 = (int *)(lVar25 + 0xc);
          do {
            iVar68 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar68 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar68 + -1 == 0) {
            *(undefined8 *)(lVar25 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
          }
        }
        lVar27 = *(long *)(lVar27 + 8);
        piVar1 = (int *)(lVar27 + 0xc);
        do {
          iVar68 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar68 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar68 + -1 == 0) {
          *(undefined8 *)(lVar27 + 0x18) = 0;
          (**(code **)(*plVar29 + 0x20))(plVar29);
        }
      }
      goto LAB_01e499f0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  iVar68 = iVar24;
  if (iVar24 == 0) {
LAB_01e499f0:
    lVar27 = *(long *)(lVar28 + 8);
    piVar1 = (int *)(lVar27 + 0xc);
    do {
      iVar68 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar68 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar68 + -1 == 0) {
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*(long *)(lVar28 + -0x50) + 0x20))((long *)(lVar28 + -0x50));
      return;
    }
    return;
  }
  goto LAB_01e49a54;
}


