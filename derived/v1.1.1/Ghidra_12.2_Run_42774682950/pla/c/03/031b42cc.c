/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031b42cc; name: FUN_031b42cc
 */


/* WARNING: Removing unreachable block (ram,0x031b4860) */

int FUN_031b42cc(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  ushort uVar4;
  short sVar5;
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  long lVar9;
  long lVar10;
  undefined *puVar11;
  bool bVar12;
  long **__s;
  long *plVar13;
  uint uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  short sVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  undefined8 *puVar28;
  int iVar29;
  uint *puVar30;
  undefined4 *puVar31;
  uint uVar32;
  uint uVar33;
  undefined8 uVar34;
  long lVar35;
  ulong uVar36;
  ulong uVar37;
  long *plVar38;
  int *piVar39;
  ulong uVar40;
  float *pfVar41;
  long *plVar42;
  ulong uVar43;
  undefined1 uVar44;
  byte bVar45;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 uVar46;
  byte bVar47;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar48;
  byte bVar49;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 uVar50;
  undefined1 uVar51;
  byte bVar52;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar53;
  byte bVar54;
  undefined1 extraout_var_05;
  undefined1 uVar55;
  byte bVar56;
  undefined1 extraout_var_06;
  undefined1 uVar57;
  byte bVar58;
  undefined1 extraout_var_07;
  undefined1 uVar59;
  byte bVar60;
  undefined1 extraout_var_08;
  float fVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  byte bVar68;
  byte bVar69;
  undefined1 uVar70;
  byte bVar71;
  undefined1 uVar72;
  byte bVar73;
  undefined1 uVar74;
  byte bVar75;
  undefined1 uVar76;
  byte bVar77;
  undefined1 uVar78;
  byte bVar79;
  undefined1 uVar80;
  byte bVar81;
  undefined1 uVar82;
  float fVar85;
  float fVar86;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  int iVar90;
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  float fVar98;
  float fVar101;
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  float fVar104;
  float fVar109;
  float fVar110;
  float fVar111;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar112;
  ulong uVar113;
  ulong uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  float fVar118;
  float fVar122;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  float fVar123;
  float fVar124;
  float fVar125;
  undefined8 uVar126;
  int iVar128;
  undefined1 auVar127 [16];
  int iVar129;
  undefined8 uVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar135;
  undefined1 auVar134 [16];
  undefined8 uVar136;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  int iVar141;
  uint *local_d8;
  long **local_d0;
  undefined8 local_c8;
  long *local_c0;
  int local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  long **local_a0;
  uint local_98;
  uint local_94;
  int local_90;
  
  if (*(int *)(param_1 + 0xf) == 0) {
    return 2;
  }
  puVar22 = (uint *)param_1[0xe];
  iVar20 = *(int *)(param_1 + 0xf) + -1;
  plVar42 = (long *)*param_1;
  uVar2 = *puVar22;
  *(int *)(param_1 + 0xf) = iVar20;
  *(undefined8 *)puVar22 = *(undefined8 *)(puVar22 + (long)iVar20 * 2);
  iVar20 = *(int *)(param_1 + 0xf);
  uVar23 = 1;
  if (2 < iVar20) {
    uVar14 = 1;
    if (*(int *)(param_1[0xe] + 0x14) < *(int *)(param_1[0xe] + 0xc)) {
      uVar14 = 2;
    }
    uVar23 = (ulong)uVar14;
  }
  if ((int)uVar23 < iVar20) {
    iVar29 = 0;
    do {
      lVar24 = param_1[0xe];
      iVar90 = (int)uVar23;
      if (*(int *)(lVar24 + (long)iVar29 * 8 + 4) <= *(int *)(lVar24 + (long)iVar90 * 8 + 4)) break;
      uVar34 = *(undefined8 *)(lVar24 + (long)iVar29 * 8);
      *(undefined8 *)(lVar24 + (long)iVar29 * 8) = *(undefined8 *)(lVar24 + (long)iVar90 * 8);
      *(undefined8 *)(lVar24 + (long)iVar90 * 8) = uVar34;
      uVar23 = (long)(iVar90 << 1) | 1;
      lVar24 = (long)(iVar90 << 1) + 2;
      if ((int)lVar24 < *(int *)(param_1 + 0xf)) {
        uVar14 = (uint)uVar23;
        if (*(int *)(param_1[0xe] + lVar24 * 8 + 4) < *(int *)(param_1[0xe] + uVar23 * 8 + 4)) {
          uVar14 = uVar14 + 1;
        }
        uVar23 = (ulong)uVar14;
      }
      iVar29 = iVar90;
    } while ((int)uVar23 < iVar20);
  }
  uVar23 = (ulong)uVar2 & 0xffc00000;
  if (uVar23 == 0xff400000) {
    uVar37 = (ulong)(uVar2 * -0x61c8864f >> 0x18);
    goto LAB_031b5224;
  }
  plVar16 = (long *)plVar42[0x3b];
  uVar37 = (ulong)(uVar2 * -0x61c8864f >> 0x18);
  lVar24 = *plVar16;
  for (sVar18 = *(short *)(plVar16[2] + uVar37 * 2); -1 < sVar18;
      sVar18 = *(short *)(plVar16[1] + (long)sVar18 * 2)) {
    if (*(uint *)(lVar24 + (long)sVar18 * 0x10 + 8) == uVar2) {
      puVar28 = (undefined8 *)(lVar24 + (long)sVar18 * 0x10);
      goto LAB_031b4474;
    }
  }
  iVar20 = *(int *)((long)plVar16 + 0x1c);
  puVar28 = (undefined8 *)(lVar24 + (long)iVar20 * 0x10);
  *(int *)((long)plVar16 + 0x1c) = iVar20 + 1;
  *puVar28 = 0x7f7fffee7f7fffee;
  *(uint *)(puVar28 + 1) = uVar2;
  *(undefined4 *)((long)puVar28 + 0xc) = 0xffff;
  *(undefined2 *)(plVar16[1] + (long)(short)iVar20 * 2) = *(undefined2 *)(plVar16[2] + uVar37 * 2);
  *(short *)(plVar16[2] + uVar37 * 2) = (short)iVar20;
  lVar24 = *plVar16;
LAB_031b4474:
  *(int *)(plVar16 + 8) = ((int)puVar28 - (int)lVar24) * 0x1000 >> 0x10;
  plVar16[9] = (long)puVar28;
  plVar16[10] = (long)puVar28;
  uVar14 = *(uint *)(plVar42 + 0x24);
  uVar32 = uVar14 >> 0x16;
  uVar19 = uVar32;
  if (uVar2 >> 0x16 != 0x3fe) {
    uVar19 = uVar2 >> 0x16;
  }
  if (*(uint *)((long)plVar42 + 0x274) != uVar19) {
    lVar27 = *(long *)(*(long *)(*plVar42 + 0x38) + (ulong)uVar19 * 0xf0);
    plVar42[0x3c] = *(long *)(lVar27 + 0x20);
    lVar24 = *(long *)(lVar27 + 0x60);
    plVar42[0x3f] = *(long *)(lVar27 + 0x68);
    plVar42[0x3e] = lVar24;
    lVar24 = *(long *)(lVar27 + 0x70);
    plVar42[0x41] = *(long *)(lVar27 + 0x78);
    plVar42[0x40] = lVar24;
    lVar24 = *(long *)(lVar27 + 0x80);
    plVar42[0x43] = *(long *)(lVar27 + 0x88);
    plVar42[0x42] = lVar24;
    lVar35 = *(long *)(lVar27 + 0x98);
    lVar24 = *(long *)(lVar27 + 0x90);
    *(uint *)((long)plVar42 + 0x274) = uVar19;
    plVar42[0x45] = lVar35;
    plVar42[0x44] = lVar24;
  }
  if (uVar23 == 0xff800000) {
    lVar35 = plVar42[0x23];
    lVar24 = plVar42[0x22];
    *(uint *)(plVar42 + 0x53) = uVar2;
    plVar42[8] = -1;
    bVar68 = 0;
    *(undefined4 *)(plVar42 + 9) = 4;
    uVar19 = 0xffffffff;
    *(undefined4 *)(plVar42 + 0x2a) = 0xffffffff;
    plVar42[0x2d] = 0;
    plVar42[0x2b] = 0;
    plVar42[0x2c] = 0;
    plVar42[0x11] = lVar35;
    plVar42[0x10] = lVar24;
    plVar42[0x2f] = lVar35;
    plVar42[0x2e] = lVar24;
    plVar42[0xd] = lVar35;
    plVar42[0xc] = lVar24;
    plVar42[0xf] = lVar35;
    plVar42[0xe] = lVar24;
  }
  else {
    lVar35 = plVar42[0x3c];
    uVar25 = (ulong)uVar2 & 0x3fffff;
    iVar29 = *(int *)(lVar35 + 0x60);
    lVar24 = (long)iVar29;
    iVar90 = (int)uVar25;
    iVar20 = iVar90 - *(int *)(lVar35 + 0x30);
    if (iVar90 < *(int *)(lVar35 + 0x30)) {
      if (*(int *)(lVar35 + 0x78) == 0) {
        iVar20 = iVar90;
LAB_031b44f4:
        lVar27 = *(long *)(lVar35 + 0x130) + (long)(iVar20 * iVar29) * 4;
        lVar24 = lVar27 + lVar24 * 4;
        lVar17 = *(long *)(lVar35 + 0xc0);
        goto LAB_031b4520;
      }
      iVar20 = *(int *)(*(long *)(lVar35 + 0x70) + uVar25 * 4);
      if (iVar20 != -1) goto LAB_031b44f4;
      lVar27 = *(long *)(lVar35 + 0x58) + (long)(iVar29 * iVar90) * 4;
      lVar24 = lVar27 + lVar24 * 4;
      piVar39 = (int *)(*(long *)(lVar35 + 0x28) + uVar25 * 0x14);
    }
    else {
      lVar27 = *(long *)(lVar35 + 0x150) + (long)(iVar29 * iVar20) * 4;
      lVar24 = lVar27 + lVar24 * 4;
      lVar17 = *(long *)(lVar35 + 0xe0);
LAB_031b4520:
      piVar39 = (int *)(lVar17 + (long)iVar20 * 0x14);
    }
    iVar20 = *piVar39;
    iVar29 = piVar39[1];
    bVar68 = *(byte *)(piVar39 + 4);
    uVar19 = piVar39[2];
    uVar14 = piVar39[3];
    uVar44 = *(undefined1 *)((long)piVar39 + 0x11);
    uVar3 = *(undefined2 *)((long)piVar39 + 0x12);
    plVar42[10] = lVar27;
    plVar42[0xb] = lVar24;
    if ((bVar68 >> 6 & 1) == 0) {
      if (uVar14 != 0xffffffff) {
        uVar14 = uVar14 & 0x3fffff | *(int *)(lVar35 + 0x17c) << 0x16;
      }
      if (uVar19 != 0xffffffff) {
        uVar19 = uVar19 & 0x3fffff | *(int *)(lVar35 + 0x17c) << 0x16;
      }
    }
    *(int *)(plVar42 + 7) = iVar20;
    *(int *)((long)plVar42 + 0x3c) = iVar29;
    *(uint *)(plVar42 + 8) = uVar19;
    *(uint *)((long)plVar42 + 0x44) = uVar14;
    *(byte *)(plVar42 + 9) = bVar68;
    *(undefined1 *)((long)plVar42 + 0x49) = uVar44;
    *(undefined2 *)((long)plVar42 + 0x4a) = uVar3;
    *(uint *)(plVar42 + 0x53) = uVar2;
    iVar90 = *(int *)(lVar35 + 0x40);
    plVar16 = (long *)(lVar35 + 0x38);
    if (iVar20 < iVar90) {
      iVar128 = 0;
      plVar13 = plVar16;
    }
    else {
      plVar13 = (long *)(lVar35 + 0xf0);
      iVar128 = iVar90;
    }
    puVar28 = (undefined8 *)(*plVar13 + (long)(iVar20 - iVar128) * 0x10);
    fVar66 = (float)puVar28[1];
    uVar34 = *puVar28;
    if (iVar29 < iVar90) {
      iVar90 = 0;
    }
    else {
      plVar16 = (long *)(lVar35 + 0xf0);
    }
    fVar91 = (float)plVar42[0x3f];
    fVar92 = (float)((ulong)plVar42[0x3f] >> 0x20);
    auVar99 = *(undefined1 (*) [16])(plVar42 + 0x40);
    fVar67 = (float)((ulong)uVar34 >> 0x20);
    fVar63 = (float)uVar34;
    fVar64 = (float)plVar42[0x3e];
    fVar65 = (float)((ulong)plVar42[0x3e] >> 0x20);
    auVar115 = *(undefined1 (*) [16])(plVar42 + 0x42);
    auVar132 = *(undefined1 (*) [16])(plVar42 + 0x44);
    puVar28 = (undefined8 *)(*plVar16 + (long)(iVar29 - iVar90) * 0x10);
    uVar93 = puVar28[1];
    uVar34 = *puVar28;
    *(uint *)(plVar42 + 0x2a) = uVar2;
    plVar42[0x2d] = lVar24;
    plVar42[0x2b] = (long)(plVar42 + 7);
    plVar42[0x2c] = lVar27;
    fVar87 = auVar132._0_4_ + auVar115._0_4_ * fVar66 + fVar64 * fVar63 + auVar99._0_4_ * fVar67;
    fVar89 = auVar132._4_4_ + auVar115._4_4_ * fVar66 + fVar65 * fVar63 + auVar99._4_4_ * fVar67;
    auVar138._0_8_ = CONCAT44(fVar89,fVar87);
    auVar138._8_4_ =
         auVar132._8_4_ + auVar115._8_4_ * fVar66 + fVar91 * fVar63 + auVar99._8_4_ * fVar67;
    auVar138._12_4_ =
         auVar132._12_4_ + auVar115._12_4_ * fVar66 + fVar92 * fVar63 + auVar99._12_4_ * fVar67;
    fVar66 = (float)uVar34;
    fVar67 = (float)((ulong)uVar34 >> 0x20);
    fVar88 = (float)uVar93;
    fVar63 = auVar132._0_4_ + auVar115._0_4_ * fVar88 + fVar64 * fVar66 + auVar99._0_4_ * fVar67;
    fVar64 = auVar132._4_4_ + auVar115._4_4_ * fVar88 + fVar65 * fVar66 + auVar99._4_4_ * fVar67;
    fVar65 = auVar132._8_4_ + auVar115._8_4_ * fVar88 + fVar91 * fVar66 + auVar99._8_4_ * fVar67;
    fVar66 = auVar132._12_4_ + auVar115._12_4_ * fVar88 + fVar92 * fVar66 + auVar99._12_4_ * fVar67;
    plVar42[0xd] = auVar138._8_8_;
    plVar42[0xc] = auVar138._0_8_;
    plVar42[0xf] = CONCAT44(fVar66,fVar65);
    plVar42[0xe] = CONCAT44(fVar64,fVar63);
    fVar87 = fVar87 + (fVar63 - fVar87) * 0.5;
    fVar89 = fVar89 + (fVar64 - fVar89) * 0.5;
    uVar44 = (undefined1)((uint)fVar89 >> 8);
    uVar46 = (undefined1)((uint)fVar89 >> 0x10);
    uVar48 = (undefined1)((uint)fVar89 >> 0x18);
    fVar63 = auVar138._8_4_ + (fVar65 - auVar138._8_4_) * 0.5;
    fVar66 = auVar138._12_4_ + (fVar66 - auVar138._12_4_) * 0.5;
    plVar42[0x11] = CONCAT44(fVar66,fVar63);
    plVar42[0x10] =
         CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(SUB41(fVar89,0),fVar87))));
    plVar42[0x2f] = CONCAT44(fVar66,fVar63);
    plVar42[0x2e] =
         CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(SUB41(fVar89,0),fVar87))));
    lVar24 = (long)*(short *)(((long *)plVar42[0x3b])[10] + 0xc);
    if (lVar24 == -1) {
      puVar31 = (undefined4 *)0x0;
      if ((bRam000000000000000e >> 2 & 1) == 0) goto LAB_031b4628;
LAB_031b5c8c:
      plVar42[0x1d] = plVar42[0x23];
      plVar42[0x1c] = plVar42[0x22];
      uVar44 = 0;
      uVar46 = 0;
      uVar48 = 0;
      uVar50 = 0;
    }
    else {
      puVar31 = (undefined4 *)(*(long *)plVar42[0x3b] + lVar24 * 0x10);
      if ((*(byte *)((long)puVar31 + 0xe) >> 2 & 1) != 0) goto LAB_031b5c8c;
LAB_031b4628:
      uVar32 = (uint)puVar31[2] >> 0x16;
      uVar25 = (ulong)(uint)puVar31[2] & 0x3fffff;
      if (uVar32 == 0x3fd) {
        uVar32 = *(uint *)(plVar42[0x26] + uVar25 * 4) >> 0x16;
      }
      if (*(uint *)(plVar42 + 0x4f) == uVar32) {
        lVar24 = plVar42[0x3d];
      }
      else {
        lVar35 = *(long *)(*(long *)(*plVar42 + 0x38) + (ulong)uVar32 * 0xf0);
        lVar24 = *(long *)(lVar35 + 0x20);
        plVar42[0x3d] = lVar24;
        lVar27 = *(long *)(lVar35 + 0x60);
        plVar42[0x47] = *(long *)(lVar35 + 0x68);
        plVar42[0x46] = lVar27;
        lVar27 = *(long *)(lVar35 + 0x70);
        plVar42[0x49] = *(long *)(lVar35 + 0x78);
        plVar42[0x48] = lVar27;
        lVar27 = *(long *)(lVar35 + 0x80);
        plVar42[0x4b] = *(long *)(lVar35 + 0x88);
        plVar42[0x4a] = lVar27;
        lVar27 = *(long *)(lVar35 + 0x98);
        lVar35 = *(long *)(lVar35 + 0x90);
        *(uint *)(plVar42 + 0x4f) = uVar32;
        plVar42[0x4d] = lVar27;
        plVar42[0x4c] = lVar35;
      }
      if ((int)uVar25 < *(int *)(lVar24 + 0x30)) {
        if (*(int *)(lVar24 + 0x78) != 0) {
          uVar32 = *(uint *)(*(long *)(lVar24 + 0x70) + uVar25 * 4);
          if (uVar32 == 0xffffffff) {
            piVar39 = (int *)(*(long *)(lVar24 + 0x28) + uVar25 * 0x14);
            goto LAB_031b467c;
          }
          uVar25 = (ulong)uVar32;
        }
        piVar39 = (int *)(*(long *)(lVar24 + 0xc0) + (long)(int)uVar25 * 0x14);
      }
      else {
        piVar39 = (int *)(*(long *)(lVar24 + 0xe0) +
                         (long)((int)uVar25 - *(int *)(lVar24 + 0x30)) * 0x14);
      }
LAB_031b467c:
      iVar20 = *(int *)(lVar24 + 0x40);
      plVar16 = (long *)(lVar24 + 0x38);
      if (*piVar39 < iVar20) {
        iVar29 = 0;
        plVar13 = plVar16;
      }
      else {
        plVar13 = (long *)(lVar24 + 0xf0);
        iVar29 = iVar20;
      }
      puVar28 = (undefined8 *)(*plVar13 + (long)(*piVar39 - iVar29) * 0x10);
      uVar34 = *puVar28;
      if (piVar39[1] < iVar20) {
        iVar20 = 0;
      }
      else {
        plVar16 = (long *)(lVar24 + 0xf0);
      }
      puVar6 = (undefined8 *)(*plVar16 + (long)(piVar39[1] - iVar20) * 0x10);
      uVar93 = *puVar6;
      auVar99 = *(undefined1 (*) [16])(plVar42 + 0x4a);
      auVar115 = *(undefined1 (*) [16])(plVar42 + 0x4c);
      fVar66 = (float)uVar34;
      fVar63 = (float)((ulong)uVar34 >> 0x20);
      fVar64 = (float)puVar28[1];
      fVar66 = fVar66 + ((float)uVar93 - fVar66) * 0.5;
      fVar63 = fVar63 + ((float)((ulong)uVar93 >> 0x20) - fVar63) * 0.5;
      fVar64 = fVar64 + ((float)puVar6[1] - fVar64) * 0.5;
      fVar67 = auVar115._4_4_ +
               auVar99._4_4_ * fVar64 +
               (float)((ulong)plVar42[0x46] >> 0x20) * fVar66 +
               (float)((ulong)plVar42[0x48] >> 0x20) * fVar63;
      plVar42[0x1d] =
           CONCAT44(auVar115._12_4_ +
                    auVar99._12_4_ * fVar64 +
                    (float)((ulong)plVar42[0x47] >> 0x20) * fVar66 +
                    (float)((ulong)plVar42[0x49] >> 0x20) * fVar63,
                    auVar115._8_4_ +
                    auVar99._8_4_ * fVar64 +
                    (float)plVar42[0x47] * fVar66 + (float)plVar42[0x49] * fVar63);
      plVar42[0x1c] =
           CONCAT17((char)((uint)fVar67 >> 0x18),
                    CONCAT16((char)((uint)fVar67 >> 0x10),
                             CONCAT15((char)((uint)fVar67 >> 8),
                                      CONCAT14(SUB41(fVar67,0),
                                               auVar115._0_4_ +
                                               auVar99._0_4_ * fVar64 +
                                               (float)plVar42[0x46] * fVar66 +
                                               (float)plVar42[0x48] * fVar63))));
      uVar62 = *puVar31;
      uVar44 = (undefined1)uVar62;
      uVar46 = (undefined1)((uint)uVar62 >> 8);
      uVar48 = (undefined1)((uint)uVar62 >> 0x10);
      uVar50 = (undefined1)((uint)uVar62 >> 0x18);
    }
    bVar68 = bVar68 & 0x10;
    uVar32 = uVar14 >> 0x16;
    plVar42[0x1e] =
         CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,CONCAT13(uVar50,CONCAT12(
                                                  uVar48,CONCAT11(uVar46,uVar44)))))));
  }
  if (*(uint *)(plVar42 + 0x4f) == uVar32) {
    lVar27 = plVar42[0x3d];
  }
  else {
    lVar17 = *(long *)(*(long *)(*plVar42 + 0x38) + (ulong)uVar32 * 0xf0);
    lVar27 = *(long *)(lVar17 + 0x20);
    plVar42[0x3d] = lVar27;
    lVar24 = *(long *)(lVar17 + 0x60);
    plVar42[0x47] = *(long *)(lVar17 + 0x68);
    plVar42[0x46] = lVar24;
    lVar24 = *(long *)(lVar17 + 0x70);
    plVar42[0x49] = *(long *)(lVar17 + 0x78);
    plVar42[0x48] = lVar24;
    lVar24 = *(long *)(lVar17 + 0x80);
    plVar42[0x4b] = *(long *)(lVar17 + 0x88);
    plVar42[0x4a] = lVar24;
    lVar35 = *(long *)(lVar17 + 0x98);
    lVar24 = *(long *)(lVar17 + 0x90);
    *(uint *)(plVar42 + 0x4f) = uVar32;
    plVar42[0x4d] = lVar35;
    plVar42[0x4c] = lVar24;
  }
  uVar32 = uVar14 & 0x3fffff;
  uVar21 = uVar32 - *(int *)(lVar27 + 0x20);
  iVar20 = *(int *)(lVar27 + 0x50);
  lVar24 = (long)iVar20;
  if ((int)uVar32 < *(int *)(lVar27 + 0x20)) {
    if (*(int *)(lVar27 + 0x98) == 0) {
      uVar21 = uVar32;
LAB_031b4740:
      lVar35 = *(long *)(lVar27 + 0x120) + (long)(int)(uVar21 * iVar20) * 4;
      lVar24 = lVar35 + lVar24 * 4;
      lVar17 = *(long *)(lVar27 + 0xb0);
      goto LAB_031b476c;
    }
    uVar21 = *(uint *)(*(long *)(lVar27 + 0x90) + (ulong)uVar32 * 4);
    if (uVar21 != 0xffffffff) goto LAB_031b4740;
    lVar35 = *(long *)(lVar27 + 0x48) + (long)(int)(iVar20 * uVar32) * 4;
    lVar24 = lVar35 + lVar24 * 4;
    puVar31 = (undefined4 *)(*(long *)(lVar27 + 0x18) + (ulong)uVar32 * 0x10);
  }
  else {
    lVar35 = *(long *)(lVar27 + 0x140) + (long)(int)(iVar20 * uVar21) * 4;
    lVar24 = lVar35 + lVar24 * 4;
    lVar17 = *(long *)(lVar27 + 0xd0);
LAB_031b476c:
    puVar31 = (undefined4 *)(lVar17 + (long)(int)uVar21 * 0x10);
  }
  *(uint *)(plVar42 + 0x4e) = uVar14;
  plVar16 = plVar42 + 3;
  *(undefined4 *)plVar16 = *puVar31;
  *(undefined4 *)((long)plVar42 + 0x1c) = puVar31[1];
  lVar17 = *(long *)(puVar31 + 2);
  plVar42[5] = lVar35;
  plVar42[6] = lVar24;
  *(uint *)(plVar42 + 0x36) = uVar14;
  plVar42[0x37] = (long)plVar16;
  plVar42[0x38] = lVar35;
  plVar42[4] = lVar17;
  plVar42[0x39] = lVar24;
  if (bVar68 != 0) {
    uVar19 = uVar19 & 0x3fffff;
    uVar25 = (ulong)uVar19;
    if ((int)uVar19 < *(int *)(lVar27 + 0x30)) {
      if ((*(int *)(lVar27 + 0x78) == 0) ||
         (uVar19 = *(uint *)(*(long *)(lVar27 + 0x70) + uVar25 * 4), uVar19 != 0xffffffff)) {
        piVar39 = (int *)(*(long *)(lVar27 + 0xc0) + (long)(int)uVar19 * 0x14);
      }
      else {
        piVar39 = (int *)(*(long *)(lVar27 + 0x28) + uVar25 * 0x14);
      }
    }
    else {
      piVar39 = (int *)(*(long *)(lVar27 + 0xe0) +
                       (long)(int)(uVar19 - *(int *)(lVar27 + 0x30)) * 0x14);
    }
    iVar20 = *(int *)(lVar27 + 0x40);
    plVar13 = (long *)(lVar27 + 0x38);
    if (*piVar39 < iVar20) {
      iVar29 = 0;
      plVar38 = plVar13;
    }
    else {
      plVar38 = (long *)(lVar27 + 0xf0);
      iVar29 = iVar20;
    }
    puVar28 = (undefined8 *)(*plVar38 + (long)(*piVar39 - iVar29) * 0x10);
    fVar66 = (float)puVar28[1];
    uVar34 = *puVar28;
    if (piVar39[1] < iVar20) {
      iVar20 = 0;
    }
    else {
      plVar13 = (long *)(lVar27 + 0xf0);
    }
    puVar28 = (undefined8 *)(*plVar13 + (long)(piVar39[1] - iVar20) * 0x10);
    uVar93 = *puVar28;
    auVar99 = *(undefined1 (*) [16])(plVar42 + 0x4a);
    auVar115 = *(undefined1 (*) [16])(plVar42 + 0x4c);
    fVar63 = (float)uVar34;
    fVar67 = (float)((ulong)uVar34 >> 0x20);
    fVar63 = fVar63 + ((float)uVar93 - fVar63) * 0.5;
    fVar67 = fVar67 + ((float)((ulong)uVar93 >> 0x20) - fVar67) * 0.5;
    fVar66 = fVar66 + ((float)puVar28[1] - fVar66) * 0.5;
    fVar64 = auVar115._0_4_ +
             auVar99._0_4_ * fVar66 + (float)plVar42[0x46] * fVar63 + (float)plVar42[0x48] * fVar67;
    fVar65 = auVar115._4_4_ +
             auVar99._4_4_ * fVar66 +
             (float)((ulong)plVar42[0x46] >> 0x20) * fVar63 +
             (float)((ulong)plVar42[0x48] >> 0x20) * fVar67;
    uVar44 = (undefined1)((uint)fVar65 >> 8);
    uVar46 = (undefined1)((uint)fVar65 >> 0x10);
    uVar48 = (undefined1)((uint)fVar65 >> 0x18);
    fVar87 = auVar115._8_4_ +
             auVar99._8_4_ * fVar66 + (float)plVar42[0x47] * fVar63 + (float)plVar42[0x49] * fVar67;
    fVar66 = auVar115._12_4_ +
             auVar99._12_4_ * fVar66 +
             (float)((ulong)plVar42[0x47] >> 0x20) * fVar63 +
             (float)((ulong)plVar42[0x49] >> 0x20) * fVar67;
    plVar42[0x11] = CONCAT44(fVar66,fVar87);
    plVar42[0x10] =
         CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(SUB41(fVar65,0),fVar64))));
    plVar42[0x2f] = CONCAT44(fVar66,fVar87);
    plVar42[0x2e] =
         CONCAT17(uVar48,CONCAT16(uVar46,CONCAT15(uVar44,CONCAT14(SUB41(fVar65,0),fVar64))));
  }
  fVar66 = *(float *)param_1[0xb];
  iVar20 = ((int)lVar17 >> 0x10) + (int)(short)lVar17 + *(int *)((long)plVar42 + 0x124);
  iVar29 = iVar20 * 4;
  lVar24 = tpidr_el0;
  if (iVar20 == 0) {
    local_d8 = (uint *)0x0;
  }
  else {
    lVar35 = *(long *)(lVar24 + 0x38d490);
    if (lVar35 == 0) {
      lVar35 = FUN_0333d16c(0,1);
      *(long *)(lVar24 + 0x38d490) = lVar35;
    }
    lVar35 = *(long *)(lVar35 + 8);
    uVar25 = (ulong)(int)(iVar29 + 0x7fU & 0xffffff80);
    if (uVar25 <= *(ulong *)(lVar35 + 0x10)) {
      local_d8 = *(uint **)(lVar35 + 0x18);
      uVar25 = (long)local_d8 + uVar25;
      if (uVar25 <= *(ulong *)(lVar35 + 0x20)) {
        *(ulong *)(lVar35 + 0x18) = uVar25;
        goto LAB_031b4824;
      }
    }
    local_d8 = (uint *)FUN_032ce670();
  }
