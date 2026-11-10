/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001b6c88; name: FUN_001b6c88
 */


/* WARNING: Removing unreachable block (ram,0x001b766c) */
/* WARNING: Removing unreachable block (ram,0x001b9600) */

undefined1  [16] FUN_001b6c88(float param_1,long param_2)

{
  undefined1 (*pauVar1) [12];
  undefined8 *puVar2;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  long lVar13;
  undefined *puVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  float *pfVar24;
  undefined1 (*pauVar25) [16];
  float *pfVar26;
  void *__s;
  undefined1 (*pauVar27) [16];
  ulong *puVar28;
  float *pfVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  uint uVar33;
  byte bVar34;
  float *pfVar35;
  ulong uVar36;
  uint uVar37;
  long lVar38;
  long *plVar39;
  ulong uVar40;
  float fVar41;
  undefined8 *puVar42;
  ulong uVar43;
  long lVar44;
  long lVar45;
  undefined8 *puVar46;
  ulong uVar47;
  float *pfVar48;
  uint *puVar49;
  uint *puVar50;
  ulong *puVar51;
  uint *puVar52;
  uint *puVar53;
  uint *puVar54;
  ulong uVar55;
  uint uVar56;
  int iVar57;
  ulong uVar58;
  ulong uVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  char *pcVar64;
  long *plVar65;
  long lVar66;
  undefined8 uVar67;
  ulong __n;
  ulong uVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  undefined8 uVar73;
  float fVar78;
  undefined1 auVar74 [16];
  float fVar77;
  undefined1 extraout_q0 [16];
  undefined1 extraout_q0_00 [16];
  undefined1 extraout_q0_01 [16];
  undefined1 extraout_q0_02 [16];
  undefined1 extraout_q0_03 [16];
  undefined1 extraout_q0_04 [16];
  undefined1 auVar75 [16];
  undefined1 extraout_q0_05 [16];
  undefined1 auVar76 [16];
  undefined1 extraout_q0_06 [16];
  undefined1 extraout_q0_07 [16];
  undefined1 extraout_q0_08 [16];
  undefined1 extraout_q0_09 [16];
  undefined1 extraout_q0_10 [16];
  undefined1 extraout_q0_11 [16];
  undefined1 extraout_q0_12 [16];
  undefined1 extraout_q0_13 [16];
  undefined1 extraout_q0_14 [16];
  undefined1 extraout_q0_15 [16];
  undefined1 extraout_q0_16 [16];
  undefined8 uVar79;
  undefined8 uVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  float fVar84;
  ulong uVar85;
  undefined1 auVar86 [12];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar97;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  float fVar104;
  undefined1 auVar103 [16];
  float fVar105;
  undefined8 uVar106;
  undefined8 uVar107;
  undefined8 uVar108;
  float fVar110;
  undefined1 auVar109 [16];
  float fVar111;
  float fVar112;
  int iVar113;
  undefined1 in_q7 [16];
  ulong uVar114;
  undefined8 uVar115;
  float fVar116;
  undefined8 uVar117;
  undefined8 uVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar123;
  float fVar124;
  undefined1 auVar122 [16];
  float fVar125;
  float *local_610;
  float local_5ec;
  long local_5d0;
  float local_59c;
  float local_598;
  float local_594;
  long *local_568;
  void *local_560;
  float local_520;
  float fStack_51c;
  float fStack_518;
  float fStack_514;
  long local_4f8;
  ulong local_4f0;
  char *local_4e8;
  long local_4e0;
  uint *local_4d0;
  undefined8 local_4c8;
  char *local_4c0;
  float local_4b8;
  uint *local_4b0;
  undefined8 local_4a8;
  uint *local_4a0;
  float local_498;
  float local_2b0 [4];
  undefined8 local_2a0;
  float fStack_298;
  float fStack_294;
  undefined4 uStack_284;
  undefined8 local_a8;
  undefined8 local_a0;
  
  uVar73 = in_q7._8_8_;
  if (param_1 < 0.0) {
    return ZEXT816(0);
  }
  lVar23 = *(long *)(param_2 + 0x18);
  if (*(int *)(lVar23 + 0x1f0) != 3) {
    return ZEXT816(0);
  }
  if (*(char *)(lVar23 + 0x1fc) == '\0') {
    FUN_001c27b4();
    lVar23 = *(long *)(param_2 + 0x18);
  }
  FUN_0335f970(local_2b0,*(undefined8 *)(lVar23 + 0x30));
  auVar74._0_8_ = CONCAT44(local_2b0[3],local_2b0[3]);
  auVar74._8_8_ = 0;
  iVar5 = *(int *)(*(long *)(param_2 + 0x18) + 0x1f0);
  uVar114 = auVar74._0_8_;
  if (1 < iVar5) {
    auVar82._0_8_ = CONCAT44(uStack_284,uStack_284);
    auVar82._8_8_ = 0;
    uVar56 = iVar5 - 1U & 1;
    auVar103._0_8_ =
         CONCAT44(*(undefined4 *)(PTR_DAT_04372370 + 0x50),*(undefined4 *)(PTR_DAT_04372370 + 0x50))
    ;
    auVar103._8_8_ = 0;
    uVar58 = CONCAT44(fStack_294,fStack_294);
    if (iVar5 == 2) {
      iVar19 = 1;
    }
    else {
      iVar19 = 1;
      auVar109._8_8_ = 0;
      auVar109._0_8_ = uVar58;
      while( true ) {
        uVar79 = NEON_fmin(uVar114,auVar109._0_8_,4);
        uVar114 = uVar58;
        if (((iVar19 != 0) && (uVar114 = auVar82._0_8_, iVar19 != 1)) &&
           (uVar114 = auVar103._0_8_, iVar19 != 2)) {
          uVar114 = auVar74._0_8_;
        }
        uVar114 = NEON_fmin(uVar79,uVar114,4);
        iVar19 = iVar19 + 2;
        if (iVar5 - uVar56 == iVar19) break;
        auVar109._8_8_ = 0;
        if (((iVar19 != 1) && (auVar109 = auVar103, iVar19 != 3)) &&
           (auVar109 = auVar82, iVar19 != 2)) {
          auVar109 = auVar74;
        }
      }
    }
    if (uVar56 != 0) {
      if (((iVar19 != 1) && (uVar58 = auVar82._0_8_, iVar19 != 2)) &&
         (uVar58 = auVar103._0_8_, iVar19 != 3)) {
        uVar58 = auVar74._0_8_;
      }
      uVar114 = NEON_fmin(uVar114,uVar58,4);
    }
  }
  fVar70 = (float)FUN_001bee64(param_2);
  fVar71 = powf(fVar70,0.6666667);
  auVar74 = FUN_001bef04(param_2);
  uVar79 = auVar74._0_8_;
  fVar17 = (float)FUN_001b6874(param_2);
  iVar5 = *(int *)(*(long *)(param_2 + 0x18) + 0x78);
  fVar70 = *(float *)(*(long *)(param_2 + 0x18) + 0x60);
  uVar58 = (ulong)(uint)fVar70;
  lVar23 = tpidr_el0;
  lVar38 = *(long *)(lVar23 + 0x38d490);
  if (lVar38 == 0) {
    lVar38 = FUN_0333d16c(0,1);
    *(long *)(lVar23 + 0x38d490) = lVar38;
  }
  lVar38 = *(long *)(lVar38 + 8);
  uVar31 = (ulong)(int)((int)fVar17 * 0x10 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar38 + 0x10) < uVar31) {
LAB_001b6eb4:
    pfVar24 = (float *)FUN_032ce670();
  }
  else {
    pfVar24 = *(float **)(lVar38 + 0x18);
    if (*(ulong *)(lVar38 + 0x20) < (long)pfVar24 + uVar31) goto LAB_001b6eb4;
    *(ulong *)(lVar38 + 0x18) = (long)pfVar24 + uVar31;
  }
  puVar14 = PTR_PTR_04372400;
  __n = (ulong)(uint)fVar17;
  local_2b0[0] = fVar17;
  if ((int)fVar17 < 1) {
    uVar67 = *(undefined8 *)PTR_PTR_04372400;
LAB_001b6f84:
    local_594 = -0.0;
    local_560 = (void *)0x0;
    local_598 = -0.0;
    local_4e8 = (char *)0x0;
    if (iVar5 == 0) goto LAB_001b6f70;
LAB_001b6fa4:
    lVar38 = *(long *)(lVar23 + 0x38d490);
    if (lVar38 == 0) {
      lVar38 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar38;
    }
    lVar44 = *(long *)(lVar38 + 8);
    uVar59 = (ulong)(int)(iVar5 * 0xc + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar44 + 0x10) < uVar59) {
LAB_001b7014:
      lVar66 = FUN_032ce670();
      lVar38 = *(long *)(lVar23 + 0x38d490);
    }
    else {
      lVar66 = *(long *)(lVar44 + 0x18);
      uVar59 = lVar66 + uVar59;
      if (*(ulong *)(lVar44 + 0x20) < uVar59) goto LAB_001b7014;
      *(ulong *)(lVar44 + 0x18) = uVar59;
    }
    if (lVar38 == 0) {
      lVar38 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar38;
    }
    lVar38 = *(long *)(lVar38 + 8);
    uVar59 = (ulong)(int)(iVar5 * 0x60 + 0x7fU & 0xffffff80);
    if (*(ulong *)(lVar38 + 0x10) < uVar59) {
LAB_001b708c:
      lVar44 = FUN_032ce670();
    }
    else {
      lVar44 = *(long *)(lVar38 + 0x18);
      uVar59 = lVar44 + uVar59;
      if (*(ulong *)(lVar38 + 0x20) < uVar59) goto LAB_001b708c;
      *(ulong *)(lVar38 + 0x18) = uVar59;
    }
  }
  else {
    uVar59 = 0;
    do {
      pauVar25 = (undefined1 (*) [16])FUN_001b69bc(param_2,uVar59 & 0xffffffff);
      auVar74 = *pauVar25;
      *(long *)(pfVar24 + uVar59 * 4 + 2) = auVar74._8_8_;
      *(long *)(pfVar24 + uVar59 * 4) = auVar74._0_8_;
      uVar59 = uVar59 + 1;
    } while (__n != uVar59);
    uVar67 = *(undefined8 *)puVar14;
    if ((int)fVar17 < 1) goto LAB_001b6f84;
    local_4e8 = (char *)FUN_032cf190(uVar67,1,local_2b0);
    local_594 = local_2b0[0];
    memset(local_4e8,0,__n);
    local_2b0[0] = fVar17;
    local_560 = (void *)FUN_032cf190(uVar67,1,local_2b0);
    local_598 = local_2b0[0];
    memset(local_560,0,__n);
    if (iVar5 != 0) goto LAB_001b6fa4;
LAB_001b6f70:
    lVar66 = 0;
    lVar44 = 0;
  }
  local_2b0[0] = fVar70;
  if ((int)fVar70 < 1) {
    pfVar26 = (float *)0x0;
    local_59c = -0.0;
    fVar41 = 0.0;
  }
  else {
    pfVar26 = (float *)FUN_032cf190(uVar67,0x10,local_2b0);
    local_59c = local_2b0[0];
    fVar41 = fVar70;
  }
  uVar117 = NEON_frecpe(uVar79,4);
  local_4d0 = (uint *)0x0;
  local_4c8 = 0x8000000000000000;
  lVar38 = (long)&local_4c8 + 4;
  uVar56 = (int)fVar17 - 1;
  if ((int)fVar17 < 1) {
    local_2b0[0] = (float)((int)fVar17 + 1);
    if (-1 < (int)fVar17) goto LAB_001b719c;
    __s = (void *)0x0;
    fVar121 = -0.0;
  }
  else {
    uVar18 = (int)fVar17 * 4;
    if ((int)fVar17 < 0x10000000) {
      uVar21 = 0;
    }
    else {
      FUN_032bd0a8(uVar18);
      uVar21 = (local_4c8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar21) {
        uVar21 = 0x3fffffff;
      }
    }
    if ((int)uVar18 <= (int)uVar21) {
      uVar18 = uVar21;
    }
    local_4d0 = (uint *)FUN_032bd1d4(uVar67,uVar18,4,0,0,lVar38);
LAB_001b719c:
    local_2b0[0] = (float)((int)fVar17 + 1);
    __s = (void *)FUN_032cf190(uVar67,4,local_2b0);
    fVar121 = local_2b0[0];
    memset(__s,0,__n * 4 + 4);
  }
  uVar118 = NEON_frecps(uVar79,uVar117,4);
  for (plVar65 = *(long **)(*(long *)(param_2 + 0x18) + 0x70); plVar65 != (long *)0x0;
      plVar65 = (long *)*plVar65) {
    iVar19 = FUN_001b6a64(param_2,plVar65);
    lVar45 = plVar65[2];
    uVar21 = iVar19 << 0x10;
    uVar22 = FUN_001b6920(param_2,lVar45);
    uVar59 = local_4c8;
    uVar18 = uVar21 | uVar22 & 0xffff;
    if (0 < (int)(float)local_4c8) {
      uVar68 = 0;
      do {
        if (local_4d0[uVar68] == uVar18) {
          if ((int)uVar68 != -1) goto LAB_001b7304;
          break;
        }
        uVar68 = uVar68 + 1;
      } while ((local_4c8 & 0xffffffff) != uVar68);
    }
    auVar74 = *(undefined1 (*) [16])(lVar45 + 0x10);
    *(long *)(pfVar26 + (long)(int)uVar22 * 4 + 2) = auVar74._8_8_;
    *(long *)(pfVar26 + (long)(int)uVar22 * 4) = auVar74._0_8_;
    uVar22 = (int)(float)local_4c8 + 1;
    if ((int)(local_4c8._4_4_ & 0x3fffffff) <= (int)(float)local_4c8) {
      if (0x3ffffffe < (int)(float)local_4c8) {
        FUN_032bd0a8(uVar22);
      }
      uVar33 = (local_4c8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar33) {
        uVar33 = 0x3fffffff;
      }
      uVar37 = uVar22;
      if ((int)uVar22 <= (int)uVar33) {
        uVar37 = uVar33;
      }
      local_4d0 = (uint *)FUN_032bd1d4(uVar67,uVar37,4,local_4d0,uVar59 & 0xffffffff,lVar38);
    }
    local_4d0[(int)(float)local_4c8] = uVar18;
    local_4c8 = CONCAT44(local_4c8._4_4_,uVar22);
    uVar59 = -(ulong)(iVar19 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar19 + 1U) << 2;
    *(int *)((long)__s + uVar59) = *(int *)((long)__s + uVar59) + 1;
LAB_001b7304:
    lVar45 = plVar65[3];
    uVar22 = FUN_001b6920(param_2,lVar45);
    uVar59 = local_4c8;
    uVar18 = uVar22 & 0xffff | uVar21;
    if (0 < (int)(float)local_4c8) {
      uVar68 = 0;
      do {
        if (local_4d0[uVar68] == uVar18) {
          if ((int)uVar68 != -1) goto LAB_001b73e0;
          break;
        }
        uVar68 = uVar68 + 1;
      } while ((local_4c8 & 0xffffffff) != uVar68);
    }
    auVar74 = *(undefined1 (*) [16])(lVar45 + 0x10);
    *(long *)(pfVar26 + (long)(int)uVar22 * 4 + 2) = auVar74._8_8_;
    *(long *)(pfVar26 + (long)(int)uVar22 * 4) = auVar74._0_8_;
    uVar22 = (int)(float)local_4c8 + 1;
    if ((int)(local_4c8._4_4_ & 0x3fffffff) <= (int)(float)local_4c8) {
      if (0x3ffffffe < (int)(float)local_4c8) {
        FUN_032bd0a8(uVar22);
      }
      uVar33 = (local_4c8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar33) {
        uVar33 = 0x3fffffff;
      }
      uVar37 = uVar22;
      if ((int)uVar22 <= (int)uVar33) {
        uVar37 = uVar33;
      }
      local_4d0 = (uint *)FUN_032bd1d4(uVar67,uVar37,4,local_4d0,uVar59 & 0xffffffff,lVar38);
    }
    local_4d0[(int)(float)local_4c8] = uVar18;
    local_4c8 = CONCAT44(local_4c8._4_4_,uVar22);
    uVar59 = -(ulong)(iVar19 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar19 + 1U) << 2;
    *(int *)((long)__s + uVar59) = *(int *)((long)__s + uVar59) + 1;
LAB_001b73e0:
    lVar45 = plVar65[4];
    uVar18 = FUN_001b6920(param_2,lVar45);
    uVar59 = local_4c8;
    uVar21 = uVar18 & 0xffff | uVar21;
    if (0 < (int)(float)local_4c8) {
      uVar68 = 0;
      do {
        if (local_4d0[uVar68] == uVar21) {
          if ((int)uVar68 != -1) goto LAB_001b720c;
          break;
        }
        uVar68 = uVar68 + 1;
      } while ((local_4c8 & 0xffffffff) != uVar68);
    }
    auVar74 = *(undefined1 (*) [16])(lVar45 + 0x10);
    *(long *)(pfVar26 + (long)(int)uVar18 * 4 + 2) = auVar74._8_8_;
    *(long *)(pfVar26 + (long)(int)uVar18 * 4) = auVar74._0_8_;
    uVar18 = (int)(float)local_4c8 + 1;
    if ((int)(local_4c8._4_4_ & 0x3fffffff) <= (int)(float)local_4c8) {
      if (0x3ffffffe < (int)(float)local_4c8) {
        FUN_032bd0a8(uVar18);
      }
      uVar22 = (local_4c8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar22) {
        uVar22 = 0x3fffffff;
      }
      uVar33 = uVar18;
      if ((int)uVar18 <= (int)uVar22) {
        uVar33 = uVar22;
      }
      local_4d0 = (uint *)FUN_032bd1d4(uVar67,uVar33,4,local_4d0,uVar59 & 0xffffffff,lVar38);
    }
    local_4d0[(int)(float)local_4c8] = uVar21;
    local_4c8 = CONCAT44(local_4c8._4_4_,uVar18);
    uVar59 = -(ulong)(iVar19 + 1U >> 0x1f) & 0xfffffffc00000000 | (ulong)(iVar19 + 1U) << 2;
    *(int *)((long)__s + uVar59) = *(int *)((long)__s + uVar59) + 1;
LAB_001b720c:
  }
  fVar72 = (float)uVar117 * (float)uVar118;
  fVar77 = (float)((ulong)uVar117 >> 0x20) * (float)((ulong)uVar118 >> 0x20);
  if (1 < (int)(float)local_4c8) {
    puVar50 = local_4d0 + ((int)(float)local_4c8 + -1);
    lVar38 = 0;
    local_2b0[0] = SUB84(local_4d0,0);
    local_2b0[1] = (float)((ulong)local_4d0 >> 0x20);
    local_4b0 = puVar50;
    puVar49 = local_4d0;
LAB_001b754c:
    lVar38 = (long)(int)lVar38;
LAB_001b7560:
    do {
      puVar54 = puVar50;
      do {
        puVar50 = puVar54;
        uVar18 = puVar49[(long)puVar50 - (long)puVar49 >> 3];
        puVar52 = puVar49;
        puVar54 = puVar50;
        do {
          while( true ) {
            do {
              puVar53 = puVar52;
              puVar52 = puVar53 + 1;
            } while (*puVar53 < uVar18);
            puVar32 = puVar54 + 1;
            do {
              puVar54 = puVar32;
              puVar32 = puVar54 + -1;
              uVar21 = *puVar32;
            } while (uVar18 < uVar21);
            if (puVar53 <= puVar32) break;
            puVar52 = puVar53;
            puVar54 = puVar32;
LAB_001b7584:
            if (puVar54 < puVar52) goto LAB_001b75d4;
          }
          puVar54 = puVar54 + -2;
          if (puVar53 == puVar32) goto LAB_001b7584;
          *puVar32 = *puVar53;
          *puVar53 = uVar21;
        } while (puVar52 <= puVar54);
LAB_001b75d4:
        if (puVar54 <= puVar49) {
          puVar49 = puVar52;
          if (puVar52 < puVar50) goto LAB_001b7560;
          if ((int)lVar38 < 1) goto LAB_001b7634;
          lVar38 = (long)(int)lVar38 + -1;
          puVar49 = *(uint **)(local_2b0 + lVar38 * 2);
          puVar50 = (&local_4b0)[lVar38];
          goto LAB_001b754c;
        }
      } while (puVar50 <= puVar52);
      puVar53 = puVar54;
      puVar32 = puVar49;
      if ((long)puVar50 - (long)puVar52 <= (long)puVar54 - (long)puVar49) {
        puVar53 = puVar50;
        puVar32 = puVar52;
        puVar50 = puVar54;
        puVar52 = puVar49;
      }
      *(uint **)(local_2b0 + lVar38 * 2) = puVar52;
      (&local_4b0)[lVar38] = puVar50;
      puVar49 = puVar32;
      puVar50 = puVar53;
      lVar38 = lVar38 + 1;
    } while( true );
  }
