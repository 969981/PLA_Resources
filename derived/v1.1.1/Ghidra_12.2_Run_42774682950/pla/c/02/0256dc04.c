/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256dc04; name: FUN_0256dc04
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0256dc04(long param_1)

{
  undefined1 (*pauVar1) [12];
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  unkbyte9 Var24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  undefined8 uVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  byte bVar40;
  byte bVar41;
  float fVar37;
  int iVar38;
  byte bVar42;
  byte bVar44;
  byte bVar45;
  int iVar43;
  byte bVar46;
  byte bVar48;
  byte bVar49;
  int iVar47;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  int iVar51;
  byte bVar54;
  undefined1 auVar39 [16];
  byte bVar64;
  byte bVar65;
  float fVar55;
  float fVar56;
  int iVar57;
  byte bVar66;
  byte bVar69;
  byte bVar70;
  float fVar67;
  int iVar68;
  byte bVar71;
  byte bVar74;
  byte bVar75;
  int iVar72;
  byte bVar76;
  byte bVar78;
  byte bVar79;
  int iVar77;
  byte bVar80;
  undefined1 auVar58 [16];
  undefined8 uVar73;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  float fVar81;
  float fVar83;
  float fVar84;
  float fVar85;
  undefined1 auVar82 [16];
  float fVar86;
  undefined1 uVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar92;
  float fVar94;
  float fVar95;
  float fVar96;
  undefined1 auVar93 [16];
  float fVar97;
  float fVar98;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long *local_b0;
  undefined1 *local_a8;
  long *plStack_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_68;
  long *local_48;
  
  if (*(int *)(param_1 + 0x68) != 1) {
    return;
  }
  if (*(char *)(param_1 + 0x230) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x234) == 1) {
    local_a8 = &DAT_6723799257d05608;
    plStack_a0 = (long *)&DAT_03a82288;
    local_98 = 0x1f;
    local_90 = 0;
    lVar26 = FUN_02b11e64(DAT_043ef5a8,&local_a8);
    if (lVar26 != 0) {
      fVar97 = (float)*(undefined8 *)(lVar26 + 0xb8);
      fVar37 = *(float *)(lVar26 + 0x90);
      if ((float)((ulong)*(undefined8 *)(lVar26 + 0xb8) >> 0x20) == 0.0) {
        uStack_b8 = (ulong)(uint)((*(float *)(lVar26 + 0xc0) + 1.0) / fVar37) << 0x20;
        local_c0 = DAT_0388a618;
        uStack_c8 = (ulong)(uint)((1.0 - *(float *)(lVar26 + 0xc0)) / fVar37) << 0x20;
        local_d0 = DAT_0388a870;
        uStack_d8 = (ulong)(uint)((*(float *)(lVar26 + 0xc4) + 1.0) / *(float *)(lVar26 + 0xa4)) <<
                    0x20;
        local_e0 = DAT_0388a7e8;
        uStack_e8 = (ulong)(uint)((1.0 - *(float *)(lVar26 + 0xc4)) / *(float *)(lVar26 + 0xa4)) <<
                    0x20;
        local_f0 = DAT_0388a868;
        fVar97 = (1.0 - *(float *)(lVar26 + 200)) / fVar97;
      }
      else {
        fVar37 = -1.0 / fVar37;
        fVar55 = -1.0 / *(float *)(lVar26 + 0xa4);
        fVar92 = (float)((ulong)DAT_0388a7e8 >> 0x20);
        fVar56 = fVar37 * fVar37 + (float)DAT_0388a618;
        fVar35 = (float)((ulong)DAT_0388a618 >> 0x20);
        fVar67 = fVar35 + 0.0;
        fVar81 = fVar55 * fVar55 + (float)DAT_0388a7e8;
        fVar83 = fVar92 + 0.0;
        fVar33 = fVar56 + fVar67;
        fVar56 = fVar56 + fVar67;
        auVar82._8_8_ = CONCAT44(fVar56,fVar33);
        auVar82._0_8_ = CONCAT44(fVar56,fVar33);
        fVar34 = fVar81 + fVar83;
        fVar81 = fVar81 + fVar83;
        auVar90._8_8_ = CONCAT44(fVar81,fVar34);
        auVar90._0_8_ = CONCAT44(fVar81,fVar34);
        auVar82 = NEON_frsqrte(auVar82,4);
        auVar102._0_4_ = auVar82._0_4_ * fVar33;
        auVar102._4_4_ = auVar82._4_4_ * fVar56;
        auVar102._8_4_ = auVar82._8_4_ * fVar33;
        auVar102._12_4_ = auVar82._12_4_ * fVar56;
        auVar99 = NEON_frsqrte(auVar90,4);
        auVar90 = NEON_frsqrts(auVar82,auVar102,4);
        auVar101._0_4_ = auVar82._0_4_ * auVar90._0_4_;
        auVar101._4_4_ = auVar82._4_4_ * auVar90._4_4_;
        auVar101._8_4_ = auVar82._8_4_ * auVar90._8_4_;
        auVar101._12_4_ = auVar82._12_4_ * auVar90._12_4_;
        auVar104._0_4_ = auVar99._0_4_ * fVar34;
        auVar104._4_4_ = auVar99._4_4_ * fVar81;
        auVar104._8_4_ = auVar99._8_4_ * fVar34;
        auVar104._12_4_ = auVar99._12_4_ * fVar81;
        auVar82 = NEON_frsqrts(auVar99,auVar104,4);
        auVar91._0_4_ = auVar99._0_4_ * auVar82._0_4_;
        auVar91._4_4_ = auVar99._4_4_ * auVar82._4_4_;
        auVar91._8_4_ = auVar99._8_4_ * auVar82._8_4_;
        auVar91._12_4_ = auVar99._12_4_ * auVar82._12_4_;
        auVar100._0_4_ = fVar33 * auVar101._0_4_;
        auVar100._4_4_ = fVar56 * auVar101._4_4_;
        auVar100._8_4_ = fVar33 * auVar101._8_4_;
        auVar100._12_4_ = fVar56 * auVar101._12_4_;
        iVar38 = -(uint)(fVar33 == 0.0);
        iVar43 = -(uint)(fVar56 == 0.0);
        iVar47 = -(uint)(fVar33 == 0.0);
        iVar51 = -(uint)(fVar56 == 0.0);
        bVar40 = ~(byte)((uint)iVar38 >> 8);
        bVar41 = ~(byte)((uint)iVar38 >> 0x10);
        bVar42 = ~(byte)((uint)iVar38 >> 0x18);
        bVar44 = ~(byte)((uint)iVar43 >> 8);
        bVar45 = ~(byte)((uint)iVar43 >> 0x10);
        bVar46 = ~(byte)((uint)iVar43 >> 0x18);
        bVar48 = ~(byte)((uint)iVar47 >> 8);
        bVar49 = ~(byte)((uint)iVar47 >> 0x10);
        bVar50 = ~(byte)((uint)iVar47 >> 0x18);
        bVar52 = ~(byte)((uint)iVar51 >> 8);
        bVar53 = ~(byte)((uint)iVar51 >> 0x10);
        bVar54 = ~(byte)((uint)iVar51 >> 0x18);
        auVar82 = NEON_frsqrts(auVar101,auVar100,4);
        fVar83 = auVar101._0_4_ * auVar82._0_4_;
        fVar84 = auVar101._4_4_ * auVar82._4_4_;
        fVar85 = auVar101._8_4_ * auVar82._8_4_;
        fVar86 = auVar101._12_4_ * auVar82._12_4_;
        fVar33 = (float)DAT_0388a618 * fVar83;
        fVar35 = fVar35 * fVar84;
        fVar56 = fVar37 * fVar85;
        fVar67 = fVar86 * 0.0;
        fVar83 = (float)DAT_0388a870 * fVar83;
        fVar84 = (float)((ulong)DAT_0388a870 >> 0x20) * fVar84;
        fVar37 = fVar37 * fVar85;
        fVar86 = fVar86 * 0.0;
        auVar99._0_4_ = fVar34 * auVar91._0_4_;
        auVar99._4_4_ = fVar81 * auVar91._4_4_;
        auVar99._8_4_ = fVar34 * auVar91._8_4_;
        auVar99._12_4_ = fVar81 * auVar91._12_4_;
        auVar82 = NEON_frsqrts(auVar91,auVar99,4);
        iVar57 = -(uint)(fVar34 == 0.0);
        iVar68 = -(uint)(fVar81 == 0.0);
        iVar72 = -(uint)(fVar34 == 0.0);
        iVar77 = -(uint)(fVar81 == 0.0);
        bVar64 = ~(byte)((uint)iVar57 >> 8);
        bVar65 = ~(byte)((uint)iVar57 >> 0x10);
        bVar66 = ~(byte)((uint)iVar57 >> 0x18);
        bVar69 = ~(byte)((uint)iVar68 >> 8);
        bVar70 = ~(byte)((uint)iVar68 >> 0x10);
        bVar71 = ~(byte)((uint)iVar68 >> 0x18);
        bVar74 = ~(byte)((uint)iVar72 >> 8);
        bVar75 = ~(byte)((uint)iVar72 >> 0x10);
        bVar76 = ~(byte)((uint)iVar72 >> 0x18);
        bVar78 = ~(byte)((uint)iVar77 >> 8);
        bVar79 = ~(byte)((uint)iVar77 >> 0x10);
        bVar80 = ~(byte)((uint)iVar77 >> 0x18);
        uStack_b8 = CONCAT17((byte)((uint)fVar67 >> 0x18) & bVar54,
                             CONCAT16((byte)((uint)fVar67 >> 0x10) & bVar53,
                                      CONCAT15((byte)((uint)fVar67 >> 8) & bVar52,
                                               CONCAT14(SUB41(fVar67,0) & ~(byte)iVar51,
                                                        CONCAT13((byte)((uint)fVar56 >> 0x18) &
                                                                 bVar50,CONCAT12((byte)((uint)fVar56
                                                                                       >> 0x10) &
                                                                                 bVar49,CONCAT11((
                                                  byte)((uint)fVar56 >> 8) & bVar48,
                                                  SUB41(fVar56,0) & ~(byte)iVar47)))))));
        local_c0 = CONCAT17((byte)((uint)fVar35 >> 0x18) & bVar46,
                            CONCAT16((byte)((uint)fVar35 >> 0x10) & bVar45,
                                     CONCAT15((byte)((uint)fVar35 >> 8) & bVar44,
                                              CONCAT14(SUB41(fVar35,0) & ~(byte)iVar43,
                                                       CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                                bVar42,CONCAT12((byte)((uint)fVar33
                                                                                      >> 0x10) &
                                                                                bVar41,CONCAT11((
                                                  byte)((uint)fVar33 >> 8) & bVar40,
                                                  SUB41(fVar33,0) & ~(byte)iVar38)))))));
        uStack_c8._0_4_ =
             (float)CONCAT13((byte)((uint)fVar37 >> 0x18) & bVar50,
                             CONCAT12((byte)((uint)fVar37 >> 0x10) & bVar49,
                                      CONCAT11((byte)((uint)fVar37 >> 8) & bVar48,
                                               SUB41(fVar37,0) & ~(byte)iVar47)));
        uStack_c8 = CONCAT17((byte)((uint)fVar86 >> 0x18) & bVar54,
                             CONCAT16((byte)((uint)fVar86 >> 0x10) & bVar53,
                                      CONCAT15((byte)((uint)fVar86 >> 8) & bVar52,
                                               CONCAT14(SUB41(fVar86,0) & ~(byte)iVar51,
                                                        (float)uStack_c8))));
        local_d0._0_4_ =
             (float)CONCAT13((byte)((uint)fVar83 >> 0x18) & bVar42,
                             CONCAT12((byte)((uint)fVar83 >> 0x10) & bVar41,
                                      CONCAT11((byte)((uint)fVar83 >> 8) & bVar40,
                                               SUB41(fVar83,0) & ~(byte)iVar38)));
        local_d0 = CONCAT17((byte)((uint)fVar84 >> 0x18) & bVar46,
                            CONCAT16((byte)((uint)fVar84 >> 0x10) & bVar45,
                                     CONCAT15((byte)((uint)fVar84 >> 8) & bVar44,
                                              CONCAT14(SUB41(fVar84,0) & ~(byte)iVar43,
                                                       (float)local_d0))));
        fVar56 = auVar91._0_4_ * auVar82._0_4_;
        fVar67 = auVar91._4_4_ * auVar82._4_4_;
        fVar81 = auVar91._8_4_ * auVar82._8_4_;
        fVar34 = auVar91._12_4_ * auVar82._12_4_;
        fVar37 = (float)DAT_0388a7e8 * fVar56;
        fVar92 = fVar92 * fVar67;
        fVar35 = fVar55 * fVar81;
        fVar33 = fVar34 * 0.0;
        fVar56 = (float)DAT_0388a868 * fVar56;
        fVar67 = (float)((ulong)DAT_0388a868 >> 0x20) * fVar67;
        fVar55 = fVar55 * fVar81;
        fVar34 = fVar34 * 0.0;
        uStack_e8._0_4_ =
             (float)CONCAT13((byte)((uint)fVar55 >> 0x18) & bVar76,
                             CONCAT12((byte)((uint)fVar55 >> 0x10) & bVar75,
                                      CONCAT11((byte)((uint)fVar55 >> 8) & bVar74,
                                               SUB41(fVar55,0) & ~(byte)iVar72)));
        uStack_e8 = CONCAT17((byte)((uint)fVar34 >> 0x18) & bVar80,
                             CONCAT16((byte)((uint)fVar34 >> 0x10) & bVar79,
                                      CONCAT15((byte)((uint)fVar34 >> 8) & bVar78,
                                               CONCAT14(SUB41(fVar34,0) & ~(byte)iVar77,
                                                        (float)uStack_e8))));
        local_f0._0_4_ =
             (float)CONCAT13((byte)((uint)fVar56 >> 0x18) & bVar66,
                             CONCAT12((byte)((uint)fVar56 >> 0x10) & bVar65,
                                      CONCAT11((byte)((uint)fVar56 >> 8) & bVar64,
                                               SUB41(fVar56,0) & ~(byte)iVar57)));
        local_f0 = CONCAT17((byte)((uint)fVar67 >> 0x18) & bVar71,
                            CONCAT16((byte)((uint)fVar67 >> 0x10) & bVar70,
                                     CONCAT15((byte)((uint)fVar67 >> 8) & bVar69,
                                              CONCAT14(SUB41(fVar67,0) & ~(byte)iVar68,
                                                       (float)local_f0))));
        uStack_d8 = CONCAT17((byte)((uint)fVar33 >> 0x18) & bVar80,
                             CONCAT16((byte)((uint)fVar33 >> 0x10) & bVar79,
                                      CONCAT15((byte)((uint)fVar33 >> 8) & bVar78,
                                               CONCAT14(SUB41(fVar33,0) & ~(byte)iVar77,
                                                        CONCAT13((byte)((uint)fVar35 >> 0x18) &
                                                                 bVar76,CONCAT12((byte)((uint)fVar35
                                                                                       >> 0x10) &
                                                                                 bVar75,CONCAT11((
                                                  byte)((uint)fVar35 >> 8) & bVar74,
                                                  SUB41(fVar35,0) & ~(byte)iVar72)))))));
        local_e0 = CONCAT17((byte)((uint)fVar92 >> 0x18) & bVar71,
                            CONCAT16((byte)((uint)fVar92 >> 0x10) & bVar70,
                                     CONCAT15((byte)((uint)fVar92 >> 8) & bVar69,
                                              CONCAT14(SUB41(fVar92,0) & ~(byte)iVar68,
                                                       CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                                bVar66,CONCAT12((byte)((uint)fVar37
                                                                                      >> 0x10) &
                                                                                bVar65,CONCAT11((
                                                  byte)((uint)fVar37 >> 8) & bVar64,
                                                  SUB41(fVar37,0) & ~(byte)iVar57)))))));
        fVar97 = ((*(float *)(lVar26 + 200) / fVar97) * fVar97) / (fVar97 + 1.0);
      }
      lVar27 = nn::os::GetCurrentThread();
      plVar30 = (long *)(param_1 + 0x4c8);
      do {
        if (*plVar30 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x4bc));
            while (*plVar30 == 0) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
              if (bVar5) {
                *plVar30 = lVar27;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') goto LAB_0256ddf4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar5) {
          *plVar30 = lVar27;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
LAB_0256ddf4:
      fVar98 = *(float *)(param_1 + 0x434);
      *(undefined8 *)(param_1 + 0x4c8) = 0;
      nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x4bc));
      pauVar1 = (undefined1 (*) [12])(lVar26 + 0x50);
      fVar35 = (float)((ulong)*(undefined8 *)(lVar26 + 0x58) >> 0x20);
      uVar11 = *(undefined8 *)(lVar26 + 0x68);
      uVar10 = *(undefined8 *)(lVar26 + 0x60);
      Var24 = *(unkbyte9 *)(lVar26 + 0x60);
      fVar56 = *(float *)(lVar26 + 0x70);
      fVar67 = *(float *)(lVar26 + 0x74);
      fVar34 = *(float *)(lVar26 + 0x78);
      fVar95 = (float)*(undefined8 *)(lVar26 + 0x88);
      fVar96 = (float)((ulong)*(undefined8 *)(lVar26 + 0x88) >> 0x20);
      fVar92 = (float)*(undefined8 *)(lVar26 + 0x80);
      fVar94 = (float)((ulong)*(undefined8 *)(lVar26 + 0x80) >> 0x20);
      fVar37 = (float)uVar11;
      fVar81 = SUB124(*pauVar1,0);
      fVar83 = SUB124(*pauVar1,4);
      fVar85 = SUB124(*pauVar1,8);
      fVar33 = *(float *)(param_1 + 0x430);
      fVar106 = (float)uStack_b8;
      fVar55 = (float)Var24;
      fVar84 = (float)((unkuint9)Var24 >> 0x20);
      fVar92 = fVar92 + (fVar56 + (float)*(undefined8 *)*pauVar1 * 0.0 + (float)uVar10 * 0.0 +
                        fVar92 * 0.0) * fVar33;
      fVar94 = fVar94 + (fVar67 + (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20) * 0.0 +
                                  (float)((ulong)uVar10 >> 0x20) * 0.0 + fVar94 * 0.0) * fVar33;
      fVar95 = fVar95 + (fVar34 + (float)*(undefined8 *)(lVar26 + 0x58) * 0.0 + fVar37 * 0.0 +
                        fVar95 * 0.0) * fVar33;
      fVar96 = fVar96 + (*(float *)(lVar26 + 0x7c) +
                         fVar35 * 0.0 + (float)((ulong)uVar11 >> 0x20) * 0.0 + fVar96 * 0.0) *
                        fVar33;
      fVar124 = (float)uStack_c8;
      auVar102 = NEON_fmov(0xbf800000,4);
      uVar87 = (undefined1)((ulong)_UNK_0388a138 >> 0x18);
      fVar86 = (float)(CONCAT17(uVar87,CONCAT16((char)((ulong)_UNK_0388a138 >> 0x10),
                                                CONCAT15((char)((ulong)_UNK_0388a138 >> 8),
                                                         CONCAT14((char)_UNK_0388a138,fVar37)))) >>
                      0x20);
      fVar36 = (float)local_c0;
      fVar105 = (float)((ulong)local_c0 >> 0x20);
      fVar127 = (float)uStack_d8;
      fVar122 = (float)local_d0;
      fVar123 = (float)((ulong)local_d0 >> 0x20);
      fVar129 = (float)uStack_e8;
      fVar125 = (float)local_e0;
      fVar126 = (float)((ulong)local_e0 >> 0x20);
      fVar35 = 0.0 - (fVar81 * fVar92 + fVar83 * fVar94 + fVar85 * fVar95 + fVar35 * fVar96);
      fVar33 = 0.0 - (fVar55 * fVar92 + fVar84 * fVar94 + fVar37 * fVar95 +
                     (float)CONCAT13((char)((ulong)uVar11 >> 0x38),
                                     CONCAT12((char)((ulong)uVar11 >> 0x30),
                                              (short)(CONCAT12((char)((ulong)uVar11 >> 0x28),
                                                               CONCAT11((char)((ulong)uVar11 >> 0x20
                                                                              ),uVar87)) >> 8))) *
                     fVar96);
      fVar92 = 0.0 - (fVar56 * fVar92 + fVar67 * fVar94 + fVar34 * fVar95 +
                     *(float *)(lVar26 + 0x7c) * fVar96);
      fVar119 = fVar81 * fVar36 + fVar83 * fVar105 + fVar85 * fVar106 + fVar35 * 0.0;
      fVar120 = fVar55 * fVar36 + fVar84 * fVar105 + fVar37 * fVar106 + fVar33 * 0.0;
      fVar121 = fVar56 * fVar36 + fVar67 * fVar105 + fVar34 * fVar106 + fVar92 * 0.0;
      fVar96 = (float)local_f0;
      fVar128 = (float)((ulong)local_f0 >> 0x20);
      fVar116 = fVar81 * fVar122 + fVar83 * fVar123 + fVar85 * fVar124 + fVar35 * 0.0;
      fVar117 = fVar55 * fVar122 + fVar84 * fVar123 + fVar37 * fVar124 + fVar33 * 0.0;
      fVar118 = fVar56 * fVar122 + fVar67 * fVar123 + fVar34 * fVar124 + fVar92 * 0.0;
      fVar110 = fVar81 * fVar125 + fVar83 * fVar126 + fVar85 * fVar127 + fVar35 * 0.0;
      fVar111 = fVar55 * fVar125 + fVar84 * fVar126 + fVar37 * fVar127 + fVar33 * 0.0;
      fVar112 = fVar56 * fVar125 + fVar67 * fVar126 + fVar34 * fVar127 + fVar92 * 0.0;
      fVar113 = fVar81 * fVar96 + fVar83 * fVar128 + fVar85 * fVar129 + fVar35 * 0.0;
      fVar114 = fVar55 * fVar96 + fVar84 * fVar128 + fVar37 * fVar129 + fVar33 * 0.0;
      fVar115 = fVar56 * fVar96 + fVar67 * fVar128 + fVar34 * fVar129 + fVar92 * 0.0;
      fVar88 = fVar35 * fVar119;
      fVar89 = fVar33 * fVar120;
      fVar94 = fVar92 * fVar121;
      fVar95 = (fVar36 * 0.0 + fVar105 * 0.0 + fVar86 * fVar106 + 0.0) * 1.0;
      fVar107 = fVar81 * 0.0 + fVar83 * 0.0 + auVar102._0_4_ * fVar85 + fVar35 * 0.0;
      fVar108 = fVar55 * 0.0 + fVar84 * 0.0 + auVar102._4_4_ * fVar37 + fVar33 * 0.0;
      fVar109 = fVar56 * 0.0 + fVar67 * 0.0 + auVar102._8_4_ * fVar34 + fVar92 * 0.0;
      auVar93._0_4_ = fVar35 * fVar116;
      auVar93._4_4_ = fVar33 * fVar117;
      auVar93._8_4_ = fVar92 * fVar118;
      auVar93._12_4_ = (fVar122 * 0.0 + fVar123 * 0.0 + fVar86 * fVar124 + 0.0) * 1.0;
      auVar12._4_4_ = fVar89;
      auVar12._0_4_ = fVar88;
      auVar12._8_4_ = fVar94;
      auVar12._12_4_ = fVar95;
      auVar13._4_4_ = fVar89;
      auVar13._0_4_ = fVar88;
      auVar13._8_4_ = fVar94;
      auVar13._12_4_ = fVar95;
      auVar82 = NEON_ext(auVar12,auVar13,8,1);
      auVar103._0_4_ = fVar35 * fVar110;
      auVar103._4_4_ = fVar33 * fVar111;
      auVar103._8_4_ = fVar92 * fVar112;
      auVar103._12_4_ = (fVar125 * 0.0 + fVar126 * 0.0 + fVar86 * fVar127 + 0.0) * 1.0;
      auVar90 = NEON_ext(auVar93,auVar93,8,1);
      fVar105 = fVar35 * fVar113;
      fVar106 = fVar33 * fVar114;
      fVar94 = fVar92 * fVar115;
      fVar95 = (fVar96 * 0.0 + fVar128 * 0.0 + fVar86 * fVar129 + 0.0) * 1.0;
      auVar101 = NEON_ext(auVar103,auVar103,8,1);
      auVar14._4_4_ = fVar106;
      auVar14._0_4_ = fVar105;
      auVar14._8_4_ = fVar94;
      auVar14._12_4_ = fVar95;
      auVar15._4_4_ = fVar106;
      auVar15._0_4_ = fVar105;
      auVar15._8_4_ = fVar94;
      auVar15._12_4_ = fVar95;
      auVar104 = NEON_ext(auVar14,auVar15,8,1);
      fVar94 = fVar35 * fVar107;
      fVar95 = fVar33 * fVar108;
      fVar96 = fVar92 * fVar109;
      fVar36 = (auVar102._12_4_ * fVar86 + 0.0 + 0.0) * 1.0;
      uVar21 = CONCAT44((float)((ulong)uStack_c8 >> 0x20) -
                        (auVar90._0_4_ + auVar93._0_4_ + auVar90._4_4_ + auVar93._4_4_),fVar118);
      uVar20 = CONCAT44(fVar117,fVar116);
      uVar23 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) -
                        (auVar82._0_4_ + fVar88 + auVar82._4_4_ + fVar89),fVar121);
      uVar22 = CONCAT44(fVar120,fVar119);
      auVar6._4_4_ = fVar95;
      auVar6._0_4_ = fVar94;
      auVar6._8_4_ = fVar96;
      auVar6._12_4_ = fVar36;
      auVar7._4_4_ = fVar95;
      auVar7._0_4_ = fVar94;
      auVar7._8_4_ = fVar96;
      auVar7._12_4_ = fVar36;
      auVar82 = NEON_ext(auVar6,auVar7,8,1);
      uVar19 = CONCAT44((float)((ulong)uStack_e8 >> 0x20) -
                        (auVar104._0_4_ + fVar105 + auVar104._4_4_ + fVar106),fVar115);
      uVar18 = CONCAT44(fVar114,fVar113);
      uVar17 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) -
                        (auVar101._0_4_ + auVar103._0_4_ + auVar101._4_4_ + auVar103._4_4_),fVar112)
      ;
      uVar16 = CONCAT44(fVar111,fVar110);
      fVar81 = fVar81 * 0.0 + fVar83 * 0.0 + fVar85 * 1.0 + fVar35 * 0.0;
      fVar37 = fVar55 * 0.0 + fVar84 * 0.0 + fVar37 * 1.0 + fVar33 * 0.0;
      auVar58._0_8_ = CONCAT44(fVar37,fVar81);
      auVar58._8_4_ = fVar56 * 0.0 + fVar67 * 0.0 + fVar34 * 1.0 + fVar92 * 0.0;
      fVar35 = fVar35 * fVar81;
      fVar33 = fVar33 * fVar37;
      fVar37 = (fVar86 * 1.0 + 0.0 + 0.0) * 1.0;
      auVar8._4_4_ = fVar33;
      auVar8._0_4_ = fVar35;
      auVar8._8_4_ = fVar92 * auVar58._8_4_;
      auVar8._12_4_ = fVar37;
      auVar9._4_4_ = fVar33;
      auVar9._0_4_ = fVar35;
      auVar9._8_4_ = fVar92 * auVar58._8_4_;
      auVar9._12_4_ = fVar37;
      auVar90 = NEON_ext(auVar8,auVar9,8,1);
      auVar58._12_4_ = fVar98 - (auVar90._0_4_ + fVar35 + auVar90._4_4_ + fVar33);
      uVar73 = auVar58._8_8_;
      uVar11 = CONCAT44(fVar97 - (auVar82._0_4_ + fVar94 + auVar82._4_4_ + fVar95),fVar109);
      uVar10 = CONCAT44(fVar108,fVar107);
      plVar30 = *(long **)(param_1 + 0x2d0);
      uVar25 = auVar58._0_8_;
      goto joined_r0x0256e3dc;
    }
  }
  plVar30 = *(long **)(param_1 + 0x2d0);
  uVar23 = uStack_b8;
  uVar22 = local_c0;
  uVar21 = uStack_c8;
  uVar20 = local_d0;
  uVar17 = uStack_d8;
  uVar16 = local_e0;
  uVar19 = uStack_e8;
  uVar18 = local_f0;
  uVar11 = uStack_f8;
  uVar10 = local_100;
  uVar73 = uStack_108;
  uVar25 = local_110;