LAB_031b4824:
  __s = &local_c0;
  local_b8 = 0x40;
  local_c8 = (long *)0x8000000200000002;
  local_d0 = __s;
  memset(__s,0,8);
  lVar35 = plVar42[1];
  if (uVar23 == 0xff800000) {
    iVar20 = (int)*(short *)((long)plVar42 + 0x22) + (int)(short)plVar42[4];
    lVar26 = plVar42[0x4e];
    lVar27 = plVar42[5];
    lVar17 = plVar42[6];
    uVar14 = iVar20 + 0x1f >> 5;
    local_b8 = iVar20;
    if ((int)(local_c8._4_4_ & 0x3fffffff) < (int)uVar14) {
      uVar32 = (local_c8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar32) {
        uVar32 = 0x3fffffff;
      }
      uVar19 = uVar14;
      if ((int)uVar14 <= (int)uVar32) {
        uVar19 = uVar32;
      }
      __s = (long **)FUN_032bd1d4(PTR_PTR_0434a080,uVar19,4,__s,(ulong)local_c8 & 0xffffffff,
                                  (long)&local_c8 + 4);
      local_d0 = __s;
    }
    if ((uint)local_c8 != uVar14) {
      local_c8 = (long *)CONCAT44(local_c8._4_4_,uVar14);
    }
    local_94 = uVar14 | 0x80000000;
    local_a0 = __s;
    local_98 = uVar14;
    local_90 = iVar20;
    FUN_0316294c(lVar35,plVar42 + 0x22,(int)lVar26,plVar16,lVar27,lVar17,&local_a0);
  }
  else {
    iVar20 = (int)*(short *)((long)plVar42 + 0x22) + (int)(short)plVar42[4];
    lVar9 = plVar42[0x4e];
    lVar27 = plVar42[10];
    lVar26 = plVar42[0xb];
    lVar17 = plVar42[5];
    lVar1 = plVar42[6];
    uVar14 = iVar20 + 0x1f >> 5;
    lVar10 = plVar42[0x53];
    local_b8 = iVar20;
    if ((int)(local_c8._4_4_ & 0x3fffffff) < (int)uVar14) {
      uVar32 = (local_c8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar32) {
        uVar32 = 0x3fffffff;
      }
      uVar19 = uVar14;
      if ((int)uVar14 <= (int)uVar32) {
        uVar19 = uVar32;
      }
      __s = (long **)FUN_032bd1d4(PTR_PTR_0434a080,uVar19,4,__s,(ulong)local_c8 & 0xffffffff,
                                  (long)&local_c8 + 4);
      local_d0 = __s;
    }
    if ((uint)local_c8 != uVar14) {
      local_c8 = (long *)CONCAT44(local_c8._4_4_,uVar14);
    }
    local_94 = uVar14 | 0x80000000;
    local_a0 = __s;
    local_98 = uVar14;
    local_90 = iVar20;
    FUN_03163c64(lVar35,(int)lVar10,plVar42 + 7,lVar27,lVar26,plVar42 + 0x10,(int)lVar9,plVar16,
                 lVar17,lVar1,&local_a0);
  }
  puVar11 = PTR_PTR_0434a080;
  local_98 = 0;
  if ((-1 < (int)local_94) && (local_a0 != (long **)0x0)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))(PTR_PTR_0434a080,local_a0,local_94 << 2);
  }
  sVar18 = (short)plVar42[4];
  uVar14 = (uint)sVar18;
  sVar5 = *(short *)((long)plVar42 + 0x22);
  iVar20 = (int)sVar5;
  uVar32 = *(uint *)((long)plVar42 + 0x124);
  lVar35 = plVar42[0x4f];
  if (sVar18 < 1) {
    uVar25 = 0;
  }
  else {
    uVar21 = (int)lVar35 << 0x16;
    uVar19 = *(uint *)(plVar42 + 3);
    bVar12 = ((ulong)*local_d0 & 1) != 0;
    if (bVar12) {
      *local_d8 = uVar19 | uVar21;
    }
    uVar25 = (ulong)bVar12;
    if (sVar18 != 1) {
      if ((*(byte *)local_d0 >> 1 & 1) != 0) {
        local_d8[uVar25] = uVar19 + 1 | uVar21;
        uVar25 = (ulong)(bVar12 + 1);
      }
      uVar15 = (uint)sVar18;
      if (uVar15 != 2) {
        if ((*(byte *)local_d0 >> 2 & 1) != 0) {
          local_d8[uVar25] = uVar19 + 2 | uVar21;
          uVar25 = (ulong)((int)uVar25 + 1);
        }
        if (uVar15 != 3) {
          if ((*(byte *)local_d0 >> 3 & 1) != 0) {
            local_d8[uVar25] = uVar19 + 3 | uVar21;
            uVar25 = (ulong)((int)uVar25 + 1);
          }
          if (uVar15 != 4) {
            uVar33 = 4;
            do {
              if ((*(uint *)((long)local_d0 + (ulong)(uVar33 >> 5) * 4) &
                  1 << (ulong)(uVar33 & 0x1f)) != 0) {
                local_d8[(int)uVar25] = uVar19 + uVar33 | uVar21;
                uVar25 = (ulong)((int)uVar25 + 1);
              }
              uVar33 = uVar33 + 1;
            } while (uVar15 != uVar33);
          }
        }
      }
    }
  }
  if (0 < sVar5) {
    uVar19 = *(uint *)((long)plVar42 + 0x1c);
    do {
      if ((1 << (ulong)(uVar14 & 0x1f) & *(uint *)((long)local_d0 + (long)((int)uVar14 >> 5) * 4))
          != 0) {
        local_d8[(int)uVar25] = uVar19 | (int)lVar35 << 0x16;
        uVar25 = (ulong)((int)uVar25 + 1);
      }
      uVar19 = uVar19 + 1;
      uVar14 = uVar14 + 1;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  uVar14 = (uint)uVar25;
  if (0 < (int)uVar32) {
    piVar39 = (int *)plVar42[0x26];
    iVar20 = (int)plVar42[0x4e];
    if (uVar23 == 0xff800000) {
      if ((*piVar39 == iVar20) &&
         (uVar40 = FUN_031605fc(plVar42[1],plVar42 + 0x22,(int)plVar42[0x4e],plVar16,plVar42[5],
                                plVar42[6],plVar42[0x25]), (uVar40 & 1) != 0)) {
        local_d8[(int)uVar14] = 0xff400000;
        uVar14 = uVar14 + 1;
        uVar25 = (ulong)uVar14;
      }
      if (uVar32 != 1) {
        uVar40 = 1;
        lVar35 = 0x10;
        do {
          if ((piVar39[uVar40] == iVar20) &&
             (uVar36 = FUN_031605fc(plVar42[1],plVar42 + 0x22,(int)plVar42[0x4e],plVar16,plVar42[5],
                                    plVar42[6],plVar42[0x25] + lVar35), (uVar36 & 1) != 0)) {
            local_d8[(int)uVar25] = (uint)uVar40 | 0xff400000;
            uVar25 = (ulong)((int)uVar25 + 1);
          }
          uVar14 = (uint)uVar25;
          uVar40 = uVar40 + 1;
          lVar35 = lVar35 + 0x10;
        } while (uVar32 != uVar40);
      }
    }
    else {
      if ((*piVar39 == iVar20) &&
         (uVar40 = FUN_0316085c(plVar42[1],(int)plVar42[0x53],plVar42 + 7,plVar42[10],plVar42[0xb],
                                plVar42 + 0x10,(int)plVar42[0x4e],plVar16,plVar42[5],plVar42[6],
                                plVar42[0x25]), (uVar40 & 1) != 0)) {
        local_d8[(int)uVar14] = 0xff400000;
        uVar14 = uVar14 + 1;
        uVar25 = (ulong)uVar14;
      }
      if (uVar32 != 1) {
        uVar40 = 1;
        lVar35 = 0x10;
        do {
          if ((piVar39[uVar40] == iVar20) &&
             (uVar36 = FUN_0316085c(plVar42[1],(int)plVar42[0x53],plVar42 + 7,plVar42[10],
                                    plVar42[0xb],plVar42 + 0x10,(int)plVar42[0x4e],plVar16,
                                    plVar42[5],plVar42[6],plVar42[0x25] + lVar35), (uVar36 & 1) != 0
             )) {
            local_d8[(int)uVar25] = (uint)uVar40 | 0xff400000;
            uVar25 = (ulong)((int)uVar25 + 1);
          }
          uVar14 = (uint)uVar25;
          uVar40 = uVar40 + 1;
          lVar35 = lVar35 + 0x10;
        } while (uVar32 != uVar40);
      }
    }
  }
  uVar25 = (ulong)local_c8;
  uVar32 = local_c8._4_4_;
  local_c8 = (long *)((ulong)local_c8._4_4_ << 0x20);
  if ((-1 < (long)uVar25) && (local_d0 != (long **)0x0)) {
    (**(code **)(*(long *)puVar11 + 0x18))(puVar11,local_d0,uVar32 << 2);
  }
  if ((int)uVar14 < 1) {
LAB_031b51b0:
    *(ushort *)(param_1[0xc] + 0xe) = *(ushort *)(param_1[0xc] + 0xe) & 0xfffc | 2;
    lVar35 = *(long *)(lVar24 + 0x38d490);
    if (lVar35 == 0) {
      lVar35 = FUN_0333d16c(0,1);
      *(long *)(lVar24 + 0x38d490) = lVar35;
    }
    lVar24 = *(long *)(lVar35 + 8);
    uVar23 = (ulong)(int)(iVar29 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar24 + 0x10) < uVar23) ||
        (*(long *)(lVar24 + 0x18) != (long)local_d8 + uVar23)) ||
       (*(uint **)(lVar24 + 0x28) == local_d8)) {
      if (local_d8 != (uint *)0x0) {
        if (*(ulong *)(lVar24 + 0x10) < uVar23) {
          *(int *)(*(long *)(lVar24 + 8) + 0x20) = *(int *)(*(long *)(lVar24 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar24 + 0x40) + 0x18))(*(long **)(lVar24 + 0x40),local_d8);
        }
        else if (*(long *)(lVar24 + 0x18) == (long)local_d8 + uVar23) {
          *(uint **)(lVar24 + 0x18) = local_d8;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar24,local_d8);
        }
      }
    }
    else {
      *(uint **)(lVar24 + 0x18) = local_d8;
    }