LAB_001b7634:
  local_4f0 = (ulong)(iVar5 * 3 | 0x80000000);
  uVar79 = NEON_frecps(uVar79,CONCAT44(fVar77,fVar72),4);
  if (1 < (int)fVar17) {
    iVar19 = *(int *)((long)__s + 4);
    if (fVar17 == 2.8026e-45) {
      lVar45 = 1;
    }
    else {
      lVar38 = 0;
      do {
        lVar45 = lVar38;
        iVar19 = *(int *)((long)__s + lVar45 * 4 + 8) + iVar19;
        *(int *)((long)__s + lVar45 * 4 + 8) = iVar19;
        iVar19 = *(int *)((long)__s + lVar45 * 4 + 0xc) + iVar19;
        *(int *)((long)__s + lVar45 * 4 + 0xc) = iVar19;
        lVar38 = lVar45 + 2;
      } while (~((ulong)uVar56 & 1) + __n != lVar45 + 2);
      lVar45 = lVar45 + 3;
      if ((uVar56 & 1) == 0) goto LAB_001b76b8;
    }
    *(int *)((long)__s + lVar45 * 4 + 4) = *(int *)((long)__s + lVar45 * 4 + 4) + iVar19;
  }
LAB_001b76b8:
  plVar65 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
  local_4e0 = lVar44;
  local_4f8 = lVar44;
  if (plVar65 == (long *)0x0) {
    uVar59 = 0;
    uVar68 = 0;
  }
  else {
    plVar39 = *(long **)PTR_PTR_04372408;
    uVar117 = *(undefined8 *)(PTR_DAT_04372370 + 0x250);
    uVar68 = 0;
    uVar59 = 0;
LAB_001b7710:
    do {
      uVar40 = plVar65[5];
      iVar19 = FUN_001b6a64(param_2,plVar65);
      iVar20 = FUN_001b6a64(param_2,uVar40 & 0xfffffffffffffffc);
      if (iVar19 != iVar20) {
        uVar21 = FUN_001b6a64(param_2,plVar65);
        uVar22 = FUN_001b6a64(param_2,uVar40 & 0xfffffffffffffffc);
        uVar18 = uVar22;
        if (uVar21 <= uVar22) {
          uVar18 = uVar21;
          uVar21 = uVar22;
        }
        iVar19 = (int)uVar68;
        uVar22 = uVar21 & 0xffff | uVar18 << 0x10;
        if (0 < iVar19) {
          uVar40 = 0;
          do {
            if (*(uint *)(lVar66 + uVar40 * 4) == uVar22) {
              if ((int)uVar40 != -1) goto LAB_001b7a4c;
              break;
            }
            uVar40 = uVar40 + 1;
          } while (uVar68 != uVar40);
        }
        *(uint *)(lVar66 + (long)iVar19 * 4) = uVar22;
        pauVar25 = (undefined1 (*) [16])FUN_001b69bc(param_2,uVar18);
        pauVar27 = (undefined1 (*) [16])FUN_001b69bc(param_2,uVar21);
        uVar33 = (uint)local_4f0;
        iVar20 = (int)uVar59;
        uVar22 = iVar20 + 1;
        if (iVar20 < (int)(uVar33 & 0x3fffffff)) {
          lVar38 = local_4f8;
        }
        else {
          if (0x3ffffffe < iVar20) {
            FUN_032bd0a8(uVar22);
          }
          uVar37 = (uVar33 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar37) {
            uVar37 = 0x3fffffff;
          }
          uVar4 = uVar22;
          if ((int)uVar22 <= (int)uVar37) {
            uVar4 = uVar37;
          }
          FUN_032bd100(uVar4,0x20,local_4f0,local_2b0);
          lVar38 = (**(code **)(*plVar39 + 0x10))
                             (plVar39,CONCAT44(local_2b0[1],local_2b0[0]),local_2b0);
          if (0 < iVar20) {
            uVar68 = uVar59 & 3;
            if (uVar59 - 1 < 3) {
              lVar45 = 0;
            }
            else {
              lVar45 = 0;
              puVar42 = (undefined8 *)(lVar38 + 0x40);
              puVar46 = (undefined8 *)(local_4e0 + 0x40);
              do {
                uVar118 = puVar46[-8];
                uVar80 = puVar46[-7];
                lVar45 = lVar45 + 4;
                uVar106 = puVar46[-5];
                puVar42[-6] = puVar46[-6];
                puVar42[-5] = uVar106;
                puVar42[-8] = uVar118;
                puVar42[-7] = uVar80;
                uVar118 = puVar46[-4];
                uVar80 = puVar46[-3];
                uVar106 = puVar46[-1];
                puVar42[-2] = puVar46[-2];
                puVar42[-1] = uVar106;
                puVar42[-4] = uVar118;
                puVar42[-3] = uVar80;
                uVar118 = *puVar46;
                uVar80 = puVar46[1];
                uVar106 = puVar46[3];
                puVar42[2] = puVar46[2];
                puVar42[3] = uVar106;
                *puVar42 = uVar118;
                puVar42[1] = uVar80;
                uVar118 = puVar46[4];
                uVar80 = puVar46[5];
                puVar2 = puVar46 + 6;
                uVar106 = puVar46[7];
                puVar46 = puVar46 + 0x10;
                puVar42[6] = *puVar2;
                puVar42[7] = uVar106;
                puVar42[4] = uVar118;
                puVar42[5] = uVar80;
                puVar42 = puVar42 + 0x10;
              } while (uVar59 - uVar68 != lVar45);
            }
            if (uVar68 != 0) {
              puVar42 = (undefined8 *)(local_4e0 + lVar45 * 0x20);
              puVar46 = (undefined8 *)(lVar38 + lVar45 * 0x20);
              do {
                uVar118 = *puVar42;
                uVar80 = puVar42[1];
                uVar68 = uVar68 - 1;
                puVar2 = puVar42 + 2;
                uVar106 = puVar42[3];
                puVar42 = puVar42 + 4;
                puVar46[2] = *puVar2;
                puVar46[3] = uVar106;
                *puVar46 = uVar118;
                puVar46[1] = uVar80;
                puVar46 = puVar46 + 4;
              } while (uVar68 != 0);
            }
          }
          if (-1 < (int)uVar33) {
            (**(code **)(*plVar39 + 0x18))(plVar39,local_4f8,(ulong)(uVar33 & 0x3fffffff) << 5);
          }
          if (CONCAT44(local_2b0[1],local_2b0[0]) < 0x7ffffffe0) {
            local_4f0 = CONCAT44(local_2b0[1],local_2b0[0]) >> 5;
          }
          else {
            local_4f0 = 0x3fffffff;
          }
          local_4e0 = lVar38;
        }
        puVar42 = (undefined8 *)(local_4e0 + (long)iVar20 * 0x20);
        *puVar42 = 0;
        puVar42[1] = 0;
        puVar42[2] = 0;
        puVar42[3] = uVar117;
        uVar68 = (ulong)(iVar19 + 1);
        iVar19 = *(int *)((long)__s + (ulong)uVar18 * 4);
        if (iVar19 < *(int *)((long)__s + (ulong)(uVar18 + 1) * 4)) {
          uVar118 = puVar42[2];
          uVar80 = 0;
          lVar45 = (long)iVar19;
          do {
            lVar30 = lVar45 + 1;
            auVar74 = *pauVar27;
            pfVar29 = pfVar26 + (ulong)(ushort)local_4d0[lVar45] * 4;
            auVar122._0_4_ = auVar74._0_4_ * *pfVar29;
            auVar122._4_4_ = auVar74._4_4_ * pfVar29[1];
            auVar122._8_4_ = auVar74._8_4_ * pfVar29[2];
            auVar122._12_4_ = auVar74._12_4_ * pfVar29[3];
            auVar103 = NEON_ext(auVar122,auVar122,8,1);
            fVar69 = auVar103._0_4_ + auVar74._12_4_;
            uVar106 = CONCAT44(-(auVar122._0_4_ + auVar122._4_4_ + fVar69),
                               -(auVar122._0_4_ + auVar122._4_4_ + fVar69));
            uVar118 = NEON_fmax(uVar118,uVar106,4);
            uVar80 = NEON_fmax(uVar80,uVar106,4);
            puVar42[2] = uVar118;
            *puVar42 = uVar80;
            lVar45 = lVar30;
          } while (lVar30 < *(int *)((long)__s + (ulong)(uVar18 + 1) * 4));
        }
        iVar19 = *(int *)((long)__s + (ulong)uVar21 * 4);
        local_4f8 = lVar38;
        if (iVar19 < *(int *)((long)__s + (ulong)(uVar21 + 1) * 4)) {
          uVar118 = puVar42[1];
          uVar80 = puVar42[2];
          lVar38 = (long)iVar19;
          do {
            lVar45 = lVar38 + 1;
            auVar74 = *pauVar25;
            pfVar29 = pfVar26 + (ulong)(ushort)local_4d0[lVar38] * 4;
            auVar87._0_4_ = auVar74._0_4_ * *pfVar29;
            auVar87._4_4_ = auVar74._4_4_ * pfVar29[1];
            auVar87._8_4_ = auVar74._8_4_ * pfVar29[2];
            auVar87._12_4_ = auVar74._12_4_ * pfVar29[3];
            auVar103 = NEON_ext(auVar87,auVar87,8,1);
            fVar69 = auVar103._0_4_ + auVar74._12_4_;
            uVar106 = CONCAT44(-(auVar87._0_4_ + auVar87._4_4_ + fVar69),
                               -(auVar87._0_4_ + auVar87._4_4_ + fVar69));
            uVar80 = NEON_fmax(uVar80,uVar106,4);
            uVar118 = NEON_fmax(uVar118,uVar106,4);
            puVar42[2] = uVar80;
            puVar42[1] = uVar118;
            lVar38 = lVar45;
          } while (lVar45 < *(int *)((long)__s + (ulong)(uVar21 + 1) * 4));
          uVar59 = (ulong)uVar22;
        }
        else {
          uVar59 = (ulong)uVar22;
        }
      }
LAB_001b7a4c:
      uVar40 = plVar65[6];
      iVar19 = FUN_001b6a64(param_2,plVar65);
      iVar20 = FUN_001b6a64(param_2,uVar40 & 0xfffffffffffffffc);
      if (iVar19 != iVar20) {
        uVar21 = FUN_001b6a64(param_2,plVar65);
        uVar22 = FUN_001b6a64(param_2,uVar40 & 0xfffffffffffffffc);
        uVar18 = uVar22;
        if (uVar21 <= uVar22) {
          uVar18 = uVar21;
          uVar21 = uVar22;
        }
        iVar19 = (int)uVar68;
        uVar22 = uVar21 & 0xffff | uVar18 << 0x10;
        if (0 < iVar19) {
          uVar40 = 0;
          do {
            if (*(uint *)(lVar66 + uVar40 * 4) == uVar22) {
              if ((int)uVar40 != -1) goto LAB_001b7d84;
              break;
            }
            uVar40 = uVar40 + 1;
          } while (uVar68 != uVar40);
        }
        *(uint *)(lVar66 + (long)iVar19 * 4) = uVar22;
        pauVar25 = (undefined1 (*) [16])FUN_001b69bc(param_2,uVar18);
        pauVar27 = (undefined1 (*) [16])FUN_001b69bc(param_2,uVar21);
        uVar33 = (uint)local_4f0;
        iVar20 = (int)uVar59;
        uVar22 = iVar20 + 1;
        if (iVar20 < (int)(uVar33 & 0x3fffffff)) {
          lVar38 = local_4f8;
        }
        else {
          if (0x3ffffffe < iVar20) {
            FUN_032bd0a8(uVar22);
          }
          uVar37 = (uVar33 & 0x3fffffff) << 1;
          if (0x3ffffffe < uVar37) {
            uVar37 = 0x3fffffff;
          }
          uVar4 = uVar22;
          if ((int)uVar22 <= (int)uVar37) {
            uVar4 = uVar37;
          }
          FUN_032bd100(uVar4,0x20,local_4f0,local_2b0);
          lVar38 = (**(code **)(*plVar39 + 0x10))
                             (plVar39,CONCAT44(local_2b0[1],local_2b0[0]),local_2b0);
          if (0 < iVar20) {
            uVar68 = uVar59 & 3;
            if (uVar59 - 1 < 3) {
              lVar45 = 0;
            }
            else {
              lVar45 = 0;
              puVar42 = (undefined8 *)(lVar38 + 0x40);
              puVar46 = (undefined8 *)(local_4e0 + 0x40);
              do {
                uVar118 = puVar46[-8];
                uVar80 = puVar46[-7];
                lVar45 = lVar45 + 4;
                uVar106 = puVar46[-5];
                puVar42[-6] = puVar46[-6];
                puVar42[-5] = uVar106;
                puVar42[-8] = uVar118;
                puVar42[-7] = uVar80;
                uVar118 = puVar46[-4];
                uVar80 = puVar46[-3];
                uVar106 = puVar46[-1];
                puVar42[-2] = puVar46[-2];
                puVar42[-1] = uVar106;
                puVar42[-4] = uVar118;
                puVar42[-3] = uVar80;
                uVar118 = *puVar46;
                uVar80 = puVar46[1];
                uVar106 = puVar46[3];
                puVar42[2] = puVar46[2];
                puVar42[3] = uVar106;
                *puVar42 = uVar118;
                puVar42[1] = uVar80;
                uVar118 = puVar46[4];
                uVar80 = puVar46[5];
                puVar2 = puVar46 + 6;
                uVar106 = puVar46[7];
                puVar46 = puVar46 + 0x10;
                puVar42[6] = *puVar2;
                puVar42[7] = uVar106;
                puVar42[4] = uVar118;
                puVar42[5] = uVar80;
                puVar42 = puVar42 + 0x10;
              } while (uVar59 - uVar68 != lVar45);
            }
            if (uVar68 != 0) {
              puVar42 = (undefined8 *)(local_4e0 + lVar45 * 0x20);
              puVar46 = (undefined8 *)(lVar38 + lVar45 * 0x20);
              do {
                uVar118 = *puVar42;
                uVar80 = puVar42[1];
                uVar68 = uVar68 - 1;
                puVar2 = puVar42 + 2;
                uVar106 = puVar42[3];
                puVar42 = puVar42 + 4;
                puVar46[2] = *puVar2;
                puVar46[3] = uVar106;
                *puVar46 = uVar118;
                puVar46[1] = uVar80;
                puVar46 = puVar46 + 4;
              } while (uVar68 != 0);
            }
          }
          if (-1 < (int)uVar33) {
            (**(code **)(*plVar39 + 0x18))(plVar39,local_4f8,(ulong)(uVar33 & 0x3fffffff) << 5);
          }
          if (CONCAT44(local_2b0[1],local_2b0[0]) < 0x7ffffffe0) {
            local_4f0 = CONCAT44(local_2b0[1],local_2b0[0]) >> 5;
          }
          else {
            local_4f0 = 0x3fffffff;
          }
          local_4e0 = lVar38;
        }
        puVar42 = (undefined8 *)(local_4e0 + (long)iVar20 * 0x20);
        *puVar42 = 0;
        puVar42[1] = 0;
        puVar42[2] = 0;
        puVar42[3] = uVar117;
        uVar68 = (ulong)(iVar19 + 1);
        iVar19 = *(int *)((long)__s + (ulong)uVar18 * 4);
        if (iVar19 < *(int *)((long)__s + (ulong)(uVar18 + 1) * 4)) {
          uVar118 = puVar42[2];
          uVar80 = 0;
          lVar45 = (long)iVar19;
          do {
            lVar30 = lVar45 + 1;
            auVar74 = *pauVar27;
            pfVar29 = pfVar26 + (ulong)(ushort)local_4d0[lVar45] * 4;
            auVar88._0_4_ = auVar74._0_4_ * *pfVar29;
            auVar88._4_4_ = auVar74._4_4_ * pfVar29[1];
            auVar88._8_4_ = auVar74._8_4_ * pfVar29[2];
            auVar88._12_4_ = auVar74._12_4_ * pfVar29[3];
            auVar103 = NEON_ext(auVar88,auVar88,8,1);
            fVar69 = auVar103._0_4_ + auVar74._12_4_;
            uVar106 = CONCAT44(-(auVar88._0_4_ + auVar88._4_4_ + fVar69),
                               -(auVar88._0_4_ + auVar88._4_4_ + fVar69));
            uVar118 = NEON_fmax(uVar118,uVar106,4);
            uVar80 = NEON_fmax(uVar80,uVar106,4);
            puVar42[2] = uVar118;
            *puVar42 = uVar80;
            lVar45 = lVar30;
          } while (lVar30 < *(int *)((long)__s + (ulong)(uVar18 + 1) * 4));
        }
        iVar19 = *(int *)((long)__s + (ulong)uVar21 * 4);
        local_4f8 = lVar38;
        if (iVar19 < *(int *)((long)__s + (ulong)(uVar21 + 1) * 4)) {
          uVar118 = puVar42[1];
          uVar80 = puVar42[2];
          lVar38 = (long)iVar19;
          do {
            lVar45 = lVar38 + 1;
            auVar74 = *pauVar25;
            pfVar29 = pfVar26 + (ulong)(ushort)local_4d0[lVar38] * 4;
            auVar89._0_4_ = auVar74._0_4_ * *pfVar29;
            auVar89._4_4_ = auVar74._4_4_ * pfVar29[1];
            auVar89._8_4_ = auVar74._8_4_ * pfVar29[2];
            auVar89._12_4_ = auVar74._12_4_ * pfVar29[3];
            auVar103 = NEON_ext(auVar89,auVar89,8,1);
            fVar69 = auVar103._0_4_ + auVar74._12_4_;
            uVar106 = CONCAT44(-(auVar89._0_4_ + auVar89._4_4_ + fVar69),
                               -(auVar89._0_4_ + auVar89._4_4_ + fVar69));
            uVar80 = NEON_fmax(uVar80,uVar106,4);
            uVar118 = NEON_fmax(uVar118,uVar106,4);
            puVar42[2] = uVar80;
            puVar42[1] = uVar118;
            lVar38 = lVar45;
          } while (lVar45 < *(int *)((long)__s + (ulong)(uVar21 + 1) * 4));
          uVar59 = (ulong)uVar22;
        }
        else {
          uVar59 = (ulong)uVar22;
        }
      }
LAB_001b7d84:
      uVar40 = plVar65[7];
      iVar19 = FUN_001b6a64(param_2,plVar65);
      iVar20 = FUN_001b6a64(param_2,uVar40 & 0xfffffffffffffffc);
      if (iVar19 == iVar20) {
        plVar65 = (long *)*plVar65;
joined_r0x001b7e24:
        if (plVar65 == (long *)0x0) break;
        goto LAB_001b7710;
      }
      uVar21 = FUN_001b6a64(param_2,plVar65);
      uVar22 = FUN_001b6a64(param_2,uVar40 & 0xfffffffffffffffc);
      uVar18 = uVar22;
      if (uVar21 <= uVar22) {
        uVar18 = uVar21;
        uVar21 = uVar22;
      }
      iVar19 = (int)uVar68;
      uVar22 = uVar21 & 0xffff | uVar18 << 0x10;
      if (0 < iVar19) {
        uVar40 = 0;
        do {
          if (*(uint *)(lVar66 + uVar40 * 4) == uVar22) {
            if ((int)uVar40 != -1) {
              plVar65 = (long *)*plVar65;
              goto joined_r0x001b7e24;
            }
            break;
          }
          uVar40 = uVar40 + 1;
        } while (uVar68 != uVar40);
      }
      *(uint *)(lVar66 + (long)iVar19 * 4) = uVar22;
      pauVar25 = (undefined1 (*) [16])FUN_001b69bc(param_2,uVar18);
      pauVar27 = (undefined1 (*) [16])FUN_001b69bc(param_2,uVar21);
      uVar33 = (uint)local_4f0;
      iVar20 = (int)uVar59;
      uVar22 = iVar20 + 1;
      if (iVar20 < (int)(uVar33 & 0x3fffffff)) {
        lVar38 = local_4f8;
      }
      else {
        if (0x3ffffffe < iVar20) {
          FUN_032bd0a8(uVar22);
        }
        uVar37 = (uVar33 & 0x3fffffff) << 1;
        if (0x3ffffffe < uVar37) {
          uVar37 = 0x3fffffff;
        }
        uVar4 = uVar22;
        if ((int)uVar22 <= (int)uVar37) {
          uVar4 = uVar37;
        }
        FUN_032bd100(uVar4,0x20,local_4f0,local_2b0);
        lVar38 = (**(code **)(*plVar39 + 0x10))
                           (plVar39,CONCAT44(local_2b0[1],local_2b0[0]),local_2b0);
        if (0 < iVar20) {
          uVar68 = uVar59 & 3;
          if (uVar59 - 1 < 3) {
            lVar45 = 0;
          }
          else {
            lVar45 = 0;
            puVar42 = (undefined8 *)(lVar38 + 0x40);
            puVar46 = (undefined8 *)(local_4e0 + 0x40);
            do {
              uVar118 = puVar46[-8];
              uVar80 = puVar46[-7];
              lVar45 = lVar45 + 4;
              uVar106 = puVar46[-5];
              puVar42[-6] = puVar46[-6];
              puVar42[-5] = uVar106;
              puVar42[-8] = uVar118;
              puVar42[-7] = uVar80;
              uVar118 = puVar46[-4];
              uVar80 = puVar46[-3];
              uVar106 = puVar46[-1];
              puVar42[-2] = puVar46[-2];
              puVar42[-1] = uVar106;
              puVar42[-4] = uVar118;
              puVar42[-3] = uVar80;
              uVar118 = *puVar46;
              uVar80 = puVar46[1];
              uVar106 = puVar46[3];
              puVar42[2] = puVar46[2];
              puVar42[3] = uVar106;
              *puVar42 = uVar118;
              puVar42[1] = uVar80;
              uVar118 = puVar46[4];
              uVar80 = puVar46[5];
              puVar2 = puVar46 + 6;
              uVar106 = puVar46[7];
              puVar46 = puVar46 + 0x10;
              puVar42[6] = *puVar2;
              puVar42[7] = uVar106;
              puVar42[4] = uVar118;
              puVar42[5] = uVar80;
              puVar42 = puVar42 + 0x10;
            } while (uVar59 - uVar68 != lVar45);
          }
          if (uVar68 != 0) {
            puVar42 = (undefined8 *)(local_4e0 + lVar45 * 0x20);
            puVar46 = (undefined8 *)(lVar38 + lVar45 * 0x20);
            do {
              uVar118 = *puVar42;
              uVar80 = puVar42[1];
              uVar68 = uVar68 - 1;
              puVar2 = puVar42 + 2;
              uVar106 = puVar42[3];
              puVar42 = puVar42 + 4;
              puVar46[2] = *puVar2;
              puVar46[3] = uVar106;
              *puVar46 = uVar118;
              puVar46[1] = uVar80;
              puVar46 = puVar46 + 4;
            } while (uVar68 != 0);
          }
        }
        if (-1 < (int)uVar33) {
          (**(code **)(*plVar39 + 0x18))(plVar39,local_4f8,(ulong)(uVar33 & 0x3fffffff) << 5);
        }
        if (CONCAT44(local_2b0[1],local_2b0[0]) < 0x7ffffffe0) {
          local_4f0 = CONCAT44(local_2b0[1],local_2b0[0]) >> 5;
        }
        else {
          local_4f0 = 0x3fffffff;
        }
        local_4e0 = lVar38;
      }
      puVar42 = (undefined8 *)(local_4e0 + (long)iVar20 * 0x20);
      *puVar42 = 0;
      puVar42[1] = 0;
      puVar42[2] = 0;
      puVar42[3] = uVar117;
      uVar68 = (ulong)(iVar19 + 1);
      iVar19 = *(int *)((long)__s + (ulong)uVar18 * 4);
      if (iVar19 < *(int *)((long)__s + (ulong)(uVar18 + 1) * 4)) {
        uVar118 = puVar42[2];
        uVar80 = 0;
        lVar45 = (long)iVar19;
        do {
          lVar30 = lVar45 + 1;
          auVar74 = *pauVar27;
          pfVar29 = pfVar26 + (ulong)(ushort)local_4d0[lVar45] * 4;
          auVar90._0_4_ = auVar74._0_4_ * *pfVar29;
          auVar90._4_4_ = auVar74._4_4_ * pfVar29[1];
          auVar90._8_4_ = auVar74._8_4_ * pfVar29[2];
          auVar90._12_4_ = auVar74._12_4_ * pfVar29[3];
          auVar103 = NEON_ext(auVar90,auVar90,8,1);
          fVar69 = auVar103._0_4_ + auVar74._12_4_;
          uVar106 = CONCAT44(-(auVar90._0_4_ + auVar90._4_4_ + fVar69),
                             -(auVar90._0_4_ + auVar90._4_4_ + fVar69));
          uVar118 = NEON_fmax(uVar118,uVar106,4);
          uVar80 = NEON_fmax(uVar80,uVar106,4);
          puVar42[2] = uVar118;
          *puVar42 = uVar80;
          lVar45 = lVar30;
        } while (lVar30 < *(int *)((long)__s + (ulong)(uVar18 + 1) * 4));
      }
      iVar19 = *(int *)((long)__s + (ulong)uVar21 * 4);
      if (iVar19 < *(int *)((long)__s + (ulong)(uVar21 + 1) * 4)) {
        uVar118 = puVar42[1];
        uVar80 = puVar42[2];
        lVar45 = (long)iVar19;
        do {
          lVar30 = lVar45 + 1;
          auVar74 = *pauVar25;
          pfVar29 = pfVar26 + (ulong)(ushort)local_4d0[lVar45] * 4;
          auVar91._0_4_ = auVar74._0_4_ * *pfVar29;
          auVar91._4_4_ = auVar74._4_4_ * pfVar29[1];
          auVar91._8_4_ = auVar74._8_4_ * pfVar29[2];
          auVar91._12_4_ = auVar74._12_4_ * pfVar29[3];
          auVar103 = NEON_ext(auVar91,auVar91,8,1);
          fVar69 = auVar103._0_4_ + auVar74._12_4_;
          uVar106 = CONCAT44(-(auVar91._0_4_ + auVar91._4_4_ + fVar69),
                             -(auVar91._0_4_ + auVar91._4_4_ + fVar69));
          uVar80 = NEON_fmax(uVar80,uVar106,4);
          uVar118 = NEON_fmax(uVar118,uVar106,4);
          puVar42[2] = uVar80;
          puVar42[1] = uVar118;
          lVar45 = lVar30;
        } while (lVar30 < *(int *)((long)__s + (ulong)(uVar21 + 1) * 4));
        plVar65 = (long *)*plVar65;
      }
      else {
        plVar65 = (long *)*plVar65;
      }
      uVar59 = (ulong)uVar22;
      local_4f8 = lVar38;
    } while (plVar65 != (long *)0x0);
  }
  uVar117 = *(undefined8 *)(PTR_DAT_04372370 + 0x70);
  if ((__s != (void *)0x0) && (-1 < (int)fVar121)) {
    FUN_032cf244(uVar67,__s,4,(uint)fVar121 & 0x3fffffff);
  }
  uVar40 = local_4c8;
  fVar121 = (float)uVar114 * fVar72 * (float)uVar79 * fVar71 * 4.8359756;
  uVar18 = local_4c8._4_4_;
  local_4c8 = (ulong)local_4c8._4_4_ << 0x20;
  if ((-1 < (long)uVar40) && (local_4d0 != (uint *)0x0)) {
    FUN_032cf244(uVar67,local_4d0,4,uVar18 & 0x3fffffff);
  }
  puVar14 = PTR_DAT_04372370;
  uVar79 = NEON_fmin(CONCAT44((float)((ulong)uVar117 >> 0x20) * param_1,(float)uVar117 * param_1),
                     CONCAT44((float)(uVar114 >> 0x20) *
                              fVar77 * (float)((ulong)uVar79 >> 0x20) * fVar71 * 4.8359756,fVar121),
                     4);
  pauVar1 = (undefined1 (*) [12])(PTR_DAT_04372370 + 0x240);
  uVar117 = *(undefined8 *)(PTR_DAT_04372370 + 0x248);
  uVar40 = *(ulong *)*pauVar1;
  auVar12 = *pauVar1;
  auVar11 = *pauVar1;
  uVar114 = uVar40;
  if (0 < (int)uVar68) {
    uVar47 = *(ulong *)(PTR_DAT_04372370 + 0x250);
    uVar43 = 0;
    fVar71 = *(float *)(PTR_DAT_04372370 + 0x260);
    puVar28 = (ulong *)(local_4e0 + 0x18);
    iVar19 = -1;
    uVar85 = *(ulong *)(local_4e0 + 0x10);
    if ((float)uVar85 <= fVar121) goto LAB_001b8288;
    do {
      *puVar28 = uVar47;
      puVar51 = puVar28;
      uVar85 = uVar114;
      uVar55 = uVar47;
      while( true ) {
        uVar114 = uVar55;
        iVar20 = (int)uVar43;
        if ((float)uVar85 <= (float)uVar55) {
          uVar114 = uVar85;
          iVar20 = iVar19;
        }
        iVar19 = iVar20;
        uVar43 = uVar43 + 1;
        puVar28 = puVar51 + 4;
        if (uVar68 == uVar43) goto LAB_001b82e4;
        uVar85 = puVar51[3];
        if (fVar121 < (float)uVar85) break;
LAB_001b8288:
        uVar18 = *(uint *)(lVar66 + uVar43 * 4);
        pfVar29 = pfVar24 + (ulong)(uVar18 & 0xffff) * 4;
        pfVar35 = (float *)((long)pfVar24 + ((ulong)(uVar18 >> 0xc) & 0xffff0));
        fVar72 = *pfVar35 * *pfVar29 + pfVar35[1] * pfVar29[1] + pfVar35[2] * pfVar29[2];
        uVar118 = CONCAT44(*pfVar35 * *pfVar29 + pfVar35[1] * pfVar29[1] + pfVar35[2] * pfVar29[2],
                           fVar72);
        if (fVar72 <= fVar71) break;
        uVar80 = NEON_frecpe(uVar118,4);
        uVar106 = NEON_frecps(uVar118,uVar80,4);
        fVar72 = (float)uVar80 * (float)uVar106;
        fVar77 = (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar106 >> 0x20);
        uVar118 = NEON_frecps(uVar118,CONCAT44(fVar77,fVar72),4);
        uVar55 = CONCAT44((float)(uVar85 >> 0x20) * fVar77 * (float)((ulong)uVar118 >> 0x20),
                          (float)uVar85 * fVar72 * (float)uVar118);
        *puVar28 = uVar55;
        puVar51 = puVar28;
        uVar85 = uVar114;
      }
    } while( true );
  }
  iVar19 = -1;
