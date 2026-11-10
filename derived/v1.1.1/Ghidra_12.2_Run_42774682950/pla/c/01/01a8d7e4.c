/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a8d7e4; name: FUN_01a8d7e4
 */


/* WARNING: Removing unreachable block (ram,0x01a8dfa4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01a8d7e4(undefined8 *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  undefined1 (*pauVar1) [12];
  long *plVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  bool bVar12;
  undefined2 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined8 uVar39;
  undefined1 auVar40 [16];
  undefined5 uVar41;
  byte bVar42;
  ulong uVar43;
  long lVar44;
  ulong uVar45;
  undefined1 extraout_b0;
  byte bVar46;
  undefined1 extraout_b0_00;
  undefined1 uVar47;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  byte bVar48;
  undefined1 extraout_var;
  byte bVar49;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  byte bVar50;
  undefined1 extraout_var_03;
  byte bVar51;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  byte bVar52;
  undefined1 extraout_var_07;
  byte bVar53;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  undefined1 uVar57;
  byte bVar58;
  undefined1 uVar59;
  byte bVar60;
  byte bVar61;
  undefined1 uVar62;
  byte bVar63;
  undefined1 uVar64;
  byte bVar65;
  undefined1 uVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  float fVar74;
  int iVar75;
  undefined8 uVar76;
  undefined1 auVar77 [16];
  float fVar81;
  float fVar82;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar83;
  float fVar84;
  float fVar85;
  undefined4 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined8 uVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  undefined8 uVar111;
  undefined8 uVar112;
  undefined8 uVar113;
  undefined8 uVar114;
  float fVar116;
  undefined1 auVar115 [16];
  float local_140;
  float fStack_13c;
  undefined1 uStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  long *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  long *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long *local_98;
  long *local_90 [2];
  
  if (*(char *)((long)param_2 + 0x91d) != '\0') {
    *param_1 = 0x42c800003f800000;
    uVar7 = *(undefined8 *)(PTR_DAT_0437a0f8 + 8);
    param_1[2] = *(undefined8 *)PTR_DAT_0437a0f8;
    param_1[3] = uVar7;
    uVar7 = *(undefined8 *)PTR_DAT_0437a100;
    uVar8 = *(undefined8 *)(PTR_DAT_0437a100 + 8);
    param_1[4] = uVar7;
    param_1[5] = uVar8;
    *(undefined8 *)((long)param_1 + 100) = 0;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0x10] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = uVar7;
    param_1[0xf] = uVar8;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    if ((char)param_2[0xd4] == '\0') {
      cVar11 = (char)param_2[0xd8];
    }
    else {
      *(undefined1 *)(param_2 + 0xd4) = 0;
      cVar11 = (char)param_2[0xd8];
    }
    if (cVar11 == '\0') {
      cVar11 = (char)param_2[0xdc];
    }
    else {
      *(undefined1 *)(param_2 + 0xd8) = 0;
      cVar11 = (char)param_2[0xdc];
    }
    if (cVar11 == '\0') {
      cVar11 = (char)param_2[0x126];
    }
    else {
      *(undefined1 *)(param_2 + 0xdc) = 0;
      cVar11 = (char)param_2[0x126];
    }
    if (cVar11 != '\0') {
      *(undefined1 *)(param_2 + 0x126) = 0;
    }
    *(undefined1 *)((long)param_2 + 0x9cc) = 0;
    *(undefined1 *)(param_2 + 0x13c) = 0;
    return;
  }
  plVar2 = param_2 + 0x15a;
  FUN_01839c8c(&local_b0,plVar2);
  if (local_b0 != (long *)0x0) {
    FUN_01839c8c(&local_f0,plVar2);
    if (local_f0 == (long *)0x0) {
LAB_01a8d900:
    }
    else {
      lVar44 = local_f0[0xb];
      piVar3 = (int *)(lVar44 + 0xc);
      iVar75 = *(int *)((long)local_f0 + 0x7c);
      do {
        iVar4 = *piVar3;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = iVar4 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar4 + -1 == 0) {
        *(undefined8 *)(lVar44 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))();
        if (iVar75 == 2) goto LAB_01a8d8f4;
        goto LAB_01a8d900;
      }
      if (iVar75 != 2) goto LAB_01a8d900;
LAB_01a8d8f4:
      if (local_b0[0x1a] != 0) goto LAB_01a8d900;
    }
    if (local_b0 != (long *)0x0) {
      lVar44 = local_b0[0xb];
      piVar3 = (int *)(lVar44 + 0xc);
      do {
        iVar75 = *piVar3;
        cVar11 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
        if (bVar12) {
          *piVar3 = iVar75 + -1;
          cVar11 = ExclusiveMonitorsStatus();
        }
      } while (cVar11 != '\0');
      if (iVar75 + -1 == 0) {
        *(undefined8 *)(lVar44 + 0x18) = 0;
        (**(code **)(*local_b0 + 0x20))();
      }
    }
  }
  local_c8 = *(undefined8 *)(param_4 + 3);
  uStack_c0 = *(undefined8 *)(param_4 + 5);
  local_b8 = param_4[7];
  uVar5 = *param_4;
  uVar6 = param_4[1];
  uVar9 = param_4[2];
  local_d8 = *(long *)(param_4 + 0xe);
  local_e8 = *(long *)(param_4 + 10);
  local_f0 = *(long **)(param_4 + 8);
  local_e0 = *(long *)(param_4 + 0xc);
  *(undefined4 *)(param_2 + 0xe2) = uVar5;
  *(undefined4 *)((long)param_2 + 0x714) = uVar6;
  *(undefined4 *)(param_2 + 0xe3) = uVar9;
  *(undefined4 *)((long)param_2 + 0x72c) = local_b8;
  *(undefined8 *)((long)param_2 + 0x71c) = local_c8;
  *(undefined8 *)((long)param_2 + 0x724) = uStack_c0;
  param_2[0xe7] = local_e8;
  param_2[0xe9] = local_d8;
  param_2[0xe8] = local_e0;
  param_2[0xe6] = (long)local_f0;
  local_a0 = *(undefined8 *)(param_3 + 0xf8);
  local_b0 = *(long **)(param_3 + 0xe8);
  local_a8 = *(undefined8 *)(param_3 + 0xf0);
  uVar10 = *(undefined4 *)(param_3 + 0xe0);
  uVar22 = *(undefined8 *)(param_3 + 0x108);
  uVar7 = *(undefined8 *)(param_3 + 0x100);
  uVar23 = *(undefined8 *)(param_3 + 0x118);
  uVar8 = *(undefined8 *)(param_3 + 0x110);
  uVar24 = *(undefined8 *)(param_3 + 0x138);
  uVar21 = *(undefined8 *)(param_3 + 0x130);
  if (*(char *)((long)param_2 + 0x91e) == '\0') {
    uVar111 = *(undefined8 *)(param_3 + 0x128);
    bVar60 = (byte)uVar111;
    bVar61 = (byte)((ulong)uVar111 >> 8);
    bVar63 = (byte)((ulong)uVar111 >> 0x10);
    bVar65 = (byte)((ulong)uVar111 >> 0x18);
    bVar67 = (byte)((ulong)uVar111 >> 0x20);
    bVar68 = (byte)((ulong)uVar111 >> 0x28);
    bVar69 = (byte)((ulong)uVar111 >> 0x30);
    bVar71 = (byte)((ulong)uVar111 >> 0x38);
    uVar111 = *(undefined8 *)(param_3 + 0x120);
    bVar42 = (byte)uVar111;
    bVar48 = (byte)((ulong)uVar111 >> 8);
    bVar50 = (byte)((ulong)uVar111 >> 0x10);
    bVar52 = (byte)((ulong)uVar111 >> 0x18);
    bVar54 = (byte)((ulong)uVar111 >> 0x20);
    bVar55 = (byte)((ulong)uVar111 >> 0x28);
    bVar56 = (byte)((ulong)uVar111 >> 0x30);
    bVar58 = (byte)((ulong)uVar111 >> 0x38);
  }
  else {
    bVar42 = 0;
    bVar48 = 0;
    bVar50 = 0;
    bVar52 = 0;
    bVar54 = 0;
    bVar55 = 0;
    bVar56 = 0;
    bVar58 = 0;
    bVar60 = 0;
    bVar61 = 0;
    bVar63 = 0;
    bVar65 = 0;
    bVar67 = 0;
    bVar68 = 0;
    bVar69 = 0;
    bVar71 = 0;
    *(undefined1 *)((long)param_2 + 0x91e) = 0;
  }
  uVar13 = CONCAT11(bVar48,bVar42);
  uVar43 = (**(code **)(*param_2 + 0x238))(param_2);
  fVar92 = DAT_0423a0f8;
  if ((uVar43 & 1) == 0) {
    auVar77[2] = bVar50;
    auVar77._0_2_ = uVar13;
    auVar77[3] = bVar52;
    auVar77[4] = bVar54;
    auVar77[5] = bVar55;
    auVar77[6] = bVar56;
    auVar77[7] = bVar58;
    auVar77[8] = bVar60;
    auVar77[9] = bVar61;
    auVar77[10] = bVar63;
    auVar77[0xb] = bVar65;
    auVar77[0xc] = bVar67;
    auVar77[0xd] = bVar68;
    auVar77[0xe] = bVar69;
    auVar77[0xf] = bVar71;
    if (*(int *)(param_2[0xb8] + 0x7c) == 1) {
      cVar11 = (char)param_2[0xd4];
      goto joined_r0x01a8db30;
    }
    if (*(int *)(param_2[0xb8] + 0x7c) == 0) {
      fVar110 = *(float *)(param_2 + 0x17d);
      FUN_01a8e188(param_2);
      fVar109 = *(float *)(param_2[0xb8] + 0x80);
      fVar88 = 0.0;
      local_140 = 0.0;
      fStack_13c = 0.0;
      uVar43 = (**(code **)(*param_2 + 0x1b0))(param_2);
      if ((uVar43 & 1) != 0) {
        FUN_01839c8c(&local_98,plVar2);
        if (local_98 == (long *)0x0) {
          fVar88 = 0.0;
          fVar90 = 0.0;
          fVar91 = 0.0;
        }
        else {
          FUN_01839c8c(local_90,plVar2);
          if (local_90[0] == (long *)0x0) {
LAB_01a8e0e4:
            fVar88 = 0.0;
            fVar90 = 0.0;
            fVar91 = 0.0;
          }
          else {
            lVar44 = local_90[0][0xb];
            piVar3 = (int *)(lVar44 + 0xc);
            iVar75 = *(int *)((long)local_90[0] + 0x7c);
            do {
              iVar4 = *piVar3;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar12) {
                *piVar3 = iVar4 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar4 + -1 == 0) {
              *(undefined8 *)(lVar44 + 0x18) = 0;
              (**(code **)(*local_90[0] + 0x20))();
            }
            if (iVar75 != 2) goto LAB_01a8e0e4;
            lVar44 = local_98[0x1a];
            if (lVar44 == 0) {
              fVar88 = 0.0;
              fVar90 = 0.0;
              fVar91 = 0.0;
            }
            else {
              pauVar1 = (undefined1 (*) [12])(lVar44 + 0xc0);
              uVar86 = (undefined4)((ulong)*(undefined8 *)(lVar44 + 200) >> 0x20);
              fVar88 = (float)*(undefined8 *)*pauVar1;
              fVar90 = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              auVar25._12_4_ = uVar86;
              auVar25._0_12_ = *pauVar1;
              auVar26._12_4_ = uVar86;
              auVar26._0_12_ = *pauVar1;
              auVar77 = NEON_ext(auVar25,auVar26,8,1);
              fVar91 = auVar77._0_4_;
            }
          }
          if (local_98 != (long *)0x0) {
            lVar44 = local_98[0xb];
            piVar3 = (int *)(lVar44 + 0xc);
            do {
              iVar75 = *piVar3;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar12) {
                *piVar3 = iVar75 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar75 + -1 == 0) {
              *(undefined8 *)(lVar44 + 0x18) = 0;
              uStack_fc = SUB41(fVar90,0);
              uStack_fb = (undefined1)((uint)fVar90 >> 8);
              uStack_fa = (undefined1)((uint)fVar90 >> 0x10);
              uStack_f9 = (undefined1)((uint)fVar90 >> 0x18);
              (**(code **)(*local_98 + 0x20))();
              fVar90 = (float)(CONCAT17(uStack_f9,
                                        CONCAT16(uStack_fa,
                                                 CONCAT15(uStack_fb,CONCAT14(uStack_fc,fVar88)))) >>
                              0x20);
            }
          }
        }
        fVar88 = fVar88 + 0.0;
        fVar90 = (float)CONCAT13(extraout_var_07,
                                 CONCAT12(extraout_var_03,CONCAT11(extraout_var,extraout_b0))) *
                 fVar92 * fVar110 * -0.033333335 + fVar90;
        fVar91 = fVar91 + 0.0;
        fVar92 = 0.0;
        if ((char)param_2[0xdc] == '\0') {
          if ((char)param_2[0xd4] != '\0') {
            fVar91 = (float)param_2[0xd7];
            fVar92 = (float)((ulong)param_2[0xd7] >> 0x20);
            fVar88 = (float)param_2[0xd6];
            fVar90 = (float)((ulong)param_2[0xd6] >> 0x20);
          }
        }
        else {
          uStack_fc = SUB41(fVar90,0);
          uStack_fb = (undefined1)((uint)fVar90 >> 8);
          uStack_fa = (undefined1)((uint)fVar90 >> 0x10);
          uStack_f9 = (undefined1)((uint)fVar90 >> 0x18);
          FUN_01a8e188(param_2);
          fVar92 = (float)CONCAT13(extraout_var_08,
                                   CONCAT12(extraout_var_04,CONCAT11(extraout_var_00,extraout_b0_00)
                                           ));
          uVar41 = CONCAT14(uStack_fc,fVar88);
          fVar88 = fVar88 + *(float *)(param_2 + 0xde) * fVar92;
          fVar90 = (float)(CONCAT17(uStack_f9,CONCAT16(uStack_fa,CONCAT15(uStack_fb,uVar41))) >>
                          0x20) + *(float *)((long)param_2 + 0x6f4) * fVar92;
          fVar91 = fVar91 + *(float *)(param_2 + 0xdf) * fVar92;
          fVar92 = *(float *)((long)param_2 + 0x6fc) * fVar92 + 0.0;
        }
        iVar75 = -(uint)(fVar90 < -fVar109);
        auVar94._4_4_ = iVar75;
        auVar94._0_4_ = iVar75;
        auVar94._8_4_ = iVar75;
        auVar94._12_4_ = iVar75;
        auVar27._4_4_ = -fVar109;
        auVar27._0_4_ = fVar88;
        auVar27._8_4_ = fVar91;
        auVar27._12_4_ = fVar92;
        auVar31._4_4_ = fVar90;
        auVar31._0_4_ = fVar88;
        auVar31._8_4_ = fVar91;
        auVar31._12_4_ = fVar92;
        auVar95._4_4_ = fVar90;
        auVar95._0_4_ = fVar88;
        auVar95._8_4_ = fVar91;
        auVar95._12_4_ = fVar92;
        auVar95 = auVar95 ^ (auVar31 ^ auVar27) & auVar94;
        fVar92 = auVar95._4_4_ - *(float *)(param_2 + 0x124) * auVar95._4_4_;
        uStack_f8 = auVar95[8];
        uStack_f7 = auVar95[9];
        uStack_f6 = auVar95[10];
        uStack_f5 = auVar95[0xb];
        uStack_fc = SUB41(fVar92,0);
        uStack_fb = (undefined1)((uint)fVar92 >> 8);
        uStack_fa = (undefined1)((uint)fVar92 >> 0x10);
        uStack_f9 = (undefined1)((uint)fVar92 >> 0x18);
        bVar42 = (**(code **)(*param_2 + 0x3c0))(param_2);
        uVar86 = auVar95._0_4_;
        auVar29[4] = uStack_fc;
        auVar29._0_4_ = uVar86;
        auVar29[5] = uStack_fb;
        auVar29[6] = uStack_fa;
        auVar29[7] = uStack_f9;
        auVar29[8] = uStack_f8;
        auVar29[9] = uStack_f7;
        auVar29[10] = uStack_f6;
        auVar29[0xb] = uStack_f5;
        auVar28[4] = uStack_fc;
        auVar28._0_4_ = uVar86;
        auVar28[5] = uStack_fb;
        auVar28[6] = uStack_fa;
        auVar28[7] = uStack_f9;
        auVar28[8] = uStack_f8;
        auVar28[9] = uStack_f7;
        auVar28[10] = uStack_f6;
        auVar28[0xb] = uStack_f5;
        auVar79._0_8_ =
             (ulong)CONCAT16(uStack_fa,CONCAT15(uStack_fb,CONCAT14(uStack_fc,uVar86))) & 0xffffffff;
        auVar79._8_8_ = auVar95._8_8_;
        iVar75 = -(uint)((fVar92 < 0.0 & (bVar42 ^ 1)) != 0);
        auVar115._4_4_ = iVar75;
        auVar115._0_4_ = iVar75;
        auVar115._8_4_ = iVar75;
        auVar115._12_4_ = iVar75;
        auVar28._12_4_ = auVar95._12_4_;
        auVar29._12_4_ = auVar95._12_4_;
        auVar77 = auVar29 ^ (auVar28 ^ auVar79) & auVar115;
        cVar11 = (char)param_2[0xd4];
        goto joined_r0x01a8dd74;
      }
      uVar43 = (**(code **)(*param_2 + 0x1a8))(param_2);
      if ((uVar43 & 1) != 0) {
        if ((char)param_2[0xd8] != '\0') {
          auVar77 = *(undefined1 (*) [16])(param_2 + 0xda);
          cVar11 = (char)param_2[0xd4];
          goto joined_r0x01a8dd74;
        }
        FUN_01839c8c(&local_98,plVar2);
        if (local_98 != (long *)0x0) {
          FUN_01839c8c(local_90,plVar2);
          if (local_90[0] == (long *)0x0) {
LAB_01a8e144:
            local_140 = 0.0;
            fStack_13c = 0.0;
            fVar88 = 0.0;
          }
          else {
            lVar44 = local_90[0][0xb];
            piVar3 = (int *)(lVar44 + 0xc);
            iVar75 = *(int *)((long)local_90[0] + 0x7c);
            do {
              iVar4 = *piVar3;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar12) {
                *piVar3 = iVar4 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar4 + -1 == 0) {
              *(undefined8 *)(lVar44 + 0x18) = 0;
              (**(code **)(*local_90[0] + 0x20))();
            }
            if (iVar75 != 2) goto LAB_01a8e144;
            lVar44 = local_98[0x1a];
            if (lVar44 == 0) {
              fVar88 = 0.0;
              local_140 = 0.0;
              fStack_13c = 0.0;
            }
            else {
              pauVar1 = (undefined1 (*) [12])(lVar44 + 0xc0);
              uVar86 = (undefined4)((ulong)*(undefined8 *)(lVar44 + 200) >> 0x20);
              local_140 = (float)*(undefined8 *)*pauVar1;
              fStack_13c = (float)((ulong)*(undefined8 *)*pauVar1 >> 0x20);
              auVar80._12_4_ = uVar86;
              auVar80._0_12_ = *pauVar1;
              auVar30._12_4_ = uVar86;
              auVar30._0_12_ = *pauVar1;
              auVar77 = NEON_ext(auVar80,auVar30,8,1);
              fVar88 = auVar77._0_4_;
            }
          }
          if (local_98 != (long *)0x0) {
            lVar44 = local_98[0xb];
            piVar3 = (int *)(lVar44 + 0xc);
            do {
              iVar75 = *piVar3;
              cVar11 = '\x01';
              bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
              if (bVar12) {
                *piVar3 = iVar75 + -1;
                cVar11 = ExclusiveMonitorsStatus();
              }
            } while (cVar11 != '\0');
            if (iVar75 + -1 == 0) {
              *(undefined8 *)(lVar44 + 0x18) = 0;
              (**(code **)(*local_98 + 0x20))();
            }
          }
        }
        fVar90 = DAT_0423a0f8 * *(float *)(param_2 + 0x17d);
        fVar92 = (float)*(undefined8 *)(param_4 + 4) * fVar90;
        fVar109 = (float)((ulong)*(undefined8 *)(param_4 + 4) >> 0x20) * fVar90;
        fVar110 = (float)*(undefined8 *)(param_4 + 6) * fVar90;
        fVar90 = (float)((ulong)*(undefined8 *)(param_4 + 6) >> 0x20) * fVar90;
        FUN_01839c8c(local_90,plVar2);
        uVar43 = (**(code **)(*param_2 + 0x1a0))(param_2);
        if ((uVar43 & 1) == 0) {
          uVar47 = 0;
          if (local_90[0] != (long *)0x0) goto LAB_01a8dfa8;
        }
        else if (local_90[0] == (long *)0x0) {
          uVar47 = 0;
        }
        else {
          fVar91 = (float)local_90[0][0x2a] * (float)DAT_0388a140;
          fVar89 = (float)((ulong)local_90[0][0x2a] >> 0x20) * (float)((ulong)DAT_0388a140 >> 0x20);
          uVar47 = (undefined1)((uint)fVar89 >> 8);
          uVar57 = (undefined1)((uint)fVar89 >> 0x10);
          uVar59 = (undefined1)((uint)fVar89 >> 0x18);
          fVar108 = (float)local_90[0][0x2b] * (float)DAT_0388a148;
          uVar62 = (undefined1)((uint)fVar108 >> 8);
          uVar64 = (undefined1)((uint)fVar108 >> 0x10);
          uVar66 = (undefined1)((uint)fVar108 >> 0x18);
          fVar74 = (float)((ulong)local_90[0][0x2b] >> 0x20) * (float)((ulong)DAT_0388a148 >> 0x20);
          uVar72 = (undefined1)((uint)fVar74 >> 8);
          uVar70 = (undefined1)((uint)fVar74 >> 0x10);
          uVar73 = (undefined1)((uint)fVar74 >> 0x18);
          auVar17[4] = SUB41(fVar89,0);
          auVar17._0_4_ = fVar91;
          auVar17[5] = uVar47;
          auVar17[6] = uVar57;
          auVar17[7] = uVar59;
          auVar17[8] = SUB41(fVar108,0);
          auVar17[9] = uVar62;
          auVar17[10] = uVar64;
          auVar17[0xb] = uVar66;
          auVar17[0xc] = SUB41(fVar74,0);
          auVar17[0xd] = uVar72;
          auVar17[0xe] = uVar70;
          auVar17[0xf] = uVar73;
          auVar18[4] = SUB41(fVar89,0);
          auVar18._0_4_ = fVar91;
          auVar18[5] = uVar47;
          auVar18[6] = uVar57;
          auVar18[7] = uVar59;
          auVar18[8] = SUB41(fVar108,0);
          auVar18[9] = uVar62;
          auVar18[10] = uVar64;
          auVar18[0xb] = uVar66;
          auVar18[0xc] = SUB41(fVar74,0);
          auVar18[0xd] = uVar72;
          auVar18[0xe] = uVar70;
          auVar18[0xf] = uVar73;
          auVar77 = NEON_ext(auVar17,auVar18,8,1);
          fVar91 = auVar77._0_4_ + fVar91 + auVar77._4_4_ + fVar89;
          uVar47 = 0;
          if (-1.0 <= fVar91) {
            uVar47 = SUB41(fVar91,0);
          }
LAB_01a8dfa8:
          lVar44 = local_90[0][0xb];
          piVar3 = (int *)(lVar44 + 0xc);
          do {
            iVar75 = *piVar3;
            cVar11 = '\x01';
            bVar12 = (bool)ExclusiveMonitorPass(piVar3,0x10);
            if (bVar12) {
              *piVar3 = iVar75 + -1;
              cVar11 = ExclusiveMonitorsStatus();
            }
          } while (cVar11 != '\0');
          if (iVar75 + -1 == 0) {
            *(undefined8 *)(lVar44 + 0x18) = 0;
            (**(code **)(*local_90[0] + 0x20))(uVar47);
          }
        }
        FUN_0095d8f0(uVar47);
        fVar91 = (float)NEON_ucvtf(*(undefined4 *)PTR_AngleIndexHalfRound_04372cd8);
        uVar45 = (ulong)((float)CONCAT13(extraout_var_09,
                                         CONCAT12(extraout_var_05,
                                                  CONCAT11(extraout_var_01,extraout_b0_01))) *
                        (fVar91 / *(float *)PTR_FloatDegree180_04372ce0));
        uVar43 = uVar45 >> 0x18 & 0xff;
        fVar91 = *(float *)(PTR_SinCosSampleTable_04372ce8 + uVar43 * 0x10 + 4) +
                 *(float *)(PTR_SinCosSampleTable_04372ce8 + uVar43 * 0x10 + 0xc) *
                 (float)((uint)uVar45 & 0xffffff) * 5.9604645e-08;
        fVar89 = fVar92 * fVar91 * 0.033333335;
        fVar109 = -((float)CONCAT13((char)((uint)fVar109 >> 0x18),
                                    CONCAT12((char)((uint)fVar109 >> 0x10),
                                             (short)(CONCAT15((char)((uint)fVar109 >> 8),
                                                              CONCAT14(SUB41(fVar109,0),fVar92)) >>
                                                    0x20))) * fVar91) * 0.033333335;
        fVar108 = fVar110 * fVar91 * 0.033333335;
        fVar110 = (float)CONCAT13((char)((uint)fVar90 >> 0x18),
                                  CONCAT12((char)((uint)fVar90 >> 0x10),
                                           (short)(CONCAT15((char)((uint)fVar90 >> 8),
                                                            CONCAT14(SUB41(fVar90,0),fVar110)) >>
                                                  0x20))) * fVar91 * 0.033333335;
        FUN_01a8e188(param_2);
        fVar92 = (float)CONCAT13(extraout_var_10,
                                 CONCAT12(extraout_var_06,CONCAT11(extraout_var_02,extraout_b0_02)))
        ;
        auVar77._0_4_ = local_140 + fVar89 * fVar92;
        auVar77._4_4_ =
             fStack_13c +
             (float)CONCAT13((char)((uint)fVar109 >> 0x18),
                             CONCAT12((char)((uint)fVar109 >> 0x10),
                                      (short)(CONCAT15((char)((uint)fVar109 >> 8),
                                                       CONCAT14(SUB41(fVar109,0),fVar89)) >> 0x20)))
             * fVar92;
        auVar77._8_4_ = fVar88 + fVar108 * fVar92;
        auVar77._12_4_ =
             (float)CONCAT13((char)((uint)fVar110 >> 0x18),
                             CONCAT12((char)((uint)fVar110 >> 0x10),
                                      (short)(CONCAT15((char)((uint)fVar110 >> 8),
                                                       CONCAT14(SUB41(fVar110,0),fVar108)) >> 0x20))
                            ) * fVar92 + 0.0;
        fVar92 = auVar77._0_4_ * auVar77._0_4_;
        fVar88 = auVar77._4_4_ * auVar77._4_4_;
        uVar47 = (undefined1)((uint)fVar88 >> 8);
        uVar57 = (undefined1)((uint)fVar88 >> 0x10);
        uVar59 = (undefined1)((uint)fVar88 >> 0x18);
        fVar109 = auVar77._8_4_ * auVar77._8_4_;
        uVar62 = (undefined1)((uint)fVar109 >> 8);
        uVar64 = (undefined1)((uint)fVar109 >> 0x10);
        uVar66 = (undefined1)((uint)fVar109 >> 0x18);
        fVar110 = auVar77._12_4_ * auVar77._12_4_;
        uVar72 = (undefined1)((uint)fVar110 >> 8);
        uVar70 = (undefined1)((uint)fVar110 >> 0x10);
        uVar73 = (undefined1)((uint)fVar110 >> 0x18);
        auVar19[4] = SUB41(fVar88,0);
        auVar19._0_4_ = fVar92;
        auVar19[5] = uVar47;
        auVar19[6] = uVar57;
        auVar19[7] = uVar59;
        auVar19[8] = SUB41(fVar109,0);
        auVar19[9] = uVar62;
        auVar19[10] = uVar64;
        auVar19[0xb] = uVar66;
        auVar19[0xc] = SUB41(fVar110,0);
        auVar19[0xd] = uVar72;
        auVar19[0xe] = uVar70;
        auVar19[0xf] = uVar73;
        auVar20[4] = SUB41(fVar88,0);
        auVar20._0_4_ = fVar92;
        auVar20[5] = uVar47;
        auVar20[6] = uVar57;
        auVar20[7] = uVar59;
        auVar20[8] = SUB41(fVar109,0);
        auVar20[9] = uVar62;
        auVar20[10] = uVar64;
        auVar20[0xb] = uVar66;
        auVar20[0xc] = SUB41(fVar110,0);
        auVar20[0xd] = uVar72;
        auVar20[0xe] = uVar70;
        auVar20[0xf] = uVar73;
        auVar80 = NEON_ext(auVar19,auVar20,8,1);
        fVar92 = SQRT(auVar80._0_4_ + fVar92 + auVar80._4_4_ + fVar88);
        if (*(float *)(param_2 + 0xd3) < fVar92) {
          fVar92 = *(float *)(param_2 + 0xd3) / fVar92;
          auVar77._0_4_ = auVar77._0_4_ * fVar92;
          auVar77._4_4_ = auVar77._4_4_ * fVar92;
          auVar77._8_4_ = auVar77._8_4_ * fVar92;
          auVar77._12_4_ = auVar77._12_4_ * fVar92;
          cVar11 = (char)param_2[0xd4];
          goto joined_r0x01a8dd74;
        }
        goto LAB_01a8db38;
      }
      uVar43 = (**(code **)(*param_2 + 0x1a0))(param_2);
      if ((uVar43 & 1) == 0) {
        cVar11 = (char)param_2[0xd4];
        goto joined_r0x01a8dd74;
      }
      if ((char)param_2[0xd4] == '\0') {
        iVar75 = -(uint)((int)param_2[0xb3] == 1);
        bVar46 = (byte)iVar75;
        bVar49 = (byte)((uint)iVar75 >> 8);
        bVar51 = (byte)((uint)iVar75 >> 0x10);
        bVar53 = (byte)((uint)iVar75 >> 0x18);
        auVar77[0] = bVar42 & ~bVar46;
        auVar77[1] = bVar48 & ~bVar49;
        auVar77[2] = bVar50 & ~bVar51;
        auVar77[3] = bVar52 & ~bVar53;
        auVar77[4] = bVar54 & ~bVar46;
        auVar77[5] = bVar55 & ~bVar49;
        auVar77[6] = bVar56 & ~bVar51;
        auVar77[7] = bVar58 & ~bVar53;
        auVar77[8] = bVar60 & ~bVar46;
        auVar77[9] = bVar61 & ~bVar49;
        auVar77[10] = bVar63 & ~bVar51;
        auVar77[0xb] = bVar65 & ~bVar53;
        auVar77[0xc] = bVar67 & ~bVar46;
        auVar77[0xd] = bVar68 & ~bVar49;
        auVar77[0xe] = bVar69 & ~bVar51;
        auVar77[0xf] = bVar71 & ~bVar53;
        cVar11 = (char)param_2[0xd4];
        goto joined_r0x01a8dd74;
      }
      goto LAB_01a8db34;
    }
  }
  else {
    auVar77[2] = bVar50;
    auVar77._0_2_ = uVar13;
    auVar77[3] = bVar52;
    auVar77[4] = bVar54;
    auVar77[5] = bVar55;
    auVar77[6] = bVar56;
    auVar77[7] = bVar58;
    auVar77[8] = bVar60;
    auVar77[9] = bVar61;
    auVar77[10] = bVar63;
    auVar77[0xb] = bVar65;
    auVar77[0xc] = bVar67;
    auVar77[0xd] = bVar68;
    auVar77[0xe] = bVar69;
    auVar77[0xf] = bVar71;
    cVar11 = (char)param_2[0xd4];
joined_r0x01a8db30:
    if (cVar11 != '\0') {
LAB_01a8db34:
      auVar77 = *(undefined1 (*) [16])(param_2 + 0xd6);
    }
  }
LAB_01a8db38:
  cVar11 = (char)param_2[0xd4];
joined_r0x01a8dd74:
  if (cVar11 == '\0') {
    cVar11 = (char)param_2[0xd8];
  }
  else {
    *(undefined1 *)(param_2 + 0xd4) = 0;
    cVar11 = (char)param_2[0xd8];
  }
  if (cVar11 == '\0') {
    cVar11 = (char)param_2[0xdc];
  }
  else {
    *(undefined1 *)(param_2 + 0xd8) = 0;
    cVar11 = (char)param_2[0xdc];
  }
  if (cVar11 != '\0') {
    *(undefined1 *)(param_2 + 0xdc) = 0;
  }
  *(undefined1 *)((long)param_2 + 0x9cc) = 0;
  if ((char)param_2[0x126] != '\0') {
    plVar2 = param_2 + 0x128;
    lVar44 = param_2[0x129];
    uVar47 = (undefined1)((ulong)lVar44 >> 8);
    uVar57 = (undefined1)((ulong)lVar44 >> 0x10);
    uVar59 = (undefined1)((ulong)lVar44 >> 0x18);
    uVar62 = (undefined1)((ulong)lVar44 >> 0x20);
    uVar64 = (undefined1)((ulong)lVar44 >> 0x28);
    uVar66 = (undefined1)((ulong)lVar44 >> 0x30);
    uVar72 = (undefined1)((ulong)lVar44 >> 0x38);
    *(undefined1 *)(param_2 + 0x126) = 0;
    fVar92 = (float)*plVar2;
    fVar109 = fVar92 * (float)_DAT_03889ac0;
    fVar88 = (float)((ulong)*plVar2 >> 0x20);
    fVar90 = fVar88 * (float)((ulong)_DAT_03889ac0 >> 0x20);
    uVar70 = SUB41(fVar90,0);
    uVar73 = (undefined1)((uint)fVar90 >> 8);
    uVar96 = (undefined1)((uint)fVar90 >> 0x10);
    uVar97 = (undefined1)((uint)fVar90 >> 0x18);
    fVar89 = (float)lVar44 * (float)_UNK_03889ac8;
    uVar98 = SUB41(fVar89,0);
    uVar99 = (undefined1)((uint)fVar89 >> 8);
    uVar100 = (undefined1)((uint)fVar89 >> 0x10);
    uVar101 = (undefined1)((uint)fVar89 >> 0x18);
    fVar108 = (float)((ulong)lVar44 >> 0x20) * (float)((ulong)_UNK_03889ac8 >> 0x20);
    uVar102 = SUB41(fVar108,0);
    uVar103 = (undefined1)((uint)fVar108 >> 8);
    uVar104 = (undefined1)((uint)fVar108 >> 0x10);
    uVar105 = (undefined1)((uint)fVar108 >> 0x18);
    uVar76 = a64_TBL(ZEXT816(0),auVar77,DAT_0388a580);
    uVar106 = a64_TBL(ZEXT816(0),auVar77,DAT_0388a680);
    auVar33[4] = uVar70;
    auVar33._0_4_ = fVar109;
    auVar33[5] = uVar73;
    auVar33[6] = uVar96;
    auVar33[7] = uVar97;
    auVar33[8] = uVar98;
    auVar33[9] = uVar99;
    auVar33[10] = uVar100;
    auVar33[0xb] = uVar101;
    auVar33[0xc] = uVar102;
    auVar33[0xd] = uVar103;
    auVar33[0xe] = uVar104;
    auVar33[0xf] = uVar105;
    uVar111 = a64_TBL(ZEXT816(0),auVar33,DAT_0388a580);
    auVar34[4] = uVar70;
    auVar34._0_4_ = fVar109;
    auVar34[5] = uVar73;
    auVar34[6] = uVar96;
    auVar34[7] = uVar97;
    auVar34[8] = uVar98;
    auVar34[9] = uVar99;
    auVar34[10] = uVar100;
    auVar34[0xb] = uVar101;
    auVar34[0xc] = uVar102;
    auVar34[0xd] = uVar103;
    auVar34[0xe] = uVar104;
    auVar34[0xf] = uVar105;
    uVar32 = a64_TBL(ZEXT816(0),auVar34,DAT_0388a6c8);
    fVar107 = (float)((ulong)uVar106 >> 0x20);
    fVar81 = (float)((ulong)uVar76 >> 0x20);
    auVar35[4] = uVar70;
    auVar35._0_4_ = fVar109;
    auVar35[5] = uVar73;
    auVar35[6] = uVar96;
    auVar35[7] = uVar97;
    auVar35[8] = uVar98;
    auVar35[9] = uVar99;
    auVar35[10] = uVar100;
    auVar35[0xb] = uVar101;
    auVar35[0xc] = uVar102;
    auVar35[0xd] = uVar103;
    auVar35[0xe] = uVar104;
    auVar35[0xf] = uVar105;
    uVar93 = a64_TBL(ZEXT816(0),auVar35,DAT_0388a680);
    fVar85 = (float)_UNK_03889ad8;
    fVar87 = (float)((ulong)_UNK_03889ad8 >> 0x20);
    fVar83 = (float)_DAT_03889ad0;
    fVar84 = (float)((ulong)_DAT_03889ad0 >> 0x20);
    auVar36[4] = uVar70;
    auVar36._0_4_ = fVar109;
    auVar36[5] = uVar73;
    auVar36[6] = uVar96;
    auVar36[7] = uVar97;
    auVar36[8] = uVar98;
    auVar36[9] = uVar99;
    auVar36[10] = uVar100;
    auVar36[0xb] = uVar101;
    auVar36[0xc] = uVar102;
    auVar36[0xd] = uVar103;
    auVar36[0xe] = uVar104;
    auVar36[0xf] = uVar105;
    uVar112 = a64_TBL(ZEXT816(0),auVar36,DAT_0388a880);
    auVar37[4] = uVar70;
    auVar37._0_4_ = fVar109;
    auVar37[5] = uVar73;
    auVar37[6] = uVar96;
    auVar37[7] = uVar97;
    auVar37[8] = uVar98;
    auVar37[9] = uVar99;
    auVar37[10] = uVar100;
    auVar37[0xb] = uVar101;
    auVar37[0xc] = uVar102;
    auVar37[0xd] = uVar103;
    auVar37[0xe] = uVar104;
    auVar37[0xf] = uVar105;
    uVar113 = a64_TBL(ZEXT816(0),auVar37,DAT_0388a790);
    auVar38[4] = uVar70;
    auVar38._0_4_ = fVar109;
    auVar38[5] = uVar73;
    auVar38[6] = uVar96;
    auVar38[7] = uVar97;
    auVar38[8] = SUB41(fVar109,0);
    auVar38[9] = (char)((uint)fVar109 >> 8);
    auVar38[10] = (char)((uint)fVar109 >> 0x10);
    auVar38[0xb] = (char)((uint)fVar109 >> 0x18);
    auVar38[0xc] = uVar70;
    auVar38[0xd] = uVar73;
    auVar38[0xe] = uVar96;
    auVar38[0xf] = uVar97;
    uVar39 = a64_TBL(ZEXT816(0),auVar38,DAT_0388a648);
    fVar110 = auVar77._0_4_ * (float)uVar39;
    fVar91 = auVar77._4_4_ * (float)((ulong)uVar39 >> 0x20);
    uVar114 = a64_TBL(ZEXT816(0),auVar77,DAT_0388a880);
    fVar116 = (float)((ulong)uVar114 >> 0x20);
    auVar14[9] = uVar47;
    auVar14._0_9_ = *(unkbyte9 *)plVar2;
    auVar14[10] = uVar57;
    auVar14[0xb] = uVar59;
    auVar14[0xc] = uVar62;
    auVar14[0xd] = uVar64;
    auVar14[0xe] = uVar66;
    auVar14[0xf] = uVar72;
    uVar39 = a64_TBL(ZEXT816(0),auVar14,DAT_0388a580);
    fVar74 = (fVar109 * (float)uVar76 + fVar83 * auVar77._0_4_ * (float)uVar111 +
             fVar83 * (float)uVar114 * (float)uVar93) - (float)uVar106 * (float)uVar112;
    fVar82 = (fVar90 * fVar81 + fVar84 * auVar77._4_4_ * (float)((ulong)uVar111 >> 0x20) +
             fVar84 * fVar116 * (float)((ulong)uVar93 >> 0x20)) -
             fVar107 * (float)((ulong)uVar112 >> 0x20);
    auVar78._0_8_ = CONCAT44(fVar82,fVar74);
    auVar78._8_4_ =
         (fVar89 * (float)uVar76 + fVar85 * (float)uVar106 * (float)uVar32 + fVar85 * fVar110) -
         (float)uVar114 * (float)uVar113;
    auVar78._12_4_ =
         (fVar108 * fVar81 + fVar87 * fVar107 * (float)((ulong)uVar32 >> 0x20) +
         fVar87 * (float)(CONCAT17((char)((uint)fVar91 >> 0x18),
                                   CONCAT16((char)((uint)fVar91 >> 0x10),
                                            CONCAT15((char)((uint)fVar91 >> 8),
                                                     CONCAT14(SUB41(fVar91,0),fVar110)))) >> 0x20))
         - fVar116 * (float)((ulong)uVar113 >> 0x20);
    auVar15[9] = uVar47;
    auVar15._0_9_ = *(unkbyte9 *)plVar2;
    auVar15[10] = uVar57;
    auVar15[0xb] = uVar59;
    auVar15[0xc] = uVar62;
    auVar15[0xd] = uVar64;
    auVar15[0xe] = uVar66;
    auVar15[0xf] = uVar72;
    uVar106 = a64_TBL(ZEXT816(0),auVar15,DAT_0388a680);
    uVar76 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a580);
    uVar112 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a6c8);
    fVar108 = (float)((ulong)uVar106 >> 0x20);
    fVar90 = (float)((ulong)uVar39 >> 0x20);
    uVar93 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a680);
    uVar113 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a880);
    auVar16[9] = uVar47;
    auVar16._0_9_ = *(unkbyte9 *)plVar2;
    auVar16[10] = uVar57;
    auVar16[0xb] = uVar59;
    auVar16[0xc] = uVar62;
    auVar16[0xd] = uVar64;
    auVar16[0xe] = uVar66;
    auVar16[0xf] = uVar72;
    uVar32 = a64_TBL(ZEXT816(0),auVar16,DAT_0388a880);
    fVar89 = (float)((ulong)uVar32 >> 0x20);
    auVar40._8_4_ = fVar74;
    auVar40._0_8_ = auVar78._0_8_;
    auVar40._12_4_ = fVar82;
    uVar111 = a64_TBL(ZEXT816(0),auVar40,DAT_0388a648);
    fVar109 = fVar92 * (float)uVar111;
    fVar110 = fVar88 * (float)((ulong)uVar111 >> 0x20);
    uVar111 = a64_TBL(ZEXT816(0),auVar78,DAT_0388a790);
    fVar92 = ((float)uVar39 * fVar74 + fVar83 * fVar92 * (float)uVar76 +
             fVar83 * (float)uVar32 * (float)uVar93) - (float)uVar106 * (float)uVar113;
    fVar88 = (fVar90 * fVar82 + fVar84 * fVar88 * (float)((ulong)uVar76 >> 0x20) +
             fVar84 * fVar89 * (float)((ulong)uVar93 >> 0x20)) -
             fVar108 * (float)((ulong)uVar113 >> 0x20);
    fVar91 = ((float)uVar39 * auVar78._8_4_ + fVar85 * (float)uVar106 * (float)uVar112 +
             fVar85 * fVar109) - (float)uVar32 * (float)uVar111;
    fVar109 = (fVar90 * auVar78._12_4_ + fVar87 * fVar108 * (float)((ulong)uVar112 >> 0x20) +
              fVar87 * (float)(CONCAT17((char)((uint)fVar110 >> 0x18),
                                        CONCAT16((char)((uint)fVar110 >> 0x10),
                                                 CONCAT15((char)((uint)fVar110 >> 8),
                                                          CONCAT14(SUB41(fVar110,0),fVar109)))) >>
                              0x20)) - fVar89 * (float)((ulong)uVar111 >> 0x20);
    auVar77[0] = SUB41(fVar92,0) & (byte)_DAT_038897c0;
    auVar77[1] = (byte)((uint)fVar92 >> 8) & (byte)((ulong)_DAT_038897c0 >> 8);
    auVar77[2] = (byte)((uint)fVar92 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x10);
    auVar77[3] = (byte)((uint)fVar92 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x18);
    auVar77[4] = SUB41(fVar88,0) & (byte)((ulong)_DAT_038897c0 >> 0x20);
    auVar77[5] = (byte)((uint)fVar88 >> 8) & (byte)((ulong)_DAT_038897c0 >> 0x28);
    auVar77[6] = (byte)((uint)fVar88 >> 0x10) & (byte)((ulong)_DAT_038897c0 >> 0x30);
    auVar77[7] = (byte)((uint)fVar88 >> 0x18) & (byte)((ulong)_DAT_038897c0 >> 0x38);
    auVar77[8] = SUB41(fVar91,0) & (byte)_UNK_038897c8;
    auVar77[9] = (byte)((uint)fVar91 >> 8) & (byte)((ulong)_UNK_038897c8 >> 8);
    auVar77[10] = (byte)((uint)fVar91 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x10);
    auVar77[0xb] = (byte)((uint)fVar91 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x18);
    auVar77[0xc] = SUB41(fVar109,0) & (byte)((ulong)_UNK_038897c8 >> 0x20);
    auVar77[0xd] = (byte)((uint)fVar109 >> 8) & (byte)((ulong)_UNK_038897c8 >> 0x28);
    auVar77[0xe] = (byte)((uint)fVar109 >> 0x10) & (byte)((ulong)_UNK_038897c8 >> 0x30);
    auVar77[0xf] = (byte)((uint)fVar109 >> 0x18) & (byte)((ulong)_UNK_038897c8 >> 0x38);
  }
  if (*(char *)((long)param_2 + 0x704) == '\0') {
    uVar86 = (undefined4)param_2[0xe0];
  }
  else {
    uVar86 = (undefined4)param_2[0xe1];
    *(undefined1 *)((long)param_2 + 0x704) = 0;
  }
  *(undefined1 *)(param_2 + 0x13c) = 0;
  *(undefined4 *)param_1 = uVar10;
  *(undefined4 *)((long)param_1 + 4) = uVar86;
  param_1[5] = uVar22;
  param_1[4] = uVar7;
  param_1[2] = local_a8;
  param_1[3] = local_a0;
  param_1[1] = local_b0;
  *(undefined4 *)((long)param_1 + 0x7c) = local_b8;
  *(undefined8 *)((long)param_1 + 0x74) = uStack_c0;
  param_1[7] = uVar23;
  param_1[6] = uVar8;
  *(undefined8 *)((long)param_1 + 0x6c) = local_c8;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)((long)param_1 + 100) = uVar6;
  *(undefined4 *)(param_1 + 0xd) = uVar9;
  param_1[0x12] = local_e0;
  param_1[0x13] = local_d8;
  param_1[0x10] = local_f0;
  param_1[0x11] = local_e8;
  param_1[9] = auVar77._8_8_;
  param_1[8] = auVar77._0_8_;
  param_1[0xb] = uVar24;
  param_1[10] = uVar21;
  return;
}