LAB_031b5224:
    *(uint *)(param_1 + 0x58) = uVar2;
    sVar18 = *(short *)(param_1[4] + uVar37 * 2);
    if (-1 < sVar18) {
      do {
        if (*(uint *)(param_1[2] + (long)sVar18 * 0x10 + 8) == uVar2) {
          bVar68 = *(byte *)(param_1[2] + (long)sVar18 * 0x10 + 0xe);
          goto joined_r0x031b5254;
        }
        sVar18 = *(short *)(param_1[3] + (long)sVar18 * 2);
      } while (-1 < sVar18);
    }
    bVar68 = *(byte *)((long)param_1 + 0x3e);
joined_r0x031b5254:
    if ((bVar68 >> 3 & 1) == 0) {
      if (*(int *)(param_1 + 0xf) < *(int *)((long)param_1 + 0x7c)) {
        iVar20 = 3;
        if (*(int *)((long)param_1 + 0x2c) < *(int *)(param_1 + 5)) {
          iVar20 = (uint)(*(int *)(param_1 + 0xf) == 0) << 1;
        }
      }
      else {
        iVar20 = 3;
      }
    }
    else {
      *(uint *)((long)param_1 + 0x2c4) = uVar2 & 0x3fffff;
      iVar20 = 1;
    }
    return iVar20;
  }
  uVar34 = NEON_fmov(0x3f800000,4);
  uVar25 = CONCAT44(fVar66,fVar66);
  puVar22 = local_d8;
