/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030269e0; name: FUN_030269e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030269e0(long param_1,long param_2,ulong param_3,int param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [14];
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uVar20;
  long *plVar21;
  undefined1 auVar67 [12];
  ulong uVar22;
  long lVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  float *pfVar29;
  float *pfVar30;
  undefined8 *puVar31;
  uint *puVar32;
  uint *puVar33;
  long lVar34;
  undefined1 (*pauVar35) [16];
  ulong uVar36;
  undefined1 (*pauVar37) [16];
  undefined4 uVar38;
  int iVar39;
  double dVar40;
  undefined1 auVar41 [12];
  int iVar45;
  int iVar46;
  undefined1 auVar42 [12];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar47;
  int iVar48;
  int iVar49;
  undefined8 uVar50;
  int iVar60;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar51;
  int iVar57;
  undefined8 uVar52;
  float fVar58;
  uint uVar59;
  undefined1 auVar56 [16];
  int iVar61;
  float fVar62;
  float fVar63;
  undefined8 uVar64;
  float fVar73;
  undefined8 uVar65;
  double dVar66;
  undefined1 auVar68 [16];
  int iVar74;
  float fVar75;
  int iVar76;
  int iVar77;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  undefined1 uVar81;
  undefined1 uVar82;
  undefined1 uVar83;
  undefined1 uVar84;
  undefined1 uVar85;
  undefined1 uVar86;
  undefined1 uVar87;
  undefined1 uVar88;
  undefined1 uVar89;
  undefined1 uVar90;
  undefined1 uVar91;
  undefined1 uVar92;
  undefined1 uVar93;
  int iVar97;
  undefined1 auVar94 [12];
  float fVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined8 uVar99;
  undefined1 auVar100 [16];
  undefined8 uVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  ushort local_560;
  undefined8 local_550;
  undefined8 uStack_548;
  float local_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  int local_524;
  undefined8 local_520;
  ulong uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  ulong uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  ulong uStack_4c8;
  float local_4c0;
  float fStack_4bc;
  float fStack_4b8;
  float fStack_4b4;
  float local_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  undefined1 *local_498;
  undefined8 local_490;
  undefined1 auStack_488 [1032];
  
  if (param_5 != 0) {
    puVar31 = *(undefined8 **)(param_5 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(param_5 + 0x10)) &&
       (*(ulong *)(param_5 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = "TtSubIntegrateLast";
      uVar20 = nn::os::GetSystemTick();
      puVar31[1] = uVar20;
    }
  }
  uVar17 = _UNK_0388a1f8;
  uVar20 = _DAT_0388a1f0;
  lVar26 = *(long *)(param_1 + 0x4d8);
  lVar34 = *(long *)(param_2 + 0x10);
  if (*(long *)(*(long *)(param_1 + 8) + 0x698) == 0) {
    lVar27 = 0;
  }
  else {
    lVar27 = **(long **)(param_1 + 0x4b8);
  }
  local_498 = auStack_488;
  local_490 = -0x7fffff0000000000;
  if (0 < param_4) {
    uVar22 = -(param_3 >> 0x1f & 1) & 0xffffffe000000000 | (param_3 & 0xffffffff) << 5;
    pfVar30 = (float *)(*(long *)(param_2 + 0x68) + uVar22);
    uVar101 = NEON_fmov(0x3f800000,4);
    pfVar29 = (float *)(*(long *)(param_2 + 0x90) + uVar22);
    local_524 = 0;
    do {
      local_4c0 = *pfVar29;
      fStack_4bc = pfVar29[1];
      fStack_4b8 = pfVar29[2];
      fStack_4b4 = pfVar29[3];
      fVar106 = *pfVar30 - local_4c0;
      fVar107 = pfVar30[1] - fStack_4bc;
      uVar99 = CONCAT44(fVar107,fVar106);
      fVar108 = pfVar30[2] - fStack_4b8;
      fVar109 = pfVar30[3] - fStack_4b4;
      uVar65 = CONCAT44(fVar109,fVar108);
      fStack_4a4 = 0.0;
      local_4b0 = (float)*(undefined8 *)(pfVar29 + 4);
      fStack_4ac = (float)((ulong)*(undefined8 *)(pfVar29 + 4) >> 0x20);
      uVar22 = (ulong)*(ushort *)(pfVar29 + 7);
      fVar102 = (float)*(undefined8 *)(pfVar30 + 4) - local_4b0;
      fVar103 = (float)((ulong)*(undefined8 *)(pfVar30 + 4) >> 0x20) - fStack_4ac;
      fVar104 = pfVar30[3] - fStack_4b4;
      fVar105 = 0.0;
      lVar28 = *(long *)(param_1 + 0x30);
      fStack_4a8 = fStack_4b4;
      if (*(long *)(pfVar30 + 6) == 0) {
        uVar52 = uVar101;
      }
      else {
        auVar44._0_4_ = fVar106 * fVar106;
        auVar44._4_4_ = fVar107 * fVar107;
        auVar44._8_4_ = fVar108 * fVar108;
        auVar44._12_4_ = fVar109 * fVar109;
        fVar105 = (float)((uint)*(ushort *)((long)pfVar29 + 0x1e) << 0x10);
        auVar13._2_12_ = auVar44._4_12_;
        auVar13._0_2_ = *(ushort *)((long)pfVar29 + 0x1e);
        fVar63 = (float)(auVar13._0_4_ << 0x10);
        uVar3 = *(undefined4 *)(lVar28 + uVar22 * 0x70 + 0x14);
        fVar62 = auVar44._8_4_ + auVar44._0_4_ + auVar44._4_4_;
        fVar75 = auVar44._8_4_ + auVar44._0_4_ + auVar44._4_4_;
        uVar50 = CONCAT44(fVar75,fVar62);
        uVar52 = NEON_fmin(CONCAT17((char)((uint)uVar3 >> 0x18),
                                    CONCAT16((char)((uint)uVar3 >> 0x10),
                                             CONCAT15((char)((uint)uVar3 >> 8),
                                                      CONCAT14((char)uVar3,uVar3)))),
                           CONCAT44(fVar105,fVar63),4);
        fVar73 = (float)uVar52;
        fVar58 = (float)((ulong)uVar52 >> 0x20);
        if (fVar73 * fVar73 < fVar62 && fVar58 * fVar58 < fVar75) {
          iVar49 = -(uint)(0.0 <= fVar106);
          iVar76 = -(uint)(0.0 <= fVar107);
          iVar97 = -(uint)(0.0 <= fVar108);
          iVar39 = -(uint)(0.0 <= fVar109);
          uVar52 = NEON_fmov(0x3f800000,4);
          iVar45 = -(uint)(fVar106 < 0.0);
          iVar46 = -(uint)(fVar107 < 0.0);
          iVar48 = -(uint)(fVar108 < 0.0);
          iVar57 = -(uint)(fVar109 < 0.0);
          if (((CONCAT13(~((byte)((uint)iVar45 >> 0x18) | (byte)((uint)iVar49 >> 0x18)),
                         CONCAT12(~((byte)((uint)iVar45 >> 0x10) | (byte)((uint)iVar49 >> 0x10)),
                                  CONCAT11(~((byte)((uint)iVar45 >> 8) | (byte)((uint)iVar49 >> 8)),
                                           ~((byte)iVar45 | (byte)iVar49)))) == 0 &&
               CONCAT13(~((byte)((uint)iVar46 >> 0x18) | (byte)((uint)iVar76 >> 0x18)),
                        CONCAT12(~((byte)((uint)iVar46 >> 0x10) | (byte)((uint)iVar76 >> 0x10)),
                                 CONCAT11(~((byte)((uint)iVar46 >> 8) | (byte)((uint)iVar76 >> 8)),
                                          ~((byte)iVar46 | (byte)iVar76)))) == 0) &&
              CONCAT13(~((byte)((uint)iVar48 >> 0x18) | (byte)((uint)iVar97 >> 0x18)),
                       CONCAT12(~((byte)((uint)iVar48 >> 0x10) | (byte)((uint)iVar97 >> 0x10)),
                                CONCAT11(~((byte)((uint)iVar48 >> 8) | (byte)((uint)iVar97 >> 8)),
                                         ~((byte)iVar48 | (byte)iVar97)))) == 0) &&
              CONCAT13(~((byte)((uint)iVar57 >> 0x18) | (byte)((uint)iVar39 >> 0x18)),
                       CONCAT12(~((byte)((uint)iVar57 >> 0x10) | (byte)((uint)iVar39 >> 0x10)),
                                CONCAT11(~((byte)((uint)iVar57 >> 8) | (byte)((uint)iVar39 >> 8)),
                                         ~((byte)iVar57 | (byte)iVar39)))) == 0) {
            uVar99 = NEON_frsqrte(uVar50,4);
            fVar62 = (float)uVar99;
            fVar75 = (float)((ulong)uVar99 >> 0x20);
            uVar99 = NEON_frsqrts(uVar50,CONCAT44(fVar75 * fVar75,fVar62 * fVar62),4);
            fVar62 = fVar62 * (float)uVar99;
            fVar75 = fVar75 * (float)((ulong)uVar99 >> 0x20);
            uVar99 = NEON_frsqrts(uVar50,CONCAT44(fVar75 * fVar75,fVar62 * fVar62),4);
            fVar62 = (float)uVar99 * fVar62;
            fVar75 = (float)((ulong)uVar99 >> 0x20) * fVar75;
            iVar49 = -(uint)(0.0 <= fVar62);
            iVar76 = -(uint)(0.0 <= fVar75);
            iVar97 = -(uint)(fVar62 < 0.0);
            iVar39 = -(uint)(fVar75 < 0.0);
            uVar78 = 0;
            uVar79 = 0;
            uVar80 = 0;
            uVar81 = 0;
            uVar82 = 0;
            uVar83 = 0;
            uVar84 = 0;
            uVar85 = 0;
            uVar86 = 0;
            uVar87 = 0;
            uVar88 = 0;
            uVar89 = 0;
            uVar90 = 0;
            uVar91 = 0;
            uVar92 = 0;
            uVar93 = 0;
            if (CONCAT13(~((byte)((uint)iVar97 >> 0x18) | (byte)((uint)iVar49 >> 0x18)),
                         CONCAT12(~((byte)((uint)iVar97 >> 0x10) | (byte)((uint)iVar49 >> 0x10)),
                                  CONCAT11(~((byte)((uint)iVar97 >> 8) | (byte)((uint)iVar49 >> 8)),
                                           ~((byte)iVar97 | (byte)iVar49)))) == 0 &&
                CONCAT13(~((byte)((uint)iVar39 >> 0x18) | (byte)((uint)iVar76 >> 0x18)),
                         CONCAT12(~((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar76 >> 0x10)),
                                  CONCAT11(~((byte)((uint)iVar39 >> 8) | (byte)((uint)iVar76 >> 8)),
                                           ~((byte)iVar39 | (byte)iVar76)))) == 0) {
              fVar106 = fVar106 * fVar73 * fVar62;
              uVar78 = SUB41(fVar106,0);
              uVar79 = (undefined1)((uint)fVar106 >> 8);
              uVar80 = (undefined1)((uint)fVar106 >> 0x10);
              uVar81 = (undefined1)((uint)fVar106 >> 0x18);
              fVar107 = fVar107 * fVar58 * fVar75;
              uVar82 = SUB41(fVar107,0);
              uVar83 = (undefined1)((uint)fVar107 >> 8);
              uVar84 = (undefined1)((uint)fVar107 >> 0x10);
              uVar85 = (undefined1)((uint)fVar107 >> 0x18);
              fVar108 = fVar108 * fVar73 * fVar62;
              uVar86 = SUB41(fVar108,0);
              uVar87 = (undefined1)((uint)fVar108 >> 8);
              uVar88 = (undefined1)((uint)fVar108 >> 0x10);
              uVar89 = (undefined1)((uint)fVar108 >> 0x18);
              fVar109 = fVar109 * fVar58 * fVar75;
              uVar90 = SUB41(fVar109,0);
              uVar91 = (undefined1)((uint)fVar109 >> 8);
              uVar92 = (undefined1)((uint)fVar109 >> 0x10);
              uVar93 = (undefined1)((uint)fVar109 >> 0x18);
              uVar99 = NEON_fmov(0x3f800000,4);
              uVar52 = NEON_fmin(CONCAT44(fVar75 * fVar105,fVar62 * fVar63),uVar99,4);
            }
          }
          else {
            uVar86 = 0;
            uVar87 = 0;
            uVar88 = 0;
            uVar89 = 0;
            uVar90 = 0;
            uVar91 = 0;
            uVar92 = 0;
            uVar93 = 0;
            uVar78 = 0;
            uVar79 = 0;
            uVar80 = 0;
            uVar81 = 0;
            uVar82 = 0;
            uVar83 = 0;
            uVar84 = 0;
            uVar85 = 0;
          }
          fVar106 = pfVar29[6];
          local_500 = local_500 & 0xffffffff00000000;
          local_510 = CONCAT26(local_510._6_2_,0x603000020);
          uStack_508 = CONCAT44(ABS(fVar106),0xffffff);
          puVar33 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8
                              );
          puVar31 = *(undefined8 **)(param_1 + 0x4e0);
          uVar19 = *puVar33;
          if (0x3a < uVar19 >> 0x16) {
            puVar32 = puVar33;
            do {
              iVar49 = *(int *)(puVar31 + 0xb) + -1;
              if (*(int *)(puVar31 + 0xb) < 1) {
                lVar23 = puVar31[1];
                (**(code **)(*(long *)*puVar31 + 0x20))((long *)*puVar31,lVar23,6);
                *(undefined4 *)(puVar31 + 0xb) = 5;
                puVar24 = (undefined8 *)(lVar23 + 0x28);
              }
              else {
                *(int *)(puVar31 + 0xb) = iVar49;
                puVar24 = (undefined8 *)(puVar31[1] + (long)iVar49 * 8);
              }
              puVar33 = (uint *)*puVar24;
              puVar33[4] = 0;
              puVar33[5] = 0;
              puVar33[6] = 0;
              puVar33[7] = 0;
              puVar33[0] = 0;
              puVar33[1] = 0;
              puVar33[2] = 0;
              puVar33[3] = 0;
              puVar33[1] = *(uint *)(param_1 + 0x538);
              uVar59 = *(uint *)(param_1 + 0x53c);
              iVar49 = *(int *)(param_1 + 0x538);
              uVar19 = iVar49 + 1;
              if (iVar49 < (int)(uVar59 & 0x3fffffff)) {
                lVar23 = *(long *)(param_1 + 0x530);
              }
              else {
                uVar99 = *(undefined8 *)(param_1 + 0x530);
                if (0x3ffffffe < iVar49) {
                  FUN_032bd0a8(uVar19);
                  uVar59 = *(uint *)(param_1 + 0x53c);
                }
                uVar59 = (uVar59 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar59) {
                  uVar59 = 0x3fffffff;
                }
                uVar18 = uVar19;
                if ((int)uVar19 <= (int)uVar59) {
                  uVar18 = uVar59;
                }
                lVar23 = FUN_032bd1d4(PTR_PTR_0434a080,uVar18,8,uVar99,iVar49,
                                      (uint *)(param_1 + 0x53c));
                *(long *)(param_1 + 0x530) = lVar23;
                iVar49 = *(int *)(param_1 + 0x538);
              }
              *(uint **)(lVar23 + (long)iVar49 * 8) = puVar33;
              *(uint *)(param_1 + 0x538) = uVar19;
              *(uint **)(puVar32 + 2) = puVar33;
              uVar19 = *puVar33;
              puVar32 = puVar33;
            } while (0x3a < uVar19 >> 0x16);
          }
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar33,0x10);
            if (bVar6) {
              *puVar33 = *puVar33 + 0x200001;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
          uVar19 = uVar19 >> 0x10;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x20) = (float)local_510;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x24) = local_510._4_4_;
          *(undefined4 *)((long)puVar33 + (ulong)uVar19 + 0x28) = 0xffffff;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x2c) = ABS(fVar106);
          *(undefined4 *)((long)puVar33 + (ulong)uVar19 + 0x30) = 0;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x34) = local_500._4_4_;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x38) = (float)local_4f8;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x3c) = local_4f8._4_4_;
          uVar65 = CONCAT17(uVar93,CONCAT16(uVar92,CONCAT15(uVar91,CONCAT14(uVar90,CONCAT13(uVar89,
                                                  CONCAT12(uVar88,CONCAT11(uVar87,uVar86)))))));
          uVar99 = CONCAT17(uVar85,CONCAT16(uVar84,CONCAT15(uVar83,CONCAT14(uVar82,CONCAT13(uVar81,
                                                  CONCAT12(uVar80,CONCAT11(uVar79,uVar78)))))));
        }
        else {
          uVar52 = NEON_fmov(0x3f800000,4);
        }
        lVar23 = lVar28 + uVar22 * 0x70;
        fVar108 = fVar104 * fVar104 + fVar102 * fVar102 + fVar103 * fVar103;
        fVar109 = fVar104 * fVar104 + fVar102 * fVar102 + fVar103 * fVar103;
        uVar64 = CONCAT44(fVar109,fVar108);
        uVar50 = NEON_frsqrte(uVar64,4);
        fVar106 = (float)uVar50;
        fVar107 = (float)((ulong)uVar50 >> 0x20);
        uVar50 = NEON_frsqrts(uVar64,CONCAT44(fVar107 * fVar107,fVar106 * fVar106),4);
        iVar49 = -(uint)(fVar108 <= 0.0);
        iVar76 = -(uint)(fVar109 <= 0.0);
        fVar106 = fVar106 * (float)uVar50;
        fVar107 = fVar107 * (float)((ulong)uVar50 >> 0x20);
        fVar63 = (float)CONCAT13((byte)((uint)fVar106 >> 0x18) & ~(byte)((uint)iVar49 >> 0x18),
                                 CONCAT12((byte)((uint)fVar106 >> 0x10) &
                                          ~(byte)((uint)iVar49 >> 0x10),
                                          CONCAT11((byte)((uint)fVar106 >> 8) &
                                                   ~(byte)((uint)iVar49 >> 8),
                                                   SUB41(fVar106,0) & ~(byte)iVar49)));
        fVar75 = fVar108 * fVar63;
        fVar58 = (float)(CONCAT17((byte)((uint)fVar107 >> 0x18) & ~(byte)((uint)iVar76 >> 0x18),
                                  CONCAT16((byte)((uint)fVar107 >> 0x10) &
                                           ~(byte)((uint)iVar76 >> 0x10),
                                           CONCAT15((byte)((uint)fVar107 >> 8) &
                                                    ~(byte)((uint)iVar76 >> 8),
                                                    CONCAT14(SUB41(fVar107,0) & ~(byte)iVar76,fVar63
                                                            )))) >> 0x20);
        fVar105 = fVar109 * fVar58;
        uVar50 = NEON_fmin(CONCAT44((float)((ulong)*(undefined8 *)(lVar34 + 0x38) >> 0x20) *
                                    *(float *)(lVar23 + 0x24),
                                    (float)*(undefined8 *)(lVar34 + 0x38) *
                                    *(float *)(lVar23 + 0x24)),CONCAT44(fVar105,fVar75),4);
        uVar19 = -(uint)(*(float *)(lVar23 + 0x20) < fVar75);
        uVar59 = -(uint)(*(float *)(lVar23 + 0x20) < fVar105);
        fVar75 = fVar75 - (float)uVar50;
        fVar105 = fVar105 - (float)((ulong)uVar50 >> 0x20);
        fVar73 = fVar102 * fVar63 * fVar75;
        fVar62 = fVar103 * fVar58 * fVar105;
        fVar75 = fVar104 * fVar63 * fVar75;
        fVar105 = fVar58 * 0.0 * fVar105;
        fVar102 = (float)((uint)fVar73 ^ ((uint)fVar73 ^ (uint)fVar102) & uVar19);
        fVar103 = (float)((uint)fVar62 ^ ((uint)fVar62 ^ (uint)fVar103) & uVar59);
        fVar104 = (float)((uint)fVar75 ^ ((uint)fVar75 ^ (uint)fVar104) & uVar19);
        fVar105 = (float)((uint)fVar105 ^ (uint)fVar105 & uVar59);
        fVar63 = *(float *)(lVar23 + 0x10);
        if (fVar63 * fVar63 < fVar108 && fVar63 * fVar63 < fVar109) {
          iVar49 = -(uint)(0.0 <= fVar102);
          iVar76 = -(uint)(0.0 <= fVar103);
          iVar97 = -(uint)(0.0 <= fVar104);
          iVar39 = -(uint)(0.0 <= fVar105);
          iVar45 = -(uint)(fVar102 < 0.0);
          iVar46 = -(uint)(fVar103 < 0.0);
          iVar48 = -(uint)(fVar104 < 0.0);
          iVar57 = -(uint)(fVar105 < 0.0);
          iVar49 = CONCAT13(~((byte)((uint)iVar45 >> 0x18) | (byte)((uint)iVar49 >> 0x18)),
                            CONCAT12(~((byte)((uint)iVar45 >> 0x10) | (byte)((uint)iVar49 >> 0x10)),
                                     CONCAT11(~((byte)((uint)iVar45 >> 8) |
                                               (byte)((uint)iVar49 >> 8)),
                                              ~((byte)iVar45 | (byte)iVar49))));
          auVar94._0_8_ =
               CONCAT17(~((byte)((uint)iVar46 >> 0x18) | (byte)((uint)iVar76 >> 0x18)),
                        CONCAT16(~((byte)((uint)iVar46 >> 0x10) | (byte)((uint)iVar76 >> 0x10)),
                                 CONCAT15(~((byte)((uint)iVar46 >> 8) | (byte)((uint)iVar76 >> 8)),
                                          CONCAT14(~((byte)iVar46 | (byte)iVar76),iVar49))));
          auVar94[8] = ~((byte)iVar48 | (byte)iVar97);
          auVar94[9] = ~((byte)((uint)iVar48 >> 8) | (byte)((uint)iVar97 >> 8));
          auVar94[10] = ~((byte)((uint)iVar48 >> 0x10) | (byte)((uint)iVar97 >> 0x10));
          auVar94[0xb] = ~((byte)((uint)iVar48 >> 0x18) | (byte)((uint)iVar97 >> 0x18));
          auVar100[0xc] = ~((byte)iVar57 | (byte)iVar39);
          auVar100._0_12_ = auVar94;
          auVar100[0xd] = ~((byte)((uint)iVar57 >> 8) | (byte)((uint)iVar39 >> 8));
          auVar100[0xe] = ~((byte)((uint)iVar57 >> 0x10) | (byte)((uint)iVar39 >> 0x10));
          auVar100[0xf] = ~((byte)((uint)iVar57 >> 0x18) | (byte)((uint)iVar39 >> 0x18));
          fVar108 = 0.0;
          fVar109 = 0.0;
          fVar73 = 0.0;
          fVar58 = 0.0;
          if (((iVar49 == 0 && (int)((ulong)auVar94._0_8_ >> 0x20) == 0) && auVar94._8_4_ == 0) &&
              auVar100._12_4_ == 0) {
            uVar50 = NEON_frsqrts(uVar64,CONCAT44(fVar107 * fVar107,fVar106 * fVar106),4);
            fVar106 = fVar106 * (float)uVar50;
            fVar107 = fVar107 * (float)((ulong)uVar50 >> 0x20);
            iVar49 = -(uint)(0.0 <= fVar106);
            iVar76 = -(uint)(0.0 <= fVar107);
            iVar97 = -(uint)(fVar106 < 0.0);
            iVar39 = -(uint)(fVar107 < 0.0);
            fVar108 = 0.0;
            fVar109 = 0.0;
            fVar73 = 0.0;
            fVar58 = 0.0;
            if (CONCAT13(~((byte)((uint)iVar97 >> 0x18) | (byte)((uint)iVar49 >> 0x18)),
                         CONCAT12(~((byte)((uint)iVar97 >> 0x10) | (byte)((uint)iVar49 >> 0x10)),
                                  CONCAT11(~((byte)((uint)iVar97 >> 8) | (byte)((uint)iVar49 >> 8)),
                                           ~((byte)iVar97 | (byte)iVar49)))) == 0 &&
                CONCAT13(~((byte)((uint)iVar39 >> 0x18) | (byte)((uint)iVar76 >> 0x18)),
                         CONCAT12(~((byte)((uint)iVar39 >> 0x10) | (byte)((uint)iVar76 >> 0x10)),
                                  CONCAT11(~((byte)((uint)iVar39 >> 8) | (byte)((uint)iVar76 >> 8)),
                                           ~((byte)iVar39 | (byte)iVar76)))) == 0) {
              fVar108 = fVar102 * fVar63 * fVar106;
              fVar109 = fVar103 * fVar63 * fVar107;
              fVar73 = fVar104 * fVar63 * fVar106;
              fVar58 = fVar105 * fVar63 * fVar107;
            }
          }
          fVar105 = fVar58;
          fVar104 = fVar73;
          fVar103 = fVar109;
          fVar102 = fVar108;
          fVar106 = pfVar29[6];
          local_510 = CONCAT26(local_510._6_2_,0x603000020);
          uStack_508 = CONCAT44(ABS(fVar106),0xffffff);
          local_500 = CONCAT44(local_500._4_4_,1);
          puVar33 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8
                              );
          puVar31 = *(undefined8 **)(param_1 + 0x4e0);
          uVar19 = *puVar33;
          if (0x3a < uVar19 >> 0x16) {
            puVar32 = puVar33;
            do {
              iVar49 = *(int *)(puVar31 + 0xb) + -1;
              if (*(int *)(puVar31 + 0xb) < 1) {
                lVar23 = puVar31[1];
                (**(code **)(*(long *)*puVar31 + 0x20))((long *)*puVar31,lVar23,6);
                *(undefined4 *)(puVar31 + 0xb) = 5;
                puVar24 = (undefined8 *)(lVar23 + 0x28);
              }
              else {
                *(int *)(puVar31 + 0xb) = iVar49;
                puVar24 = (undefined8 *)(puVar31[1] + (long)iVar49 * 8);
              }
              puVar33 = (uint *)*puVar24;
              puVar33[4] = 0;
              puVar33[5] = 0;
              puVar33[6] = 0;
              puVar33[7] = 0;
              puVar33[0] = 0;
              puVar33[1] = 0;
              puVar33[2] = 0;
              puVar33[3] = 0;
              puVar33[1] = *(uint *)(param_1 + 0x538);
              uVar59 = *(uint *)(param_1 + 0x53c);
              iVar49 = *(int *)(param_1 + 0x538);
              uVar19 = iVar49 + 1;
              if (iVar49 < (int)(uVar59 & 0x3fffffff)) {
                lVar23 = *(long *)(param_1 + 0x530);
              }
              else {
                uVar50 = *(undefined8 *)(param_1 + 0x530);
                if (0x3ffffffe < iVar49) {
                  FUN_032bd0a8(uVar19);
                  uVar59 = *(uint *)(param_1 + 0x53c);
                }
                uVar59 = (uVar59 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar59) {
                  uVar59 = 0x3fffffff;
                }
                uVar18 = uVar19;
                if ((int)uVar19 <= (int)uVar59) {
                  uVar18 = uVar59;
                }
                lVar23 = FUN_032bd1d4(PTR_PTR_0434a080,uVar18,8,uVar50,iVar49,
                                      (uint *)(param_1 + 0x53c));
                *(long *)(param_1 + 0x530) = lVar23;
                iVar49 = *(int *)(param_1 + 0x538);
              }
              *(uint **)(lVar23 + (long)iVar49 * 8) = puVar33;
              *(uint *)(param_1 + 0x538) = uVar19;
              *(uint **)(puVar32 + 2) = puVar33;
              uVar19 = *puVar33;
              puVar32 = puVar33;
            } while (0x3a < uVar19 >> 0x16);
          }
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar33,0x10);
            if (bVar6) {
              *puVar33 = *puVar33 + 0x200001;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
          uVar19 = uVar19 >> 0x10;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x20) = (float)local_510;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x24) = local_510._4_4_;
          *(undefined4 *)((long)puVar33 + (ulong)uVar19 + 0x28) = 0xffffff;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x2c) = ABS(fVar106);
          *(undefined4 *)((long)puVar33 + (ulong)uVar19 + 0x30) = 1;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x34) = local_500._4_4_;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x38) = (float)local_4f8;
          *(float *)((long)puVar33 + (ulong)uVar19 + 0x3c) = local_4f8._4_4_;
        }
      }
      fStack_53c = (float)((ulong)uVar99 >> 0x20);
      fStack_534 = (float)((ulong)uVar65 >> 0x20);
      lVar23 = lVar28 + uVar22 * 0x70;
      fVar106 = *(float *)(lVar34 + 0x74) * *(float *)(lVar34 + 0xc0);
      auVar41._0_4_ = (local_4b0 + fVar102 * *(float *)(lVar34 + 0xb0)) * fVar106;
      auVar41._4_4_ = (fStack_4ac + fVar103 * *(float *)(lVar34 + 0xb4)) * fVar106;
      auVar41._8_4_ = (fStack_4a8 + fVar104 * *(float *)(lVar34 + 0xb8)) * fVar106;
      auVar43._12_4_ = (fStack_4a4 + fVar105 * *(float *)(lVar34 + 0xbc)) * fVar106;
      auVar43._0_12_ = auVar41;
      local_4c0 = ((float)uVar99 * *(float *)(lVar34 + 0xb0) + local_4c0) * fVar106;
      fStack_4bc = (fStack_53c * *(float *)(lVar34 + 0xb4) + fStack_4bc) * fVar106;
      fStack_4b8 = ((float)uVar65 * *(float *)(lVar34 + 0xb8) + fStack_4b8) * fVar106;
      fStack_4b4 = (fStack_534 * *(float *)(lVar34 + 0xbc) + fStack_4b4) * fVar106;
      fVar108 = *(float *)(lVar23 + 0x18);
      fVar109 = *(float *)(lVar23 + 0x1c);
      uVar36 = (ulong)(uint)pfVar29[6] & 0x7fffffff;
      fVar106 = (float)*(undefined8 *)(lVar34 + 0x10);
      fVar107 = (float)((ulong)*(undefined8 *)(lVar34 + 0x10) >> 0x20);
      pauVar1 = (undefined1 (*) [16])(*(long *)(param_2 + 0x50) + uVar36 * 0x80);
      uVar64 = NEON_fmin(CONCAT44(fVar107 * fVar109,fVar106 * fVar109),uVar101,4);
      uVar50 = NEON_fmin(CONCAT44(fVar107 * fVar108,fVar106 * fVar108),uVar101,4);
      fVar108 = (float)uVar101;
      fStack_538 = fVar108 - (float)uVar64;
      fVar63 = (float)((ulong)uVar101 >> 0x20);
      fVar109 = fVar63 - (float)((ulong)uVar64 >> 0x20);
      fVar106 = fVar108 - (float)uVar50;
      fVar107 = fVar63 - (float)((ulong)uVar50 >> 0x20);
      if ((*(ushort *)(pauVar1[5] + 10) & 0x7fff) != 0) {
        fVar73 = (float)uVar52;
        iVar49 = -(uint)(1.0 <= fVar73);
        fVar58 = (float)((ulong)uVar52 >> 0x20);
        auVar56._0_4_ =
             CONCAT13(~(byte)((uint)iVar49 >> 0x18),
                      CONCAT12(~(byte)((uint)iVar49 >> 0x10),
                               CONCAT11(~(byte)((uint)iVar49 >> 8),~(byte)iVar49)));
        auVar56._4_4_ = auVar56._0_4_;
        auVar56._8_4_ = auVar56._0_4_;
        auVar56._12_4_ = auVar56._0_4_;
        auVar72._0_4_ = fVar73 * auVar41._0_4_;
        auVar72._4_4_ = fVar58 * auVar41._4_4_;
        auVar72._8_4_ = fVar73 * auVar41._8_4_;
        auVar72._12_4_ = fVar58 * auVar43._12_4_;
        auVar44 = auVar43 ^ (auVar43 ^ auVar72) & auVar56;
        uStack_508 = auVar44._8_8_;
        local_510 = auVar44._0_8_;
        plVar21 = *(long **)(*(long *)(param_1 + 8) + 0x650);
        local_4b0 = auVar41._0_4_;
        fStack_4ac = auVar41._4_4_;
        fStack_4a8 = auVar41._8_4_;
        fStack_4a4 = auVar43._12_4_;
        (**(code **)(*plVar21 + 0x28))
                  (plVar21,pauVar1,lVar34,&local_510,&local_4b0,&local_4c0,param_1);
        auVar41._4_4_ = fStack_4ac;
        auVar41._0_4_ = local_4b0;
        auVar41._8_4_ = fStack_4a8;
      }
      local_4d0 = *(undefined8 *)(pauVar1[3] + 8);
      lVar23 = lVar28 + uVar22 * 0x70;
      local_540 = (float)uVar99 * fStack_538;
      fStack_53c = fStack_53c * fVar109;
      fStack_538 = (float)uVar65 * fStack_538;
      fStack_534 = fStack_534 * fVar109;
      uStack_4c8 = (ulong)*(uint *)(pauVar1[3] + 4);
      fStack_4a8 = auVar41._8_4_;
      fStack_4a4 = 0.0;
      local_4b0 = auVar41._0_4_;
      fStack_4ac = auVar41._4_4_;
      uVar38 = *(undefined4 *)(lVar23 + 0x10);
      pauVar37 = pauVar1 + 6;
      uVar3 = *(undefined4 *)*pauVar37;
      uVar14 = *(undefined4 *)(pauVar1[6] + 4);
      auVar70._0_4_ = fVar102 * fVar106;
      auVar70._4_4_ = fVar103 * fVar107;
      auVar70._8_4_ = fVar104 * fVar106;
      auVar70._12_4_ = fVar105 * fVar107;
      *(undefined4 *)(pauVar1[6] + 8) = *(undefined4 *)(pauVar1[6] + 8);
      *(undefined4 *)(pauVar1[6] + 0xc) = uVar38;
      *(undefined4 *)*pauVar37 = uVar3;
      *(undefined4 *)(pauVar1[6] + 4) = uVar14;
      uVar47 = *(undefined4 *)(lVar23 + 0x14);
      pauVar35 = pauVar1 + 7;
      uVar3 = *(undefined4 *)*pauVar35;
      uVar14 = *(undefined4 *)(pauVar1[7] + 4);
      *(undefined4 *)(pauVar1[7] + 8) = *(undefined4 *)(pauVar1[7] + 8);
      *(undefined4 *)(pauVar1[7] + 0xc) = uVar47;
      *(undefined4 *)*pauVar35 = uVar3;
      *(undefined4 *)(pauVar1[7] + 4) = uVar14;
      if ((int)pfVar29[6] < 0) {
        auVar69._0_8_ =
             CONCAT44(-(uint)(auVar70._8_4_ * auVar70._8_4_ +
                              auVar70._0_4_ * auVar70._0_4_ + auVar70._4_4_ * auVar70._4_4_ <
                             local_4b0 * local_4b0 + fStack_4ac * fStack_4ac +
                             fStack_4a8 * fStack_4a8),
                      -(uint)(auVar70._8_4_ * auVar70._8_4_ +
                              auVar70._0_4_ * auVar70._0_4_ + auVar70._4_4_ * auVar70._4_4_ <
                             local_4b0 * local_4b0 + fStack_4ac * fStack_4ac +
                             fStack_4a8 * fStack_4a8));
        auVar69._8_8_ = auVar69._0_8_;
        local_560 = 0x1000;
        auVar9._12_4_ = 0;
        auVar9._0_12_ = auVar41;
        auVar10._12_4_ = 0;
        auVar10._0_12_ = auVar41;
        auVar70 = auVar10 ^ (auVar9 ^ auVar70) & auVar69;
        uVar78 = (undefined1)((uint)fStack_4b8 >> 8);
        uVar79 = (undefined1)((uint)fStack_4b8 >> 0x10);
        uVar80 = (undefined1)((uint)fStack_4b8 >> 0x18);
        uVar81 = (undefined1)((uint)fStack_4b4 >> 8);
        uVar82 = (undefined1)((uint)fStack_4b4 >> 0x10);
        uVar83 = (undefined1)((uint)fStack_4b4 >> 0x18);
        auVar96._4_4_ = fStack_4bc;
        auVar96._0_4_ = local_4c0;
        auVar96[8] = fStack_4b8._0_1_;
        auVar11._4_4_ = fStack_4bc;
        auVar11._0_4_ = local_4c0;
        auVar11[8] = fStack_4b8._0_1_;
        auVar95._0_8_ =
             CONCAT44(-(uint)(fStack_538 * fStack_538 +
                              local_540 * local_540 + fStack_53c * fStack_53c <
                             local_4c0 * local_4c0 + fStack_4bc * fStack_4bc +
                             fStack_4b8 * fStack_4b8),
                      -(uint)(fStack_538 * fStack_538 +
                              local_540 * local_540 + fStack_53c * fStack_53c <
                             local_4c0 * local_4c0 + fStack_4bc * fStack_4bc +
                             fStack_4b8 * fStack_4b8));
        auVar95._8_8_ = auVar95._0_8_;
        auVar11[9] = uVar78;
        auVar11[10] = uVar79;
        auVar11[0xb] = uVar80;
        auVar11[0xc] = SUB41(fStack_4b4,0);
        auVar11[0xd] = uVar81;
        auVar11[0xe] = uVar82;
        auVar11[0xf] = uVar83;
        auVar12._4_4_ = fStack_53c;
        auVar12._0_4_ = local_540;
        auVar12._8_4_ = fStack_538;
        auVar12._12_4_ = fStack_534;
        auVar96[9] = uVar78;
        auVar96[10] = uVar79;
        auVar96[0xb] = uVar80;
        auVar96[0xc] = SUB41(fStack_4b4,0);
        auVar96[0xd] = uVar81;
        auVar96[0xe] = uVar82;
        auVar96[0xf] = uVar83;
        auVar96 = auVar96 ^ (auVar11 ^ auVar12) & auVar95;
        fStack_538 = auVar96._8_4_;
        fStack_534 = auVar96._12_4_;
        local_540 = auVar96._0_4_;
        fStack_53c = auVar96._4_4_;
      }
      else {
        local_560 = 0;
      }
      lVar23 = *(long *)(param_1 + 0x40);
      uVar19 = *(uint *)(lVar28 + uVar22 * 0x70 + 4) | 2;
      local_550 = auVar70._0_8_;
      uStack_548 = auVar70._8_8_;
      if ((*(uint *)(lVar23 + 0xd68) & uVar19) == 0) {
        auVar68._0_12_ = auVar70._0_12_;
        auVar68._12_4_ = uVar38;
        *(long *)(pauVar1[6] + 8) = auVar68._8_8_;
        *(undefined8 *)*pauVar37 = local_550;
        *(float *)(pauVar1[7] + 8) = fStack_538;
        *(undefined4 *)(pauVar1[7] + 0xc) = uVar47;
        *(float *)*pauVar35 = local_540;
        *(float *)(pauVar1[7] + 4) = fStack_53c;
      }
      else {
        uStack_4e0 = CONCAT44(fStack_4bc,local_4c0);
        uStack_4d8 = CONCAT44(fStack_4b4,fStack_4b8);
        lVar25 = 0;
        puVar31 = (undefined8 *)(lVar23 + 0xd78);
        local_4f8 = CONCAT44(fStack_534,fStack_538);
        local_500 = CONCAT44(fStack_53c,local_540);
        uStack_4e8 = (ulong)(uint)fStack_4a8;
        local_4f0 = auVar41._0_8_;
        local_510 = local_550;
        uStack_508 = uStack_548;
        do {
          if ((*(uint *)(puVar31 + -1) & uVar19) != 0) {
            (**(code **)(*(long *)*puVar31 + 0xb0))
                      ((long *)*puVar31,param_1,uVar36,pauVar1,&local_510);
          }
          lVar25 = lVar25 + 1;
          puVar31 = puVar31 + 2;
        } while (lVar25 < *(int *)(lVar23 + 0xd6c));
        fStack_4b8 = (float)uStack_4d8;
        fStack_4b4 = (float)((ulong)uStack_4d8 >> 0x20);
        local_4c0 = (float)uStack_4e0;
        fStack_4bc = (float)((ulong)uStack_4e0 >> 0x20);
        fStack_4a8 = (float)uStack_4e8;
        fStack_4a4 = (float)(uStack_4e8 >> 0x20);
        local_4b0 = (float)local_4f0;
        fStack_4ac = (float)((ulong)local_4f0 >> 0x20);
        fVar107 = (float)uStack_508 * (float)uStack_508 +
                  (float)local_510 * (float)local_510 + local_510._4_4_ * local_510._4_4_;
        fVar109 = (float)uStack_508 * (float)uStack_508 +
                  (float)local_510 * (float)local_510 + local_510._4_4_ * local_510._4_4_;
        uVar99 = CONCAT44(fVar109,fVar107);
        auVar44 = *pauVar37;
        auVar100 = NEON_ext(auVar44,auVar44,8,1);
        fVar102 = auVar100._4_4_ * auVar100._4_4_;
        fVar106 = auVar44._12_4_;
        if (fVar102 < fVar107 && fVar102 < fVar109) {
          if ((~(uint)fVar107 & 0x7fc00000) != 0) {
            uVar65 = NEON_frsqrte(uVar99,4);
            fVar109 = (float)uVar65;
            fVar102 = (float)((ulong)uVar65 >> 0x20);
            fVar107 = fVar102 * fVar102;
            uVar65 = NEON_frsqrts(uVar99,CONCAT17((char)((uint)fVar107 >> 0x18),
                                                  CONCAT16((char)((uint)fVar107 >> 0x10),
                                                           CONCAT15((char)((uint)fVar107 >> 8),
                                                                    CONCAT14(SUB41(fVar107,0),
                                                                             fVar109 * fVar109)))),4
                                 );
            fVar109 = fVar109 * (float)uVar65;
            fVar102 = fVar102 * (float)((ulong)uVar65 >> 0x20);
            fVar107 = fVar102 * fVar102;
            uVar99 = NEON_frsqrts(uVar99,CONCAT17((char)((uint)fVar107 >> 0x18),
                                                  CONCAT16((char)((uint)fVar107 >> 0x10),
                                                           CONCAT15((char)((uint)fVar107 >> 8),
                                                                    CONCAT14(SUB41(fVar107,0),
                                                                             fVar109 * fVar109)))),4
                                 );
            fVar109 = (float)uVar99 * fVar109;
            if ((~(uint)fVar109 & 0x7fc00000) != 0) {
              fVar103 = fVar106 * fVar109 * 0.99999976;
              fVar107 = (float)local_510 * fVar103;
              fVar109 = local_510._4_4_ *
                        fVar106 * (float)((ulong)uVar99 >> 0x20) * fVar102 * 0.99999976;
              fVar103 = (float)uStack_508 * fVar103;
              goto LAB_0302732c;
            }
          }
        }
        else {
          fVar107 = (float)local_510;
          fVar109 = local_510._4_4_;
          fVar103 = (float)uStack_508;
LAB_0302732c:
          *(float *)(pauVar1[6] + 8) = fVar103;
          *(float *)(pauVar1[6] + 0xc) = fVar106;
          *(float *)*pauVar37 = fVar107;
          *(float *)(pauVar1[6] + 4) = fVar109;
        }
        fVar107 = (float)local_4f8 * (float)local_4f8 +
                  (float)local_500 * (float)local_500 + local_500._4_4_ * local_500._4_4_;
        fVar109 = (float)local_4f8 * (float)local_4f8 +
                  (float)local_500 * (float)local_500 + local_500._4_4_ * local_500._4_4_;
        uVar99 = CONCAT44(fVar109,fVar107);
        auVar44 = *pauVar35;
        auVar100 = NEON_ext(auVar44,auVar44,8,1);
        fVar102 = auVar100._4_4_ * auVar100._4_4_;
        fVar106 = auVar44._12_4_;
        if (fVar102 < fVar107 && fVar102 < fVar109) {
          if ((~(uint)fVar107 & 0x7fc00000) != 0) {
            uVar65 = NEON_frsqrte(uVar99,4);
            fVar109 = (float)uVar65;
            fVar102 = (float)((ulong)uVar65 >> 0x20);
            fVar107 = fVar102 * fVar102;
            uVar65 = NEON_frsqrts(uVar99,CONCAT17((char)((uint)fVar107 >> 0x18),
                                                  CONCAT16((char)((uint)fVar107 >> 0x10),
                                                           CONCAT15((char)((uint)fVar107 >> 8),
                                                                    CONCAT14(SUB41(fVar107,0),
                                                                             fVar109 * fVar109)))),4
                                 );
            fVar109 = fVar109 * (float)uVar65;
            fVar102 = fVar102 * (float)((ulong)uVar65 >> 0x20);
            fVar107 = fVar102 * fVar102;
            uVar99 = NEON_frsqrts(uVar99,CONCAT17((char)((uint)fVar107 >> 0x18),
                                                  CONCAT16((char)((uint)fVar107 >> 0x10),
                                                           CONCAT15((char)((uint)fVar107 >> 8),
                                                                    CONCAT14(SUB41(fVar107,0),
                                                                             fVar109 * fVar109)))),4
                                 );
            fVar109 = (float)uVar99 * fVar109;
            if ((~(uint)fVar109 & 0x7fc00000) != 0) {
              fVar103 = fVar106 * fVar109 * 0.99999976;
              fVar107 = (float)local_500 * fVar103;
              fVar109 = local_500._4_4_ *
                        fVar106 * (float)((ulong)uVar99 >> 0x20) * fVar102 * 0.99999976;
              fVar103 = (float)local_4f8 * fVar103;
              goto LAB_03027374;
            }
          }
        }
        else {
          fVar107 = (float)local_500;
          fVar109 = local_500._4_4_;
          fVar103 = (float)local_4f8;
LAB_03027374:
          *(float *)(pauVar1[7] + 8) = fVar103;
          *(float *)(pauVar1[7] + 0xc) = fVar106;
          *(float *)*pauVar35 = fVar107;
          *(float *)(pauVar1[7] + 4) = fVar109;
        }
        uStack_548 = uStack_508;
        local_550 = local_510;
        fStack_538 = (float)local_4f8;
        fStack_534 = local_4f8._4_4_;
        local_540 = (float)local_500;
        fStack_53c = local_500._4_4_;
      }
      auVar16._4_4_ = fStack_4ac;
      auVar16._0_4_ = local_4b0;
      auVar16._8_4_ = fStack_4a8;
      auVar16._12_4_ = fStack_4a4;
      auVar15._8_8_ = uVar17;
      auVar15._0_8_ = uVar20;
      auVar44 = a64_TBL(ZEXT816(0),auVar16,auVar15);
      *(float *)pauVar1[3] = fStack_4b8;
      *(int *)(pauVar1[3] + 4) = auVar44._12_4_;
      *(float *)(pauVar1[2] + 8) = local_4c0;
      *(float *)(pauVar1[2] + 0xc) = fStack_4bc;
      *(ulong *)(pauVar1[3] + 8) = CONCAT44(fStack_4ac,local_4b0);
      *(undefined2 *)(pauVar1[5] + 6) = 0x3f80;
      fVar103 = (float)*(undefined8 *)(lVar34 + 0x10);
      fVar104 = (float)((ulong)*(undefined8 *)(lVar34 + 0x10) >> 0x20);
      auVar44 = *pauVar1;
      auVar100 = NEON_ext(auVar44,auVar44,8,1);
      uVar99 = NEON_ext(auVar44._0_8_,auVar100._0_8_,4,1);
      auVar53._0_4_ = fVar103 * local_4c0 * 0.5;
      auVar53._4_4_ = fVar104 * fStack_4bc * 0.5;
      auVar53._8_4_ = fVar103 * fStack_4b8 * 0.5;
      auVar53._12_4_ = fVar104 * fStack_4b4 * 0.5;
      auVar100 = NEON_ext(auVar53,auVar53,4,1);
      fVar105 = auVar53._0_4_ * auVar53._0_4_ + auVar53._4_4_ * auVar53._4_4_ +
                auVar53._8_4_ * auVar53._8_4_;
      fVar73 = auVar53._0_4_ * auVar53._0_4_ + auVar53._4_4_ * auVar53._4_4_ +
               auVar53._8_4_ * auVar53._8_4_;
      fVar58 = auVar44._0_4_;
      fVar62 = auVar44._4_4_;
      fVar75 = auVar44._8_4_;
      fVar98 = auVar44._12_4_;
      fVar106 = fVar58 * auVar100._0_4_ - auVar53._0_4_ * (float)uVar99;
      fVar107 = fVar62 * auVar100._4_4_ - auVar53._4_4_ * (float)((ulong)uVar99 >> 0x20);
      uVar78 = (undefined1)((uint)fVar107 >> 8);
      uVar79 = (undefined1)((uint)fVar107 >> 0x10);
      uVar80 = (undefined1)((uint)fVar107 >> 0x18);
      fVar109 = fVar75 * auVar53._0_4_ - auVar53._8_4_ * fVar58;
      uVar81 = (undefined1)((uint)fVar109 >> 8);
      uVar82 = (undefined1)((uint)fVar109 >> 0x10);
      uVar83 = (undefined1)((uint)fVar109 >> 0x18);
      fVar102 = fVar98 * auVar53._4_4_ - auVar53._12_4_ * fVar62;
      uVar84 = (undefined1)((uint)fVar102 >> 8);
      uVar85 = (undefined1)((uint)fVar102 >> 0x10);
      uVar86 = (undefined1)((uint)fVar102 >> 0x18);
      auVar7[4] = SUB41(fVar107,0);
      auVar7._0_4_ = fVar106;
      auVar7[5] = uVar78;
      auVar7[6] = uVar79;
      auVar7[7] = uVar80;
      auVar7[8] = SUB41(fVar109,0);
      auVar7[9] = uVar81;
      auVar7[10] = uVar82;
      auVar7[0xb] = uVar83;
      auVar7[0xc] = SUB41(fVar102,0);
      auVar7[0xd] = uVar84;
      auVar7[0xe] = uVar85;
      auVar7[0xf] = uVar86;
      auVar8[4] = SUB41(fVar107,0);
      auVar8._0_4_ = fVar106;
      auVar8[5] = uVar78;
      auVar8[6] = uVar79;
      auVar8[7] = uVar80;
      auVar8[8] = SUB41(fVar109,0);
      auVar8[9] = uVar81;
      auVar8[10] = uVar82;
      auVar8[0xb] = uVar83;
      auVar8[0xc] = SUB41(fVar102,0);
      auVar8[0xd] = uVar84;
      auVar8[0xe] = uVar85;
      auVar8[0xf] = uVar86;
      auVar100 = NEON_ext(auVar7,auVar8,4,1);
      auVar54._0_4_ = auVar53._0_4_ * fVar58;
      auVar54._4_4_ = auVar53._4_4_ * fVar62;
      auVar54._8_4_ = auVar53._8_4_ * fVar75;
      auVar54._12_4_ = auVar53._12_4_ * fVar98;
      fVar108 = fVar105 * (fVar105 * (fVar105 * -0.0029562549 + -0.02144013) + -0.33352822) +
                fVar108;
      auVar44 = NEON_ext(auVar54,auVar54,8,1);
      fVar102 = fVar108 * fVar98 - (auVar54._0_4_ + auVar54._4_4_ + auVar44._0_4_);
      fVar107 = auVar53._0_4_ * fVar98 + auVar100._0_4_ + fVar58 * fVar108;
      fVar109 = auVar53._4_4_ * fVar98 + auVar100._4_4_ +
                fVar62 * (fVar73 * (fVar73 * (fVar73 * -0.0029562549 + -0.02144013) + -0.33352822) +
                         fVar63);
      fVar106 = auVar53._8_4_ * fVar98 + fVar106 + fVar75 * fVar108;
      auVar55._0_4_ = fVar107 * fVar107;
      auVar55._4_4_ = fVar109 * fVar109;
      auVar55._8_4_ = fVar106 * fVar106;
      auVar55._12_4_ = fVar102 * fVar102;
      auVar44 = NEON_ext(auVar55,auVar55,8,1);
      fVar108 = auVar44._0_4_ + auVar44._4_4_;
      uVar99 = CONCAT44(auVar55._0_4_ + auVar55._4_4_ + fVar108,
                        auVar55._0_4_ + auVar55._4_4_ + fVar108);
      uVar65 = NEON_frsqrte(uVar99,4);
      fVar108 = (float)uVar65;
      fVar105 = (float)((ulong)uVar65 >> 0x20);
      uVar65 = NEON_frsqrts(uVar99,CONCAT44(fVar105 * fVar105,fVar108 * fVar108),4);
      fVar108 = fVar108 * (float)uVar65;
      fVar105 = fVar105 * (float)((ulong)uVar65 >> 0x20);
      uVar99 = NEON_frsqrts(uVar99,CONCAT44(fVar105 * fVar105,fVar108 * fVar108),4);
      fVar108 = (float)uVar99 * fVar108;
      fVar105 = (float)((ulong)uVar99 >> 0x20) * fVar105;
      dVar40 = *(double *)pauVar1[2];
      *(float *)(*pauVar1 + 8) = fVar108 * fVar106;
      *(float *)(*pauVar1 + 0xc) = fVar105 * fVar102;
      *(float *)*pauVar1 = fVar108 * fVar107;
      *(float *)(*pauVar1 + 4) = fVar105 * fVar109;
      dVar51 = *(double *)pauVar1[1] + (double)(fVar103 * local_4b0);
      dVar66 = *(double *)(pauVar1[1] + 8) + (double)(fVar104 * fStack_4ac);
      dVar40 = dVar40 + (double)(fVar103 * fStack_4a8);
      *(double *)pauVar1[1] = dVar51;
      *(double *)(pauVar1[1] + 8) = dVar66;
      fVar106 = (float)dVar66;
      *(double *)pauVar1[2] = dVar40;
      uStack_518 = (ulong)(uint)(float)dVar40;
      local_520 = CONCAT17((char)((uint)fVar106 >> 0x18),
                           CONCAT16((char)((uint)fVar106 >> 0x10),
                                    CONCAT15((char)((uint)fVar106 >> 8),
                                             CONCAT14(SUB41(fVar106,0),(float)dVar51))));
      if (lVar27 != 0) {
        uVar18 = FUN_030281b8(*(long *)(param_2 + 0x98) + uVar36 * 0x20,pauVar1,
                              lVar28 + uVar22 * 0x70,&local_4d0);
        uVar19 = local_524 + (int)param_3;
        uVar59 = (int)uVar19 >> 5;
        uVar22 = -(ulong)(uVar59 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar59 << 2;
        *(uint *)(lVar27 + uVar22) =
             *(uint *)(lVar27 + uVar22) | uVar18 & 1 << (ulong)(uVar19 & 0x1f);
      }
      uVar19 = (**(code **)(**(long **)(param_2 + 0x18) + 0x20))
                         (*(long **)(param_2 + 0x18),&local_520);
      auVar67._4_4_ = fStack_53c;
      auVar67._0_4_ = local_540;
      auVar67._8_4_ = fStack_538;
      auVar71._12_4_ = fStack_534;
      auVar71._0_12_ = auVar67;
      bVar4 = pauVar1[5][0xe];
      uVar99 = local_520;
      if ((bVar4 != 0xff) && (uVar19 != bVar4)) {
        uVar3 = *(undefined4 *)(pauVar1[4] + 8);
        local_510 = CONCAT26(local_510._6_2_,0x3000020);
        local_500._0_2_ = CONCAT11((char)uVar19,bVar4);
        uStack_508 = CONCAT44((int)uVar36,uVar3);
        puVar33 = *(uint **)(*(long *)(param_1 + 0x530) + (long)*(int *)(param_1 + 0x538) * 8 + -8);
        puVar31 = *(undefined8 **)(param_1 + 0x4e0);
        uVar59 = *puVar33;
        if (0x3a < uVar59 >> 0x16) {
          puVar32 = puVar33;
          do {
            iVar49 = *(int *)(puVar31 + 0xb) + -1;
            if (*(int *)(puVar31 + 0xb) < 1) {
              lVar28 = puVar31[1];
              (**(code **)(*(long *)*puVar31 + 0x20))((long *)*puVar31,lVar28,6);
              auVar71._4_4_ = fStack_53c;
              auVar71._0_4_ = local_540;
              auVar71._8_4_ = fStack_538;
              *(undefined4 *)(puVar31 + 0xb) = 5;
              puVar24 = (undefined8 *)(lVar28 + 0x28);
            }
            else {
              *(int *)(puVar31 + 0xb) = iVar49;
              puVar24 = (undefined8 *)(puVar31[1] + (long)iVar49 * 8);
            }
            puVar33 = (uint *)*puVar24;
            puVar33[4] = 0;
            puVar33[5] = 0;
            puVar33[6] = 0;
            puVar33[7] = 0;
            puVar33[0] = 0;
            puVar33[1] = 0;
            puVar33[2] = 0;
            puVar33[3] = 0;
            puVar33[1] = *(uint *)(param_1 + 0x538);
            uVar18 = *(uint *)(param_1 + 0x53c);
            iVar49 = *(int *)(param_1 + 0x538);
            uVar59 = iVar49 + 1;
            if (iVar49 < (int)(uVar18 & 0x3fffffff)) {
              lVar28 = *(long *)(param_1 + 0x530);
            }
            else {
              uVar99 = *(undefined8 *)(param_1 + 0x530);
              if (0x3ffffffe < iVar49) {
                FUN_032bd0a8(uVar59);
                uVar18 = *(uint *)(param_1 + 0x53c);
              }
              uVar18 = (uVar18 & 0x3fffffff) << 1;
              if (0x3ffffffe < uVar18) {
                uVar18 = 0x3fffffff;
              }
              uVar2 = uVar59;
              if ((int)uVar59 <= (int)uVar18) {
                uVar2 = uVar18;
              }
              lVar28 = FUN_032bd1d4(PTR_PTR_0434a080,uVar2,8,uVar99,iVar49,(uint *)(param_1 + 0x53c)
                                   );
              *(long *)(param_1 + 0x530) = lVar28;
              auVar71._4_4_ = fStack_53c;
              auVar71._0_4_ = local_540;
              auVar71._8_4_ = fStack_538;
              iVar49 = *(int *)(param_1 + 0x538);
            }
            auVar67 = auVar71._0_12_;
            *(uint **)(lVar28 + (long)iVar49 * 8) = puVar33;
            *(uint *)(param_1 + 0x538) = uVar59;
            *(uint **)(puVar32 + 2) = puVar33;
            uVar59 = *puVar33;
            puVar32 = puVar33;
          } while (0x3a < uVar59 >> 0x16);
        }
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar33,0x10);
          if (bVar6) {
            *puVar33 = *puVar33 + 0x200001;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        *(int *)(param_1 + 0x528) = *(int *)(param_1 + 0x528) + 1;
        uVar59 = uVar59 >> 0x10;
        *(float *)((long)puVar33 + (ulong)uVar59 + 0x20) = (float)local_510;
        *(float *)((long)puVar33 + (ulong)uVar59 + 0x24) = local_510._4_4_;
        *(undefined4 *)((long)puVar33 + (ulong)uVar59 + 0x28) = uVar3;
        *(int *)((long)puVar33 + (ulong)uVar59 + 0x2c) = (int)uVar36;
        *(float *)((long)puVar33 + (ulong)uVar59 + 0x30) = (float)local_500;
        *(float *)((long)puVar33 + (ulong)uVar59 + 0x34) = local_500._4_4_;
        *(float *)((long)puVar33 + (ulong)uVar59 + 0x38) = (float)local_4f8;
        *(float *)((long)puVar33 + (ulong)uVar59 + 0x3c) = local_4f8._4_4_;
        uVar99 = local_520;
      }
      if (lVar26 != 0) {
        local_520._0_4_ = (float)uVar99;
        local_520._4_4_ = (float)((ulong)uVar99 >> 0x20);
        plVar21 = (long *)(lVar26 + (long)(int)uVar19 * 0x20);
        uVar22 = (ulong)(byte)pauVar1[5][0xf];
        *plVar21 = *plVar21 + (long)(int)((float)local_520 * 128.0) * uVar22;
        plVar21[1] = plVar21[1] + (long)(int)(local_520._4_4_ * 128.0) * uVar22;
        plVar21[2] = plVar21[2] + (long)(int)((float)uStack_518 * 128.0) * uVar22;
        plVar21[3] = plVar21[3] + uVar22;
      }
      iVar39 = -(uint)((float)local_550 == 0.0);
      iVar45 = -(uint)((float)((ulong)local_550 >> 0x20) == 0.0);
      iVar46 = -(uint)((float)uStack_548 == 0.0);
      iVar48 = -(uint)(auVar67._0_4_ == 0.0);
      iVar57 = -(uint)(auVar67._4_4_ == 0.0);
      iVar60 = -(uint)(auVar67._8_4_ == 0.0);
      iVar61 = -(uint)(local_4b0 == 0.0);
      iVar74 = -(uint)(fStack_4ac == 0.0);
      iVar77 = -(uint)(fStack_4a8 == 0.0);
      iVar49 = -(uint)(local_4c0 == 0.0);
      iVar76 = -(uint)(fStack_4bc == 0.0);
      iVar97 = -(uint)(fStack_4b8 == 0.0);
      iVar49 = CONCAT13(~(byte)((uint)iVar39 >> 0x18) | ~(byte)((uint)iVar48 >> 0x18) |
                        ~(byte)((uint)iVar61 >> 0x18) | ~(byte)((uint)iVar49 >> 0x18),
                        CONCAT12(~(byte)((uint)iVar39 >> 0x10) | ~(byte)((uint)iVar48 >> 0x10) |
                                 ~(byte)((uint)iVar61 >> 0x10) | ~(byte)((uint)iVar49 >> 0x10),
                                 CONCAT11(~(byte)((uint)iVar39 >> 8) | ~(byte)((uint)iVar48 >> 8) |
                                          ~(byte)((uint)iVar61 >> 8) | ~(byte)((uint)iVar49 >> 8),
                                          ~(byte)iVar39 | ~(byte)iVar48 | ~(byte)iVar61 |
                                          ~(byte)iVar49)));
      auVar42._0_8_ =
           CONCAT17(~(byte)((uint)iVar45 >> 0x18) | ~(byte)((uint)iVar57 >> 0x18) |
                    ~(byte)((uint)iVar74 >> 0x18) | ~(byte)((uint)iVar76 >> 0x18),
                    CONCAT16(~(byte)((uint)iVar45 >> 0x10) | ~(byte)((uint)iVar57 >> 0x10) |
                             ~(byte)((uint)iVar74 >> 0x10) | ~(byte)((uint)iVar76 >> 0x10),
                             CONCAT15(~(byte)((uint)iVar45 >> 8) | ~(byte)((uint)iVar57 >> 8) |
                                      ~(byte)((uint)iVar74 >> 8) | ~(byte)((uint)iVar76 >> 8),
                                      CONCAT14(~(byte)iVar45 | ~(byte)iVar57 | ~(byte)iVar74 |
                                               ~(byte)iVar76,iVar49))));
      auVar42[8] = ~(byte)iVar46 | ~(byte)iVar60 | ~(byte)iVar77 | ~(byte)iVar97;
      auVar42[9] = ~(byte)((uint)iVar46 >> 8) | ~(byte)((uint)iVar60 >> 8) |
                   ~(byte)((uint)iVar77 >> 8) | ~(byte)((uint)iVar97 >> 8);
      auVar42[10] = ~(byte)((uint)iVar46 >> 0x10) | ~(byte)((uint)iVar60 >> 0x10) |
                    ~(byte)((uint)iVar77 >> 0x10) | ~(byte)((uint)iVar97 >> 0x10);
      auVar42[0xb] = ~(byte)((uint)iVar46 >> 0x18) | ~(byte)((uint)iVar60 >> 0x18) |
                     ~(byte)((uint)iVar77 >> 0x18) | ~(byte)((uint)iVar97 >> 0x18);
      uVar19 = *(uint *)(pauVar1[4] + 8);
      local_520 = uVar99;
      do {
        lVar28 = *(long *)(param_2 + 0x48) + (ulong)(uVar19 & 0xffffff) * 0xc0;
        *(ushort *)(lVar28 + 0x58) =
             local_560 |
             (ushort)((iVar49 != 0 || (int)((ulong)auVar42._0_8_ >> 0x20) != 0) ||
                     auVar42._8_4_ != 0) << 10;
        FUN_03019c64(param_1,lVar34,
                     *(long *)(param_1 + 0x10) + (ulong)*(byte *)(lVar28 + 0x89) * 0x40,
                     param_2 + 0x20,lVar28,pauVar1);
        puVar31 = (undefined8 *)(*(long *)(param_1 + 0x500) + (ulong)(uVar19 & 0xffffff) * 0x20);
        *puVar31 = 0;
        *(undefined4 *)((long)puVar31 + 0xc) = 0;
        puVar31[2] = 0;
        uVar19 = *(uint *)(lVar28 + 0x84);
      } while (uVar19 != *(uint *)(pauVar1[4] + 8));
      local_524 = local_524 + 1;
      pfVar30 = pfVar30 + 8;
      pfVar29 = pfVar29 + 8;
    } while (local_524 != param_4);
  }
  if (param_5 != 0) {
    puVar31 = *(undefined8 **)(param_5 + 8);
    uVar22 = (long)puVar31 + 0x17U & 0xfffffffffffffff8;
    if ((uVar22 <= *(ulong *)(param_5 + 0x10)) &&
       (*(ulong *)(param_5 + 8) = uVar22, puVar31 != (undefined8 *)0x0)) {
      *puVar31 = &DAT_0390f40e;
      uVar20 = nn::os::GetSystemTick();
      puVar31[1] = uVar20;
    }
  }
  lVar26 = local_490;
  uVar19 = local_490._4_4_;
  local_490 = (ulong)local_490._4_4_ << 0x20;
  if ((-1 < lVar26) && (local_498 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_498,uVar19 << 2);
  }
  return;
}