LAB_001b82e4:
  auVar81._8_8_ = 0;
  auVar81._0_8_ = uVar114;
  uVar118 = 0;
  fVar71 = (float)uVar79;
  if ((float)uVar114 < fVar71) {
    uVar115 = *(undefined8 *)(puVar14 + 0x60);
    fVar77 = *(float *)(puVar14 + 0x260);
    fVar72 = (float)(uVar40 >> 0x20);
    uVar106 = CONCAT44(-fVar72,-(float)uVar40);
    uVar80 = *(undefined8 *)(puVar14 + 0x250);
    do {
      while( true ) {
        uVar18 = *(uint *)(lVar66 + (long)iVar19 * 4);
        puVar42 = (undefined8 *)(local_4e0 + (long)iVar19 * 0x20);
        uVar21 = uVar18 >> 0x10;
        uVar114 = (ulong)uVar21;
        fVar84 = (float)*puVar42;
        fVar69 = fVar84 + (float)puVar42[1];
        fVar97 = (float)((ulong)*puVar42 >> 0x20);
        fVar99 = fVar97 + (float)((ulong)puVar42[1] >> 0x20);
        uVar108 = CONCAT44(fVar99,fVar69);
        uVar102 = NEON_frecpe(uVar108,4);
        uVar107 = NEON_frecps(uVar108,uVar102,4);
        fVar101 = (float)uVar102 * (float)uVar107;
        fVar104 = (float)((ulong)uVar102 >> 0x20) * (float)((ulong)uVar107 >> 0x20);
        uVar108 = NEON_frecps(uVar108,CONCAT44(fVar104,fVar101),4);
        iVar19 = -(uint)(fVar69 == 0.0);
        iVar20 = -(uint)(fVar99 == 0.0);
        uVar43 = CONCAT44(fVar104 * (float)((ulong)uVar108 >> 0x20),fVar101 * (float)uVar108) &
                 CONCAT17(~(byte)((uint)iVar20 >> 0x18),
                          CONCAT16(~(byte)((uint)iVar20 >> 0x10),
                                   CONCAT15(~(byte)((uint)iVar20 >> 8),
                                            CONCAT14(~(byte)iVar20,
                                                     CONCAT13(~(byte)((uint)iVar19 >> 0x18),
                                                              CONCAT12(~(byte)((uint)iVar19 >> 0x10)
                                                                       ,CONCAT11(~(byte)((uint)
                                                  iVar19 >> 8),~(byte)iVar19)))))));
        fVar84 = fVar84 * (float)uVar43;
        fVar97 = fVar97 * (float)(uVar43 >> 0x20);
        pfVar29 = pfVar24 + uVar114 * 4;
        fVar69 = *pfVar29;
        fVar99 = pfVar29[1];
        fVar101 = pfVar29[2];
        fVar104 = pfVar29[3];
        fVar112 = (float)uVar115;
        fVar98 = fVar112 - fVar84;
        fVar116 = (float)((ulong)uVar115 >> 0x20);
        fVar100 = fVar116 - fVar97;
        uVar43 = (ulong)uVar18 & 0xffff;
        pfVar29 = pfVar24 + uVar114 * 4;
        pfVar29[2] = fVar101 * fVar84;
        pfVar29[3] = fVar104 * fVar97;
        *pfVar29 = fVar69 * fVar84;
        pfVar29[1] = fVar99 * fVar97;
        pfVar29 = pfVar24 + uVar43 * 4;
        fVar69 = fVar69 * fVar84 + *pfVar29 * fVar98;
        fVar99 = fVar99 * fVar97 + pfVar29[1] * fVar100;
        fVar101 = fVar101 * fVar84 + pfVar29[2] * fVar98;
        uVar108 = CONCAT44(fVar69 * fVar69 + fVar99 * fVar99 + fVar101 * fVar101,
                           fVar69 * fVar69 + fVar99 * fVar99 + fVar101 * fVar101);
        uVar102 = NEON_frsqrte(uVar108,4);
        fVar84 = (float)uVar102;
        fVar98 = (float)((ulong)uVar102 >> 0x20);
        uVar102 = NEON_frsqrts(uVar108,CONCAT44(fVar98 * fVar98,fVar84 * fVar84),4);
        fVar84 = fVar84 * (float)uVar102;
        fVar98 = fVar98 * (float)((ulong)uVar102 >> 0x20);
        uVar108 = NEON_frsqrts(uVar108,CONCAT44(fVar98 * fVar98,fVar84 * fVar84),4);
        fVar84 = (float)uVar108 * fVar84;
        fVar98 = (float)((ulong)uVar108 >> 0x20) * fVar98;
        fVar69 = fVar69 * fVar84;
        fVar99 = fVar99 * fVar98;
        auVar86._0_8_ = CONCAT44(fVar99,fVar69);
        auVar86._8_4_ = fVar101 * fVar84;
        auVar92._12_4_ = (fVar104 * fVar97 + pfVar29[3] * fVar100) * fVar98;
        auVar92._0_12_ = auVar86;
        *(long *)(pfVar24 + uVar114 * 4 + 2) = auVar92._8_8_;
        *(undefined8 *)(pfVar24 + uVar114 * 4) = auVar86._0_8_;
        uVar108 = uVar106;
        if (0 < (int)fVar70) {
          lVar38 = 0;
          if (fVar70 != 1.4013e-45) {
            do {
              pfVar29 = pfVar26 + lVar38 * 4;
              lVar38 = lVar38 + 2;
              uVar108 = NEON_fmax(uVar108,CONCAT44(fVar69 * *pfVar29 + fVar99 * pfVar29[1] +
                                                   auVar86._8_4_ * pfVar29[2],
                                                   fVar69 * *pfVar29 + fVar99 * pfVar29[1] +
                                                   auVar86._8_4_ * pfVar29[2]),4);
              uVar108 = NEON_fmax(uVar108,CONCAT44(fVar69 * pfVar29[4] + fVar99 * pfVar29[5] +
                                                   auVar86._8_4_ * pfVar29[6],
                                                   fVar69 * pfVar29[4] + fVar99 * pfVar29[5] +
                                                   auVar86._8_4_ * pfVar29[6]),4);
            } while (uVar58 - (uVar58 & 1) != lVar38);
          }
          if (((uint)fVar70 & 1) != 0) {
            pfVar29 = pfVar26 + lVar38 * 4;
            uVar108 = NEON_fmax(uVar108,CONCAT44(fVar69 * *pfVar29 + fVar99 * pfVar29[1] +
                                                 auVar86._8_4_ * pfVar29[2],
                                                 fVar69 * *pfVar29 + fVar99 * pfVar29[1] +
                                                 auVar86._8_4_ * pfVar29[2]),4);
          }
        }
        uVar108 = NEON_fmin(uVar108,CONCAT44(-auVar92._12_4_,-auVar92._12_4_),4);
        auVar93._12_4_ = -(float)uVar108;
        auVar93._0_12_ = auVar86;
        *(long *)(pfVar24 + uVar114 * 4 + 2) = auVar93._8_8_;
        *(undefined8 *)(pfVar24 + uVar114 * 4) = auVar86._0_8_;
        local_4e8[uVar43] = '\x01';
        *(undefined1 *)((long)local_560 + uVar114) = 1;
        puVar42[2] = uVar40;
        if ((int)uVar68 < 1) break;
        uVar114 = (ulong)(int)uVar68;
        do {
          while( true ) {
            uVar114 = uVar114 - 1;
            uVar33 = *(uint *)(lVar66 + uVar114 * 4);
            uVar22 = uVar33 & 0xffff;
            if (uVar33 >> 0x10 == uVar21 || uVar22 == uVar21) break;
            if (uVar33 >> 0x10 == (uint)uVar43) {
              uVar33 = uVar22 | uVar18 & 0xffff0000;
LAB_001b84d0:
              *(uint *)(lVar66 + uVar114 * 4) = uVar33;
              break;
            }
            if (uVar22 == (uint)uVar43) {
              uVar33 = uVar33 & 0xffff0000 | uVar21;
              goto LAB_001b84d0;
            }
joined_r0x001b8564:
            if ((long)uVar114 < 1) goto LAB_001b8670;
          }
          uVar22 = (int)uVar68 - 1;
          uVar47 = (ulong)uVar22;
          if (0 < (int)uVar68) {
            uVar85 = (long)(int)uVar22;
            do {
              if (*(uint *)(lVar66 + uVar85 * 4) == uVar33) goto LAB_001b84fc;
              bVar15 = 0 < (long)uVar85;
              uVar85 = uVar85 - 1;
            } while (bVar15);
          }
          uVar85 = 0xffffffff;
LAB_001b84fc:
          if (uVar114 != (uVar85 & 0xffffffff)) {
            puVar42 = (undefined8 *)(local_4e0 + uVar114 * 0x20);
            puVar46 = (undefined8 *)(local_4e0 + (long)(int)uVar85 * 0x20);
            fVar101 = (float)puVar42[3];
            fVar69 = (float)puVar46[2] + fVar101;
            fVar104 = (float)((ulong)puVar42[3] >> 0x20);
            fVar99 = (float)((ulong)puVar46[2] >> 0x20) + fVar104;
            *puVar46 = CONCAT44(fVar104 + (float)((ulong)*puVar46 >> 0x20),fVar101 + (float)*puVar46
                               );
            puVar46[1] = CONCAT44(fVar104 + (float)((ulong)puVar46[1] >> 0x20),
                                  fVar101 + (float)puVar46[1]);
            puVar46[2] = CONCAT44(fVar99,fVar69);
            if (fVar121 < fVar69) {
LAB_001b85d0:
              puVar46[3] = uVar80;
            }
            else {
              uVar33 = *(uint *)(lVar66 + (long)(int)uVar85 * 4);
              pfVar29 = pfVar24 + (ulong)(uVar33 & 0xffff) * 4;
              pfVar35 = (float *)((long)pfVar24 + ((ulong)(uVar33 >> 0xc) & 0xffff0));
              fVar101 = *pfVar35 * *pfVar29 + pfVar35[1] * pfVar29[1] + pfVar35[2] * pfVar29[2];
              uVar108 = CONCAT44(*pfVar35 * *pfVar29 + pfVar35[1] * pfVar29[1] +
                                 pfVar35[2] * pfVar29[2],fVar101);
              if (fVar101 <= fVar77) goto LAB_001b85d0;
              uVar102 = NEON_frecpe(uVar108,4);
              uVar107 = NEON_frecps(uVar108,uVar102,4);
              fVar101 = (float)uVar102 * (float)uVar107;
              fVar104 = (float)((ulong)uVar102 >> 0x20) * (float)((ulong)uVar107 >> 0x20);
              uVar108 = NEON_frecps(uVar108,CONCAT44(fVar104,fVar101),4);
              puVar46[3] = CONCAT44(fVar99 * fVar104 * (float)((ulong)uVar108 >> 0x20),
                                    fVar69 * fVar101 * (float)uVar108);
            }
            if (uVar114 != uVar47) {
              *(undefined4 *)(lVar66 + uVar114 * 4) =
                   *(undefined4 *)(lVar66 + (long)(int)uVar22 * 4);
            }
            uVar22 = (int)uVar59 - 1;
            uVar59 = (ulong)uVar22;
            uVar68 = uVar47;
            if (uVar114 != uVar59) {
              puVar46 = (undefined8 *)(local_4e0 + (long)(int)uVar22 * 0x20);
              uVar108 = *puVar46;
              uVar102 = puVar46[1];
              uVar107 = puVar46[3];
              puVar42[2] = puVar46[2];
              puVar42[3] = uVar107;
              *puVar42 = uVar108;
              puVar42[1] = uVar102;
            }
            goto joined_r0x001b8564;
          }
          puVar42 = (undefined8 *)(local_4e0 + uVar114 * 0x20);
          fVar69 = auVar81._0_4_;
          fVar99 = auVar81._4_4_;
          fVar101 = fVar69 + (float)puVar42[2];
          fVar104 = fVar99 + (float)((ulong)puVar42[2] >> 0x20);
          *puVar42 = CONCAT44(fVar99 + (float)((ulong)*puVar42 >> 0x20),fVar69 + (float)*puVar42);
          puVar42[1] = CONCAT44(fVar99 + (float)((ulong)puVar42[1] >> 0x20),
                                fVar69 + (float)puVar42[1]);
          puVar42[2] = CONCAT44(fVar104,fVar101);
          if (fVar101 <= fVar121) {
            uVar22 = *(uint *)(lVar66 + uVar114 * 4);
            pfVar29 = pfVar24 + (ulong)(uVar22 & 0xffff) * 4;
            pfVar35 = (float *)((long)pfVar24 + ((ulong)(uVar22 >> 0xc) & 0xffff0));
            fVar69 = *pfVar35 * *pfVar29 + pfVar35[1] * pfVar29[1] + pfVar35[2] * pfVar29[2];
            uVar108 = CONCAT44(*pfVar35 * *pfVar29 + pfVar35[1] * pfVar29[1] +
                               pfVar35[2] * pfVar29[2],fVar69);
            if (fVar77 < fVar69) {
              uVar102 = NEON_frecpe(uVar108,4);
              uVar107 = NEON_frecps(uVar108,uVar102,4);
              fVar69 = (float)uVar102 * (float)uVar107;
              fVar99 = (float)((ulong)uVar102 >> 0x20) * (float)((ulong)uVar107 >> 0x20);
              uVar108 = NEON_frecps(uVar108,CONCAT44(fVar99,fVar69),4);
              puVar42[3] = CONCAT44(fVar104 * fVar99 * (float)((ulong)uVar108 >> 0x20),
                                    fVar101 * fVar69 * (float)uVar108);
            }
            else {
              puVar42[3] = uVar80;
            }
            goto joined_r0x001b8564;
          }
          puVar42[3] = uVar80;
        } while (0 < (long)uVar114);
LAB_001b8670:
        uVar114 = *(ulong *)(local_4e0 + 0x18);
        iVar20 = (int)uVar68;
        auVar81._8_8_ = 0;
        auVar81._0_8_ = uVar114;
        if (iVar20 < 2) {
          iVar19 = 0;
          fVar69 = (float)uVar114;
        }
        else {
          if (iVar20 == 2) {
            iVar19 = 0;
            lVar38 = 1;
LAB_001b8714:
            uVar43 = *(ulong *)(local_4e0 + lVar38 * 0x20 + 0x18);
            iVar20 = (int)lVar38;
            if (auVar81._0_4_ <= (float)uVar43) {
              uVar43 = uVar114;
              iVar20 = iVar19;
            }
            iVar19 = iVar20;
            uVar114 = uVar43;
          }
          else {
            iVar19 = 0;
            lVar38 = 1;
            puVar28 = (ulong *)(local_4e0 + 0x58);
            uVar43 = uVar114;
            do {
              uVar114 = puVar28[-4];
              fVar69 = auVar81._0_4_;
              fVar99 = (float)uVar114;
              uVar85 = auVar81._0_8_ ^
                       (auVar81._0_8_ ^ uVar114) &
                       CONCAT44(-(uint)(fVar99 < fVar69),-(uint)(fVar99 < fVar69));
              uVar47 = *puVar28;
              iVar113 = -(uint)((float)uVar47 < (float)uVar85);
              if (fVar69 <= fVar99) {
                uVar114 = uVar43;
              }
              iVar7 = (int)lVar38;
              if (fVar69 <= fVar99) {
                iVar7 = iVar19;
              }
              if ((float)uVar47 < (float)uVar85) {
                uVar114 = uVar47;
                iVar19 = (int)lVar38 + 1;
              }
              else {
                iVar19 = iVar7;
              }
              lVar38 = lVar38 + 2;
              auVar81._0_8_ = uVar85 ^ (uVar85 ^ uVar47) & CONCAT44(iVar113,iVar113);
              auVar81._8_8_ = 0;
              puVar28 = puVar28 + 8;
              uVar43 = uVar114;
            } while (uVar68 - ((ulong)(iVar20 - 1U) & 1) != lVar38);
            if ((iVar20 - 1U & 1) != 0) goto LAB_001b8714;
          }
          auVar81._8_8_ = 0;
          auVar81._0_8_ = uVar114;
          fVar69 = (float)uVar114;
        }
        if (fVar71 <= fVar69) goto LAB_001b8738;
      }
      auVar81._0_8_ = *(ulong *)(local_4e0 + 0x18);
      auVar81._8_8_ = 0;
      iVar19 = 0;
    } while ((float)auVar81._0_8_ < fVar71);
LAB_001b8738:
    fVar121 = -(float)uVar40;
    fVar72 = -fVar72;
    fVar69 = -(float)uVar117;
    fVar99 = (float)((ulong)uVar117 >> 0x20);
    if ((int)fVar17 < 1) {
      local_610 = (float *)0x0;
      pfVar29 = (float *)0x0;
      local_5ec = -0.0;
      plVar65 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
      local_2b0[0] = fVar17;
    }
    else {
      local_2b0[0] = fVar17;
      pfVar29 = (float *)FUN_032cf190(uVar67,0x20,local_2b0);
      uVar117 = CONCAT44(fVar72,fVar121);
      auVar9._8_4_ = fVar69;
      auVar9._0_8_ = uVar117;
      auVar9._12_4_ = -fVar99;
      auVar10._12_4_ = fVar99;
      auVar10._0_12_ = auVar11;
      uVar18 = (uint)fVar17 & 3;
      uVar80 = auVar11._0_8_;
      uVar106 = auVar10._8_8_;
      uVar115 = auVar9._8_8_;
      pfVar35 = pfVar29;
      if (2 < uVar56) {
        iVar19 = ((uint)fVar17 & 3) - (int)fVar17;
        pfVar48 = pfVar29;
        do {
          pfVar35 = pfVar48 + 0x20;
          iVar19 = iVar19 + 4;
          *(undefined8 *)(pfVar48 + 2) = uVar106;
          *(undefined8 *)pfVar48 = uVar80;
          *(undefined8 *)(pfVar48 + 6) = uVar115;
          *(undefined8 *)(pfVar48 + 4) = uVar117;
          *(undefined8 *)(pfVar48 + 10) = uVar106;
          *(undefined8 *)(pfVar48 + 8) = uVar80;
          *(undefined8 *)(pfVar48 + 0xe) = uVar115;
          *(undefined8 *)(pfVar48 + 0xc) = uVar117;
          *(undefined8 *)(pfVar48 + 0x12) = uVar106;
          *(undefined8 *)(pfVar48 + 0x10) = uVar80;
          *(undefined8 *)(pfVar48 + 0x16) = uVar115;
          *(undefined8 *)(pfVar48 + 0x14) = uVar117;
          *(undefined8 *)(pfVar48 + 0x1a) = uVar106;
          *(undefined8 *)(pfVar48 + 0x18) = uVar80;
          *(undefined8 *)(pfVar48 + 0x1e) = uVar115;
          *(undefined8 *)(pfVar48 + 0x1c) = uVar117;
          pfVar48 = pfVar35;
        } while (iVar19 != 0);
      }
      for (; uVar18 != 0; uVar18 = uVar18 - 1) {
        *(undefined8 *)(pfVar35 + 2) = uVar106;
        *(undefined8 *)pfVar35 = uVar80;
        *(undefined8 *)(pfVar35 + 6) = uVar115;
        *(undefined8 *)(pfVar35 + 4) = uVar117;
        pfVar35 = pfVar35 + 8;
      }
      plVar65 = *(long **)(*(long *)(param_2 + 0x18) + 0x70);
      local_610 = pfVar29;
      local_5ec = local_2b0[0];
    }
    for (; plVar65 != (long *)0x0; plVar65 = (long *)*plVar65) {
      iVar19 = FUN_001b6a64(param_2,plVar65);
      lVar38 = plVar65[2];
      pauVar25 = (undefined1 (*) [16])(pfVar29 + (long)iVar19 * 8);
      auVar74 = pauVar25[1];
      auVar103 = NEON_fmin(*pauVar25,*(undefined1 (*) [16])(lVar38 + 0x10),4);
      *(long *)(*pauVar25 + 8) = auVar103._8_8_;
      *(long *)*pauVar25 = auVar103._0_8_;
      auVar82 = NEON_fmax(auVar74,*(undefined1 (*) [16])(lVar38 + 0x10),4);
      *(long *)(pauVar25[1] + 8) = auVar82._8_8_;
      *(long *)pauVar25[1] = auVar82._0_8_;
      lVar38 = plVar65[3];
      auVar74 = NEON_fmin(auVar103,*(undefined1 (*) [16])(lVar38 + 0x10),4);
      *(long *)(*pauVar25 + 8) = auVar74._8_8_;
      *(long *)*pauVar25 = auVar74._0_8_;
      auVar103 = NEON_fmax(auVar82,*(undefined1 (*) [16])(lVar38 + 0x10),4);
      *(long *)(pauVar25[1] + 8) = auVar103._8_8_;
      *(long *)pauVar25[1] = auVar103._0_8_;
      lVar38 = plVar65[4];
      auVar74 = NEON_fmin(auVar74,*(undefined1 (*) [16])(lVar38 + 0x10),4);
      *(long *)(*pauVar25 + 8) = auVar74._8_8_;
      *(long *)*pauVar25 = auVar74._0_8_;
      auVar74 = NEON_fmax(auVar103,*(undefined1 (*) [16])(lVar38 + 0x10),4);
      *(long *)(pauVar25[1] + 8) = auVar74._8_8_;
      *(long *)pauVar25[1] = auVar74._0_8_;
    }
    local_2b0[2] = auVar12._8_4_;
    local_2b0[0] = auVar12._0_4_;
    local_2b0[1] = auVar12._4_4_;
    local_2b0[3] = fVar99;
    fStack_298 = fVar69;
    fStack_294 = -fVar99;
    local_2a0._0_4_ = fVar121;
    local_2a0._4_4_ = fVar72;
    FUN_0333e0b0(pfVar26,fVar41,local_2b0);
    fVar104 = fStack_298;
    fVar101 = local_2a0._4_4_;
    fVar99 = (float)local_2a0;
    fVar69 = local_2b0[2];
    fVar72 = local_2b0[1];
    fVar121 = local_2b0[0];
    auVar75._4_4_ = local_2b0[1];
    auVar75._0_4_ = local_2b0[0];
    auVar75._8_4_ = local_2b0[2];
    auVar75._12_4_ = local_2b0[3];
    if (fVar17 == 0.0) {
      local_5d0 = 0;
      local_568 = *(long **)PTR_PTR_04372408;
      uVar56 = 0x80000000;
LAB_001b89e8:
      bVar15 = false;
      lVar38 = local_5d0;
      uVar18 = uVar56;
    }
    else {
      lVar38 = *(long *)(lVar23 + 0x38d490);
      if (lVar38 == 0) {
        lVar38 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar38;
        auVar75 = extraout_q0;
      }
      lVar38 = *(long *)(lVar38 + 8);
      if (*(ulong *)(lVar38 + 0x10) < uVar31) {
LAB_001b88ec:
        local_5d0 = FUN_032ce670();
        auVar75 = extraout_q0_00;
      }
      else {
        local_5d0 = *(long *)(lVar38 + 0x18);
        if (*(ulong *)(lVar38 + 0x20) < local_5d0 + uVar31) goto LAB_001b88ec;
        *(ulong *)(lVar38 + 0x18) = local_5d0 + uVar31;
      }
      uVar56 = (uint)fVar17 | 0x80000000;
      local_568 = *(long **)PTR_PTR_04372408;
      if ((int)fVar17 < 0x40000000) goto LAB_001b89e8;
      FUN_032bd0a8(fVar17);
      fVar84 = (float)(((uint)fVar17 & 0x3fffffff) << 1);
      if (0x3ffffffe < (uint)fVar84) {
        fVar84 = 1.9999999;
      }
      fVar97 = fVar17;
      if ((int)fVar17 <= (int)fVar84) {
        fVar97 = fVar84;
      }
      FUN_032bd100(fVar97,0x10,uVar56,local_2b0);
      lVar38 = (**(code **)(*local_568 + 0x10))
                         (local_568,CONCAT44(local_2b0[1],local_2b0[0]),local_2b0);
      if (CONCAT44(local_2b0[1],local_2b0[0]) < 0x3fffffff0) {
        uVar18 = (uint)(CONCAT44(local_2b0[1],local_2b0[0]) >> 4);
      }
      else {
        uVar18 = 0x3fffffff;
      }
      bVar15 = true;
      auVar75 = extraout_q0_01;
    }
    local_2b0[0] = 0.0;
    local_2b0[1] = 0.0;
    local_2b0[2] = 0.0;
    local_2b0[3] = -0.0;
    fStack_298 = fVar17;
    if (fVar17 == 0.0) {
      local_2b0[0] = 0.0;
      local_2b0[1] = 0.0;
      local_2a0 = 0;
      lVar45 = local_2a0;
      fVar84 = local_2b0[2];
    }
    else {
      lVar45 = *(long *)(lVar23 + 0x38d490);
      if (lVar45 == 0) {
        lVar45 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar45;
        auVar75 = extraout_q0_02;
      }
      lVar30 = *(long *)(lVar45 + 8);
      if (*(ulong *)(lVar30 + 0x10) < uVar31) {
LAB_001b8a6c:
        lVar45 = FUN_032ce670();
        auVar75 = extraout_q0_03;
      }
      else {
        lVar45 = *(long *)(lVar30 + 0x18);
        if (*(ulong *)(lVar30 + 0x20) < lVar45 + uVar31) goto LAB_001b8a6c;
        *(ulong *)(lVar30 + 0x18) = lVar45 + uVar31;
      }
      local_2b0[0] = (float)lVar45;
      local_2b0[1] = (float)((ulong)lVar45 >> 0x20);
      fVar84 = local_2b0[2];
    }
    local_2b0[2] = fVar84;
    local_2b0[3] = (float)uVar56;
    local_2a0 = lVar45;
    if (bVar15) {
      FUN_032bd0a8(fVar17);
      fVar97 = (float)(((uint)local_2b0[3] & 0x3fffffff) << 1);
      if (0x3ffffffe < (uint)fVar97) {
        fVar97 = 1.9999999;
      }
      fVar98 = fVar17;
      if ((int)fVar17 <= (int)fVar97) {
        fVar98 = fVar97;
      }
      uVar117 = FUN_032bd1d4(local_568,fVar98,0x10,lVar45,fVar84,local_2b0 + 3);
      local_2b0[0] = (float)uVar117;
      local_2b0[1] = (float)((ulong)uVar117 >> 0x20);
      auVar75 = extraout_q0_04;
    }
    if (local_2b0[2] != fVar17) {
      local_2b0[2] = fVar17;
    }
    if (0 < (int)fVar17) {
      fVar121 = (fVar99 - fVar121) * (fVar99 - fVar121);
      fVar99 = (fVar101 - fVar72) * (fVar101 - fVar72);
      fVar69 = (fVar104 - fVar69) * (fVar104 - fVar69);
      fVar72 = fVar121 + fVar99 + fVar69;
      uVar117 = CONCAT44(fVar121 + fVar99 + fVar69,fVar72);
      uVar80 = NEON_frsqrte(uVar117,4);
      fVar121 = (float)uVar80;
      fVar69 = (float)((ulong)uVar80 >> 0x20);
      uVar80 = NEON_frsqrts(uVar117,CONCAT44(fVar69 * fVar69,fVar121 * fVar121),4);
      fVar121 = fVar121 * (float)uVar80;
      fVar69 = fVar69 * (float)((ulong)uVar80 >> 0x20);
      uVar117 = NEON_frsqrts(uVar117,CONCAT44(fVar69 * fVar69,fVar121 * fVar121),4);
      iVar19 = -(uint)(fVar72 <= 0.0);
      fVar72 = fVar72 * (float)uVar117 * fVar121;
      auVar76[0xd] = (byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar19 >> 8);
      auVar76[0xc] = SUB41(fVar72,0) & ~(byte)iVar19;
      auVar76[0xe] = (byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar19 >> 0x10);
      auVar76[0xf] = (byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar19 >> 0x18);
      auVar74 = *(undefined1 (*) [16])(PTR_DAT_04372370 + 0x150);
      auVar103 = NEON_ext(auVar74,auVar74,8,1);
      auVar75 = NEON_ext(auVar103,auVar74,8,1);
      lVar45 = 0;
      fStack_518 = auVar75._8_4_;
      fStack_514 = auVar75._12_4_;
      local_520 = auVar75._0_4_;
      fStack_51c = auVar75._4_4_;
      cVar6 = *local_4e8;
      pfVar35 = pfVar29;
      do {
        if (cVar6 == '\0') {
          uVar114 = FUN_0333dee0(pfVar35);
          auVar75 = extraout_q0_05;
          if ((uVar114 & 1) == 0) goto LAB_001b8b8c;
          pfVar48 = pfVar24 + lVar45 * 4;
          fVar121 = *pfVar48;
          fVar72 = pfVar48[1];
          fVar69 = pfVar48[2];
          fVar99 = pfVar48[3];
          pfVar48 = (float *)(CONCAT44(local_2b0[1],local_2b0[0]) + lVar45 * 0x10);
          pfVar48[2] = fVar69;
          pfVar48[3] = fVar99;
          *pfVar48 = fVar121;
          pfVar48[1] = fVar72;
          fVar101 = (*pfVar35 + pfVar35[4]) * local_520;
          fVar104 = (pfVar35[1] + pfVar35[5]) * fStack_51c;
          fVar84 = (pfVar35[2] + pfVar35[6]) * fStack_518;
          auVar94._0_4_ = fVar121 * fVar101;
          auVar94._4_4_ = fVar72 * fVar104;
          auVar94._8_4_ = fVar69 * fVar84;
          auVar94._12_4_ = fVar99 * (pfVar35[3] + pfVar35[7]) * fStack_514;
          auVar74 = NEON_ext(auVar94,auVar94,8,1);
          fVar99 = auVar74._0_4_ + fVar99;
          fVar97 = -(auVar94._0_4_ + auVar94._4_4_ + fVar99);
          auVar76._0_8_ =
               CONCAT44(fVar104 + fVar72 * -(auVar94._0_4_ + auVar94._4_4_ + fVar99),
                        fVar101 + fVar121 * fVar97);
          auVar76._8_4_ = fVar84 + fVar69 * fVar97;
          puVar42 = (undefined8 *)(lVar38 + lVar45 * 0x10);
          puVar42[1] = auVar76._8_8_;
          *puVar42 = auVar76._0_8_;
          auVar75 = auVar76;
        }
        else {
LAB_001b8b8c:
        }
        if (__n == lVar45 + 1U) break;
        lVar45 = lVar45 + 1;
        pfVar35 = pfVar35 + 8;
        cVar6 = local_4e8[lVar45];
      } while( true );
    }
    local_4b0 = (uint *)0x0;
    local_4a8 = 0x8000000000000000;
    local_498 = fVar70;
    if (fVar70 == 0.0) {
      iVar19 = 0;
      puVar50 = (uint *)0x0;
    }
    else {
      lVar45 = *(long *)(lVar23 + 0x38d490);
      if (lVar45 == 0) {
        lVar45 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar45;
        auVar75 = extraout_q0_06;
      }
      lVar45 = *(long *)(lVar45 + 8);
      uVar114 = (ulong)(int)((int)fVar70 * 0x10 + 0x7fU & 0xffffff80);
      if (*(ulong *)(lVar45 + 0x10) < uVar114) {
LAB_001b8ca0:
        puVar50 = (uint *)FUN_032ce670();
        auVar75 = extraout_q0_07;
      }
      else {
        puVar50 = *(uint **)(lVar45 + 0x18);
        uVar114 = (long)puVar50 + uVar114;
        if (*(ulong *)(lVar45 + 0x20) < uVar114) goto LAB_001b8ca0;
        *(ulong *)(lVar45 + 0x18) = uVar114;
      }
      iVar19 = (int)local_4a8;
    }
    uVar56 = iVar19 + (int)fVar41;
    uVar21 = (uint)fVar70 | 0x80000000;
    local_4a8 = CONCAT44(fVar70,(int)local_4a8) | 0x8000000000000000;
    local_4b0 = puVar50;
    local_4a0 = puVar50;
    if ((int)((uint)fVar70 & 0x3fffffff) < (int)uVar56) {
      fVar121 = fVar70;
      if (0x3fffffff < (int)uVar56) {
        FUN_032bd0a8(uVar56);
        fVar121 = local_4a8._4_4_;
      }
      uVar22 = ((uint)fVar121 & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar22) {
        uVar22 = 0x3fffffff;
      }
      uVar33 = uVar56;
      if ((int)uVar56 <= (int)uVar22) {
        uVar33 = uVar22;
      }
      local_4b0 = (uint *)FUN_032bd1d4(local_568,uVar33,0x10,puVar50,iVar19,(long)&local_4a8 + 4);
      auVar75 = extraout_q0_08;
    }
    if (0 < (int)fVar41) {
      puVar50 = local_4b0 + (long)iVar19 * 4;
      if (fVar41 == 1.4013e-45) {
        pfVar48 = pfVar26;
      }
      else {
        iVar19 = ((uint)fVar41 & 1) - (int)fVar41;
        puVar49 = puVar50;
        pfVar35 = pfVar26;
        do {
          *(undefined8 *)(puVar49 + 2) = *(undefined8 *)(pfVar35 + 2);
          *(undefined8 *)puVar49 = *(undefined8 *)pfVar35;
          *(undefined8 *)(puVar49 + 6) = *(undefined8 *)(pfVar35 + 6);
          pfVar48 = pfVar35 + 8;
          puVar50 = puVar49 + 8;
          iVar19 = iVar19 + 2;
          *(undefined8 *)(puVar49 + 4) = *(undefined8 *)(pfVar35 + 4);
          puVar49 = puVar50;
          pfVar35 = pfVar48;
        } while (iVar19 != 0);
        if (((uint)fVar41 & 1) == 0) goto LAB_001b8d68;
      }
      *(undefined8 *)(puVar50 + 2) = *(undefined8 *)(pfVar48 + 2);
      *(undefined8 *)puVar50 = *(undefined8 *)pfVar48;
    }
LAB_001b8d68:
    local_4a8 = CONCAT44(local_4a8._4_4_,uVar56);
    local_4c8 = 0x8000000000000000;
    local_4b8 = fVar70;
    local_4c8._4_4_ = uVar21;
    if (fVar70 == 0.0) {
      local_4c8._0_4_ = 0.0;
      local_4d0 = (uint *)0x0;
      local_4c0 = (char *)0x0;
LAB_001b8efc:
      if ((int)fVar70 < (int)(float)local_4c8) {
        local_4c8._0_4_ = fVar70;
      }
    }
    else {
      lVar45 = *(long *)(lVar23 + 0x38d490);
      if (lVar45 == 0) {
        lVar45 = FUN_0333d16c(0,1);
        *(long *)(lVar23 + 0x38d490) = lVar45;
        auVar75 = extraout_q0_09;
      }
      lVar45 = *(long *)(lVar45 + 8);
      uVar114 = (long)(int)fVar70 + 0x7fU & 0xffffffffffffff80;
      if (*(ulong *)(lVar45 + 0x10) < uVar114) {
LAB_001b8de4:
        local_4d0 = (uint *)FUN_032ce670();
        auVar75 = extraout_q0_10;
      }
      else {
        local_4d0 = *(uint **)(lVar45 + 0x18);
        if (*(char **)(lVar45 + 0x20) < (char *)((long)local_4d0 + uVar114)) goto LAB_001b8de4;
        *(char **)(lVar45 + 0x18) = (char *)((long)local_4d0 + uVar114);
      }
      uVar114 = local_4c8;
      local_4c0 = (char *)local_4d0;
      if (0x3fffffff < (int)fVar70) {
        FUN_032bd0a8(uVar58);
        fVar121 = (float)((local_4c8._4_4_ & 0x3fffffff) << 1);
        if (0x3ffffffe < (uint)fVar121) {
          fVar121 = 1.9999999;
        }
        fVar72 = fVar70;
        if ((int)fVar70 <= (int)fVar121) {
          fVar72 = fVar121;
        }
        local_4d0 = (uint *)FUN_032bd1d4(local_568,fVar72,1,local_4d0,uVar114 & 0xffffffff,
                                         (long)&local_4c8 + 4);
        auVar75 = extraout_q0_12;
      }
      if ((int)fVar70 <= (int)(float)local_4c8) goto LAB_001b8efc;
      lVar45 = (long)(int)(float)local_4c8;
      uVar56 = ~(uint)(float)local_4c8;
      local_4c8._0_4_ = fVar70;
      memset((char *)((long)local_4d0 + lVar45),0,(ulong)((int)fVar70 + uVar56) + 1);
      auVar75 = extraout_q0_11;
    }
    fVar72 = local_2b0[1];
    fVar121 = local_2b0[0];
    iVar20 = ((int)fVar17 - 1U) * (int)fVar17;
    iVar19 = iVar20;
    if (iVar20 < 0) {
      iVar19 = iVar20 + 1;
    }
    local_a8 = CONCAT44(local_a8._4_4_,iVar19 >> 1);
    if (iVar20 < 2) {
      lVar45 = 0;
      uVar56 = 0x80000000;
    }
    else {
      lVar45 = FUN_032cf190(uVar67,4,&local_a8);
      auVar75 = extraout_q0_13;
      uVar56 = (uint)local_a8;
    }
    local_a8 = 0;
    local_a0 = 0x8000000000000000;
    if (1 < iVar20) {
      local_a8 = FUN_032bd1d4(uVar67,iVar19 >> 1,0x10,0,0,(long)&local_a0 + 4);
      auVar75 = extraout_q0_14;
    }
    if (0 < (int)fVar17) {
      uVar59 = 0;
      iVar19 = 0;
      lVar30 = lVar38 + 0x10;
      pcVar64 = local_4e8 + 1;
      lVar60 = __n - 1;
      lVar62 = CONCAT44(fVar72,fVar121) + 0x10;
      uVar114 = 1;
      if ((long)(int)fVar17 < 2) goto LAB_001b9008;
LAB_001b9030:
      lVar61 = lVar45 + (long)iVar19 * 4;
      lVar63 = 0;
      cVar6 = local_4e8[uVar59];
      lVar13 = local_a8;
      uVar68 = local_a0;
      do {
        local_a8 = lVar13;
        local_a0 = uVar68;
        if ((cVar6 == '\0') && (pcVar64[lVar63] == '\0')) {
          auVar74 = *(undefined1 (*) [16])(CONCAT44(fVar72,fVar121) + uVar59 * 0x10);
          auVar103 = *(undefined1 (*) [16])(lVar62 + lVar63 * 0x10);
          fVar69 = auVar74._0_4_;
          fVar104 = auVar103._0_4_;
          fVar99 = auVar74._4_4_;
          fVar84 = auVar103._4_4_;
          fVar101 = auVar74._8_4_;
          fVar97 = auVar103._8_4_;
          auVar75._0_4_ = fVar69 * fVar104 + fVar99 * fVar84 + fVar101 * fVar97;
          auVar75._4_4_ = fVar69 * fVar104 + fVar99 * fVar84 + fVar101 * fVar97;
          auVar75._8_8_ = 0;
          fVar98 = fVar112 - auVar75._0_4_ * auVar75._0_4_;
          uVar117 = CONCAT44(fVar116 - auVar75._4_4_ * auVar75._4_4_,fVar98);
          if (fVar98 <= 0.0) goto LAB_001b9040;
          auVar82 = *(undefined1 (*) [16])(lVar38 + uVar59 * 0x10);
          fVar105 = -auVar75._0_4_;
          fVar110 = -auVar75._4_4_;
          fVar98 = fVar69 * auVar82._0_4_;
          fVar100 = fVar99 * auVar82._4_4_;
          fVar78 = fVar101 * auVar82._8_4_;
          fVar119 = fVar98 + fVar100 + fVar78;
          fVar78 = fVar98 + fVar100 + fVar78;
          uVar80 = NEON_frecpe(uVar117,4);
          auVar75 = *(undefined1 (*) [16])(lVar30 + lVar63 * 0x10);
          uVar106 = NEON_frecps(uVar117,uVar80,4);
          fVar100 = fVar104 * auVar75._0_4_;
          fVar123 = fVar84 * auVar75._4_4_;
          fVar124 = fVar97 * auVar75._8_4_;
          fVar98 = fVar100 + fVar123 + fVar124;
          fVar124 = fVar100 + fVar123 + fVar124;
          fVar123 = (float)uVar80 * (float)uVar106;
          fVar111 = (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar106 >> 0x20);
          uVar117 = NEON_frecps(uVar117,CONCAT44(fVar111,fVar123),4);
          fVar123 = fVar123 * (float)uVar117;
          fVar111 = fVar111 * (float)((ulong)uVar117 >> 0x20);
          uVar117 = CONCAT44(fVar111,fVar123);
          iVar20 = -(uint)(fVar123 <= 0.0);
          iVar113 = -(uint)(fVar111 <= 0.0);
          fVar125 = fVar119 + fVar98 * fVar105;
          fVar98 = fVar119 * fVar105 + fVar98;
          auVar122 = NEON_ext(auVar103,auVar103,4,1);
          uVar80 = NEON_frsqrte(uVar117,4);
          fVar119 = (float)uVar80;
          fVar120 = (float)((ulong)uVar80 >> 0x20);
          uVar80 = NEON_frsqrts(uVar117,CONCAT44(fVar120 * fVar120,fVar119 * fVar119),4);
          fVar119 = fVar119 * (float)uVar80;
          fVar120 = fVar120 * (float)((ulong)uVar80 >> 0x20);
          fVar100 = fVar123 * (fVar104 * fVar98 + fVar69 * fVar125);
          fVar78 = fVar111 * (fVar84 * (fVar78 * fVar110 + fVar124) +
                             fVar99 * (fVar78 + fVar124 * fVar110));
          fVar105 = fVar123 * (fVar97 * fVar98 + fVar101 * fVar125);
          auVar109 = NEON_ext(auVar74,auVar74,4,1);
          uVar117 = NEON_frsqrts(uVar117,CONCAT44(fVar120 * fVar120,fVar119 * fVar119),4);
          auVar95._0_4_ = fVar69 * auVar122._0_4_ - fVar104 * auVar109._0_4_;
          auVar95._4_4_ = fVar99 * auVar122._4_4_ - fVar84 * auVar109._4_4_;
          auVar95._8_4_ = fVar101 * fVar104 - fVar97 * fVar69;
          auVar95._12_4_ = auVar74._12_4_ * fVar84 - auVar103._12_4_ * fVar99;
          auVar103 = NEON_ext(auVar95,auVar95,4,1);
          fVar123 = fVar123 * (float)uVar117 * fVar119;
          fVar111 = fVar111 * (float)((ulong)uVar117 >> 0x20) * fVar120;
          fVar119 = fVar100 - auVar82._0_4_;
          fVar120 = fVar78 - auVar82._4_4_;
          fVar124 = fVar105 - auVar82._8_4_;
          auVar74 = NEON_ext(auVar82,auVar82,8,1);
          fVar69 = auVar74._4_4_ * auVar74._4_4_;
          fVar99 = (float)CONCAT13((byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                   CONCAT12((byte)((uint)fVar123 >> 0x10) &
                                            ~(byte)((uint)iVar20 >> 0x10),
                                            CONCAT11((byte)((uint)fVar123 >> 8) &
                                                     ~(byte)((uint)iVar20 >> 8),
                                                     SUB41(fVar123,0) & ~(byte)iVar20)));
          fVar123 = auVar103._0_4_ * fVar99;
          fVar110 = auVar103._4_4_ *
                    (float)(CONCAT17((byte)((uint)fVar111 >> 0x18) & ~(byte)((uint)iVar113 >> 0x18),
                                     CONCAT16((byte)((uint)fVar111 >> 0x10) &
                                              ~(byte)((uint)iVar113 >> 0x10),
                                              CONCAT15((byte)((uint)fVar111 >> 8) &
                                                       ~(byte)((uint)iVar113 >> 8),
                                                       CONCAT14(SUB41(fVar111,0) & ~(byte)iVar113,
                                                                fVar99)))) >> 0x20);
          fVar99 = auVar95._0_4_ * fVar99;
          fVar101 = fVar123 * fVar119;
          fVar84 = fVar110 * fVar120;
          fVar97 = fVar99 * fVar124;
          fVar104 = fVar101 + fVar84 + fVar97;
          fVar98 = -fVar104;
          fVar119 = fVar119 + fVar123 * fVar98;
          fVar120 = fVar120 + fVar110 * -(fVar101 + fVar84 + fVar97);
          fVar124 = fVar124 + fVar99 * fVar98;
          fVar119 = fVar119 * fVar119;
          fVar120 = fVar120 * fVar120;
          fVar124 = fVar124 * fVar124;
          fVar101 = fVar69 - (fVar119 + fVar120 + fVar124);
          uVar117 = CONCAT44(fVar69 - (fVar119 + fVar120 + fVar124),fVar101);
          if (fVar101 < 0.0) goto LAB_001b9040;
          fVar100 = fVar100 - auVar75._0_4_;
          fVar78 = fVar78 - auVar75._4_4_;
          fVar105 = fVar105 - auVar75._8_4_;
          auVar74 = NEON_ext(auVar75,auVar75,8,1);
          fVar84 = auVar74._4_4_ * auVar74._4_4_;
          fVar69 = fVar123 * fVar100;
          fVar111 = fVar110 * fVar78;
          fVar119 = fVar99 * fVar105;
          fVar120 = fVar119 + fVar69 + fVar111;
          fVar97 = -fVar120;
          fVar111 = -(fVar119 + fVar69 + fVar111);
          fVar100 = fVar100 + fVar123 * fVar97;
          fVar78 = fVar78 + fVar110 * fVar111;
          fVar105 = fVar105 + fVar99 * fVar97;
          fVar100 = fVar100 * fVar100;
          fVar78 = fVar78 * fVar78;
          fVar105 = fVar105 * fVar105;
          fVar69 = fVar84 - (fVar100 + fVar78 + fVar105);
          fVar84 = fVar84 - (fVar100 + fVar78 + fVar105);
          auVar75._0_8_ = CONCAT44(fVar84,fVar69);
          auVar75._8_8_ = 0;
          if (fVar69 < 0.0) goto LAB_001b9040;
          uVar80 = NEON_frsqrte(uVar117,4);
          fVar99 = (float)uVar80;
          fVar100 = (float)((ulong)uVar80 >> 0x20);
          uVar80 = NEON_frsqrts(uVar117,CONCAT44(fVar100 * fVar100,fVar99 * fVar99),4);
          fVar99 = fVar99 * (float)uVar80;
          fVar100 = fVar100 * (float)((ulong)uVar80 >> 0x20);
          uVar117 = NEON_frsqrts(uVar117,CONCAT44(fVar100 * fVar100,fVar99 * fVar99),4);
          iVar20 = -(uint)(fVar101 <= 0.0);
          fVar101 = fVar101 * (float)uVar117 * fVar99;
          fVar99 = (float)CONCAT13((byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                   CONCAT12((byte)((uint)fVar101 >> 0x10) &
                                            ~(byte)((uint)iVar20 >> 0x10),
                                            CONCAT11((byte)((uint)fVar101 >> 8) &
                                                     ~(byte)((uint)iVar20 >> 8),
                                                     SUB41(fVar101,0) & ~(byte)iVar20)));
          uVar117 = NEON_frsqrte(auVar75._0_8_,4);
          fVar104 = fVar99 - fVar104;
          fVar101 = (float)uVar117;
          fVar100 = (float)((ulong)uVar117 >> 0x20);
          uVar117 = NEON_frsqrts(auVar75._0_8_,CONCAT44(fVar100 * fVar100,fVar101 * fVar101),4);
          fVar101 = fVar101 * (float)uVar117;
          fVar100 = fVar100 * (float)((ulong)uVar117 >> 0x20);
          uVar117 = NEON_frsqrts(auVar75._0_8_,CONCAT44(fVar100 * fVar100,fVar101 * fVar101),4);
          iVar20 = -(uint)(fVar69 <= 0.0);
          iVar113 = -(uint)(fVar84 <= 0.0);
          fVar69 = fVar69 * (float)uVar117 * fVar101;
          fVar84 = fVar84 * (float)((ulong)uVar117 >> 0x20) * fVar100;
          fVar69 = (float)CONCAT13((byte)((uint)fVar69 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                                   CONCAT12((byte)((uint)fVar69 >> 0x10) &
                                            ~(byte)((uint)iVar20 >> 0x10),
                                            CONCAT11((byte)((uint)fVar69 >> 8) &
                                                     ~(byte)((uint)iVar20 >> 8),
                                                     SUB41(fVar69,0) & ~(byte)iVar20)));
          auVar75._0_4_ = fVar97 - fVar69;
          auVar75._4_4_ =
               fVar111 - (float)(CONCAT17((byte)((uint)fVar84 >> 0x18) &
                                          ~(byte)((uint)iVar113 >> 0x18),
                                          CONCAT16((byte)((uint)fVar84 >> 0x10) &
                                                   ~(byte)((uint)iVar113 >> 0x10),
                                                   CONCAT15((byte)((uint)fVar84 >> 8) &
                                                            ~(byte)((uint)iVar113 >> 8),
                                                            CONCAT14(SUB41(fVar84,0) &
                                                                     ~(byte)iVar113,fVar69)))) >>
                                0x20);
          auVar75._8_8_ = 0;
          bVar15 = false;
          bVar16 = true;
          if (fVar98 - fVar99 <= fVar69 - fVar120) {
            bVar15 = false;
            bVar16 = true;
            if (!NAN(auVar75._0_4_) && !NAN(fVar104)) {
              bVar15 = auVar75._0_4_ == fVar104;
              bVar16 = fVar104 <= auVar75._0_4_;
            }
          }
          if (bVar16 && !bVar15) goto LAB_001b9040;
          local_a0._0_4_ = (int)uVar68;
          *(int *)(lVar61 + lVar63 * 4) = (int)local_a0;
          local_a0._4_4_ = (uint)(uVar68 >> 0x20);
          uVar21 = (int)local_a0 + 1;
          if ((int)local_a0 < (int)(local_a0._4_4_ & 0x3fffffff)) {
            iVar20 = (int)local_a0;
          }
          else {
            uVar40 = uVar68;
            uVar22 = local_a0._4_4_;
            if (0x3ffffffe < (int)local_a0) {
              FUN_032bd0a8(uVar21);
              uVar40 = local_a0;
              uVar22 = local_a0._4_4_;
            }
            local_a0 = uVar40;
            uVar22 = (uVar22 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar22) {
              uVar22 = 0x3fffffff;
            }
            uVar33 = uVar21;
            if ((int)uVar21 <= (int)uVar22) {
              uVar33 = uVar22;
            }
            local_a8 = FUN_032bd1d4(uVar67,uVar33,0x10,lVar13,uVar68 & 0xffffffff,
                                    (long)&local_a0 + 4);
            iVar20 = (int)local_a0;
          }
          local_a0 = CONCAT44(local_a0._4_4_,uVar21);
          auVar74 = *(undefined1 (*) [16])(CONCAT44(fVar72,fVar121) + uVar59 * 0x10);
          auVar82 = NEON_ext(auVar74,auVar74,8,1);
          auVar103 = *(undefined1 (*) [16])(lVar62 + lVar63 * 0x10);
          auVar109 = NEON_ext(auVar103,auVar103,8,1);
          uVar80 = NEON_ext(auVar103._0_8_,auVar109._0_8_,4,1);
          uVar117 = NEON_ext(auVar74._0_8_,auVar82._0_8_,4,1);
          auVar75._0_8_ =
               CONCAT44(auVar74._4_4_ * (float)((ulong)uVar80 >> 0x20) -
                        auVar103._4_4_ * (float)((ulong)uVar117 >> 0x20),
                        auVar74._0_4_ * (float)uVar80 - auVar103._0_4_ * (float)uVar117);
          auVar75._8_4_ = auVar74._8_4_ * auVar103._0_4_ - auVar103._8_4_ * auVar74._0_4_;
          auVar75._12_4_ = auVar74._12_4_ * auVar103._4_4_ - auVar103._12_4_ * auVar74._4_4_;
          auVar74 = NEON_ext(auVar75,auVar75,4,1);
          puVar42 = (undefined8 *)(local_a8 + (long)iVar20 * 0x10);
          puVar42[1] = auVar75._0_8_;
          *puVar42 = auVar74._0_8_;
        }
        else {
LAB_001b9040:
          *(undefined4 *)(lVar61 + lVar63 * 4) = 0xffffffff;
        }
        if (lVar60 == lVar63 + 1) goto LAB_001b8ffc;
        lVar63 = lVar63 + 1;
        cVar6 = local_4e8[uVar59];
        lVar13 = local_a8;
        uVar68 = local_a0;
      } while( true );
    }
LAB_001b9364:
    uVar114 = local_4a8;
    puVar50 = local_4b0;
    uVar21 = (int)local_a0 * 3;
    if ((int)((uint)local_4a8._4_4_ & 0x3fffffff) < (int)uVar21) {
      if (0x3fffffff < (int)uVar21) {
        FUN_032bd0a8(uVar21);
      }
      uVar22 = ((uint)local_4a8._4_4_ & 0x3fffffff) << 1;
      if (0x3ffffffe < uVar22) {
        uVar22 = 0x3fffffff;
      }
      if ((int)uVar21 <= (int)uVar22) {
        uVar21 = uVar22;
      }
      local_4b0 = (uint *)FUN_032bd1d4(local_568,uVar21,0x10,puVar50,uVar114 & 0xffffffff,
                                       (long)&local_4a8 + 4);
      auVar75 = extraout_q0_15;
    }
    uVar114 = local_a0;
    if (0 < (int)fVar17) {
      uVar40 = (long)(int)fVar70 - 1;
      iVar19 = (int)fVar17 * 2 + -3;
      uVar59 = 2;
      uVar68 = uVar40 & 1;
      uVar43 = 0;
      bVar15 = false;
      lVar30 = 1;
      if (*local_4e8 == '\0') goto LAB_001b9444;
      do {
        uVar47 = uVar43 + 1;
LAB_001b9428:
        uVar43 = uVar47;
        uVar59 = uVar59 + 1;
        lVar30 = lVar30 + 1;
        if (uVar43 == __n) goto LAB_001b9724;
      } while (local_4e8[uVar43] != '\0');
LAB_001b9444:
      iVar20 = (iVar19 - (int)uVar43) * (int)uVar43;
      if (iVar20 < 0) {
        iVar20 = iVar20 + 1;
      }
      uVar47 = uVar43 + 1;
      if ((long)uVar47 < (long)(int)fVar17) {
        cVar6 = local_4e8[lVar30];
        uVar85 = uVar59;
        lVar62 = lVar30;
        uVar55 = uVar43;
        do {
          if ((cVar6 == '\0') &&
             (iVar113 = *(int *)(lVar45 + (long)((iVar20 >> 1) + (int)uVar55) * 4), -1 < iVar113)) {
            iVar7 = (iVar19 - (int)lVar62) * (int)lVar62;
            if (iVar7 < 0) {
              iVar7 = iVar7 + 1;
            }
            if ((long)(uVar55 + 2) < (long)(int)fVar17) {
              cVar6 = local_4e8[uVar85];
              uVar3 = uVar85;
              do {
                if ((cVar6 == '\0') &&
                   (((lVar60 = CONCAT44(fVar72,fVar121), *(char *)((long)local_560 + uVar43) != '\0'
                     || (*(char *)((long)local_560 + lVar62) != '\0')) ||
                    (*(char *)((long)local_560 + uVar3) != '\0')))) {
                  iVar57 = (int)uVar3 + -1;
                  uVar21 = *(uint *)(lVar45 + (long)(iVar57 + (iVar7 >> 1)) * 4);
                  uVar22 = *(uint *)(lVar45 + (long)(iVar57 + (iVar20 >> 1)) * 4);
                  if (-1 < (int)(uVar22 | uVar21)) {
                    auVar75 = *(undefined1 (*) [16])(local_a8 + (long)iVar113 * 0x10);
                    auVar74 = *(undefined1 (*) [16])(lVar60 + uVar3 * 0x10);
                    fVar104 = auVar75._0_4_ * auVar74._0_4_;
                    fVar97 = auVar75._4_4_ * auVar74._4_4_;
                    fVar69 = auVar75._8_4_;
                    fVar98 = fVar69 * auVar74._8_4_;
                    fVar99 = auVar75._12_4_;
                    fVar101 = auVar74._12_4_;
                    fVar84 = fVar104 + fVar97 + fVar98;
                    uVar117 = CONCAT44(fVar104 + fVar97 + fVar98,fVar84);
                    if (ABS(fVar84) <= fVar77) {
LAB_001b94c8:
                      bVar34 = 0;
                    }
                    else {
                      pfVar35 = (float *)(local_a8 + (long)(int)uVar22 * 0x10);
                      pfVar48 = (float *)(local_a8 + (long)(int)uVar21 * 0x10);
                      fVar104 = *(float *)(lVar60 + uVar43 * 0x10 + 0xc);
                      uVar80 = NEON_frecpe(uVar117,4);
                      fVar112 = (float)((ulong)*(undefined8 *)(lVar60 + lVar62 * 0x10 + 8) >> 0x20);
                      uVar106 = NEON_frecps(uVar117,uVar80,4);
                      fVar84 = (float)uVar80 * (float)uVar106;
                      fVar97 = (float)((ulong)uVar80 >> 0x20) * (float)((ulong)uVar106 >> 0x20);
                      uVar117 = NEON_frecps(uVar117,CONCAT44(fVar97,fVar84),4);
                      fVar98 = -(fVar84 * (float)uVar117);
                      fVar100 = -(fVar97 * (float)((ulong)uVar117 >> 0x20));
                      fVar84 = fVar98 * (auVar75._0_4_ * fVar101 +
                                        *pfVar48 * fVar104 + -*pfVar35 * fVar112);
                      fVar97 = fVar100 * (auVar75._4_4_ * fVar101 +
                                         pfVar48[1] * fVar104 + -pfVar35[1] * fVar112);
                      auVar75._0_8_ = CONCAT44(fVar97,fVar84);
                      auVar75._8_4_ =
                           fVar98 * (fVar69 * fVar101 + pfVar48[2] * fVar104 + -pfVar35[2] * fVar112
                                    );
                      auVar75._12_4_ =
                           fVar100 * (fVar99 * fVar101 + pfVar48[3] * fVar104 + pfVar35[3] * fVar112
                                     );
                      pfVar35 = pfVar24;
                      uVar36 = __n;
                      do {
                        auVar96._0_4_ = fVar84 * *pfVar35;
                        auVar96._4_4_ = fVar97 * pfVar35[1];
                        auVar96._8_4_ = auVar75._8_4_ * pfVar35[2];
                        auVar96._12_4_ = auVar75._12_4_ * pfVar35[3];
                        auVar74 = NEON_ext(auVar96,auVar96,8,1);
                        if (fVar71 < auVar96._0_4_ + auVar96._4_4_ + auVar74._0_4_ + pfVar35[3])
                        goto LAB_001b94c8;
                        uVar36 = uVar36 - 1;
                        pfVar35 = pfVar35 + 4;
                      } while (uVar36 != 0);
                      fVar69 = (*pfVar26 - fVar84) * (*pfVar26 - fVar84) +
                               (pfVar26[1] - fVar97) * (pfVar26[1] - fVar97) +
                               (pfVar26[2] - auVar75._8_4_) * (pfVar26[2] - auVar75._8_4_);
                      if ((int)fVar70 < 2) {
                        lVar60 = 0;
                        if ((char)*local_4d0 == '\0') goto LAB_001b96fc;
LAB_001b9610:
                        pfVar35 = (float *)(local_4b0 + lVar60 * 4);
                        pfVar48 = pfVar26 + lVar60 * 4;
                        auVar83._0_4_ = (*pfVar35 - *pfVar48) * (*pfVar35 - *pfVar48);
                        auVar83._4_4_ = (pfVar35[1] - pfVar48[1]) * (pfVar35[1] - pfVar48[1]);
                        auVar83._8_4_ = (pfVar35[2] - pfVar48[2]) * (pfVar35[2] - pfVar48[2]);
                        auVar83._12_4_ = (pfVar35[3] - pfVar48[3]) * (pfVar35[3] - pfVar48[3]);
                        auVar74 = NEON_ext(auVar83,auVar83,8,1);
                        if (fVar69 < auVar83._0_4_ + auVar83._4_4_ + auVar74._0_4_) {
                          *(long *)(local_4b0 + lVar60 * 4 + 2) = auVar75._8_8_;
                          *(ulong *)(local_4b0 + lVar60 * 4) = auVar75._0_8_;
                        }
                      }
                      else {
                        if (fVar70 == 2.8026e-45) {
                          iVar57 = 0;
                          lVar61 = 1;
LAB_001b96c4:
                          pfVar35 = pfVar26 + lVar61 * 4;
                          fVar99 = (*pfVar35 - fVar84) * (*pfVar35 - fVar84) +
                                   (pfVar35[1] - fVar97) * (pfVar35[1] - fVar97) +
                                   (pfVar35[2] - auVar75._8_4_) * (pfVar35[2] - auVar75._8_4_);
                          if (fVar99 < fVar69) {
                            iVar57 = (int)lVar61;
                            fVar69 = fVar99;
                          }
                        }
                        else {
                          iVar57 = 0;
                          lVar60 = 0;
                          do {
                            lVar61 = lVar60;
                            fVar99 = (pfVar26[lVar61 * 4 + 4] - fVar84) *
                                     (pfVar26[lVar61 * 4 + 4] - fVar84) +
                                     (pfVar26[lVar61 * 4 + 5] - fVar97) *
                                     (pfVar26[lVar61 * 4 + 5] - fVar97) +
                                     (pfVar26[lVar61 * 4 + 6] - auVar75._8_4_) *
                                     (pfVar26[lVar61 * 4 + 6] - auVar75._8_4_);
                            if (fVar99 < fVar69) {
                              iVar57 = (int)lVar61 + 1;
                            }
                            if (fVar99 < fVar69) {
                              fVar69 = fVar99;
                            }
                            fVar99 = (pfVar26[lVar61 * 4 + 8] - fVar84) *
                                     (pfVar26[lVar61 * 4 + 8] - fVar84) +
                                     (pfVar26[lVar61 * 4 + 9] - fVar97) *
                                     (pfVar26[lVar61 * 4 + 9] - fVar97) +
                                     (pfVar26[lVar61 * 4 + 10] - auVar75._8_4_) *
                                     (pfVar26[lVar61 * 4 + 10] - auVar75._8_4_);
                            if (fVar99 < fVar69) {
                              iVar57 = (int)lVar61 + 2;
                              fVar69 = fVar99;
                            }
                            lVar60 = lVar61 + 2;
                          } while (uVar40 - uVar68 != lVar61 + 2);
                          lVar61 = lVar61 + 3;
                          if (uVar68 != 0) goto LAB_001b96c4;
                        }
                        lVar60 = (long)iVar57;
                        if (*(char *)((long)local_4d0 + lVar60) != '\0') goto LAB_001b9610;
LAB_001b96fc:
                        *(long *)(local_4b0 + lVar60 * 4 + 2) = auVar75._8_8_;
                        *(ulong *)(local_4b0 + lVar60 * 4) = auVar75._0_8_;
                        *(char *)((long)local_4d0 + lVar60) = '\x01';
                      }
                      bVar34 = 1;
                    }
                    bVar15 = (bool)(bVar15 | bVar34);
                  }
                }
                uVar3 = uVar3 + 1;
                if (uVar3 == __n) break;
                cVar6 = local_4e8[uVar3];
              } while( true );
            }
          }
          uVar55 = uVar55 + 1;
          if (uVar55 == (int)fVar17 - 1U) break;
          uVar85 = uVar85 + 1;
          lVar62 = lVar62 + 1;
          cVar6 = local_4e8[lVar62];
        } while( true );
      }
      goto LAB_001b9428;
    }
    bVar15 = false;
LAB_001b9724:
    uVar21 = local_a0._4_4_;
    local_a0 = (ulong)local_a0._4_4_ << 0x20;
    if ((-1 < (long)uVar114) && (local_a8 != 0)) {
      auVar75 = FUN_032cf244(uVar67,local_a8,0x10,uVar21 & 0x3fffffff);
    }
    if ((lVar45 != 0) && (-1 < (int)uVar56)) {
      auVar75 = FUN_032cf244(uVar67,lVar45,4,uVar56 & 0x3fffffff);
    }
    pcVar64 = local_4c0;
    if ((uint *)local_4c0 == local_4d0) {
      local_4c8._0_4_ = 0.0;
    }
    lVar30 = (long)(int)local_4b8;
    lVar45 = *(long *)(lVar23 + 0x38d490);
    if (lVar45 == 0) {
      lVar45 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar45;
      auVar75 = extraout_q0_16;
    }
    lVar45 = *(long *)(lVar45 + 8);
    uVar114 = lVar30 + 0x7fU & 0xffffffffffffff80;
    if (((*(ulong *)(lVar45 + 0x10) < uVar114) || (*(char **)(lVar45 + 0x18) != pcVar64 + uVar114))
       || (*(char **)(lVar45 + 0x28) == pcVar64)) {
      auVar75 = FUN_032cedf0(lVar45,pcVar64);
      uVar56 = local_4c8._4_4_;
    }
    else {
      *(char **)(lVar45 + 0x18) = pcVar64;
      uVar56 = local_4c8._4_4_;
    }
    local_4c8 = (ulong)uVar56 << 0x20;
    if ((-1 < (int)uVar56) && (local_4d0 != (uint *)0x0)) {
      auVar75 = FUN_032cf244(local_568,local_4d0,1,uVar56 & 0x3fffffff);
    }
    if (bVar15) {
      iVar19 = FUN_001c3964(*(undefined8 *)(param_2 + 0x18),local_4b0,uVar58,0,0);
      auVar75._8_8_ = uVar73;
      auVar75._0_8_ = uVar79;
      bVar15 = false;
      if (1 < iVar19) goto LAB_001b9880;
      FUN_001c3964(*(undefined8 *)(param_2 + 0x18),pfVar26,fVar41,0,0);
      auVar75 = ZEXT816(0);
      bVar15 = false;
      if (local_4a0 == local_4b0) goto LAB_001b9890;
    }
    else {
      bVar15 = true;
LAB_001b9880:
      if (local_4a0 == local_4b0) {
LAB_001b9890:
        local_4a8 = local_4a8 & 0xffffffff00000000;
      }
    }
    fVar70 = local_498;
    puVar50 = local_4a0;
    lVar45 = *(long *)(lVar23 + 0x38d490);
    uVar73 = auVar75._0_8_;
    if (lVar45 == 0) {
      lVar45 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar45;
    }
    lVar45 = *(long *)(lVar45 + 8);
    uVar114 = (ulong)(int)((int)fVar70 * 0x10 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar45 + 0x10) < uVar114) ||
        (*(long *)(lVar45 + 0x18) != uVar114 + (long)puVar50)) ||
       (*(uint **)(lVar45 + 0x28) == puVar50)) {
      FUN_032cedf0(lVar45,puVar50);
      uVar56 = (uint)local_4a8._4_4_;
      uVar114 = local_4a8;
    }
    else {
      *(uint **)(lVar45 + 0x18) = puVar50;
      uVar56 = (uint)local_4a8._4_4_;
      uVar114 = local_4a8;
    }
    local_4a8 = (ulong)uVar56 << 0x20;
    if ((-1 < (long)uVar114) && (local_4b0 != (uint *)0x0)) {
      FUN_032cf244(local_568,local_4b0,0x10,uVar56 & 0x3fffffff);
    }
    fVar70 = fStack_298;
    lVar45 = local_2a0;
    if (local_2a0 == CONCAT44(local_2b0[1],local_2b0[0])) {
      local_2b0[2] = 0.0;
    }
    lVar30 = *(long *)(lVar23 + 0x38d490);
    if (lVar30 == 0) {
      lVar30 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar30;
    }
    lVar30 = *(long *)(lVar30 + 8);
    uVar114 = (ulong)(int)((int)fVar70 * 0x10 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar30 + 0x10) < uVar114) || (*(long *)(lVar30 + 0x18) != uVar114 + lVar45)) ||
       (*(long *)(lVar30 + 0x28) == lVar45)) {
      FUN_032cedf0(lVar30,lVar45);
    }
    else {
      *(long *)(lVar30 + 0x18) = lVar45;
    }
    local_2b0[2] = 0.0;
    if (-1 < (int)local_2b0[3]) {
      local_2b0[2] = 0.0;
      if (CONCAT44(local_2b0[1],local_2b0[0]) != 0) {
        FUN_032cf244(local_568,CONCAT44(local_2b0[1],local_2b0[0]),0x10,
                     (uint)local_2b0[3] & 0x3fffffff);
      }
    }
    lVar45 = *(long *)(lVar23 + 0x38d490);
    if (lVar45 == 0) {
      lVar45 = FUN_0333d16c(0,1);
      *(long *)(lVar23 + 0x38d490) = lVar45;
    }
    lVar45 = *(long *)(lVar45 + 8);
    if (((*(ulong *)(lVar45 + 0x10) < uVar31) || (*(long *)(lVar45 + 0x18) != local_5d0 + uVar31))
       || (*(long *)(lVar45 + 0x28) == local_5d0)) {
      FUN_032cedf0(lVar45,local_5d0);
    }
    else {
      *(long *)(lVar45 + 0x18) = local_5d0;
    }
    if ((-1 < (int)uVar18) && (lVar38 != 0)) {
      FUN_032cf244(local_568,lVar38,0x10,uVar18 & 0x3fffffff);
    }
    if ((-1 < (int)local_5ec) && (pfVar29 != (float *)0x0)) {
      FUN_032cf244(uVar67,local_610,0x20,(uint)local_5ec & 0x3fffffff);
    }
    uVar79 = auVar75._8_8_;
    if (!bVar15) goto LAB_001b9aa0;
  }
  uVar73 = 0;
  uVar79 = uVar118;