joined_r0x0256e3dc:
  if (plVar30 != (long *)0x0) {
    puVar2 = PTR_DAT_04387990 + 0x10;
    do {
      plStack_a0 = (long *)plVar30[4];
      local_a8 = puVar2;
      if (plStack_a0 != (long *)0x0) {
        (**(code **)(*plStack_a0 + 0x18))();
      }
      local_98 = plVar30[5];
      if (local_98 != 0) {
        lVar26 = *(long *)(local_98 + 0x58);
        if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_0256e418;
        if (*(long *)(lVar26 + 0x10) == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
          *(undefined8 *)(lVar26 + 0x10) = uVar28;
        }
        piVar3 = (int *)(lVar26 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_90 = plVar30[6];
      if (local_90 != 0) {
        lVar26 = *(long *)(local_90 + 0x58);
        if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_0256e418;
        if (*(long *)(lVar26 + 0x10) == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
          *(undefined8 *)(lVar26 + 0x10) = uVar28;
        }
        piVar3 = (int *)(lVar26 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_88 = plVar30[7];
      if (local_88 != 0) {
        lVar26 = *(long *)(local_88 + 0x58);
        if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) goto LAB_0256e418;
        if (*(long *)(lVar26 + 0x10) == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
          *(undefined8 *)(lVar26 + 0x10) = uVar28;
        }
        piVar3 = (int *)(lVar26 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_80 = plVar30[8];
      if (local_80 != 0) {
        lVar26 = *(long *)(local_80 + 0x58);
        if (*(undefined8 **)(lVar26 + 0x18) == (undefined8 *)0x0) {
LAB_0256e418:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar26 + 0x10) == 0) {
          uVar28 = (**(code **)**(undefined8 **)(lVar26 + 0x18))();
          *(undefined8 *)(lVar26 + 0x10) = uVar28;
        }
        piVar3 = (int *)(lVar26 + 0xc);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_78 = plVar30[9];
      if (local_78 != 0) {
        piVar3 = (int *)(local_78 + 0x50);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
          if (bVar5) {
            *piVar3 = *piVar3 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      local_70 = plVar30[10];
      local_68 = (undefined1)plVar30[0xb];
      plVar32 = *(long **)(local_90 + 0x280);
      for (plVar31 = *(long **)(local_90 + 0x278); plVar31 != plVar32; plVar31 = plVar31 + 1) {
        lVar26 = *plVar31;
        auVar82 = *(undefined1 (*) [16])(lVar26 + 0x290);
        fVar97 = auVar82._12_4_;
        if (fVar97 <= 0.0) goto LAB_0256e140;
        fVar37 = auVar82._0_4_;
        if (*(int *)(param_1 + 0x234) == 1) {
          local_c0._0_4_ = (float)uVar22;
          local_c0._4_4_ = (float)((ulong)uVar22 >> 0x20);
          uStack_b8._0_4_ = (float)uVar23;
          uStack_b8._4_4_ = (float)((ulong)uVar23 >> 0x20);
          auVar59._0_4_ = (float)local_c0 * fVar37;
          fVar35 = auVar82._4_4_;
          auVar59._4_4_ = local_c0._4_4_ * fVar35;
          fVar33 = auVar82._8_4_;
          auVar59._8_4_ = (float)uStack_b8 * fVar33;
          auVar59._12_4_ = uStack_b8._4_4_ * 1.0;
          auVar82 = NEON_ext(auVar59,auVar59,8,1);
          if (0.0 < fVar97 + auVar82._0_4_ + auVar59._0_4_ + auVar82._4_4_ + auVar59._4_4_) {
            local_d0._0_4_ = (float)uVar20;
            local_d0._4_4_ = (float)((ulong)uVar20 >> 0x20);
            uStack_c8._0_4_ = (float)uVar21;
            uStack_c8._4_4_ = (float)((ulong)uVar21 >> 0x20);
            auVar60._0_4_ = (float)local_d0 * fVar37;
            auVar60._4_4_ = local_d0._4_4_ * fVar35;
            auVar60._8_4_ = (float)uStack_c8 * fVar33;
            auVar60._12_4_ = uStack_c8._4_4_ * 1.0;
            auVar82 = NEON_ext(auVar60,auVar60,8,1);
            if (0.0 < fVar97 + auVar82._0_4_ + auVar60._0_4_ + auVar82._4_4_ + auVar60._4_4_) {
              local_e0._0_4_ = (float)uVar16;
              local_e0._4_4_ = (float)((ulong)uVar16 >> 0x20);
              uStack_d8._0_4_ = (float)uVar17;
              uStack_d8._4_4_ = (float)((ulong)uVar17 >> 0x20);
              auVar61._0_4_ = (float)local_e0 * fVar37;
              auVar61._4_4_ = local_e0._4_4_ * fVar35;
              auVar61._8_4_ = (float)uStack_d8 * fVar33;
              auVar61._12_4_ = uStack_d8._4_4_ * 1.0;
              auVar82 = NEON_ext(auVar61,auVar61,8,1);
              if (0.0 < fVar97 + auVar82._0_4_ + auVar61._0_4_ + auVar82._4_4_ + auVar61._4_4_) {
                local_f0._0_4_ = (float)uVar18;
                local_f0._4_4_ = (float)((ulong)uVar18 >> 0x20);
                uStack_e8._0_4_ = (float)uVar19;
                uStack_e8._4_4_ = (float)((ulong)uVar19 >> 0x20);
                auVar62._0_4_ = (float)local_f0 * fVar37;
                auVar62._4_4_ = local_f0._4_4_ * fVar35;
                auVar62._8_4_ = (float)uStack_e8 * fVar33;
                auVar62._12_4_ = uStack_e8._4_4_ * 1.0;
                auVar82 = NEON_ext(auVar62,auVar62,8,1);
                if (0.0 < fVar97 + auVar82._0_4_ + auVar62._0_4_ + auVar82._4_4_ + auVar62._4_4_) {
                  local_100._0_4_ = (float)uVar10;
                  local_100._4_4_ = (float)((ulong)uVar10 >> 0x20);
                  uStack_f8._0_4_ = (float)uVar11;
                  uStack_f8._4_4_ = (float)((ulong)uVar11 >> 0x20);
                  auVar63._0_4_ = (float)local_100 * fVar37;
                  auVar63._4_4_ = local_100._4_4_ * fVar35;
                  auVar63._8_4_ = (float)uStack_f8 * fVar33;
                  auVar63._12_4_ = uStack_f8._4_4_ * 1.0;
                  auVar82 = NEON_ext(auVar63,auVar63,8,1);
                  if (0.0 < fVar97 + auVar82._0_4_ + auVar63._0_4_ + auVar82._4_4_ + auVar63._4_4_)
                  {
                    local_110._0_4_ = (float)uVar25;
                    local_110._4_4_ = (float)((ulong)uVar25 >> 0x20);
                    uStack_108._0_4_ = (float)uVar73;
                    uStack_108._4_4_ = (float)((ulong)uVar73 >> 0x20);
                    auVar39._0_4_ = (float)local_110 * fVar37;
                    auVar39._4_4_ = local_110._4_4_ * fVar35;
                    auVar39._8_4_ = (float)uStack_108 * fVar33;
                    auVar39._12_4_ = uStack_108._4_4_ * 1.0;
                    auVar82 = NEON_ext(auVar39,auVar39,8,1);
                    if (0.0 < fVar97 + auVar82._0_4_ + auVar39._0_4_ + auVar82._4_4_ + auVar39._4_4_
                       ) goto LAB_0256e2bc;
                  }
                }
              }
            }
          }
LAB_0256e270:
          if (*(long *)(lVar26 + 0x1f0) != 0) {
            FUN_00956dac(&local_48,lVar26 + 0x1a8);
            (**(code **)(*local_48 + 0x98))(local_48,0);
            if (local_48 != (long *)0x0) {
              lVar26 = local_48[0xb];
              piVar3 = (int *)(lVar26 + 0xc);
              do {
                iVar38 = *piVar3 + -1;
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
                if (bVar5) {
                  *piVar3 = iVar38;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                plVar29 = local_48;
              } while (cVar4 != '\0');
LAB_0256e13c:
              if (iVar38 == 0) {
                *(undefined8 *)(lVar26 + 0x18) = 0;
                (**(code **)(*plVar29 + 0x20))();
              }
            }
          }
        }
        else {
          if ((*(int *)(param_1 + 0x234) == 2) &&
             (auVar82 = NEON_ext(auVar82,auVar82,8,1),
             fVar37 = fVar37 - (float)*(undefined8 *)(param_1 + 0x240),
             fVar35 = auVar82._0_4_ - (float)((ulong)*(undefined8 *)(param_1 + 0x240) >> 0x20),
             fVar97 = ABS(fVar97) + *(float *)(param_1 + 0x250),
             fVar97 * fVar97 < fVar37 * fVar37 + fVar35 * fVar35)) goto LAB_0256e270;
LAB_0256e2bc:
          if (*(char *)(param_1 + 0x3b0) == '\0') {
            FUN_00956dac(&local_b0,lVar26 + 0x1a8);
            (**(code **)(*local_b0 + 0xa0))(local_b0,0);
            if (local_b0 == (long *)0x0) goto LAB_0256e140;
            lVar26 = local_b0[0xb];
            piVar3 = (int *)(lVar26 + 0xc);
            do {
              iVar38 = *piVar3 + -1;
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar5) {
                *piVar3 = iVar38;
                cVar4 = ExclusiveMonitorsStatus();
              }
              plVar29 = local_b0;
            } while (cVar4 != '\0');
            goto LAB_0256e13c;
          }
        }
LAB_0256e140:
      }
      FUN_0256719c(&local_a8);
      plVar30 = (long *)*plVar30;
    } while (plVar30 != (long *)0x0);
  }
  return;
}