LAB_031b4b0c:
  if (*(int *)(param_1 + 5) <= *(int *)((long)param_1 + 0x2c)) goto LAB_031b51b0;
  uVar32 = *puVar22;
  uVar43 = (ulong)uVar32;
  uVar40 = uVar43 & 0xffc00000;
  uVar36 = uVar43 & 0x3fffff;
  if (uVar40 != 0xff400000) {
    lVar27 = plVar42[0x3d];
    iVar90 = *(int *)(lVar27 + 0x60);
    lVar35 = (long)iVar90;
    iVar128 = (int)uVar36;
    iVar20 = iVar128 - *(int *)(lVar27 + 0x30);
    if (iVar128 < *(int *)(lVar27 + 0x30)) {
      if (*(int *)(lVar27 + 0x78) == 0) {
        iVar20 = iVar128;
LAB_031b4b58:
        lVar17 = *(long *)(lVar27 + 0x130) + (long)(iVar20 * iVar90) * 4;
        lVar35 = lVar17 + lVar35 * 4;
        lVar26 = *(long *)(lVar27 + 0xc0);
        goto LAB_031b4b84;
      }
      iVar20 = *(int *)(*(long *)(lVar27 + 0x70) + uVar36 * 4);
      if (iVar20 != -1) goto LAB_031b4b58;
      lVar17 = *(long *)(lVar27 + 0x58) + (long)(iVar90 * iVar128) * 4;
      lVar35 = lVar17 + lVar35 * 4;
      piVar39 = (int *)(*(long *)(lVar27 + 0x28) + uVar36 * 0x14);
    }
    else {
      lVar17 = *(long *)(lVar27 + 0x150) + (long)(iVar90 * iVar20) * 4;
      lVar35 = lVar17 + lVar35 * 4;
      lVar26 = *(long *)(lVar27 + 0xe0);
LAB_031b4b84:
      piVar39 = (int *)(lVar26 + (long)iVar20 * 0x14);
    }
    uVar21 = piVar39[2];
    uVar19 = piVar39[3];
    iVar20 = *piVar39;
    iVar90 = piVar39[1];
    bVar68 = *(byte *)(piVar39 + 4);
    uVar44 = *(undefined1 *)((long)piVar39 + 0x11);
    uVar4 = *(ushort *)((long)piVar39 + 0x12);
    if ((uVar21 != 0xffffffff) && ((bVar68 >> 5 & 1) == 0)) {
      if ((bVar68 >> 6 & 1) == 0) {
        if (uVar19 != 0xffffffff) {
          uVar19 = uVar19 & 0x3fffff | *(int *)(lVar27 + 0x17c) << 0x16;
        }
        uVar21 = *(int *)(lVar27 + 0x17c) << 0x16 | uVar21 & 0x3fffff;
      }
      iVar128 = *(int *)(lVar27 + 0x40);
      fVar63 = (float)plVar42[0x47];
      fVar67 = (float)((ulong)plVar42[0x47] >> 0x20);
      plVar16 = (long *)(lVar27 + 0x38);
      if (iVar128 <= iVar20) {
        plVar16 = (long *)(lVar27 + 0xf0);
      }
      iVar129 = 0;
      if (iVar128 <= iVar20) {
        iVar129 = iVar128;
      }
      puVar28 = (undefined8 *)(*plVar16 + (long)(iVar20 - iVar129) * 0x10);
      fVar64 = (float)puVar28[1];
      uVar93 = *puVar28;
      plVar16 = (long *)(lVar27 + 0x38);
      if (iVar128 <= iVar90) {
        plVar16 = (long *)(lVar27 + 0xf0);
      }
      iVar129 = 0;
      if (iVar128 <= iVar90) {
        iVar129 = iVar128;
      }
      puVar28 = (undefined8 *)(*plVar16 + (long)(iVar90 - iVar129) * 0x10);
      uVar126 = *puVar28;
      fVar65 = (float)uVar93;
      fVar91 = (float)plVar42[0x46];
      fVar92 = (float)((ulong)plVar42[0x46] >> 0x20);
      fVar87 = (float)((ulong)uVar93 >> 0x20);
      fVar98 = (float)uVar126;
      fVar85 = (float)((ulong)uVar126 >> 0x20);
      auVar99 = *(undefined1 (*) [16])(plVar42 + 0x4a);
      auVar115 = *(undefined1 (*) [16])(plVar42 + 0x4c);
      fVar86 = (float)puVar28[1];
      fVar89 = auVar115._0_4_ +
               auVar99._0_4_ * fVar64 + fVar91 * fVar65 + *(float *)(plVar42 + 0x48) * fVar87;
      fVar88 = auVar115._4_4_ +
               auVar99._4_4_ * fVar64 + fVar92 * fVar65 + *(float *)((long)plVar42 + 0x244) * fVar87
      ;
      fVar61 = auVar115._8_4_ +
               auVar99._8_4_ * fVar64 + fVar63 * fVar65 + *(float *)(plVar42 + 0x49) * fVar87;
      fVar64 = auVar115._12_4_ +
               auVar99._12_4_ * fVar64 +
               fVar67 * fVar65 + *(float *)((long)plVar42 + 0x24c) * fVar87;
      fVar65 = auVar115._0_4_ +
               auVar99._0_4_ * fVar86 + fVar91 * fVar98 + *(float *)(plVar42 + 0x48) * fVar85;
      fVar87 = auVar115._4_4_ +
               auVar99._4_4_ * fVar86 + fVar92 * fVar98 + *(float *)((long)plVar42 + 0x244) * fVar85
      ;
      fVar63 = auVar115._8_4_ +
               auVar99._8_4_ * fVar86 + fVar63 * fVar98 + *(float *)(plVar42 + 0x49) * fVar85;
      fVar67 = auVar115._12_4_ +
               auVar99._12_4_ * fVar86 +
               fVar67 * fVar98 + *(float *)((long)plVar42 + 0x24c) * fVar85;
      plVar42[0x17] = CONCAT44(fVar64,fVar61);
      plVar42[0x16] =
           CONCAT17((char)((uint)fVar88 >> 0x18),
                    CONCAT16((char)((uint)fVar88 >> 0x10),
                             CONCAT15((char)((uint)fVar88 >> 8),CONCAT14(SUB41(fVar88,0),fVar89))));
      plVar42[0x19] = CONCAT44(fVar67,fVar63);
      plVar42[0x18] = CONCAT44(fVar87,fVar65);
      fVar88 = fVar88 + (fVar87 - fVar88) * 0.5;
      plVar42[0x1b] = CONCAT44(fVar64 + (fVar67 - fVar64) * 0.5,fVar61 + (fVar63 - fVar61) * 0.5);
      plVar42[0x1a] =
           CONCAT17((char)((uint)fVar88 >> 0x18),
                    CONCAT16((char)((uint)fVar88 >> 0x10),
                             CONCAT15((char)((uint)fVar88 >> 8),
                                      CONCAT14(SUB41(fVar88,0),fVar89 + (fVar65 - fVar89) * 0.5))));
    }
    lVar26 = plVar42[0x1b];
    fVar63 = (float)lVar26;
    fVar67 = (float)((ulong)lVar26 >> 0x20);
    lVar27 = plVar42[0x1a];
    uVar46 = (undefined1)lVar27;
    uVar48 = (undefined1)((ulong)lVar27 >> 8);
    uVar50 = (undefined1)((ulong)lVar27 >> 0x10);
    uVar51 = (undefined1)((ulong)lVar27 >> 0x18);
    uVar53 = (undefined1)((ulong)lVar27 >> 0x20);
    uVar55 = (undefined1)((ulong)lVar27 >> 0x28);
    uVar57 = (undefined1)((ulong)lVar27 >> 0x30);
    uVar59 = (undefined1)((ulong)lVar27 >> 0x38);
    *(uint *)((long)plVar42 + 0x29c) = uVar32;
    *(int *)(plVar42 + 0x12) = iVar20;
    *(int *)((long)plVar42 + 0x94) = iVar90;
    *(uint *)(plVar42 + 0x13) = uVar21;
    *(uint *)((long)plVar42 + 0x9c) = uVar19;
    *(byte *)(plVar42 + 0x14) = bVar68;
    *(undefined1 *)((long)plVar42 + 0xa1) = uVar44;
    *(ushort *)((long)plVar42 + 0xa2) = uVar4;
    *(uint *)(plVar42 + 0x30) = uVar32;
    plVar42[0x33] = lVar35;
    plVar42[0x31] = (long)(plVar42 + 0x12);
    plVar42[0x32] = lVar17;
    plVar42[0x35] = lVar26;
    plVar42[0x34] = lVar27;
    if (((bVar68 >> 5 & 1) == 0) && (uVar21 != 0xffffffff)) goto joined_r0x031b56c0;
    goto LAB_031b5150;
  }
  plVar42[0x13] = -1;
  bVar68 = 0;
  *(uint *)((long)plVar42 + 0x29c) = uVar32;
  uVar4 = 0;
  *(undefined4 *)(plVar42 + 0x14) = 4;
  plVar16 = (long *)(plVar42[0x25] + uVar36 * 0x10);
  lVar27 = plVar16[1];
  fVar63 = (float)lVar27;
  fVar67 = (float)((ulong)lVar27 >> 0x20);
  lVar35 = *plVar16;
  uVar46 = (undefined1)lVar35;
  uVar48 = (undefined1)((ulong)lVar35 >> 8);
  uVar50 = (undefined1)((ulong)lVar35 >> 0x10);
  uVar51 = (undefined1)((ulong)lVar35 >> 0x18);
  uVar53 = (undefined1)((ulong)lVar35 >> 0x20);
  uVar55 = (undefined1)((ulong)lVar35 >> 0x28);
  uVar57 = (undefined1)((ulong)lVar35 >> 0x30);
  uVar59 = (undefined1)((ulong)lVar35 >> 0x38);
  *(undefined4 *)(plVar42 + 0x30) = 0xffffffff;
  plVar42[0x17] = lVar27;
  plVar42[0x16] = lVar35;
  plVar42[0x19] = lVar27;
  plVar42[0x18] = lVar35;
  plVar42[0x1b] = lVar27;
  plVar42[0x1a] = lVar35;
  plVar42[0x31] = 0;
  plVar42[0x32] = 0;
  plVar42[0x33] = 0;
  plVar42[0x35] = lVar27;
  plVar42[0x34] = lVar35;