LAB_001b9aa0:
  if ((pfVar26 != (float *)0x0) && (-1 < (int)local_59c)) {
    FUN_032cf244(uVar67,pfVar26,0x10,(uint)local_59c & 0x3fffffff);
  }
  lVar38 = *(long *)(lVar23 + 0x38d490);
  if (lVar38 == 0) {
    lVar38 = FUN_0333d16c(0,1);
    *(long *)(lVar23 + 0x38d490) = lVar38;
  }
  lVar38 = *(long *)(lVar38 + 8);
  uVar114 = (ulong)(int)(iVar5 * 0x60 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar38 + 0x10) < uVar114) || (*(long *)(lVar38 + 0x18) != lVar44 + uVar114)) ||
     (*(long *)(lVar38 + 0x28) == lVar44)) {
    FUN_032cedf0();
  }
  else {
    *(long *)(lVar38 + 0x18) = lVar44;
  }
  if ((local_4e0 != 0) && (-1 < (int)(uint)local_4f0)) {
    FUN_032cf244(*(undefined8 *)PTR_PTR_04372408,local_4f8,0x20,(uint)local_4f0 & 0x3fffffff);
  }
  lVar38 = *(long *)(lVar23 + 0x38d490);
  if (lVar38 == 0) {
    lVar38 = FUN_0333d16c(0,1);
    *(long *)(lVar23 + 0x38d490) = lVar38;
  }
  lVar38 = *(long *)(lVar38 + 8);
  uVar114 = (ulong)(int)(iVar5 * 0xc + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar38 + 0x10) < uVar114) || (*(long *)(lVar38 + 0x18) != lVar66 + uVar114)) ||
     (*(long *)(lVar38 + 0x28) == lVar66)) {
    FUN_032cedf0(lVar38,lVar66);
  }
  else {
    *(long *)(lVar38 + 0x18) = lVar66;
  }
  if ((local_560 != (void *)0x0) && (-1 < (int)local_598)) {
    FUN_032cf244(uVar67,local_560,1,(uint)local_598 & 0x3fffffff);
  }
  if ((-1 < (int)local_594) && (local_4e8 != (char *)0x0)) {
    FUN_032cf244(uVar67,local_4e8,1,(uint)local_594 & 0x3fffffff);
  }
  lVar38 = *(long *)(lVar23 + 0x38d490);
  if (lVar38 == 0) {
    lVar38 = FUN_0333d16c(0,1);
    *(long *)(lVar23 + 0x38d490) = lVar38;
  }
  lVar23 = *(long *)(lVar38 + 8);
  if (((*(ulong *)(lVar23 + 0x10) < uVar31) || (*(long *)(lVar23 + 0x18) != (long)pfVar24 + uVar31))
     || (*(float **)(lVar23 + 0x28) == pfVar24)) {
    FUN_032cedf0(lVar23,pfVar24);
  }
  else {
    *(float **)(lVar23 + 0x18) = pfVar24;
  }
  auVar8._8_8_ = uVar79;
  auVar8._0_8_ = uVar73;
  return auVar8;
LAB_001b8ffc:
  iVar19 = iVar19 + (int)lVar63 + 1;
LAB_001b9008:
  do {
    uVar59 = uVar114;
    lVar30 = lVar30 + 0x10;
    lVar62 = lVar62 + 0x10;
    pcVar64 = pcVar64 + 1;
    lVar60 = lVar60 + -1;
    if (uVar59 == __n) goto LAB_001b9364;
    uVar114 = uVar59 + 1;
  } while ((long)(int)fVar17 <= (long)uVar114);
  goto LAB_001b9030;
}


