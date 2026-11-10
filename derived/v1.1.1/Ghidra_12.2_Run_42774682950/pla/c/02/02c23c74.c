/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c23c74; name: FUN_02c23c74
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c23c74(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined8 uVar10;
  code *pcVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  float fVar18;
  float extraout_var;
  float extraout_var_00;
  undefined1 auVar19 [16];
  float extraout_var_01;
  undefined1 auVar20 [16];
  byte bVar29;
  byte bVar30;
  float fVar21;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar41;
  int iVar42;
  uint uVar43;
  float fVar52;
  int iVar53;
  int iVar55;
  undefined1 auVar44 [12];
  int iVar57;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  uint uVar54;
  uint uVar56;
  uint uVar58;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined8 in_d3;
  undefined1 auVar59 [12];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar70;
  uint uVar71;
  undefined8 uVar72;
  undefined8 uVar73;
  float fVar76;
  uint uVar77;
  float fVar78;
  float fVar79;
  uint uVar80;
  float fVar81;
  float fVar82;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  uint uVar83;
  float fVar84;
  float fVar85;
  float fVar88;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar89;
  undefined8 uVar91;
  float fVar96;
  undefined1 auVar92 [16];
  float fVar90;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar97;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90 [4];
  
  puVar8 = PTR_DAT_043794d0;
  puVar7 = PTR_DAT_043794c8;
  puVar6 = PTR_DAT_043794b8;
  puVar5 = PTR_DAT_043794b0;
  if (*(int *)(param_1 + 0x1f0) == 4) {
    lVar15 = *(long *)(param_1 + 0x1a8);
    if ((lVar15 == 0) || (*(int *)(lVar15 + 0xc) == 0)) {
LAB_02c23cb0:
      plVar13 = (long *)0x0;
    }
    else {
      piVar1 = (int *)(lVar15 + 0xc);
      iVar42 = *(int *)(lVar15 + 0xc);
      do {
        puVar17 = *(undefined8 **)(lVar15 + 0x10);
        if (((*puVar5 & 1) == 0) && (iVar53 = __cxa_guard_acquire(puVar5), iVar53 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar53 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar53 != 0)) {
            if (((*puVar8 & 1) == 0) && (iVar53 = __cxa_guard_acquire(puVar8), iVar53 != 0)) {
              uVar10 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar10;
              __cxa_guard_release(puVar8);
            }
            *(undefined **)puVar7 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar6 = puVar7;
          __cxa_guard_release(puVar5);
        }
        if (puVar17 == (undefined8 *)0x0) goto LAB_02c23cb0;
        while (puVar17 != (undefined8 *)puVar6) {
          puVar17 = (undefined8 *)*puVar17;
          plVar13 = (long *)0x0;
          if (puVar17 == (undefined8 *)0x0) goto LAB_02c23cb4;
        }
        iVar53 = *piVar1;
        if (iVar53 == iVar42) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar42 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            plVar13 = (long *)0x0;
            if (*(long *)(lVar15 + 0x18) != 0) {
              plVar13 = (long *)(*(long *)(lVar15 + 0x18) + -0x50);
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        plVar13 = (long *)0x0;
        iVar42 = iVar53;
      } while (iVar53 != 0);
    }
LAB_02c23cb4:
    (**(code **)(*plVar13 + 0x40))(plVar13);
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar42 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar42 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar42 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    local_90[0] = in_d3;
    FUN_02c1d9d8(*(undefined8 *)(param_1 + 0x1f8),local_90);
    if (*(char *)(param_1 + 0x3e0) == '\0') {
      lVar15 = *(long *)(param_1 + 0x200);
      if (*(long *)(param_1 + 0x208) != lVar15) {
        uVar16 = 0;
        do {
          plVar13 = *(long **)(lVar15 + uVar16 * 8);
          (**(code **)(*plVar13 + 0xa0))(plVar13,0);
          uVar16 = uVar16 + 1;
          lVar15 = *(long *)(param_1 + 0x200);
        } while (uVar16 < (ulong)(*(long *)(param_1 + 0x208) - lVar15 >> 3));
      }
    }
    else {
      lVar15 = FUN_02b11e64(DAT_043ef5a8,DAT_043ef5a8 + 0x1a0);
      if (lVar15 != 0) {
        fVar100 = *(float *)(lVar15 + 0xb8);
        fVar21 = *(float *)(lVar15 + 0x90);
        if (*(float *)(lVar15 + 0xbc) == 0.0) {
          uStack_a8 = (ulong)(uint)((*(float *)(lVar15 + 0xc0) + 1.0) / fVar21) << 0x20;
          local_b0 = DAT_0388a618;
          uStack_b8 = (ulong)(uint)((1.0 - *(float *)(lVar15 + 0xc0)) / fVar21) << 0x20;
          local_c0 = DAT_0388a870;
          fVar100 = (1.0 - *(float *)(lVar15 + 200)) / fVar100;
        }
        else {
          fVar21 = -1.0 / fVar21;
          fVar41 = fVar21 * fVar21 + (float)DAT_0388a618;
          fVar52 = (float)((ulong)DAT_0388a618 >> 0x20) + 0.0;
          fVar18 = fVar41 + fVar52;
          fVar41 = fVar41 + fVar52;
          auVar86._8_8_ = CONCAT44(fVar41,fVar18);
          auVar86._0_8_ = CONCAT44(fVar41,fVar18);
          auVar86 = NEON_frsqrte(auVar86,4);
          auVar92._0_4_ = auVar86._0_4_ * fVar18;
          auVar92._4_4_ = auVar86._4_4_ * fVar41;
          auVar92._8_4_ = auVar86._8_4_ * fVar18;
          auVar92._12_4_ = auVar86._12_4_ * fVar41;
          auVar92 = NEON_frsqrts(auVar86,auVar92,4);
          auVar95._0_4_ = auVar86._0_4_ * auVar92._0_4_;
          auVar95._4_4_ = auVar86._4_4_ * auVar92._4_4_;
          auVar95._8_4_ = auVar86._8_4_ * auVar92._8_4_;
          auVar95._12_4_ = auVar86._12_4_ * auVar92._12_4_;
          auVar23._0_4_ = fVar18 * auVar95._0_4_;
          auVar23._4_4_ = fVar41 * auVar95._4_4_;
          auVar23._8_4_ = fVar18 * auVar95._8_4_;
          auVar23._12_4_ = fVar41 * auVar95._12_4_;
          iVar42 = -(uint)(fVar18 == 0.0);
          iVar53 = -(uint)(fVar41 == 0.0);
          iVar55 = -(uint)(fVar18 == 0.0);
          iVar57 = -(uint)(fVar41 == 0.0);
          auVar86 = NEON_frsqrts(auVar95,auVar23,4);
          fVar18 = auVar95._0_4_ * auVar86._0_4_;
          fVar41 = auVar95._4_4_ * auVar86._4_4_;
          fVar88 = auVar95._8_4_ * auVar86._8_4_;
          fVar52 = auVar95._12_4_ * auVar86._12_4_;
          fVar70 = fVar18 * 1.0;
          fVar76 = fVar41 * 0.0;
          fVar79 = fVar21 * fVar88;
          fVar82 = fVar52 * 0.0;
          bVar29 = ~(byte)((uint)iVar42 >> 8);
          bVar30 = ~(byte)((uint)iVar42 >> 0x10);
          bVar31 = ~(byte)((uint)iVar42 >> 0x18);
          bVar32 = ~(byte)((uint)iVar53 >> 8);
          bVar33 = ~(byte)((uint)iVar53 >> 0x10);
          bVar34 = ~(byte)((uint)iVar53 >> 0x18);
          bVar35 = ~(byte)((uint)iVar55 >> 8);
          bVar36 = ~(byte)((uint)iVar55 >> 0x10);
          bVar37 = ~(byte)((uint)iVar55 >> 0x18);
          bVar38 = ~(byte)((uint)iVar57 >> 8);
          bVar39 = ~(byte)((uint)iVar57 >> 0x10);
          bVar40 = ~(byte)((uint)iVar57 >> 0x18);
          uStack_a8 = CONCAT17((byte)((uint)fVar82 >> 0x18) & bVar40,
                               CONCAT16((byte)((uint)fVar82 >> 0x10) & bVar39,
                                        CONCAT15((byte)((uint)fVar82 >> 8) & bVar38,
                                                 CONCAT14(SUB41(fVar82,0) & ~(byte)iVar57,
                                                          CONCAT13((byte)((uint)fVar79 >> 0x18) &
                                                                   bVar37,CONCAT12((byte)((uint)
                                                  fVar79 >> 0x10) & bVar36,
                                                  CONCAT11((byte)((uint)fVar79 >> 8) & bVar35,
                                                           SUB41(fVar79,0) & ~(byte)iVar55)))))));
          local_b0 = CONCAT17((byte)((uint)fVar76 >> 0x18) & bVar34,
                              CONCAT16((byte)((uint)fVar76 >> 0x10) & bVar33,
                                       CONCAT15((byte)((uint)fVar76 >> 8) & bVar32,
                                                CONCAT14(SUB41(fVar76,0) & ~(byte)iVar53,
                                                         CONCAT13((byte)((uint)fVar70 >> 0x18) &
                                                                  bVar31,CONCAT12((byte)((uint)
                                                  fVar70 >> 0x10) & bVar30,
                                                  CONCAT11((byte)((uint)fVar70 >> 8) & bVar29,
                                                           SUB41(fVar70,0) & ~(byte)iVar42)))))));
          fVar18 = fVar18 * -1.0;
          fVar41 = fVar41 * 0.0;
          fVar21 = fVar21 * fVar88;
          fVar52 = fVar52 * 0.0;
          uStack_b8 = CONCAT17((byte)((uint)fVar52 >> 0x18) & bVar40,
                               CONCAT16((byte)((uint)fVar52 >> 0x10) & bVar39,
                                        CONCAT15((byte)((uint)fVar52 >> 8) & bVar38,
                                                 CONCAT14(SUB41(fVar52,0) & ~(byte)iVar57,
                                                          CONCAT13((byte)((uint)fVar21 >> 0x18) &
                                                                   bVar37,CONCAT12((byte)((uint)
                                                  fVar21 >> 0x10) & bVar36,
                                                  CONCAT11((byte)((uint)fVar21 >> 8) & bVar35,
                                                           SUB41(fVar21,0) & ~(byte)iVar55)))))));
          local_c0 = CONCAT17((byte)((uint)fVar41 >> 0x18) & bVar34,
                              CONCAT16((byte)((uint)fVar41 >> 0x10) & bVar33,
                                       CONCAT15((byte)((uint)fVar41 >> 8) & bVar32,
                                                CONCAT14(SUB41(fVar41,0) & ~(byte)iVar53,
                                                         CONCAT13((byte)((uint)fVar18 >> 0x18) &
                                                                  bVar31,CONCAT12((byte)((uint)
                                                  fVar18 >> 0x10) & bVar30,
                                                  CONCAT11((byte)((uint)fVar18 >> 8) & bVar29,
                                                           SUB41(fVar18,0) & ~(byte)iVar42)))))));
          fVar100 = ((*(float *)(lVar15 + 200) / fVar100) * fVar100) / (fVar100 + 1.0);
        }
        auVar86 = *(undefined1 (*) [16])(lVar15 + 0x50);
        auVar95 = *(undefined1 (*) [16])(lVar15 + 0x60);
        auVar92 = *(undefined1 (*) [16])(lVar15 + 0x70);
        uVar10 = *(undefined8 *)(lVar15 + 0x80);
        uVar4 = *(undefined8 *)(lVar15 + 0x88);
        bVar29 = (byte)_DAT_038897c0;
        bVar30 = (byte)((ulong)_DAT_038897c0 >> 8);
        bVar31 = (byte)((ulong)_DAT_038897c0 >> 0x10);
        bVar32 = (byte)((ulong)_DAT_038897c0 >> 0x18);
        fVar52 = (float)CONCAT13(auVar86[3] & bVar32,
                                 CONCAT12(auVar86[2] & bVar31,
                                          CONCAT11(auVar86[1] & bVar30,auVar86[0] & bVar29)));
        bVar33 = (byte)((ulong)_DAT_038897c0 >> 0x20);
        bVar34 = (byte)((ulong)_DAT_038897c0 >> 0x28);
        bVar35 = (byte)((ulong)_DAT_038897c0 >> 0x30);
        bVar36 = (byte)((ulong)_DAT_038897c0 >> 0x38);
        auVar22._0_8_ =
             CONCAT17(auVar95[3] & bVar36,
                      CONCAT16(auVar95[2] & bVar35,
                               CONCAT15(auVar95[1] & bVar34,CONCAT14(auVar95[0] & bVar33,fVar52))));
        bVar37 = (byte)_UNK_038897c8;
        auVar22[8] = auVar92[0] & bVar37;
        bVar38 = (byte)((ulong)_UNK_038897c8 >> 8);
        auVar22[9] = auVar92[1] & bVar38;
        bVar39 = (byte)((ulong)_UNK_038897c8 >> 0x10);
        auVar22[10] = auVar92[2] & bVar39;
        bVar40 = (byte)((ulong)_UNK_038897c8 >> 0x18);
        auVar22[0xb] = auVar92[3] & bVar40;
        auVar22._12_4_ = 0;
        fVar70 = (float)CONCAT13(auVar86[7] & bVar32,
                                 CONCAT12(auVar86[6] & bVar31,
                                          CONCAT11(auVar86[5] & bVar30,auVar86[4] & bVar29)));
        auVar44._0_8_ =
             CONCAT17(auVar95[7] & bVar36,
                      CONCAT16(auVar95[6] & bVar35,
                               CONCAT15(auVar95[5] & bVar34,CONCAT14(auVar95[4] & bVar33,fVar70))));
        auVar44[8] = auVar92[4] & bVar37;
        auVar44[9] = auVar92[5] & bVar38;
        auVar44[10] = auVar92[6] & bVar39;
        auVar44[0xb] = auVar92[7] & bVar40;
        auVar59._0_8_ =
             CONCAT17(auVar95[0xb] & bVar36,
                      CONCAT16(auVar95[10] & bVar35,
                               CONCAT15(auVar95[9] & bVar34,
                                        CONCAT14(auVar95[8] & bVar33,
                                                 CONCAT13(auVar86[0xb] & bVar32,
                                                          CONCAT12(auVar86[10] & bVar31,
                                                                   CONCAT11(auVar86[9] & bVar30,
                                                                            auVar86[8] & bVar29)))))
                              ));
        auVar59[8] = auVar92[8] & bVar37;
        auVar59[9] = auVar92[9] & bVar38;
        auVar59[10] = auVar92[10] & bVar39;
        auVar59[0xb] = auVar92[0xb] & bVar40;
        fVar76 = (float)((ulong)auVar44._0_8_ >> 0x20);
        fVar79 = auVar59._8_4_;
        auVar74 = NEON_fmov(0x3f800000,4);
        fStack_c8 = auVar74._8_4_;
        fStack_c4 = auVar74._12_4_;
        local_d0 = auVar74._0_4_;
        fStack_cc = auVar74._4_4_;
        fVar21 = (float)_DAT_03889820 * fVar52 + (float)_DAT_0388a450 * fVar76 +
                 (float)_DAT_03889eb0 * fVar79 + local_d0;
        fVar18 = (float)((ulong)_DAT_03889820 >> 0x20) * fVar52 +
                 (float)((ulong)_DAT_0388a450 >> 0x20) * fVar76 +
                 (float)((ulong)_DAT_03889eb0 >> 0x20) * fVar79 + fStack_cc;
        fVar41 = (float)_UNK_03889828 * fVar52 + (float)_UNK_0388a458 * fVar76 +
                 (float)_UNK_03889eb8 * fVar79 + fStack_c8;
        fVar52 = (float)((ulong)_UNK_03889828 >> 0x20) * fVar52 +
                 (float)((ulong)_UNK_0388a458 >> 0x20) * fVar76 +
                 (float)((ulong)_UNK_03889eb8 >> 0x20) * fVar79 + fStack_c4;
        uVar72 = NEON_ext(auVar22._0_8_,auVar59._0_8_,4,1);
        auVar23 = NEON_ext(auVar22,auVar22,8,1);
        fVar76 = (float)((ulong)auVar59._0_8_ >> 0x20);
        auVar45._0_4_ = (float)uVar72 + fVar70;
        fVar79 = (float)((ulong)uVar72 >> 0x20);
        auVar45._4_4_ = fVar79 + auVar23._0_4_;
        auVar45._8_4_ = auVar44._8_4_ + fVar76;
        auVar45._12_4_ = 0;
        auVar60._0_4_ = (float)uVar72 - fVar70;
        auVar60._4_4_ = fVar79 - auVar23._0_4_;
        auVar60._8_4_ = auVar44._8_4_ - fVar76;
        auVar60._12_4_ = 0;
        uVar72 = a64_TBL(ZEXT816(0),auVar45,auVar60,DAT_0388a888);
        uVar73 = a64_TBL(ZEXT816(0),auVar45,auVar60,DAT_0388a710);
        auVar87._8_8_ = uVar73;
        auVar87._0_8_ = uVar72;
        uVar73 = a64_TBL(ZEXT816(0),auVar45,auVar60,DAT_0388a758);
        auVar99._4_12_ = auVar87._4_12_;
        auVar99._0_4_ = fVar21;
        auVar75._0_8_ = a64_TBL(ZEXT816(0),auVar45,auVar60,DAT_0388a880);
        uVar91 = a64_TBL(ZEXT816(0),auVar45,auVar60,DAT_0388a640);
        auVar24._0_4_ = (undefined4)uVar72;
        auVar24._4_4_ = fVar18;
        auVar24._8_8_ = uVar73;
        auVar93._0_8_ = a64_TBL(ZEXT816(0),auVar45,auVar60,DAT_0388a700);
        uVar72 = a64_TBL(ZEXT816(0),auVar45,auVar60,DAT_0388a590);
        auVar61._4_4_ = fVar18;
        auVar61._0_4_ = fVar18;
        auVar61._8_4_ = fVar18;
        auVar61._12_4_ = fVar18;
        auVar75._12_4_ = (undefined4)((ulong)uVar91 >> 0x20);
        auVar75._8_4_ = fVar41;
        auVar93._8_8_ = uVar72;
        auVar102._4_4_ = fVar21;
        auVar102._0_4_ = fVar21;
        auVar102._8_4_ = fVar21;
        auVar102._12_4_ = fVar21;
        auVar98._0_8_ = CONCAT44(-(uint)(fVar21 <= fVar18),-(uint)(fVar21 <= fVar18));
        auVar98._8_4_ = -(uint)(fVar21 <= fVar18);
        auVar98._12_4_ = -(uint)(fVar21 <= fVar18);
        auVar101._8_8_ = auVar98._8_8_;
        auVar101._0_8_ = auVar98._0_8_;
        auVar99 = auVar99 ^ (auVar99 ^ auVar24) & auVar98;
        auVar25._4_4_ = fVar41;
        auVar25._0_4_ = fVar41;
        auVar25._8_4_ = fVar41;
        auVar25._12_4_ = fVar41;
        auVar94._0_12_ = auVar93._0_12_;
        auVar94._12_4_ = fVar52;
        auVar102 = auVar102 ^ (auVar102 ^ auVar61) & auVar101;
        auVar46._0_8_ =
             CONCAT44(-(uint)(auVar102._4_4_ <= fVar41),-(uint)(auVar102._0_4_ <= fVar41));
        auVar46._8_4_ = -(uint)(auVar102._8_4_ <= fVar41);
        auVar46._12_4_ = -(uint)(auVar102._12_4_ <= fVar41);
        auVar62._8_8_ = auVar46._8_8_;
        auVar62._0_8_ = auVar46._0_8_;
        auVar99 = auVar99 ^ (auVar99 ^ auVar75) & auVar46;
        auVar102 = auVar102 ^ (auVar102 ^ auVar25) & auVar62;
        auVar64._0_4_ = -(uint)(auVar102._0_4_ <= fVar52);
        auVar64._4_4_ = -(uint)(auVar102._4_4_ <= fVar52);
        auVar64._8_4_ = -(uint)(auVar102._8_4_ <= fVar52);
        auVar64._12_4_ = -(uint)(auVar102._12_4_ <= fVar52);
        auVar99 = auVar99 ^ (auVar99 ^ auVar94) & auVar64;
        fVar41 = auVar99._0_4_;
        auVar26._0_4_ = fVar41 * fVar41;
        fVar52 = auVar99._4_4_;
        auVar26._4_4_ = fVar52 * fVar52;
        fVar70 = auVar99._8_4_;
        auVar26._8_4_ = fVar70 * fVar70;
        fVar76 = auVar99._12_4_;
        auVar26._12_4_ = fVar76 * fVar76;
        auVar23 = NEON_ext(auVar26,auVar26,8,1);
        fVar18 = auVar23._0_4_ + auVar26._0_4_;
        fVar79 = auVar23._4_4_ + auVar26._4_4_;
        fVar21 = fVar18 + fVar79;
        fVar18 = fVar18 + fVar79;
        auVar27._8_8_ = CONCAT44(fVar18,fVar21);
        auVar27._0_8_ = CONCAT44(fVar18,fVar21);
        auVar23 = NEON_frsqrte(auVar27,4);
        auVar63._0_4_ = auVar23._0_4_ * fVar21;
        auVar63._4_4_ = auVar23._4_4_ * fVar18;
        auVar63._8_4_ = auVar23._8_4_ * fVar21;
        auVar63._12_4_ = auVar23._12_4_ * fVar18;
        auVar64 = NEON_frsqrts(auVar23,auVar63,4);
        auVar47._0_4_ = auVar23._0_4_ * auVar64._0_4_;
        auVar47._4_4_ = auVar23._4_4_ * auVar64._4_4_;
        auVar47._8_4_ = auVar23._8_4_ * auVar64._8_4_;
        auVar47._12_4_ = auVar23._12_4_ * auVar64._12_4_;
        auVar65._0_4_ = fVar21 * auVar47._0_4_;
        auVar65._4_4_ = fVar18 * auVar47._4_4_;
        auVar65._8_4_ = fVar21 * auVar47._8_4_;
        auVar65._12_4_ = fVar18 * auVar47._12_4_;
        iVar42 = -(uint)(fVar21 == 0.0);
        iVar53 = -(uint)(fVar18 == 0.0);
        iVar55 = -(uint)(fVar21 == 0.0);
        iVar57 = -(uint)(fVar18 == 0.0);
        auVar23 = NEON_frsqrts(auVar47,auVar65,4);
        fVar41 = auVar47._0_4_ * auVar23._0_4_ * fVar41;
        fVar52 = auVar47._4_4_ * auVar23._4_4_ * fVar52;
        fVar70 = auVar47._8_4_ * auVar23._8_4_ * fVar70;
        fVar76 = auVar47._12_4_ * auVar23._12_4_ * fVar76;
        auVar19._0_8_ =
             CONCAT17((byte)((uint)fVar52 >> 0x18) & ~(byte)((uint)iVar53 >> 0x18),
                      CONCAT16((byte)((uint)fVar52 >> 0x10) & ~(byte)((uint)iVar53 >> 0x10),
                               CONCAT15((byte)((uint)fVar52 >> 8) & ~(byte)((uint)iVar53 >> 8),
                                        CONCAT14(SUB41(fVar52,0) & ~(byte)iVar53,
                                                 CONCAT13((byte)((uint)fVar41 >> 0x18) &
                                                          ~(byte)((uint)iVar42 >> 0x18),
                                                          CONCAT12((byte)((uint)fVar41 >> 0x10) &
                                                                   ~(byte)((uint)iVar42 >> 0x10),
                                                                   CONCAT11((byte)((uint)fVar41 >> 8
                                                                                  ) & ~(byte)((uint)
                                                  iVar42 >> 8),SUB41(fVar41,0) & ~(byte)iVar42))))))
                     );
        auVar19[8] = SUB41(fVar70,0) & ~(byte)iVar55;
        auVar19[9] = (byte)((uint)fVar70 >> 8) & ~(byte)((uint)iVar55 >> 8);
        auVar19[10] = (byte)((uint)fVar70 >> 0x10) & ~(byte)((uint)iVar55 >> 0x10);
        auVar19[0xb] = (byte)((uint)fVar70 >> 0x18) & ~(byte)((uint)iVar55 >> 0x18);
        auVar19[0xc] = SUB41(fVar76,0) & ~(byte)iVar57;
        auVar19[0xd] = (byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar57 >> 8);
        auVar19[0xe] = (byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar57 >> 0x10);
        auVar19[0xf] = (byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar57 >> 0x18);
        uStack_98 = auVar19._8_8_;
        local_a0 = auVar19._0_8_;
        FUN_0098fad4(&local_a0);
        plVar13 = *(long **)(param_1 + 0x238);
        plVar14 = *(long **)(param_1 + 0x240);
        if (plVar13 != plVar14) {
          fVar21 = *(float *)PTR_Float1Divided2Pi_04372d20;
          fVar18 = *(float *)PTR_Float2Pi_04372d30;
          auVar48._0_4_ =
               (int)(fVar21 * 0.0 + (float)(-(uint)(0.0 <= fVar21 * 0.0) & 0x80000000 ^ 0xbf000000))
          ;
          auVar48._4_4_ =
               (int)(extraout_var * fVar21 +
                    (float)(-(uint)(0.0 <= extraout_var * fVar21) & 0x80000000 ^ 0xbf000000));
          auVar48._8_4_ =
               (int)(extraout_var_00 * fVar21 +
                    (float)(-(uint)(0.0 <= extraout_var_00 * fVar21) & 0x80000000 ^ 0xbf000000));
          auVar48._12_4_ =
               (int)(extraout_var_01 * fVar21 +
                    (float)(-(uint)(0.0 <= extraout_var_01 * fVar21) & 0x80000000 ^ 0xbf000000));
          auVar23 = NEON_scvtf(auVar48,4);
          fVar70 = 0.0 - auVar23._0_4_ * fVar18;
          fVar76 = extraout_var - auVar23._4_4_ * fVar18;
          fVar79 = extraout_var_00 - auVar23._8_4_ * fVar18;
          fVar82 = extraout_var_01 - auVar23._12_4_ * fVar18;
          fVar21 = *(float *)PTR_FloatPiDivided2_04372d38;
          fVar41 = *(float *)PTR_FloatPi_04372cf0;
          fVar18 = -fVar21;
          uVar71 = -(uint)(fVar21 < fVar70);
          uVar77 = -(uint)(fVar21 < fVar76);
          uVar80 = -(uint)(fVar21 < fVar79);
          uVar83 = -(uint)(fVar21 < fVar82);
          fVar52 = -fVar41;
          fVar70 = (float)((uint)fVar70 ^ ((uint)fVar70 ^ (uint)(fVar41 - fVar70)) & uVar71);
          fVar76 = (float)((uint)fVar76 ^ ((uint)fVar76 ^ (uint)(fVar41 - fVar76)) & uVar77);
          fVar79 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)(fVar41 - fVar79)) & uVar80);
          fVar82 = (float)((uint)fVar82 ^ ((uint)fVar82 ^ (uint)(fVar41 - fVar82)) & uVar83);
          uVar43 = -(uint)(fVar70 < fVar18);
          uVar54 = -(uint)(fVar76 < fVar18);
          uVar56 = -(uint)(fVar79 < fVar18);
          uVar58 = -(uint)(fVar82 < fVar18);
          fVar96 = (float)uVar10;
          fVar105 = (float)((ulong)uVar10 >> 0x20);
          fVar21 = *(float *)(PTR_SinCoefficients_04372d28 + 4);
          fVar18 = *(float *)(PTR_CosCoefficients_04372d40 + 4);
          auVar66[0] = (byte)uVar43 | (byte)uVar71;
          auVar66[1] = (byte)(uVar43 >> 8) | (byte)(uVar71 >> 8);
          auVar66[2] = (byte)(uVar43 >> 0x10) | (byte)(uVar71 >> 0x10);
          auVar66[3] = (byte)(uVar43 >> 0x18) | (byte)(uVar71 >> 0x18);
          auVar66[4] = (byte)uVar54 | (byte)uVar77;
          auVar66[5] = (byte)(uVar54 >> 8) | (byte)(uVar77 >> 8);
          auVar66[6] = (byte)(uVar54 >> 0x10) | (byte)(uVar77 >> 0x10);
          auVar66[7] = (byte)(uVar54 >> 0x18) | (byte)(uVar77 >> 0x18);
          auVar66[8] = (byte)uVar56 | (byte)uVar80;
          auVar66[9] = (byte)(uVar56 >> 8) | (byte)(uVar80 >> 8);
          auVar66[10] = (byte)(uVar56 >> 0x10) | (byte)(uVar80 >> 0x10);
          auVar66[0xb] = (byte)(uVar56 >> 0x18) | (byte)(uVar80 >> 0x18);
          auVar66[0xc] = (byte)uVar58 | (byte)uVar83;
          auVar66[0xd] = (byte)(uVar58 >> 8) | (byte)(uVar83 >> 8);
          auVar66[0xe] = (byte)(uVar58 >> 0x10) | (byte)(uVar83 >> 0x10);
          auVar66[0xf] = (byte)(uVar58 >> 0x18) | (byte)(uVar83 >> 0x18);
          fVar70 = (float)((uint)fVar70 ^ ((uint)fVar70 ^ (uint)(fVar52 - fVar70)) & uVar43);
          fVar76 = (float)((uint)fVar76 ^ ((uint)fVar76 ^ (uint)(fVar52 - fVar76)) & uVar54);
          fVar79 = (float)((uint)fVar79 ^ ((uint)fVar79 ^ (uint)(fVar52 - fVar79)) & uVar56);
          fVar82 = (float)((uint)fVar82 ^ ((uint)fVar82 ^ (uint)(fVar52 - fVar82)) & uVar58);
          fVar88 = fVar70 * fVar70;
          fVar78 = fVar76 * fVar76;
          fVar81 = fVar79 * fVar79;
          fVar84 = fVar82 * fVar82;
          fVar97 = -*(float *)(PTR_CosCoefficients_04372d40 + 0x10);
          fVar106 = (float)uVar4;
          fVar103 = *(float *)PTR_SinCoefficients_04372d28;
          fVar107 = (float)((ulong)uVar4 >> 0x20);
          fVar89 = *(float *)PTR_CosCoefficients_04372d40;
          fVar104 = -*(float *)(PTR_CosCoefficients_04372d40 + 8);
          fVar41 = *(float *)(PTR_CosCoefficients_04372d40 + 0xc);
          fVar90 = -*(float *)(PTR_SinCoefficients_04372d28 + 8);
          fVar85 = -*(float *)(PTR_SinCoefficients_04372d28 + 0x10);
          fVar109 = (float)uStack_a8;
          fVar52 = *(float *)(PTR_SinCoefficients_04372d28 + 0xc);
          auVar23 = NEON_fmov(0xbf800000,4);
          fVar112 = (float)uStack_b8;
          auVar74 = auVar74 ^ (auVar74 ^ auVar23) & auVar66;
          auVar67._0_4_ =
               auVar74._0_4_ *
               (local_d0 +
               fVar88 * (fVar97 + fVar88 * (fVar41 + fVar88 * (fVar104 +
                                                              fVar88 * (fVar18 - fVar88 * fVar89))))
               );
          auVar67._4_4_ =
               auVar74._4_4_ *
               (fStack_cc +
               fVar78 * (fVar97 + fVar78 * (fVar41 + fVar78 * (fVar104 +
                                                              fVar78 * (fVar18 - fVar78 * fVar89))))
               );
          auVar67._8_4_ =
               auVar74._8_4_ *
               (fStack_c8 +
               fVar81 * (fVar97 + fVar81 * (fVar41 + fVar81 * (fVar104 +
                                                              fVar81 * (fVar18 - fVar81 * fVar89))))
               );
          auVar67._12_4_ =
               auVar74._12_4_ *
               (fStack_c4 +
               fVar84 * (fVar97 + fVar84 * (fVar41 + fVar84 * (fVar104 +
                                                              fVar84 * (fVar18 - fVar84 * fVar89))))
               );
          auVar49._0_4_ =
               fVar70 * (local_d0 +
                        fVar88 * (fVar85 + fVar88 * (fVar52 + fVar88 * (fVar90 + fVar88 * (fVar21 - 
                                                  fVar88 * fVar103)))));
          auVar49._4_4_ =
               fVar76 * (fStack_cc +
                        fVar78 * (fVar85 + fVar78 * (fVar52 + fVar78 * (fVar90 + fVar78 * (fVar21 - 
                                                  fVar78 * fVar103)))));
          auVar49._8_4_ =
               fVar79 * (fStack_c8 +
                        fVar81 * (fVar85 + fVar81 * (fVar52 + fVar81 * (fVar90 + fVar81 * (fVar21 - 
                                                  fVar81 * fVar103)))));
          auVar49._12_4_ =
               fVar82 * (fStack_c4 +
                        fVar84 * (fVar85 + fVar84 * (fVar52 + fVar84 * (fVar90 + fVar84 * (fVar21 - 
                                                  fVar84 * fVar103)))));
          fVar41 = 0.0 - (auVar86._0_4_ * fVar96 + auVar86._4_4_ * fVar105 + auVar86._8_4_ * fVar106
                         + auVar86._12_4_ * fVar107);
          fVar52 = 0.0 - (auVar95._0_4_ * fVar96 + auVar95._4_4_ * fVar105 + auVar95._8_4_ * fVar106
                         + auVar95._12_4_ * fVar107);
          fVar70 = 0.0 - (auVar92._0_4_ * fVar96 + auVar92._4_4_ * fVar105 + auVar92._8_4_ * fVar106
                         + auVar92._12_4_ * fVar107);
          auVar86 = NEON_ext(auVar49,auVar49,8,1);
          auVar95 = NEON_ext(auVar67,auVar67,8,1);
          fVar21 = auVar95._0_4_;
          fVar18 = auVar86._0_4_;
          fVar81 = auVar67._4_4_ * (float)DAT_0388a618;
          fVar85 = (float)((ulong)DAT_0388a618 >> 0x20) * 0.0;
          fVar105 = fVar21 * auVar67._4_4_;
          fVar106 = fVar18 * auVar67._4_4_;
          fVar84 = auVar49._4_4_ * (float)DAT_0388a870;
          fVar89 = (float)((ulong)DAT_0388a870 >> 0x20) * 0.0;
          uVar16 = 0;
          fVar107 = (float)local_b0;
          fVar76 = fVar18 * auVar67._0_4_ * (float)_DAT_03889200 +
                   fVar21 * auVar49._4_4_ * auVar49._0_4_;
          fVar79 = fVar21 * auVar67._0_4_ * (float)((ulong)_DAT_03889200 >> 0x20) +
                   fVar18 * auVar49._4_4_ * auVar49._0_4_;
          fVar82 = auVar67._0_4_ * 0.0 * (float)_UNK_03889208 + fVar81 * auVar49._0_4_;
          fVar88 = auVar67._0_4_ * 0.0 * (float)((ulong)_UNK_03889208 >> 0x20) +
                   fVar85 * auVar49._0_4_;
          fVar108 = (float)((ulong)local_b0 >> 0x20);
          fVar78 = fVar18 * auVar49._0_4_ * (float)_DAT_03889d50 +
                   fVar21 * auVar49._4_4_ * auVar67._0_4_;
          fVar21 = fVar21 * auVar49._0_4_ * (float)((ulong)_DAT_03889d50 >> 0x20) +
                   fVar18 * auVar49._4_4_ * auVar67._0_4_;
          fVar18 = auVar49._0_4_ * 0.0 * (float)_UNK_03889d58 + fVar81 * auVar67._0_4_;
          fVar81 = auVar49._0_4_ * 0.0 * (float)((ulong)_UNK_03889d58 >> 0x20) +
                   fVar85 * auVar67._0_4_;
          fVar110 = (float)local_c0;
          fVar111 = (float)((ulong)local_c0 >> 0x20);
          fVar85 = fVar105 * fVar107 + fVar76 * fVar108 + fVar78 * fVar109 + fVar41 * 0.0;
          fVar90 = fVar106 * fVar107 + fVar79 * fVar108 + fVar21 * fVar109 + fVar52 * 0.0;
          fVar97 = fVar84 * fVar107 + fVar82 * fVar108 + fVar18 * fVar109 + fVar70 * 0.0;
          fVar103 = fVar105 * fVar110 + fVar76 * fVar111 + fVar78 * fVar112 + fVar41 * 0.0;
          fVar96 = fVar106 * fVar110 + fVar79 * fVar111 + fVar21 * fVar112 + fVar52 * 0.0;
          fVar104 = fVar84 * fVar110 + fVar82 * fVar111 + fVar18 * fVar112 + fVar70 * 0.0;
          auVar68._0_4_ = fVar41 * fVar85;
          auVar68._4_4_ = fVar52 * fVar90;
          auVar68._8_4_ = fVar70 * fVar97;
          auVar68._12_4_ = (fVar89 * fVar107 + fVar88 * fVar108 + fVar81 * fVar109 + 0.0) * 1.0;
          auVar95 = NEON_ext(auVar68,auVar68,8,1);
          auVar69._0_4_ = fVar41 * fVar103;
          auVar69._4_4_ = fVar52 * fVar96;
          auVar69._8_4_ = fVar70 * fVar104;
          auVar69._12_4_ = (fVar89 * fVar110 + fVar88 * fVar111 + fVar81 * fVar112 + 0.0) * 1.0;
          auVar92 = NEON_ext(auVar69,auVar69,8,1);
          fVar76 = fVar105 * 0.0 + fVar76 * 0.0 + auVar23._0_4_ * fVar78 + fVar41 * 0.0;
          fVar21 = fVar106 * 0.0 + fVar79 * 0.0 + auVar23._4_4_ * fVar21 + fVar52 * 0.0;
          fVar18 = fVar84 * 0.0 + fVar82 * 0.0 + auVar23._8_4_ * fVar18 + fVar70 * 0.0;
          auVar74._0_4_ = fVar41 * fVar76;
          auVar74._4_4_ = fVar52 * fVar21;
          auVar74._8_4_ = fVar70 * fVar18;
          auVar74._12_4_ = (fVar89 * 0.0 + fVar88 * 0.0 + auVar23._12_4_ * fVar81 + 0.0) * 1.0;
          auVar86 = NEON_ext(auVar74,auVar74,8,1);
          do {
            plVar12 = *(long **)(*(long *)(*plVar13 + 0x200) + 0x58);
            if (plVar12 != (long *)0x0) {
              plVar9 = plVar12 + 10;
              do {
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
                if (bVar3) {
                  *(int *)plVar9 = (int)*plVar9 + 1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
            }
            fVar79 = (*(float *)(plVar12 + 0x11c) - *(float *)(plVar12 + 0x11a)) * 0.5;
            fVar82 = (*(float *)((long)plVar12 + 0x8e4) - *(float *)((long)plVar12 + 0x8d4)) * 0.5;
            fVar88 = (*(float *)(plVar12 + 0x11d) - *(float *)(plVar12 + 0x11b)) * 0.5;
            fVar78 = (*(float *)((long)plVar12 + 0x8ec) - *(float *)((long)plVar12 + 0x8dc)) * 0.5;
            fVar41 = *(float *)(plVar12 + 0x11a) + fVar79;
            fVar52 = *(float *)((long)plVar12 + 0x8d4) + fVar82;
            fVar70 = *(float *)(plVar12 + 0x11b) + fVar88;
            auVar28._0_4_ = fVar79 * fVar79;
            auVar28._4_4_ = fVar82 * fVar82;
            auVar28._8_4_ = fVar88 * fVar88;
            auVar28._12_4_ = fVar78 * fVar78;
            auVar23 = NEON_ext(auVar28,auVar28,8,1);
            auVar50._0_4_ = fVar85 * fVar41;
            auVar50._4_4_ = fVar90 * fVar52;
            auVar50._8_4_ = fVar97 * fVar70;
            auVar50._12_4_ =
                 ((float)((ulong)uStack_a8 >> 0x20) -
                 (auVar95._0_4_ + auVar68._0_4_ + auVar95._4_4_ + auVar68._4_4_)) * 1.0;
            auVar64 = NEON_ext(auVar50,auVar50,8,1);
            fVar79 = SQRT(auVar23._0_4_ + auVar28._0_4_ + auVar23._4_4_ + auVar28._4_4_);
            if (((auVar64._0_4_ + auVar50._0_4_ + auVar64._4_4_ + auVar50._4_4_ + fVar79 <= 0.0) ||
                (auVar51._0_4_ = fVar103 * fVar41, auVar51._4_4_ = fVar96 * fVar52,
                auVar51._8_4_ = fVar104 * fVar70,
                auVar51._12_4_ =
                     ((float)((ulong)uStack_b8 >> 0x20) -
                     (auVar92._0_4_ + auVar69._0_4_ + auVar92._4_4_ + auVar69._4_4_)) * 1.0,
                auVar23 = NEON_ext(auVar51,auVar51,8,1),
                fVar79 + auVar23._0_4_ + auVar51._0_4_ + auVar23._4_4_ + auVar51._4_4_ <= 0.0)) ||
               (auVar20._0_4_ = fVar76 * fVar41, auVar20._4_4_ = fVar21 * fVar52,
               auVar20._8_4_ = fVar18 * fVar70,
               auVar20._12_4_ =
                    (fVar100 - (auVar86._0_4_ + auVar74._0_4_ + auVar86._4_4_ + auVar74._4_4_)) *
                    1.0, auVar23 = NEON_ext(auVar20,auVar20,8,1),
               fVar79 + auVar23._0_4_ + auVar20._0_4_ + auVar23._4_4_ + auVar20._4_4_ <= 0.0)) {
              plVar9 = *(long **)(*(long *)(param_1 + 0x200) + uVar16 * 8);
              pcVar11 = *(code **)(*plVar9 + 0x98);
            }
            else {
              plVar9 = *(long **)(*(long *)(param_1 + 0x200) + uVar16 * 8);
              pcVar11 = *(code **)(*plVar9 + 0xa0);
            }
            (*pcVar11)(plVar9,0);
            uVar16 = (ulong)((int)uVar16 + 1);
            plVar9 = plVar12 + 10;
            do {
              iVar42 = (int)*plVar9 + -1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
              if (bVar3) {
                *(int *)plVar9 = iVar42;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar42 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar14);
        }
      }
    }
  }
  return;
}