joined_r0x031b56c0:
  if ((uVar2 != uVar32) && (*(uint *)(plVar42 + 8) != uVar32)) {
    uVar19 = *(uint *)((long)plVar42 + 0x27c);
    if ((uVar19 & 3) != 0) {
      auVar99 = *(undefined1 (*) [16])(plVar42 + 0xc);
      fVar64 = (float)plVar42[0xf];
      fVar65 = (float)((ulong)plVar42[0xf] >> 0x20);
      lVar35 = plVar42[0xe];
      uVar44 = (undefined1)lVar35;
      uVar70 = (undefined1)((ulong)lVar35 >> 8);
      uVar72 = (undefined1)((ulong)lVar35 >> 0x10);
      uVar74 = (undefined1)((ulong)lVar35 >> 0x18);
      uVar76 = (undefined1)((ulong)lVar35 >> 0x20);
      uVar78 = (undefined1)((ulong)lVar35 >> 0x28);
      uVar80 = (undefined1)((ulong)lVar35 >> 0x30);
      uVar82 = (undefined1)((ulong)lVar35 >> 0x38);
      lVar17 = plVar42[0x23];
      lVar27 = plVar42[0x22];
      if ((uVar19 >> 4 & 1) != 0) {
        fVar89 = *(float *)(plVar42 + 0x20);
        fVar88 = *(float *)((long)plVar42 + 0x104);
        fVar91 = *(float *)(plVar42 + 0x21);
        fVar92 = *(float *)((long)plVar42 + 0x10c);
        fVar86 = (float)lVar27 * fVar89;
        fVar87 = (float)((ulong)lVar27 >> 0x20);
        fVar104 = fVar87 * fVar88;
        fVar109 = (float)lVar17 * fVar91;
        fVar110 = auVar99._0_4_ * fVar89;
        fVar61 = auVar99._4_4_;
        fVar111 = fVar61 * fVar88;
        fVar98 = auVar99._8_4_;
        fVar125 = fVar98 * fVar91;
        fVar85 = auVar99._12_4_;
        fVar101 = fVar86 + fVar104 + fVar109;
        fVar109 = fVar86 + fVar104 + fVar109;
        fVar104 = fVar110 + fVar111 + fVar125;
        fVar125 = fVar110 + fVar111 + fVar125;
        lVar27 = CONCAT44(fVar87 - fVar88 * fVar109,(float)lVar27 - fVar89 * fVar101);
        lVar17 = CONCAT44((float)((ulong)lVar17 >> 0x20) - fVar92 * fVar109,
                          (float)lVar17 - fVar91 * fVar101);
        fVar86 = (float)lVar35 * fVar89;
        fVar87 = (float)((ulong)lVar35 >> 0x20);
        fVar101 = fVar87 * fVar88;
        auVar99._0_4_ = auVar99._0_4_ - fVar89 * fVar104;
        auVar99._4_4_ = fVar61 - fVar88 * fVar125;
        auVar99._8_4_ = fVar98 - fVar91 * fVar104;
        auVar99._12_4_ = fVar85 - fVar92 * fVar125;
        fVar61 = fVar64 * fVar91 + fVar86 + fVar101;
        fVar98 = fVar64 * fVar91 + fVar86 + fVar101;
        fVar89 = (float)lVar35 - fVar89 * fVar61;
        uVar44 = SUB41(fVar89,0);
        uVar70 = (undefined1)((uint)fVar89 >> 8);
        uVar72 = (undefined1)((uint)fVar89 >> 0x10);
        uVar74 = (undefined1)((uint)fVar89 >> 0x18);
        fVar87 = fVar87 - fVar88 * fVar98;
        uVar76 = SUB41(fVar87,0);
        uVar78 = (undefined1)((uint)fVar87 >> 8);
        uVar80 = (undefined1)((uint)fVar87 >> 0x10);
        uVar82 = (undefined1)((uint)fVar87 >> 0x18);
        fVar64 = fVar64 - fVar91 * fVar61;
        fVar65 = fVar65 - fVar92 * fVar98;
      }
      fVar92 = auVar99._0_4_;
      fVar61 = auVar99._4_4_;
      fVar98 = auVar99._8_4_;
      fVar85 = auVar99._12_4_;
      fVar87 = (float)lVar27;
      fVar89 = (float)((ulong)lVar27 >> 0x20);
      fVar88 = (float)lVar17;
      fVar91 = (float)((ulong)lVar17 >> 0x20);
      if ((uVar19 & 1) != 0) {
        fVar86 = fVar92 - (float)CONCAT13(uVar74,CONCAT12(uVar72,CONCAT11(uVar70,uVar44)));
        fVar101 = fVar61 - (float)CONCAT13(uVar82,CONCAT12(uVar80,CONCAT11(uVar78,uVar76)));
        fVar104 = fVar98 - fVar64;
        fVar109 = fVar86 * (fVar92 - fVar87);
        fVar110 = fVar101 * (fVar61 - fVar89);
        fVar111 = fVar104 * (fVar98 - fVar88);
        uVar93 = CONCAT44(fVar104 * fVar104 + fVar86 * fVar86 + fVar101 * fVar101,
                          fVar104 * fVar104 + fVar86 * fVar86 + fVar101 * fVar101);
        uVar126 = NEON_frecpe(uVar93,4);
        uVar130 = NEON_frecps(uVar93,uVar126,4);
        fVar125 = (float)uVar126 * (float)uVar130;
        fVar118 = (float)((ulong)uVar126 >> 0x20) * (float)((ulong)uVar130 >> 0x20);
        uVar93 = NEON_frecps(uVar93,CONCAT44(fVar118,fVar125),4);
        uVar93 = NEON_fminnm(CONCAT44((fVar111 + fVar109 + fVar110) *
                                      fVar118 * (float)((ulong)uVar93 >> 0x20),
                                      (fVar111 + fVar109 + fVar110) * fVar125 * (float)uVar93),
                             uVar34,4);
        uVar93 = NEON_fmax(uVar93,0,4);
        fVar109 = (float)((ulong)uVar93 >> 0x20);
        fVar86 = (fVar92 - fVar87) - fVar86 * (float)uVar93;
        fVar101 = (fVar61 - fVar89) - fVar101 * fVar109;
        fVar104 = (fVar98 - fVar88) - fVar104 * (float)uVar93;
        fVar109 = (fVar85 - fVar91) - (fVar85 - fVar65) * fVar109;
        auVar115._0_4_ = fVar86 * fVar86;
        auVar115._4_4_ = fVar101 * fVar101;
        auVar115._8_4_ = fVar104 * fVar104;
        auVar115._12_4_ = fVar109 * fVar109;
        auVar99 = NEON_ext(auVar115,auVar115,8,1);
        if ((float)plVar42[0x27] * (float)plVar42[0x27] <
            auVar115._0_4_ + auVar115._4_4_ + auVar99._0_4_) goto LAB_031b5150;
      }
      if ((uVar19 >> 1 & 1) != 0) {
        iVar20 = *(int *)((long)plVar42 + 0x124);
        if (iVar20 < 1) {
          lVar35 = 0;
        }
        else {
          fVar86 = (float)CONCAT13(uVar74,CONCAT12(uVar72,CONCAT11(uVar70,uVar44))) - fVar92;
          fVar101 = (float)CONCAT13(uVar82,CONCAT12(uVar80,CONCAT11(uVar78,uVar76))) - fVar61;
          uVar44 = SUB41(fVar101,0);
          uVar70 = (undefined1)((uint)fVar101 >> 8);
          uVar72 = (undefined1)((uint)fVar101 >> 0x10);
          uVar74 = (undefined1)((uint)fVar101 >> 0x18);
          fVar64 = fVar64 - fVar98;
          fVar65 = fVar65 - fVar85;
          fVar92 = fVar92 - fVar87;
          fVar61 = fVar61 - fVar89;
          fVar98 = fVar98 - fVar88;
          fVar85 = fVar85 - fVar91;
          lVar35 = 0;
          auVar95._0_4_ = fVar86 * fVar86;
          auVar95._4_4_ = fVar101 * fVar101;
          auVar95._8_4_ = fVar64 * fVar64;
          auVar95._12_4_ = fVar65 * fVar65;
          auVar132[4] = uVar44;
          auVar132._0_4_ = fVar86;
          auVar132[5] = uVar70;
          auVar132[6] = uVar72;
          auVar132[7] = uVar74;
          auVar132._8_4_ = fVar64;
          auVar132._12_4_ = fVar65;
          auVar8[4] = uVar44;
          auVar8._0_4_ = fVar86;
          auVar8[5] = uVar70;
          auVar8[6] = uVar72;
          auVar8[7] = uVar74;
          auVar8._8_4_ = fVar64;
          auVar8._12_4_ = fVar65;
          auVar115 = NEON_ext(auVar132,auVar8,4,1);
          auVar97._0_4_ = fVar86 * fVar92;
          auVar97._4_4_ = fVar101 * fVar61;
          auVar97._8_4_ = fVar64 * fVar98;
          auVar97._12_4_ = fVar65 * fVar85;
          auVar99 = NEON_ext(auVar95,auVar95,8,1);
          auVar132 = NEON_ext(auVar97,auVar97,8,1);
          fVar104 = auVar99._0_4_ + auVar95._0_4_ + auVar95._4_4_;
          fVar109 = auVar132._0_4_ + auVar97._0_4_ + auVar97._4_4_;
          auVar134._12_4_ = fVar109;
          auVar134._8_4_ = fVar104;
          auVar99 = *(undefined1 (*) [16])(plVar42 + 0x20);
          do {
            pfVar41 = (float *)(plVar42[0x25] + lVar35 * 0x10);
            fVar110 = *pfVar41;
            fVar111 = pfVar41[1];
            fVar125 = pfVar41[2];
            fVar118 = pfVar41[3];
            if ((uVar19 >> 4 & 1) != 0) {
              fVar112 = auVar99._0_4_ * fVar110;
              fVar123 = auVar99._4_4_ * fVar111;
              fVar124 = auVar99._8_4_ * fVar125;
              fVar122 = fVar124 + fVar112 + fVar123;
              fVar124 = fVar124 + fVar112 + fVar123;
              fVar110 = fVar110 - auVar99._0_4_ * fVar122;
              fVar111 = fVar111 - auVar99._4_4_ * fVar124;
              fVar125 = fVar125 - auVar99._8_4_ * fVar122;
              fVar118 = fVar118 - auVar99._12_4_ * fVar124;
            }
            auVar107._0_4_ = fVar110 - fVar87;
            auVar107._4_4_ = fVar111 - fVar89;
            auVar107._8_4_ = fVar125 - fVar88;
            auVar107._12_4_ = fVar118 - fVar91;
            auVar132 = NEON_ext(auVar107,auVar107,4,1);
            fVar110 = (float)(CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(uVar44,fVar86
                                                                                      )))) >> 0x20);
            auVar140._0_4_ = fVar92 * auVar107._0_4_;
            auVar140._4_4_ = fVar61 * auVar107._4_4_;
            auVar140._8_4_ = fVar98 * auVar107._8_4_;
            auVar140._12_4_ = fVar85 * auVar107._12_4_;
            fVar111 = fVar86 * auVar132._0_4_ - auVar115._0_4_ * auVar107._0_4_;
            fVar118 = fVar101 * auVar132._4_4_ - auVar115._4_4_ * auVar107._4_4_;
            auVar117._0_8_ = CONCAT44(fVar118,fVar111);
            auVar117._8_4_ = fVar64 * auVar107._0_4_ - fVar86 * auVar107._8_4_;
            auVar117._12_4_ = fVar65 * auVar107._4_4_ - fVar110 * auVar107._12_4_;
            auVar132 = NEON_ext(auVar117,auVar117,4,1);
            uVar126 = NEON_ext(auVar132._0_8_,auVar117._0_8_,4,1);
            fVar122 = auVar132._0_4_;
            fVar123 = auVar132._4_4_;
            fVar125 = fVar122 * fVar122 + fVar123 * fVar123 + fVar111 * fVar111;
            fVar112 = fVar122 * fVar122 + fVar123 * fVar123 + fVar111 * fVar111;
            uVar93 = CONCAT44(fVar112,fVar125);
            uVar130 = NEON_frecpe(uVar93,4);
            uVar136 = NEON_frecps(uVar93,uVar130,4);
            fVar124 = (float)uVar130 * (float)uVar136;
            fVar135 = (float)((ulong)uVar130 >> 0x20) * (float)((ulong)uVar136 >> 0x20);
            auVar119._0_4_ = auVar115._0_4_ * fVar122 - fVar86 * (float)uVar126;
            auVar119._4_4_ = auVar115._4_4_ * fVar123 - fVar101 * (float)((ulong)uVar126 >> 0x20);
            auVar119._8_4_ = fVar86 * fVar111 - fVar64 * fVar122;
            auVar119._12_4_ = fVar110 * fVar118 - fVar65 * fVar123;
            auVar132 = NEON_ext(auVar119,auVar119,4,1);
            iVar90 = -(uint)(fVar125 == 0.0);
            iVar128 = -(uint)(fVar112 == 0.0);
            auVar139._0_4_ = auVar107._0_4_ * auVar107._0_4_;
            auVar139._4_4_ = auVar107._4_4_ * auVar107._4_4_;
            auVar139._8_4_ = auVar107._8_4_ * auVar107._8_4_;
            auVar139._12_4_ = auVar107._12_4_ * auVar107._12_4_;
            uVar93 = NEON_frecps(uVar93,CONCAT44(fVar135,fVar124),4);
            fVar110 = fVar92 * auVar132._0_4_;
            fVar111 = fVar61 * auVar132._4_4_;
            auVar132 = NEON_ext(auVar139,auVar139,8,1);
            auVar138 = NEON_ext(auVar140,auVar140,8,1);
            auVar134._0_4_ = auVar132._0_4_ + auVar139._0_4_ + auVar139._4_4_;
            auVar134._4_4_ = auVar138._0_4_ + auVar140._0_4_ + auVar140._4_4_;
            uVar114 = CONCAT17(~(byte)((uint)iVar128 >> 0x18),
                               CONCAT16(~(byte)((uint)iVar128 >> 0x10),
                                        CONCAT15(~(byte)((uint)iVar128 >> 8),
                                                 CONCAT14(~(byte)iVar128,
                                                          CONCAT13(~(byte)((uint)iVar90 >> 0x18),
                                                                   CONCAT12(~(byte)((uint)iVar90 >>
                                                                                   0x10),
                                                                            CONCAT11(~(byte)((uint)
                                                  iVar90 >> 8),~(byte)iVar90)))))));
            uVar36 = CONCAT44(fVar135 * (float)((ulong)uVar93 >> 0x20),fVar124 * (float)uVar93) &
                     uVar114;
            auVar132 = NEON_frecpe(auVar134,4);
            uVar93 = NEON_fminnm(CONCAT44((float)(uVar36 >> 0x20) *
                                          (fVar110 + fVar111 + fVar98 * auVar119._0_4_),
                                          (float)uVar36 *
                                          (fVar110 + fVar111 + fVar98 * auVar119._0_4_)),uVar34,4);
            iVar90 = -(uint)(auVar134._0_4_ == 0.0);
            iVar128 = -(uint)(auVar134._4_4_ == 0.0);
            iVar129 = -(uint)(fVar104 == 0.0);
            iVar141 = -(uint)(fVar109 == 0.0);
            uVar36 = NEON_fmax(uVar93,0,4);
            auVar138 = NEON_frecps(auVar134,auVar132,4);
            auVar120._0_4_ = auVar132._0_4_ * auVar138._0_4_;
            auVar120._4_4_ = auVar132._4_4_ * auVar138._4_4_;
            auVar120._8_4_ = auVar132._8_4_ * auVar138._8_4_;
            auVar120._12_4_ = auVar132._12_4_ * auVar138._12_4_;
            auVar132 = NEON_frecps(auVar134,auVar120,4);
            fVar112 = fVar64 * auVar107._8_4_ + fVar86 * auVar107._0_4_ + fVar101 * auVar107._4_4_;
            fVar122 = fVar64 * auVar107._8_4_ + fVar86 * auVar107._0_4_ + fVar101 * auVar107._4_4_;
            fVar110 = auVar120._0_4_ * auVar132._0_4_;
            fVar111 = auVar120._4_4_ * auVar132._4_4_;
            fVar125 = auVar120._8_4_ * auVar132._8_4_;
            fVar118 = auVar120._12_4_ * auVar132._12_4_;
            auVar121._0_4_ =
                 (float)CONCAT13((byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                                 CONCAT12((byte)((uint)fVar110 >> 0x10) &
                                          ~(byte)((uint)iVar90 >> 0x10),
                                          CONCAT11((byte)((uint)fVar110 >> 8) &
                                                   ~(byte)((uint)iVar90 >> 8),
                                                   SUB41(fVar110,0) & ~(byte)iVar90)));
            auVar121[4] = SUB41(fVar111,0) & ~(byte)iVar128;
            auVar121[5] = (byte)((uint)fVar111 >> 8) & ~(byte)((uint)iVar128 >> 8);
            auVar121[6] = (byte)((uint)fVar111 >> 0x10) & ~(byte)((uint)iVar128 >> 0x10);
            auVar121[7] = (byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar128 >> 0x18);
            auVar121[8] = SUB41(fVar125,0) & ~(byte)iVar129;
            auVar121[9] = (byte)((uint)fVar125 >> 8) & ~(byte)((uint)iVar129 >> 8);
            auVar121[10] = (byte)((uint)fVar125 >> 0x10) & ~(byte)((uint)iVar129 >> 0x10);
            auVar121[0xb] = (byte)((uint)fVar125 >> 0x18) & ~(byte)((uint)iVar129 >> 0x18);
            auVar121[0xc] = SUB41(fVar118,0) & ~(byte)iVar141;
            auVar121[0xd] = (byte)((uint)fVar118 >> 8) & ~(byte)((uint)iVar141 >> 8);
            auVar121[0xe] = (byte)((uint)fVar118 >> 0x10) & ~(byte)((uint)iVar141 >> 0x10);
            auVar121[0xf] = (byte)((uint)fVar118 >> 0x18) & ~(byte)((uint)iVar141 >> 0x18);
            auVar132 = NEON_ext(auVar121,auVar121,8,1);
            fVar110 = ((float)uVar36 * fVar112 - fVar109) * auVar132._0_4_;
            fVar111 = ((float)(uVar36 >> 0x20) * fVar122 - fVar109) * auVar132._0_4_;
            uVar93 = NEON_fminnm(CONCAT44(fVar111,fVar110),uVar34,4);
            uVar93 = NEON_fmax(uVar93,0,4);
            fVar123 = (float)uVar93;
            fVar124 = (float)((ulong)uVar93 >> 0x20);
            uVar93 = NEON_fminnm(CONCAT44((auVar134._4_4_ + fVar122 * fVar124) * auVar121._0_4_,
                                          (auVar134._4_4_ + fVar112 * fVar123) * auVar121._0_4_),
                                 uVar34,4);
            uVar113 = NEON_fmax(uVar93,0,4);
            uVar113 = uVar113 ^ (uVar113 ^ uVar36) &
                                CONCAT44(-(uint)(fVar124 == fVar111),-(uint)(fVar123 == fVar110)) &
                                uVar114;
            fVar125 = (float)uVar113;
            fVar118 = (float)(uVar113 >> 0x20);
            fVar110 = fVar86 * fVar123 + (fVar92 - auVar107._0_4_ * fVar125);
            fVar111 = fVar101 * fVar124 + (fVar61 - auVar107._4_4_ * fVar118);
            fVar125 = fVar64 * fVar123 + (fVar98 - auVar107._8_4_ * fVar125);
            fVar118 = fVar65 * fVar124 + (fVar85 - auVar107._12_4_ * fVar118);
            auVar108._0_4_ = fVar110 * fVar110;
            auVar108._4_4_ = fVar111 * fVar111;
            auVar108._8_4_ = fVar125 * fVar125;
            auVar108._12_4_ = fVar118 * fVar118;
            auVar132 = NEON_ext(auVar108,auVar108,8,1);
          } while (((float)plVar42[0x28] * (float)plVar42[0x28] <
                    auVar108._0_4_ + auVar108._4_4_ + auVar132._0_4_) &&
                  (lVar35 = lVar35 + 1, iVar20 != lVar35));
        }
        if ((int)lVar35 == iVar20) goto LAB_031b5150;
      }
    }
    auVar84 = *(undefined1 (*) [16])(plVar42 + 0x10);
    lVar35 = 0;
    if ((bVar68 & 0x10) != 0) {
      lVar35 = (ulong)CONCAT42((uint)uVar4 << 0x10,uVar4) << 0x10;
    }
    fVar64 = auVar84._0_4_ - (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
    fVar87 = auVar84._4_4_ - (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar53)));
    fVar89 = auVar84._8_4_ - fVar63;
    fVar64 = fVar64 * fVar64;
    fVar87 = fVar87 * fVar87;
    fVar89 = fVar89 * fVar89;
    fVar65 = fVar89 + fVar64 + fVar87;
    fVar89 = fVar89 + fVar64 + fVar87;
    uVar44 = SUB41(fVar89,0);
    uVar70 = (undefined1)((uint)fVar89 >> 8);
    uVar72 = (undefined1)((uint)fVar89 >> 0x10);
    uVar74 = (undefined1)((uint)fVar89 >> 0x18);
    uVar93 = NEON_frsqrte(CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(uVar44,fVar65))))
                          ,4);
    fVar64 = (float)uVar93;
    fVar87 = (float)((ulong)uVar93 >> 0x20);
    uVar93 = NEON_frsqrts(CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(uVar44,fVar65))))
                          ,CONCAT44(fVar87 * fVar87,fVar64 * fVar64),4);
    fVar64 = fVar64 * (float)uVar93;
    fVar87 = fVar87 * (float)((ulong)uVar93 >> 0x20);
    uVar93 = NEON_frsqrts(CONCAT17(uVar74,CONCAT16(uVar72,CONCAT15(uVar70,CONCAT14(uVar44,fVar65))))
                          ,CONCAT44(fVar87 * fVar87,fVar64 * fVar64),4);
    iVar20 = -(uint)(fVar65 <= 0.0);
    iVar90 = -(uint)(fVar89 <= 0.0);
    fVar65 = fVar65 * (float)uVar93 * fVar64;
    fVar89 = fVar89 * (float)((ulong)uVar93 >> 0x20) * fVar87;
    bVar68 = SUB41(fVar65,0) & ~(byte)iVar20;
    bVar69 = (byte)((uint)fVar65 >> 8) & ~(byte)((uint)iVar20 >> 8);
    bVar71 = (byte)((uint)fVar65 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
    bVar73 = (byte)((uint)fVar65 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
    bVar75 = SUB41(fVar89,0) & ~(byte)iVar90;
    bVar77 = (byte)((uint)fVar89 >> 8) & ~(byte)((uint)iVar90 >> 8);
    bVar79 = (byte)((uint)fVar89 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
    bVar81 = (byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
    fVar64 = (float)((ulong)lVar35 >> 0x20);
    if (((uVar19 >> 5 & 1) == 0) || ((*(byte *)(plVar42 + 9) & 0x10) != 0 || uVar23 == 0xff800000))
    {
      plVar16 = (long *)plVar42[0x3a];
      uVar36 = uVar25;
      if (plVar16 == (long *)0x0) goto LAB_031b4f78;
LAB_031b56dc:
      bVar45 = 0x11;
      if (uVar23 != 0xff800000) {
        bVar45 = 1;
      }
      plVar42[0x2f] = auVar84._8_8_;
      plVar42[0x2e] = auVar84._0_8_;
      bVar47 = bVar45 | 0x40;
      if (uVar40 != 0xff400000) {
        bVar47 = bVar45;
      }
      fVar64 = (float)CONCAT13(bVar81,CONCAT12(bVar79,CONCAT11(bVar77,bVar75))) + fVar64;
      local_c0 = plVar42 + 0x2a;
      local_c8 = plVar42 + 2;
      if (uVar40 != 0xff400000 && uVar23 != 0xff800000) {
        bVar47 = bVar47 | 0x20;
      }
      local_d0 = (long **)*plVar42;
      local_b8 = CONCAT31(local_b8._1_3_,bVar47);
      uStack_a8 = CONCAT17((char)((uint)fVar64 >> 0x18),
                           CONCAT16((char)((uint)fVar64 >> 0x10),
                                    CONCAT15((char)((uint)fVar64 >> 8),
                                             CONCAT14(SUB41(fVar64,0),
                                                      (float)CONCAT13(bVar73,CONCAT12(bVar71,
                                                  CONCAT11(bVar69,bVar68))) + (float)lVar35))));
      local_b0 = uVar36;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_d0);
      fVar63 = (float)uVar36 +
               (float)CONCAT13(extraout_var_04,
                               CONCAT12(extraout_var_02,CONCAT11(extraout_var_00,extraout_b0_00)));
      uVar44 = SUB41(fVar63,0);
      uVar46 = (undefined1)((uint)fVar63 >> 8);
      uVar48 = (undefined1)((uint)fVar63 >> 0x10);
      uVar50 = (undefined1)((uint)fVar63 >> 0x18);
      fVar63 = (float)(uVar36 >> 0x20) +
               (float)CONCAT13(extraout_var_08,
                               CONCAT12(extraout_var_07,CONCAT11(extraout_var_06,extraout_var_05)));
      uVar51 = SUB41(fVar63,0);
      uVar53 = (undefined1)((uint)fVar63 >> 8);
      uVar55 = (undefined1)((uint)fVar63 >> 0x10);
      uVar57 = (undefined1)((uint)fVar63 >> 0x18);
    }
    else {
      fVar65 = *(float *)(plVar42 + 0xc);
      fVar87 = *(float *)((long)plVar42 + 100);
      fVar89 = *(float *)(plVar42 + 0xd);
      fVar88 = *(float *)((long)plVar42 + 0x6c);
      auVar96._0_4_ = *(float *)(plVar42 + 0xe) - fVar65;
      auVar96._4_4_ = *(float *)((long)plVar42 + 0x74) - fVar87;
      auVar96._8_4_ = *(float *)(plVar42 + 0xf) - fVar89;
      auVar96._12_4_ = *(float *)((long)plVar42 + 0x7c) - fVar88;
      fVar91 = *(float *)(plVar42 + 0x1c);
      fVar92 = *(float *)((long)plVar42 + 0xe4);
      fVar61 = *(float *)(plVar42 + 0x1d);
      auVar102._0_4_ = (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar48,uVar46))) - fVar91;
      auVar102._4_4_ = (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar53))) - fVar92;
      auVar102._8_4_ = fVar63 - fVar61;
      auVar102._12_4_ = fVar67 - *(float *)((long)plVar42 + 0xec);
      auVar115 = NEON_ext(auVar102,auVar102,4,1);
      auVar99 = NEON_ext(auVar96,auVar96,4,1);
      fVar104 = fVar91 - fVar65;
      fVar109 = fVar92 - fVar87;
      fVar110 = fVar61 - fVar89;
      fVar111 = *(float *)((long)plVar42 + 0xec) - fVar88;
      fVar67 = auVar84._0_4_ - fVar91;
      fVar85 = auVar84._4_4_ - fVar92;
      fVar86 = auVar84._8_4_ - fVar61;
      fVar67 = fVar67 * fVar67;
      fVar85 = fVar85 * fVar85;
      fVar86 = fVar86 * fVar86;
      fVar98 = auVar102._0_4_ * auVar99._0_4_ - auVar96._0_4_ * auVar115._0_4_;
      fVar101 = auVar102._4_4_ * auVar99._4_4_ - auVar96._4_4_ * auVar115._4_4_;
      auVar100._0_8_ = CONCAT44(fVar101,fVar98);
      auVar100._8_4_ = auVar102._8_4_ * auVar96._0_4_ - auVar96._8_4_ * auVar102._0_4_;
      auVar100._12_4_ = auVar102._12_4_ * auVar96._4_4_ - auVar96._12_4_ * auVar102._4_4_;
      auVar99 = NEON_ext(auVar100,auVar100,4,1);
      uVar126 = NEON_ext(auVar99._0_8_,auVar100._0_8_,4,1);
      fVar125 = auVar99._0_4_;
      fVar112 = auVar99._4_4_;
      fVar123 = fVar125 * fVar125 + fVar112 * fVar112 + fVar98 * fVar98;
      fVar124 = fVar125 * fVar125 + fVar112 * fVar112 + fVar98 * fVar98;
      uVar93 = CONCAT44(fVar124,fVar123);
      uVar130 = NEON_frecpe(uVar93,4);
      uVar136 = NEON_frecps(uVar93,uVar130,4);
      fVar118 = (float)uVar130 * (float)uVar136;
      fVar122 = (float)((ulong)uVar130 >> 0x20) * (float)((ulong)uVar136 >> 0x20);
      auVar116._0_4_ = auVar115._0_4_ * fVar125 - auVar102._0_4_ * (float)uVar126;
      auVar116._4_4_ = auVar115._4_4_ * fVar112 - auVar102._4_4_ * (float)((ulong)uVar126 >> 0x20);
      auVar116._8_4_ = auVar102._0_4_ * fVar98 - auVar102._8_4_ * fVar125;
      auVar116._12_4_ = auVar102._4_4_ * fVar101 - auVar102._12_4_ * fVar112;
      auVar99 = NEON_ext(auVar116,auVar116,4,1);
      iVar20 = -(uint)(fVar123 == 0.0);
      iVar90 = -(uint)(fVar124 == 0.0);
      uVar93 = NEON_frecps(uVar93,CONCAT44(fVar122,fVar118),4);
      uVar36 = CONCAT17(~(byte)((uint)iVar90 >> 0x18),
                        CONCAT16(~(byte)((uint)iVar90 >> 0x10),
                                 CONCAT15(~(byte)((uint)iVar90 >> 8),
                                          CONCAT14(~(byte)iVar90,
                                                   CONCAT13(~(byte)((uint)iVar20 >> 0x18),
                                                            CONCAT12(~(byte)((uint)iVar20 >> 0x10),
                                                                     CONCAT11(~(byte)((uint)iVar20
                                                                                     >> 8),
                                                                              ~(byte)iVar20)))))));
      fVar98 = fVar104 * auVar99._0_4_;
      fVar101 = fVar109 * auVar99._4_4_;
      auVar131._0_4_ = auVar96._0_4_ * auVar96._0_4_;
      auVar131._4_4_ = auVar96._4_4_ * auVar96._4_4_;
      auVar131._8_4_ = auVar96._8_4_ * auVar96._8_4_;
      auVar131._12_4_ = auVar96._12_4_ * auVar96._12_4_;
      auVar137._0_4_ = auVar96._0_4_ * fVar104;
      auVar137._4_4_ = auVar96._4_4_ * fVar109;
      auVar137._8_4_ = auVar96._8_4_ * fVar110;
      auVar137._12_4_ = auVar96._12_4_ * fVar111;
      uVar113 = CONCAT44(fVar122 * (float)((ulong)uVar93 >> 0x20),fVar118 * (float)uVar93) & uVar36;
      auVar127._0_4_ = auVar102._0_4_ * auVar102._0_4_;
      auVar127._4_4_ = auVar102._4_4_ * auVar102._4_4_;
      auVar127._8_4_ = auVar102._8_4_ * auVar102._8_4_;
      auVar127._12_4_ = auVar102._12_4_ * auVar102._12_4_;
      auVar103._0_4_ = auVar102._0_4_ * fVar104;
      auVar103._4_4_ = auVar102._4_4_ * fVar109;
      auVar103._8_4_ = auVar102._8_4_ * fVar110;
      auVar103._12_4_ = auVar102._12_4_ * fVar111;
      auVar132 = NEON_ext(auVar131,auVar131,8,1);
      auVar138 = NEON_ext(auVar137,auVar137,8,1);
      auVar115 = NEON_ext(auVar127,auVar127,8,1);
      auVar99 = NEON_ext(auVar103,auVar103,8,1);
      uVar93 = NEON_fminnm(CONCAT44((float)(uVar113 >> 0x20) *
                                    (fVar98 + fVar101 + fVar110 * auVar116._0_4_),
                                    (float)uVar113 * (fVar98 + fVar101 + fVar110 * auVar116._0_4_)),
                           uVar34,4);
      auVar105._0_4_ = auVar132._0_4_ + auVar131._0_4_ + auVar131._4_4_;
      auVar105._4_4_ = auVar138._0_4_ + auVar137._0_4_ + auVar137._4_4_;
      fVar98 = auVar115._0_4_ + auVar127._0_4_ + auVar127._4_4_;
      fVar104 = auVar99._0_4_ + auVar103._0_4_ + auVar103._4_4_;
      auVar105._12_4_ = fVar104;
      auVar105._8_4_ = fVar98;
      auVar99 = NEON_frecpe(auVar105,4);
      iVar20 = -(uint)(auVar105._0_4_ == 0.0);
      iVar90 = -(uint)(auVar105._4_4_ == 0.0);
      iVar128 = -(uint)(fVar98 == 0.0);
      iVar129 = -(uint)(fVar104 == 0.0);
      uVar114 = NEON_fmax(uVar93,0,4);
      auVar115 = NEON_frecps(auVar105,auVar99,4);
      fVar111 = auVar96._8_4_ * auVar102._8_4_ +
                auVar96._0_4_ * auVar102._0_4_ + auVar96._4_4_ * auVar102._4_4_;
      fVar125 = auVar96._8_4_ * auVar102._8_4_ +
                auVar96._0_4_ * auVar102._0_4_ + auVar96._4_4_ * auVar102._4_4_;
      auVar133._0_4_ = auVar99._0_4_ * auVar115._0_4_;
      auVar133._4_4_ = auVar99._4_4_ * auVar115._4_4_;
      auVar133._8_4_ = auVar99._8_4_ * auVar115._8_4_;
      auVar133._12_4_ = auVar99._12_4_ * auVar115._12_4_;
      auVar99 = NEON_frecps(auVar105,auVar133,4);
      fVar98 = auVar133._0_4_ * auVar99._0_4_;
      fVar101 = auVar133._4_4_ * auVar99._4_4_;
      fVar109 = auVar133._8_4_ * auVar99._8_4_;
      fVar110 = auVar133._12_4_ * auVar99._12_4_;
      auVar106._0_4_ =
           (float)CONCAT13((byte)((uint)fVar98 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                           CONCAT12((byte)((uint)fVar98 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                                    CONCAT11((byte)((uint)fVar98 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                             SUB41(fVar98,0) & ~(byte)iVar20)));
      auVar106[4] = SUB41(fVar101,0) & ~(byte)iVar90;
      auVar106[5] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar90 >> 8);
      auVar106[6] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
      auVar106[7] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
      auVar106[8] = SUB41(fVar109,0) & ~(byte)iVar128;
      auVar106[9] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar128 >> 8);
      auVar106[10] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar128 >> 0x10);
      auVar106[0xb] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar128 >> 0x18);
      auVar106[0xc] = SUB41(fVar110,0) & ~(byte)iVar129;
      auVar106[0xd] = (byte)((uint)fVar110 >> 8) & ~(byte)((uint)iVar129 >> 8);
      auVar106[0xe] = (byte)((uint)fVar110 >> 0x10) & ~(byte)((uint)iVar129 >> 0x10);
      auVar106[0xf] = (byte)((uint)fVar110 >> 0x18) & ~(byte)((uint)iVar129 >> 0x18);
      auVar99 = NEON_ext(auVar106,auVar106,8,1);
      fVar101 = ((float)uVar114 * fVar111 - fVar104) * auVar99._0_4_;
      fVar104 = ((float)(uVar114 >> 0x20) * fVar125 - fVar104) * auVar99._0_4_;
      uVar93 = NEON_fminnm(CONCAT44(fVar104,fVar101),uVar34,4);
      uVar130 = NEON_fmax(uVar93,0,4);
      fVar109 = (float)((ulong)uVar130 >> 0x20);
      fVar98 = fVar86 + fVar67 + fVar85;
      fVar86 = fVar86 + fVar67 + fVar85;
      uVar93 = CONCAT44(fVar86,fVar98);
      uVar126 = NEON_fminnm(CONCAT44((auVar105._4_4_ + fVar125 * fVar109) * auVar106._0_4_,
                                     (auVar105._4_4_ + fVar111 * (float)uVar130) * auVar106._0_4_),
                            uVar34,4);
      uVar113 = NEON_fmax(uVar126,0,4);
      uVar113 = uVar113 ^ (uVar113 ^ uVar114) &
                          CONCAT44(-(uint)(fVar109 == fVar104),-(uint)((float)uVar130 == fVar101)) &
                          uVar36;
      uVar126 = NEON_frsqrte(uVar93,4);
      fVar101 = (float)uVar126;
      fVar104 = (float)((ulong)uVar126 >> 0x20);
      uVar126 = NEON_frsqrts(uVar93,CONCAT44(fVar104 * fVar104,fVar101 * fVar101),4);
      fVar101 = fVar101 * (float)uVar126;
      fVar104 = fVar104 * (float)((ulong)uVar126 >> 0x20);
      fVar67 = (float)uVar113;
      fVar85 = (float)(uVar113 >> 0x20);
      uVar93 = NEON_frsqrts(uVar93,CONCAT44(fVar104 * fVar104,fVar101 * fVar101),4);
      auVar94._0_4_ = fVar65 + auVar96._0_4_ * fVar67;
      auVar94._4_4_ = fVar87 + auVar96._4_4_ * fVar85;
      auVar94._8_4_ = fVar89 + auVar96._8_4_ * fVar67;
      auVar94._12_4_ = fVar88 + auVar96._12_4_ * fVar85;
      fVar85 = (float)plVar42[0x1e];
      fVar89 = (float)((ulong)plVar42[0x1e] >> 0x20);
      fVar88 = (fVar91 - auVar94._0_4_) * (fVar91 - auVar94._0_4_);
      fVar91 = (fVar92 - auVar94._4_4_) * (fVar92 - auVar94._4_4_);
      fVar92 = (fVar61 - auVar94._8_4_) * (fVar61 - auVar94._8_4_);
      iVar20 = -(uint)(fVar98 <= 0.0);
      iVar90 = -(uint)(fVar86 <= 0.0);
      fVar98 = fVar98 * (float)uVar93 * fVar101;
      fVar86 = fVar86 * (float)((ulong)uVar93 >> 0x20) * fVar104;
      uVar93 = CONCAT17((byte)((uint)fVar86 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                        CONCAT16((byte)((uint)fVar86 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10),
                                 CONCAT15((byte)((uint)fVar86 >> 8) & ~(byte)((uint)iVar90 >> 8),
                                          CONCAT14(SUB41(fVar86,0) & ~(byte)iVar90,
                                                   CONCAT13((byte)((uint)fVar98 >> 0x18) &
                                                            ~(byte)((uint)iVar20 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar98 >> 0x10) &
                                                                     ~(byte)((uint)iVar20 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar98 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar20
                                                                                     >> 8),
                                                                              SUB41(fVar98,0) &
                                                                              ~(byte)iVar20)))))));
      fVar67 = auVar94._0_4_ - (float)CONCAT13(uVar51,CONCAT12(uVar50,CONCAT11(uVar48,uVar46)));
      fVar65 = auVar94._4_4_ - (float)CONCAT13(uVar59,CONCAT12(uVar57,CONCAT11(uVar55,uVar53)));
      uVar126 = NEON_frecpe(uVar93,4);
      fVar67 = fVar67 * fVar67;
      fVar65 = fVar65 * fVar65;
      fVar87 = (auVar94._8_4_ - fVar63) * (auVar94._8_4_ - fVar63);
      uVar130 = NEON_frecps(uVar93,uVar126,4);
      fVar61 = (float)uVar126 * (float)uVar130;
      fVar98 = (float)((ulong)uVar126 >> 0x20) * (float)((ulong)uVar130 >> 0x20);
      uVar93 = NEON_frecps(uVar93,CONCAT44(fVar98,fVar61),4);
      fVar63 = fVar88 + fVar91 + fVar92;
      fVar92 = fVar88 + fVar91 + fVar92;
      uVar126 = CONCAT44(fVar92,fVar63);
      uVar130 = NEON_frsqrte(uVar126,4);
      fVar88 = (float)uVar130;
      fVar91 = (float)((ulong)uVar130 >> 0x20);
      uVar130 = NEON_frsqrts(uVar126,CONCAT44(fVar91 * fVar91,fVar88 * fVar88),4);
      fVar88 = fVar88 * (float)uVar130;
      fVar91 = fVar91 * (float)((ulong)uVar130 >> 0x20);
      uVar126 = NEON_frsqrts(uVar126,CONCAT44(fVar91 * fVar91,fVar88 * fVar88),4);
      iVar20 = -(uint)(fVar63 <= 0.0);
      iVar90 = -(uint)(fVar92 <= 0.0);
      fVar63 = fVar63 * (float)uVar126 * fVar88;
      fVar92 = fVar92 * (float)((ulong)uVar126 >> 0x20) * fVar91;
      uVar93 = NEON_fmax(CONCAT44((fVar66 - fVar89) * fVar98 * (float)((ulong)uVar93 >> 0x20),
                                  (fVar66 - fVar85) * fVar61 * (float)uVar93),uVar34,4);
      fVar63 = (float)CONCAT13((byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                               CONCAT12((byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10)
                                        ,CONCAT11((byte)((uint)fVar63 >> 8) &
                                                  ~(byte)((uint)iVar20 >> 8),
                                                  SUB41(fVar63,0) & ~(byte)iVar20)));
      fVar88 = (float)uVar93 * fVar63;
      fVar91 = (float)((ulong)uVar93 >> 0x20) *
               (float)(CONCAT17((byte)((uint)fVar92 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18),
                                CONCAT16((byte)((uint)fVar92 >> 0x10) &
                                         ~(byte)((uint)iVar90 >> 0x10),
                                         CONCAT15((byte)((uint)fVar92 >> 8) &
                                                  ~(byte)((uint)iVar90 >> 8),
                                                  CONCAT14(SUB41(fVar92,0) & ~(byte)iVar90,fVar63)))
                               ) >> 0x20);
      fVar63 = fVar87 + fVar67 + fVar65;
      fVar87 = fVar87 + fVar67 + fVar65;
      uVar44 = SUB41(fVar87,0);
      uVar46 = (undefined1)((uint)fVar87 >> 8);
      uVar48 = (undefined1)((uint)fVar87 >> 0x10);
      uVar50 = (undefined1)((uint)fVar87 >> 0x18);
      uVar93 = NEON_frsqrte(CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,fVar63))
                                                    )),4);
      fVar67 = (float)uVar93;
      fVar65 = (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frsqrts(CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,fVar63))
                                                    )),CONCAT44(fVar65 * fVar65,fVar67 * fVar67),4);
      fVar67 = fVar67 * (float)uVar93;
      fVar65 = fVar65 * (float)((ulong)uVar93 >> 0x20);
      uVar93 = NEON_frsqrts(CONCAT17(uVar50,CONCAT16(uVar48,CONCAT15(uVar46,CONCAT14(uVar44,fVar63))
                                                    )),CONCAT44(fVar65 * fVar65,fVar67 * fVar67),4);
      iVar20 = -(uint)(fVar63 <= 0.0);
      iVar90 = -(uint)(fVar87 <= 0.0);
      fVar63 = fVar63 * (float)uVar93 * fVar67;
      fVar87 = fVar87 * (float)((ulong)uVar93 >> 0x20) * fVar65;
      bVar45 = SUB41(fVar63,0) & ~(byte)iVar20;
      bVar47 = (byte)((uint)fVar63 >> 8) & ~(byte)((uint)iVar20 >> 8);
      bVar49 = (byte)((uint)fVar63 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10);
      bVar52 = (byte)((uint)fVar63 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18);
      bVar54 = SUB41(fVar87,0) & ~(byte)iVar90;
      bVar56 = (byte)((uint)fVar87 >> 8) & ~(byte)((uint)iVar90 >> 8);
      bVar58 = (byte)((uint)fVar87 >> 0x10) & ~(byte)((uint)iVar90 >> 0x10);
      bVar60 = (byte)((uint)fVar87 >> 0x18) & ~(byte)((uint)iVar90 >> 0x18);
      uVar113 = CONCAT44(-(uint)(fVar89 + fVar91 + (float)CONCAT13(bVar60,CONCAT12(bVar58,CONCAT11(
                                                  bVar56,bVar54))) <
                                fVar66 + (float)CONCAT13(bVar81,CONCAT12(bVar79,CONCAT11(bVar77,
                                                  bVar75)))),
                         -(uint)(fVar85 + fVar88 + (float)CONCAT13(bVar52,CONCAT12(bVar49,CONCAT11(
                                                  bVar47,bVar45))) <
                                fVar66 + (float)CONCAT13(bVar73,CONCAT12(bVar71,CONCAT11(bVar69,
                                                  bVar68)))));
      auVar83._8_8_ = uVar113;
      auVar83._0_8_ = uVar113;
      uVar36 = CONCAT17(bVar81,CONCAT16(bVar79,CONCAT15(bVar77,CONCAT14(bVar75,CONCAT13(bVar73,
                                                  CONCAT12(bVar71,CONCAT11(bVar69,bVar68))))))) ^
               (CONCAT17(bVar81,CONCAT16(bVar79,CONCAT15(bVar77,CONCAT14(bVar75,CONCAT13(bVar73,
                                                  CONCAT12(bVar71,CONCAT11(bVar69,bVar68))))))) ^
               CONCAT17(bVar60,CONCAT16(bVar58,CONCAT15(bVar56,CONCAT14(bVar54,CONCAT13(bVar52,
                                                  CONCAT12(bVar49,CONCAT11(bVar47,bVar45)))))))) &
               uVar113;
      uVar62 = (undefined4)((ulong)plVar42[0x11] >> 0x20);
      bVar68 = (byte)uVar36;
      bVar69 = (byte)(uVar36 >> 8);
      bVar71 = (byte)(uVar36 >> 0x10);
      bVar73 = (byte)(uVar36 >> 0x18);
      bVar75 = (byte)(uVar36 >> 0x20);
      bVar77 = (byte)(uVar36 >> 0x28);
      bVar79 = (byte)(uVar36 >> 0x30);
      bVar81 = (byte)(uVar36 >> 0x38);
      auVar7._12_4_ = uVar62;
      auVar7._0_12_ = *(undefined1 (*) [12])(plVar42 + 0x10);
      auVar84._12_4_ = uVar62;
      auVar84._0_12_ = *(undefined1 (*) [12])(plVar42 + 0x10);
      auVar84 = auVar84 ^ (auVar7 ^ auVar94) & auVar83;
      fVar89 = fVar89 + fVar91;
      uVar36 = uVar25 ^ (uVar25 ^ CONCAT17((char)((uint)fVar89 >> 0x18),
                                           CONCAT16((char)((uint)fVar89 >> 0x10),
                                                    CONCAT15((char)((uint)fVar89 >> 8),
                                                             CONCAT14(SUB41(fVar89,0),
                                                                      fVar85 + fVar88))))) & uVar113
      ;
      plVar16 = (long *)plVar42[0x3a];
      if (plVar16 != (long *)0x0) goto LAB_031b56dc;
LAB_031b4f78:
      fVar63 = (float)CONCAT13(bVar73,CONCAT12(bVar71,CONCAT11(bVar69,bVar68))) + (float)uVar36 +
               (float)lVar35;
      uVar44 = SUB41(fVar63,0);
      uVar46 = (undefined1)((uint)fVar63 >> 8);
      uVar48 = (undefined1)((uint)fVar63 >> 0x10);
      uVar50 = (undefined1)((uint)fVar63 >> 0x18);
      fVar64 = (float)CONCAT13(bVar81,CONCAT12(bVar79,CONCAT11(bVar77,bVar75))) +
               (float)(uVar36 >> 0x20) + fVar64;
      uVar51 = SUB41(fVar64,0);
      uVar53 = (undefined1)((uint)fVar64 >> 8);
      uVar55 = (undefined1)((uint)fVar64 >> 0x10);
      uVar57 = (undefined1)((uint)fVar64 >> 0x18);
    }
    uVar93 = NEON_fmax(CONCAT17(uVar57,CONCAT16(uVar55,CONCAT15(uVar53,CONCAT14(uVar51,CONCAT13(
                                                  uVar50,CONCAT12(uVar48,CONCAT11(uVar46,uVar44)))))
                                               )),uVar25,4);
    fVar63 = (float)uVar93;
    if (fVar63 <= *(float *)(param_1 + 9)) {
      plVar16 = (long *)plVar42[0x3b];
      if (uVar32 == 0xffffffff) {
        puVar28 = (undefined8 *)0x0;
      }
      else {
        uVar40 = (ulong)(uVar32 * -0x61c8864f >> 0x18);
        lVar35 = *plVar16;
        for (sVar18 = *(short *)(plVar16[2] + uVar40 * 2); -1 < sVar18;
            sVar18 = *(short *)(plVar16[1] + (long)sVar18 * 2)) {
          if (*(uint *)(lVar35 + (long)sVar18 * 0x10 + 8) == uVar32) {
            puVar28 = (undefined8 *)(lVar35 + (long)sVar18 * 0x10);
            goto LAB_031b5028;
          }
        }
        iVar20 = *(int *)((long)plVar16 + 0x1c);
        *(int *)((long)plVar16 + 0x1c) = iVar20 + 1;
        puVar28 = (undefined8 *)(lVar35 + (long)iVar20 * 0x10);
        *puVar28 = 0x7f7fffee7f7fffee;
        *(uint *)(puVar28 + 1) = uVar32;
        *(undefined4 *)((long)puVar28 + 0xc) = 0xffff;
        lVar35 = uVar40 * 2;
        *(undefined2 *)(plVar16[1] + (long)(short)iVar20 * 2) = *(undefined2 *)(plVar16[2] + lVar35)
        ;
        *(short *)(plVar16[2] + lVar35) = (short)iVar20;
      }
LAB_031b5028:
      plVar16[9] = (long)puVar28;
      pfVar41 = (float *)param_1[0xb];
      bVar12 = true;
      if (((*(ushort *)((long)pfVar41 + 0xe) & 3) != 0) &&
         (bVar12 = false, !NAN(fVar63) && !NAN(*pfVar41))) {
        bVar12 = fVar63 < *pfVar41;
      }
      if (bVar12) {
        *pfVar41 = fVar63;
        if ((*(ushort *)((long)pfVar41 + 0xe) & 3) == 0) {
          FUN_031b612c(param_1 + 0x10,uVar43);
          pfVar41[1] = (float)CONCAT13(extraout_var_03,
                                       CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)))
          ;
          if ((float)CONCAT13(extraout_var_03,
                              CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0))) <
              *(float *)((long)param_1 + 0x44)) {
            *(uint *)((long)param_1 + 0x44) =
                 CONCAT13(extraout_var_03,
                          CONCAT12(extraout_var_01,CONCAT11(extraout_var,extraout_b0)));
            *(uint *)(param_1 + 8) = uVar32;
          }
        }
        *(short *)(param_1[0xb] + 0xc) = (short)*(undefined4 *)(param_1 + 10);
        pfVar41 = (float *)param_1[0xb];
        fVar63 = *pfVar41 + *(float *)((long)param_1 + 0x4c) * pfVar41[1];
        if (fVar63 <= *(float *)(param_1 + 9)) {
          uVar4 = *(ushort *)((long)pfVar41 + 0xe);
          *(ushort *)((long)pfVar41 + 0xe) = uVar4 & 0xfffc | 1;
          uVar19 = *(uint *)(param_1 + 0xf);
          uVar40 = (ulong)(int)uVar19;
          if ((uVar4 & 1) == 0) {
            if (*(int *)((long)param_1 + 0x7c) <= (int)uVar19) goto LAB_031b51b0;
            *(uint *)(param_1 + 0xf) = uVar19 + 1;
            puVar30 = (uint *)(param_1[0xe] + uVar40 * 8);
            *puVar30 = uVar32;
            puVar30[1] = (uint)fVar63;
            lVar35 = param_1[0xe];
            puVar31 = (undefined4 *)(lVar35 + uVar40 * 8);
            uVar62 = *puVar31;
            iVar20 = puVar31[1];
            if (0 < (int)uVar19) {
              do {
                uVar21 = uVar19 - 1;
                uVar32 = uVar19;
                if (-1 < (int)uVar21) {
                  uVar32 = uVar21;
                }
                if (*(int *)(lVar35 + (long)((int)uVar32 >> 1) * 8 + 4) <= iVar20) {
                  uVar40 = (ulong)(int)uVar19;
                  break;
                }
                uVar40 = (long)((ulong)uVar32 << 0x20) >> 0x21;
                *(undefined8 *)(lVar35 + (long)(int)uVar19 * 8) =
                     *(undefined8 *)(lVar35 + uVar40 * 8);
                lVar35 = param_1[0xe];
                uVar19 = (int)uVar32 >> 1;
              } while (1 < (int)uVar21);
            }
            *(undefined4 *)(lVar35 + uVar40 * 8) = uVar62;
            *(int *)(param_1[0xe] + uVar40 * 8 + 4) = iVar20;
          }
          else if (0 < (int)uVar19) {
            uVar36 = 0;
            puVar30 = (uint *)param_1[0xe];
            do {
              if (*puVar30 == uVar32) {
                uVar40 = uVar36 & 0xffffffff;
                ((uint *)param_1[0xe])[uVar40 * 2 + 1] = (uint)fVar63;
                lVar35 = param_1[0xe];
                puVar31 = (undefined4 *)(lVar35 + uVar40 * 8);
                uVar62 = *puVar31;
                iVar20 = puVar31[1];
                if ((int)uVar36 == 0) goto LAB_031b5628;
                goto LAB_031b55d8;
              }
              uVar36 = uVar36 + 1;
              puVar30 = puVar30 + 2;
            } while (uVar40 != uVar36);
          }
        }
      }
    }
  }
LAB_031b5150:
  puVar22 = puVar22 + 1;
  if (local_d8 + (int)uVar14 <= puVar22) goto LAB_031b51b0;
  goto LAB_031b4b0c;
  while( true ) {
    uVar40 = (long)((ulong)uVar32 << 0x20) >> 0x21;
    *(undefined8 *)(lVar35 + (long)(int)uVar21 * 8) = *(undefined8 *)(lVar35 + uVar40 * 8);
    lVar35 = param_1[0xe];
    uVar36 = (ulong)(uint)((int)uVar32 >> 1);
    if ((int)uVar19 < 2) break;
LAB_031b55d8:
    uVar21 = (uint)uVar36;
    uVar19 = uVar21 - 1;
    uVar32 = uVar21;
    if (-1 < (int)uVar19) {
      uVar32 = uVar19;
    }
    if (*(int *)(lVar35 + (long)((int)uVar32 >> 1) * 8 + 4) <= iVar20) {
      uVar40 = (ulong)(int)uVar21;
      break;
    }
  }
LAB_031b5628:
  *(undefined4 *)(lVar35 + uVar40 * 8) = uVar62;
  *(int *)(param_1[0xe] + uVar40 * 8 + 4) = iVar20;
  goto LAB_031b5150;
}


