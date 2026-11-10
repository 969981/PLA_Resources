/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0316d580; name: FUN_0316d580
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0316d580(long param_1,undefined8 param_2,float *param_3,ulong param_4,long param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 *param_8,float *param_9,
                 long *param_10,long param_11)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  void *pvVar5;
  long *plVar6;
  long *plVar7;
  ushort uVar8;
  short sVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar17;
  byte bVar18;
  undefined *puVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  int *piVar30;
  ulong uVar31;
  long lVar32;
  float *pfVar33;
  long lVar34;
  undefined8 *puVar35;
  ulong uVar36;
  long lVar37;
  undefined8 *puVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  uint uVar42;
  void *__s;
  uint uVar43;
  void *pvVar44;
  ulong uVar45;
  undefined1 auVar46 [16];
  float fVar47;
  float fVar48;
  undefined8 uVar49;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  float fVar55;
  float fVar57;
  float fVar58;
  undefined1 auVar56 [16];
  float fVar59;
  float fVar63;
  float fVar65;
  undefined1 auVar60 [16];
  int iVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar66;
  float fVar71;
  undefined8 uVar67;
  undefined8 uVar68;
  float fVar72;
  float fVar73;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined8 uVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 uVar86;
  float fVar87;
  float fVar88;
  float fVar89;
  ulong uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  float fVar95;
  undefined1 auVar94 [16];
  uint uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  float fVar103;
  float fVar109;
  float fVar110;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  ulong uVar111;
  ulong uVar112;
  undefined1 auVar113 [16];
  byte bVar115;
  float fVar114;
  float fVar116;
  undefined8 uVar117;
  int iVar119;
  undefined1 auVar118 [16];
  int iVar120;
  float fVar121;
  float fVar122;
  undefined8 uVar123;
  undefined8 uVar124;
  undefined1 auVar125 [16];
  float fVar126;
  float fVar127;
  undefined8 uVar128;
  undefined1 auVar129 [16];
  long *plVar130;
  long *plVar131;
  undefined8 *puVar132;
  float local_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float local_220;
  float fStack_21c;
  float local_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float local_174;
  undefined8 local_170;
  float fStack_168;
  float fStack_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  float local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  long local_110;
  ulong local_108;
  long local_100;
  int local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  int local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_b8;
  char local_b0;
  undefined4 local_a8 [6];
  
  local_a8[0] = (undefined4)param_4;
  lVar25 = nn::os::GetSystemTick();
  FUN_0316c0bc(&local_b8,param_1,local_a8);
  uStack_c8 = param_8[1];
  local_d0 = *param_8;
  iVar1 = (int)*(short *)(param_5 + 10) + (int)*(short *)(param_5 + 8);
  *(int *)(param_10 + 2) = iVar1;
  uVar3 = iVar1 + 0x1f >> 5;
  if ((int)(*(uint *)((long)param_10 + 0xc) & 0x3fffffff) < (int)uVar3) {
    uVar42 = (*(uint *)((long)param_10 + 0xc) & 0x3fffffff) << 1;
    if (0x3ffffffe < uVar42) {
      uVar42 = 0x3fffffff;
    }
    uVar43 = uVar3;
    if ((int)uVar3 <= (int)uVar42) {
      uVar43 = uVar42;
    }
    lVar26 = FUN_032bd1d4(PTR_PTR_0434a080,uVar43,4,*param_10,(int)param_10[1]);
    *param_10 = lVar26;
  }
  uVar42 = *(uint *)(param_10 + 1);
  if (uVar42 != uVar3) {
    *(uint *)(param_10 + 1) = uVar3;
    uVar42 = uVar3;
  }
  __s = (void *)*param_10;
  uVar45 = (ulong)(int)uVar42;
  pvVar44 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar31 = uVar45;
  }
  else {
    uVar31 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar36 = uVar45;
    if (uVar31 <= uVar45) {
      uVar36 = uVar31;
    }
    pvVar2 = (void *)((long)__s + uVar36 * 4);
    uVar31 = uVar45 - uVar36;
    if (__s < pvVar2) {
      memset(__s,0,uVar36 << 2);
      do {
        pvVar44 = (void *)((long)pvVar44 + 4);
      } while (pvVar44 < pvVar2);
    }
  }
  if ((3 < uVar31) && (0 < (long)(uVar31 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar44 + (uVar31 & 0xfffffffffffffffc) * 4);
    pvVar5 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar44 + 0x10U)) {
      pvVar5 = (void *)((long)pvVar44 + 0x10U);
    }
    uVar31 = (long)pvVar5 + ~(ulong)pvVar44;
    memset(pvVar44,0,uVar31 + 0x10 & 0xfffffffffffffff0);
    uVar3 = ((uint)(uVar31 >> 4) & 0xfffffff) + 1;
    uVar36 = (ulong)uVar3 & 7;
    if ((uVar3 & 7) != 0) {
      do {
        pvVar44 = (void *)((long)pvVar44 + 0x10);
        uVar36 = uVar36 - 1;
      } while (uVar36 != 0);
    }
    if (0x6f < uVar31) {
      do {
        pvVar44 = (void *)((long)pvVar44 + 0x80);
      } while (pvVar44 < pvVar2);
    }
  }
  if (pvVar44 < (void *)((long)__s + (long)(int)uVar42 * 4)) {
    memset(pvVar44,0,(long)__s + ~(ulong)pvVar44 + uVar45 * 4 + 4 & 0xfffffffffffffffc);
  }
  local_f0 = 0;
  local_e8 = 0x8000000000000000;
  local_d8 = 0x80;
  lVar26 = tpidr_el0;
  lVar32 = *(long *)(lVar26 + 0x38d490);
  if (lVar32 == 0) {
    lVar32 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar32;
  }
  lVar32 = *(long *)(lVar32 + 8);
  if (*(ulong *)(lVar32 + 0x10) < 0x1000) {
LAB_0316dab4:
    local_e0 = FUN_032ce670(lVar32,0x1000);
  }
  else {
    local_e0 = *(long *)(lVar32 + 0x18);
    if (*(ulong *)(lVar32 + 0x20) < local_e0 + 0x1000U) goto LAB_0316dab4;
    *(ulong *)(lVar32 + 0x18) = local_e0 + 0x1000U;
  }
  local_e8 = CONCAT44(0x80000080,(int)local_e8);
  local_110 = 0;
  local_108 = 0x8000000000000000;
  local_f8 = iVar1;
  local_f0 = local_e0;
  if (iVar1 == 0) {
    local_100 = 0;
  }
  else {
    lVar32 = *(long *)(lVar26 + 0x38d490);
    if (lVar32 == 0) {
      lVar32 = FUN_0333d16c(0,1);
      *(long *)(lVar26 + 0x38d490) = lVar32;
    }
    lVar32 = *(long *)(lVar32 + 8);
    uVar45 = (ulong)(int)(iVar1 * 0x20 + 0x7fU & 0xffffff80);
    if (uVar45 <= *(ulong *)(lVar32 + 0x10)) {
      local_100 = *(long *)(lVar32 + 0x18);
      uVar45 = local_100 + uVar45;
      if (uVar45 <= *(ulong *)(lVar32 + 0x20)) {
        *(ulong *)(lVar32 + 0x18) = uVar45;
        goto LAB_0316d808;
      }
    }
    local_100 = FUN_032ce670(lVar32);
  }
LAB_0316d808:
  uVar31 = param_4 >> 0x16 & 0x3ff;
  local_108 = CONCAT44(iVar1,(int)local_108) | 0x8000000000000000;
  puVar132 = &local_130;
  fVar10 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + uVar31 * 0xf0) +
                                         0x20) + 0x68) + 0xb0);
  uStack_118 = CONCAT44(fVar10,fVar10);
  lVar32 = param_11 + 0x18;
  fVar87 = (float)*(undefined8 *)param_9 - fVar10;
  local_120 = CONCAT44((float)((ulong)*(undefined8 *)param_9 >> 0x20) - fVar10,fVar87);
  plVar131 = &local_110;
  plVar130 = &local_f0;
  local_110 = local_100;
  FUN_031684f0(param_1,param_2,param_4 & 0xffffffff,param_5);
  uVar68 = local_d0;
  lVar29 = local_110;
  uVar86 = NEON_fmov(0x3f800000,4);
  fVar88 = *param_9;
  iVar1 = (int)local_e8;
  uVar45 = local_e8 & 0xffffffff;
  fStack_1f8 = (float)uStack_c8;
  fStack_1f4 = (float)((ulong)uStack_c8 >> 0x20);
  local_200 = (float)local_d0;
  fStack_1fc = (float)((ulong)local_d0 >> 0x20);
  fVar47 = local_200 * *param_3;
  fVar53 = fStack_1fc * param_3[1];
  fVar54 = fStack_1f8 * param_3[2];
  fVar48 = fVar47 + fVar53 + fVar54;
  fVar54 = fVar47 + fVar53 + fVar54;
  fVar47 = *param_3 - local_200 * fVar48;
  fVar53 = param_3[1] - fStack_1fc * fVar54;
  fVar48 = param_3[2] - fStack_1f8 * fVar48;
  fVar54 = param_3[3] - fStack_1f4 * fVar54;
  if (0 < (int)local_e8) {
    pfVar33 = (float *)(local_f0 + 0x10);
    uVar36 = uVar45;
    do {
      fVar59 = pfVar33[-4] - *pfVar33;
      fVar63 = pfVar33[-3] - pfVar33[1];
      fVar65 = pfVar33[-2] - pfVar33[2];
      fVar55 = pfVar33[-4] - fVar47;
      fVar57 = pfVar33[-3] - fVar53;
      fVar58 = pfVar33[-2] - fVar48;
      fVar66 = fVar55 * fVar59;
      fVar71 = fVar57 * fVar63;
      fVar73 = fVar58 * fVar65;
      fVar74 = fVar59 * fVar59 + fVar63 * fVar63 + fVar65 * fVar65;
      fVar75 = fVar59 * fVar59 + fVar63 * fVar63 + fVar65 * fVar65;
      uVar67 = NEON_frecpe(CONCAT44(fVar75,fVar74),4);
      uVar82 = NEON_frecps(CONCAT44(fVar75,fVar74),uVar67,4);
      fVar76 = (float)uVar67 * (float)uVar82;
      fVar78 = (float)((ulong)uVar67 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
      uVar67 = NEON_frecps(CONCAT44(fVar75,fVar74),CONCAT44(fVar78,fVar76),4);
      uVar67 = NEON_fminnm(CONCAT44((fVar66 + fVar71 + fVar73) *
                                    fVar78 * (float)((ulong)uVar67 >> 0x20),
                                    (fVar66 + fVar71 + fVar73) * fVar76 * (float)uVar67),uVar86,4);
      uVar67 = NEON_fmax(uVar67,0,4);
      fVar66 = (float)((ulong)uVar67 >> 0x20);
      fVar55 = fVar55 - fVar59 * (float)uVar67;
      fVar57 = fVar57 - fVar63 * fVar66;
      fVar58 = fVar58 - fVar65 * (float)uVar67;
      fVar59 = (pfVar33[-1] - fVar54) - (pfVar33[-1] - pfVar33[3]) * fVar66;
      auVar50._0_4_ = fVar55 * fVar55;
      auVar50._4_4_ = fVar57 * fVar57;
      auVar50._8_4_ = fVar58 * fVar58;
      auVar50._12_4_ = fVar59 * fVar59;
      auVar60 = NEON_ext(auVar50,auVar50,8,1);
      if (auVar50._0_4_ + auVar50._4_4_ + auVar60._0_4_ < fVar87 * fVar87) goto LAB_0316e4b8;
      uVar36 = uVar36 - 1;
      pfVar33 = pfVar33 + 8;
    } while (uVar36 != 0);
  }
  sVar9 = *(short *)(param_5 + 10);
  lVar40 = (long)(int)local_108;
  uVar3 = (int)local_108 + sVar9;
  lVar34 = *(long *)(*(long *)(param_1 + 0x38) + uVar31 * 0xf0);
  local_108 = CONCAT44(local_108._4_4_,uVar3);
  if (sVar9 != 0) {
    lVar37 = (long)*(int *)(param_5 + 4);
    uVar31 = (ulong)(uint)(int)sVar9;
    uVar42 = (uint)*(short *)(param_5 + 8);
    lVar27 = 0;
    lVar39 = lVar37 * 0x14;
    puVar35 = (undefined8 *)(local_110 + lVar40 * 0x20 + 0x10);
    lVar40 = lVar37;
    do {
      lVar28 = *(long *)(lVar34 + 0x20);
      if (lVar40 < *(int *)(lVar28 + 0x30)) {
        if (*(int *)(lVar28 + 0x78) == 0) {
          iVar24 = (int)lVar40;
        }
        else {
          iVar24 = *(int *)(*(long *)(lVar28 + 0x70) + lVar40 * 4);
        }
        if (iVar24 == -1) {
          piVar30 = (int *)(*(long *)(lVar28 + 0x28) + (lVar27 + lVar37) * 0x14);
        }
        else {
          piVar30 = (int *)(*(long *)(lVar28 + 0xc0) + (long)iVar24 * 0x14);
        }
      }
      else {
        piVar30 = (int *)(*(long *)(lVar28 + 0xe0) + (long)*(int *)(lVar28 + 0x30) * -0x14 + lVar39)
        ;
      }
      iVar119 = *(int *)(lVar28 + 0x40);
      iVar24 = *piVar30;
      iVar64 = piVar30[1];
      fVar87 = *(float *)(lVar34 + 0x6c);
      fVar55 = *(float *)(lVar34 + 0x7c);
      plVar6 = (long *)(lVar28 + 0x38);
      if (iVar119 <= iVar24) {
        plVar6 = (long *)(lVar28 + 0xf0);
      }
      iVar120 = 0;
      if (iVar119 <= iVar24) {
        iVar120 = iVar119;
      }
      plVar7 = (long *)(lVar28 + 0x38);
      if (iVar119 <= iVar64) {
        plVar7 = (long *)(lVar28 + 0xf0);
      }
      iVar4 = 0;
      if (iVar119 <= iVar64) {
        iVar4 = iVar119;
      }
      lVar27 = lVar27 + 1;
      pfVar33 = (float *)(*plVar7 + (long)(iVar64 - iVar4) * 0x10);
      fVar57 = *pfVar33;
      fVar58 = pfVar33[1];
      fVar59 = pfVar33[2];
      pfVar33 = (float *)(*plVar6 + (long)(iVar24 - iVar120) * 0x10);
      fVar63 = *pfVar33;
      fVar65 = pfVar33[1];
      fVar66 = pfVar33[2];
      uVar43 = uVar42 | 0x3f010000;
      uVar42 = uVar42 + 1;
      lVar39 = lVar39 + 0x14;
      lVar40 = lVar40 + 1;
      uVar31 = uVar31 - 1;
      fVar71 = *(float *)(lVar34 + 0x8c);
      uVar67 = *(undefined8 *)(lVar34 + 0x98);
      fVar78 = (float)uVar67;
      fVar75 = (float)*(undefined8 *)(lVar34 + 0x90);
      fVar76 = (float)((ulong)*(undefined8 *)(lVar34 + 0x90) >> 0x20);
      fVar73 = fVar75 + *(float *)(lVar34 + 0x80) * fVar59 +
                        *(float *)(lVar34 + 0x60) * fVar57 + *(float *)(lVar34 + 0x70) * fVar58;
      fVar74 = fVar76 + *(float *)(lVar34 + 0x84) * fVar59 +
                        *(float *)(lVar34 + 100) * fVar57 + *(float *)(lVar34 + 0x74) * fVar58;
      fVar57 = fVar78 + *(float *)(lVar34 + 0x88) * fVar59 +
                        *(float *)(lVar34 + 0x68) * fVar57 + *(float *)(lVar34 + 0x78) * fVar58;
      fVar75 = fVar75 + *(float *)(lVar34 + 0x80) * fVar66 +
                        *(float *)(lVar34 + 0x60) * fVar63 + *(float *)(lVar34 + 0x70) * fVar65;
      fVar76 = fVar76 + *(float *)(lVar34 + 0x84) * fVar66 +
                        *(float *)(lVar34 + 100) * fVar63 + *(float *)(lVar34 + 0x74) * fVar65;
      fVar78 = fVar78 + *(float *)(lVar34 + 0x88) * fVar66 +
                        *(float *)(lVar34 + 0x68) * fVar63 + *(float *)(lVar34 + 0x78) * fVar65;
      fVar58 = local_200 * fVar73;
      fVar72 = fStack_1fc * fVar74;
      fVar77 = fStack_1f8 * fVar57;
      fVar59 = local_200 * fVar75;
      fVar80 = fStack_1fc * fVar76;
      fVar81 = fStack_1f8 * fVar78;
      fVar79 = fVar59 + fVar80 + fVar81;
      fVar81 = fVar59 + fVar80 + fVar81;
      fVar59 = fVar58 + fVar72 + fVar77;
      auVar60._0_8_ =
           CONCAT44(fVar74 - fStack_1fc * (fVar58 + fVar72 + fVar77),fVar73 - local_200 * fVar59);
      auVar60._8_4_ = fVar57 - fStack_1f8 * fVar59;
      *(float *)(puVar35 + -1) = fVar78 - fStack_1f8 * fVar79;
      *(float *)((long)puVar35 + -4) =
           ((float)((ulong)uVar67 >> 0x20) + fVar71 * fVar66 + fVar87 * fVar63 + fVar55 * fVar65) -
           fStack_1f4 * fVar81;
      *(float *)(puVar35 + -2) = fVar75 - local_200 * fVar79;
      *(float *)((long)puVar35 + -0xc) = fVar76 - fStack_1fc * fVar81;
      auVar60._12_4_ = uVar43;
      puVar35[1] = auVar60._8_8_;
      *puVar35 = auVar60._0_8_;
      puVar35 = puVar35 + 4;
    } while (uVar31 != 0);
  }
  if ((int)local_e8 == 0) {
    lVar34 = 0;
    lVar40 = 0;
    puVar19 = PTR_DAT_043723a0;
    uVar67 = local_130;
    uVar82 = uStack_128;
    goto joined_r0x0316daac;
  }
  lVar40 = *(long *)(lVar26 + 0x38d490);
  if (lVar40 == 0) {
    lVar40 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar40;
  }
  lVar27 = *(long *)(lVar40 + 8);
  uVar31 = (ulong)(int)(iVar1 * 0x20 + 0x7fU & 0xffffff80);
  if (*(ulong *)(lVar27 + 0x10) < uVar31) {
LAB_0316dad0:
    lVar34 = FUN_032ce670(lVar27,uVar31);
    lVar40 = *(long *)(lVar26 + 0x38d490);
  }
  else {
    lVar34 = *(long *)(lVar27 + 0x18);
    if (*(ulong *)(lVar27 + 0x20) < lVar34 + uVar31) goto LAB_0316dad0;
    *(ulong *)(lVar27 + 0x18) = lVar34 + uVar31;
  }
  if (lVar40 == 0) {
    lVar40 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar40;
  }
  lVar27 = *(long *)(lVar40 + 8);
  if (uVar31 <= *(ulong *)(lVar27 + 0x10)) {
    lVar40 = *(long *)(lVar27 + 0x18);
    if (lVar40 + uVar31 <= *(ulong *)(lVar27 + 0x20)) {
      *(ulong *)(lVar27 + 0x18) = lVar40 + uVar31;
      puVar19 = PTR_DAT_043723a0;
      uVar67 = local_130;
      uVar82 = uStack_128;
      goto joined_r0x0316daac;
    }
  }
  lVar40 = FUN_032ce670(lVar27,uVar31);
  puVar19 = PTR_DAT_043723a0;
  uVar67 = local_130;
  uVar82 = uStack_128;
joined_r0x0316daac:
  PTR_DAT_043723a0 = puVar19;
  if (0 < (int)uVar3) {
    auVar56._8_4_ = fStack_1f8;
    auVar56._0_8_ = uVar68;
    auVar56._12_4_ = fStack_1f4;
    auVar50 = NEON_ext(auVar56,auVar56,4,1);
    uVar31 = 0;
    do {
      puVar35 = (undefined8 *)(lVar29 + uVar31 * 0x20);
      fStack_168 = *(float *)(puVar35 + 3);
      local_148 = puVar35[1];
      local_170 = puVar35[2];
      local_150 = *puVar35;
      local_158 = puVar35[1];
      uVar8 = *(ushort *)((long)puVar35 + 0x1c);
      fStack_164 = *(float *)((long)puVar35 + 0x1c);
      local_160 = *puVar35;
      local_140 = local_170;
      local_138 = fStack_168;
      iVar24 = FUN_0316e900(&local_160,&local_170,param_9,&uStack_118,&local_d0,&local_f0,&local_174
                            ,param_11 + 0x58,plVar130,plVar131,puVar132,lVar32);
      if (iVar24 != 0) {
        fVar65 = (float)local_160 + ((float)local_170 - (float)local_160) * local_174;
        fVar66 = local_160._4_4_ + (local_170._4_4_ - local_160._4_4_) * local_174;
        fVar71 = (float)local_158 + (fStack_168 - (float)local_158) * local_174;
        fVar73 = local_158._4_4_ + (fStack_164 - local_158._4_4_) * local_174;
        fVar55 = fVar47 - fVar65;
        fVar58 = fVar53 - fVar66;
        fVar59 = fVar48 - fVar71;
        fVar63 = fVar54 - fVar73;
        fVar87 = fVar55 * fVar55 + fVar58 * fVar58 + fVar59 * fVar59;
        fVar57 = fVar55 * fVar55 + fVar58 * fVar58 + fVar59 * fVar59;
        auVar118._0_8_ = CONCAT44(fVar57,fVar87);
        lVar27 = nn::os::GetSystemTick();
        if (iVar1 < 1) {
          uVar42 = 0;
          uVar43 = 0;
        }
        else {
          auVar84._4_4_ = fVar58;
          auVar84._0_4_ = fVar55;
          auVar84._8_4_ = fVar59;
          auVar70._4_4_ = fVar58;
          auVar70._0_4_ = fVar55;
          auVar70._8_4_ = fVar59;
          auVar118._8_8_ = auVar118._0_8_;
          auVar60 = NEON_frecpe(auVar118,4);
          auVar56 = NEON_frecps(auVar118,auVar60,4);
          auVar92._0_4_ = auVar60._0_4_ * auVar56._0_4_;
          auVar92._4_4_ = auVar60._4_4_ * auVar56._4_4_;
          auVar92._8_4_ = auVar60._8_4_ * auVar56._8_4_;
          auVar92._12_4_ = auVar60._12_4_ * auVar56._12_4_;
          uVar42 = 0;
          auVar60 = NEON_frecps(auVar118,auVar92,4);
          uVar43 = 0;
          auVar46._0_4_ = fVar55 * auVar92._0_4_ * auVar60._0_4_;
          auVar46._4_4_ = fVar58 * auVar92._4_4_ * auVar60._4_4_;
          auVar46._8_4_ = fVar59 * auVar92._8_4_ * auVar60._8_4_;
          auVar93._0_4_ = fVar65 * auVar46._0_4_;
          auVar93._4_4_ = fVar66 * auVar46._4_4_;
          auVar93._8_4_ = fVar71 * auVar46._8_4_;
          auVar93._12_4_ = fVar73 * fVar63 * auVar92._12_4_ * auVar60._12_4_;
          auVar60 = NEON_ext(auVar93,auVar93,8,1);
          fVar74 = -(auVar93._0_4_ + auVar93._4_4_ + auVar60._0_4_);
          auVar46._12_4_ = fVar74;
          auVar70._12_4_ = fVar63;
          auVar84._12_4_ = fVar63;
          auVar60 = NEON_ext(auVar70,auVar84,4,1);
          local_220 = auVar50._0_4_;
          fStack_21c = auVar50._4_4_;
          auVar98._0_4_ = local_200 * auVar60._0_4_ - local_220 * fVar55;
          auVar98._4_4_ = fStack_1fc * auVar60._4_4_ - fStack_21c * fVar58;
          auVar98._8_4_ = fStack_1f8 * fVar55 - local_200 * fVar59;
          auVar98._12_4_ = fStack_1f4 * fVar58 - fStack_1fc * fVar63;
          auVar60 = NEON_ext(auVar98,auVar98,4,1);
          fVar77 = auVar60._0_4_;
          fVar79 = auVar60._4_4_;
          fVar75 = fVar77 * fVar77 + fVar79 * fVar79 + auVar98._0_4_ * auVar98._0_4_;
          fVar78 = fVar77 * fVar77 + fVar79 * fVar79 + auVar98._0_4_ * auVar98._0_4_;
          uVar49 = CONCAT44(fVar78,fVar75);
          uVar68 = NEON_frsqrte(uVar49,4);
          fVar76 = (float)uVar68;
          fVar72 = (float)((ulong)uVar68 >> 0x20);
          uVar68 = NEON_frsqrts(uVar49,CONCAT44(fVar72 * fVar72,fVar76 * fVar76),4);
          fVar76 = fVar76 * (float)uVar68;
          fVar72 = fVar72 * (float)((ulong)uVar68 >> 0x20);
          iVar24 = -(uint)(fVar75 <= 0.0);
          iVar64 = -(uint)(fVar78 <= 0.0);
          uVar68 = NEON_frsqrts(uVar49,CONCAT44(fVar72 * fVar72,fVar76 * fVar76),4);
          fVar76 = (float)uVar68 * fVar76;
          fVar72 = (float)((ulong)uVar68 >> 0x20) * fVar72;
          fVar75 = (float)CONCAT13((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                                   CONCAT12((byte)((uint)fVar76 >> 0x10) &
                                            ~(byte)((uint)iVar24 >> 0x10),
                                            CONCAT11((byte)((uint)fVar76 >> 8) &
                                                     ~(byte)((uint)iVar24 >> 8),
                                                     SUB41(fVar76,0) & ~(byte)iVar24)));
          auVar51._0_4_ = fVar77 * fVar75;
          fVar76 = (float)(CONCAT17((byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                    CONCAT16((byte)((uint)fVar72 >> 0x10) &
                                             ~(byte)((uint)iVar64 >> 0x10),
                                             CONCAT15((byte)((uint)fVar72 >> 8) &
                                                      ~(byte)((uint)iVar64 >> 8),
                                                      CONCAT14(SUB41(fVar72,0) & ~(byte)iVar64,
                                                               fVar75)))) >> 0x20);
          auVar51._4_4_ = fVar79 * fVar76;
          auVar51._8_4_ = auVar98._0_4_ * fVar75;
          auVar105._0_4_ = fVar65 * auVar51._0_4_;
          auVar105._4_4_ = fVar66 * auVar51._4_4_;
          auVar105._8_4_ = fVar71 * auVar51._8_4_;
          auVar105._12_4_ = fVar73 * auVar98._4_4_ * fVar76;
          auVar60 = NEON_ext(auVar105,auVar105,8,1);
          local_230 = (float)uVar67;
          fStack_22c = (float)((ulong)uVar67 >> 0x20);
          fStack_228 = (float)uVar82;
          fStack_224 = (float)((ulong)uVar82 >> 0x20);
          fVar75 = -(auVar105._0_4_ + auVar105._4_4_ + auVar60._0_4_);
          auVar51._12_4_ = fVar75;
          auVar61._0_4_ = local_230 * auVar51._0_4_;
          auVar61._4_4_ = fStack_22c * auVar51._4_4_;
          auVar61._8_4_ = fStack_228 * auVar51._8_4_;
          auVar61._12_4_ = fStack_224 * fVar75;
          auVar56 = NEON_ext(auVar61,auVar61,8,1);
          auVar69._8_8_ = _UNK_03889298;
          auVar69._0_8_ = _DAT_03889290;
          puVar35 = (undefined8 *)(local_f0 + 0x10);
          auVar60 = a64_TBL(ZEXT816(0),auVar51,auVar69);
          auVar70 = a64_TBL(ZEXT816(0),auVar46,auVar69);
          uVar36 = uVar45;
          do {
            fVar77 = (float)puVar35[-1];
            fVar79 = (float)((ulong)puVar35[-1] >> 0x20);
            uVar124 = puVar35[-2];
            fVar72 = (float)((ulong)uVar124 >> 0x20);
            uVar49 = puVar35[1];
            fVar78 = (float)((ulong)uVar49 >> 0x20);
            uVar68 = *puVar35;
            fVar76 = (float)((ulong)uVar68 >> 0x20);
            auVar91._0_4_ = auVar51._0_4_ * (float)uVar68;
            auVar91._4_4_ = auVar51._4_4_ * fVar76;
            auVar91._8_4_ = auVar51._8_4_ * (float)uVar49;
            auVar91._12_4_ = fVar75 * fVar78;
            auVar104._0_4_ = auVar46._0_4_ * (float)uVar68;
            auVar104._4_4_ = auVar46._4_4_ * fVar76;
            auVar104._8_4_ = auVar46._8_4_ * (float)uVar49;
            auVar104._12_4_ = fVar74 * fVar78;
            auVar83._0_4_ = auVar51._0_4_ * (float)uVar124;
            auVar83._4_4_ = auVar51._4_4_ * fVar72;
            auVar83._8_4_ = auVar51._8_4_ * fVar77;
            auVar83._12_4_ = fVar75 * fVar79;
            auVar97._0_4_ = auVar46._0_4_ * (float)uVar124;
            auVar97._4_4_ = auVar46._4_4_ * fVar72;
            auVar97._8_4_ = auVar46._8_4_ * fVar77;
            auVar97._12_4_ = fVar74 * fVar79;
            auVar84 = NEON_ext(auVar83,auVar83,8,1);
            auVar92 = NEON_ext(auVar91,auVar91,8,1);
            auVar98 = NEON_ext(auVar97,auVar97,8,1);
            auVar105 = NEON_ext(auVar104,auVar104,8,1);
            auVar93 = auVar70 ^ (auVar70 ^ auVar60) & *(undefined1 (*) [16])(puVar19 + 0x30);
            auVar107._0_4_ = auVar84._0_4_ + auVar83._0_4_ + auVar83._4_4_ + auVar93._0_4_;
            auVar107._4_4_ = auVar92._0_4_ + auVar91._0_4_ + auVar91._4_4_ + auVar93._4_4_;
            auVar107._8_4_ = auVar98._0_4_ + auVar97._0_4_ + auVar97._4_4_ + auVar93._8_4_;
            auVar107._12_4_ = auVar105._0_4_ + auVar104._0_4_ + auVar104._4_4_ + auVar93._12_4_;
            auVar106._0_8_ =
                 CONCAT44(-(uint)(auVar107._12_4_ < auVar107._8_4_),
                          -(uint)(auVar107._12_4_ < auVar107._8_4_));
            auVar84 = NEON_rev64(auVar107,4);
            auVar106._8_8_ = auVar106._0_8_;
            auVar107 = auVar107 ^ (auVar107 ^ auVar84) & auVar106;
            fVar78 = auVar107._4_4_;
            fVar76 = fVar78;
            if (0.0 <= auVar107._12_4_) {
              fVar76 = auVar107._0_4_;
              bVar115 = auVar107[3];
              if (auVar107._8_4_ <= 1.0) {
                auVar84 = NEON_ext(auVar107,auVar107,8,1);
                fVar79 = auVar84._0_4_;
                fVar72 = auVar84._4_4_ - fVar79;
                uVar117 = CONCAT44(auVar84._4_4_ - fVar79,fVar72);
                uVar123 = NEON_frecpe(uVar117,4);
                uVar128 = NEON_frecps(uVar117,uVar123,4);
                fVar80 = (float)uVar123 * (float)uVar128;
                iVar24 = -(uint)(fVar72 == 0.0);
                uVar128 = NEON_frecps(uVar117,CONCAT44((float)((ulong)uVar123 >> 0x20) *
                                                       (float)((ulong)uVar128 >> 0x20),fVar80),4);
                fVar80 = (float)((uint)(fVar80 * (float)uVar128) &
                                CONCAT13(~(byte)((uint)iVar24 >> 0x18),
                                         CONCAT12(~(byte)((uint)iVar24 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar24 >> 8),~(byte)iVar24)
                                                 )));
                fVar72 = fVar76;
                if (auVar107._8_4_ < 0.0) {
                  fVar72 = fVar76 - (fVar78 - fVar76) * fVar79 * fVar80;
                  bVar115 = (byte)((uint)fVar72 >> 0x18);
                }
                if (1.0 < auVar107._12_4_) {
                  fVar78 = fVar76 + (fVar78 - fVar76) * ((float)uVar86 - fVar79) * fVar80;
                }
                fVar72 = ABS(fVar72);
                uVar96 = -(uint)(ABS(fVar78) < fVar72);
                uVar17 = (uint)fVar72 ^ ((uint)fVar72 ^ (uint)ABS(fVar78)) & uVar96;
                bVar18 = (byte)((uint)fVar78 >> 0x18);
                fVar76 = (float)CONCAT13((bVar18 ^ (bVar18 ^ bVar115) & (byte)(uVar96 >> 0x18)) &
                                         0x80 ^ (byte)(uVar17 >> 0x18),(int3)uVar17);
              }
            }
            fVar78 = fVar76;
            if (ABS(fVar76) < fVar88 * 0.007874016) {
              fVar78 = fVar76 - (auVar61._0_4_ + auVar61._4_4_ + auVar56._0_4_ + fVar75);
            }
            if (fVar78 <= 0.0) {
              lVar39 = (long)(int)uVar42;
              uVar42 = uVar42 + 1;
              puVar38 = (undefined8 *)(lVar40 + lVar39 * 0x20);
            }
            else {
              lVar39 = (long)(int)uVar43;
              uVar43 = uVar43 + 1;
              puVar38 = (undefined8 *)(lVar34 + lVar39 * 0x20);
            }
            puVar38[1] = CONCAT44(ABS(fVar76),fVar77);
            *puVar38 = uVar124;
            uVar36 = uVar36 - 1;
            puVar35 = puVar35 + 4;
            puVar38[3] = uVar49;
            puVar38[2] = uVar68;
          } while (uVar36 != 0);
        }
        lVar39 = nn::os::GetSystemTick();
        *(long *)(param_11 + 0x78) = (lVar39 - lVar27) + *(long *)(param_11 + 0x78);
        *(int *)(param_11 + 0x80) = *(int *)(param_11 + 0x80) + 1;
        if (uVar43 - 1 != 0 && 0 < (int)uVar43) {
          FUN_03174c60(lVar34,0,uVar43 - 1);
        }
        if (1 < (int)uVar42) {
          FUN_03174c60(lVar40,0,uVar42 - 1);
        }
        lVar27 = nn::os::GetSystemTick();
        if (((uVar42 != 0) && (uVar43 != 0)) && (0 < (int)uVar43)) {
          uVar68 = NEON_frsqrte(auVar118._0_8_,4);
          fVar74 = (float)uVar68;
          fVar75 = (float)((ulong)uVar68 >> 0x20);
          uVar68 = NEON_frsqrts(auVar118._0_8_,CONCAT44(fVar75 * fVar75,fVar74 * fVar74),4);
          fVar74 = fVar74 * (float)uVar68;
          fVar75 = fVar75 * (float)((ulong)uVar68 >> 0x20);
          uVar68 = NEON_frsqrts(auVar118._0_8_,CONCAT44(fVar75 * fVar75,fVar74 * fVar74),4);
          iVar24 = -(uint)(fVar87 <= 0.0);
          iVar64 = -(uint)(fVar57 <= 0.0);
          fVar74 = (float)uVar68 * fVar74;
          fVar75 = (float)((ulong)uVar68 >> 0x20) * fVar75;
          fVar87 = (float)CONCAT13((byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                                   CONCAT12((byte)((uint)fVar74 >> 0x10) &
                                            ~(byte)((uint)iVar24 >> 0x10),
                                            CONCAT11((byte)((uint)fVar74 >> 8) &
                                                     ~(byte)((uint)iVar24 >> 8),
                                                     SUB41(fVar74,0) & ~(byte)iVar24)));
          uVar36 = 0;
          fVar55 = fVar55 * fVar87;
          fVar57 = (float)(CONCAT17((byte)((uint)fVar75 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18),
                                    CONCAT16((byte)((uint)fVar75 >> 0x10) &
                                             ~(byte)((uint)iVar64 >> 0x10),
                                             CONCAT15((byte)((uint)fVar75 >> 8) &
                                                      ~(byte)((uint)iVar64 >> 8),
                                                      CONCAT14(SUB41(fVar75,0) & ~(byte)iVar64,
                                                               fVar87)))) >> 0x20);
          fVar58 = fVar58 * fVar57;
          fVar59 = fVar59 * fVar87;
          fVar63 = fVar63 * fVar57;
          auVar62._0_4_ = fVar47 * fVar55;
          auVar62._4_4_ = fVar53 * fVar58;
          auVar62._8_4_ = fVar48 * fVar59;
          auVar62._12_4_ = fVar54 * fVar63;
          auVar52._0_4_ = fVar65 * fVar55;
          auVar52._4_4_ = fVar66 * fVar58;
          auVar52._8_4_ = fVar71 * fVar59;
          auVar52._12_4_ = fVar73 * fVar63;
          auVar60 = NEON_ext(auVar52,auVar52,8,1);
          fVar87 = auVar52._0_4_ + auVar52._4_4_ + auVar60._0_4_;
          auVar60 = NEON_ext(auVar62,auVar62,8,1);
          fVar57 = auVar62._0_4_ + auVar62._4_4_ + auVar60._0_4_;
          fVar65 = (float)*(undefined8 *)param_9 - fVar10;
          fVar65 = fVar65 + fVar65;
          do {
            auVar60 = *(undefined1 (*) [16])(lVar34 + uVar36 * 0x20);
            fVar66 = auVar60._12_4_;
            if (fVar65 < fVar66) break;
            if (0 < (int)uVar42) {
              lVar39 = lVar34 + uVar36 * 0x20;
              uVar49 = *(undefined8 *)(lVar39 + 0x18);
              uVar68 = *(undefined8 *)(lVar39 + 0x10);
              fVar71 = auVar60._0_4_;
              fVar75 = (float)uVar68 - fVar71;
              fVar73 = auVar60._4_4_;
              fVar76 = (float)((ulong)uVar68 >> 0x20) - fVar73;
              fVar74 = auVar60._8_4_;
              fVar78 = (float)uVar49 - fVar74;
              fVar72 = (float)((ulong)uVar49 >> 0x20) - fVar66;
              pfVar33 = (float *)(lVar40 + 0x10);
              uVar41 = (ulong)uVar42;
              do {
                fVar80 = (float)*(undefined8 *)(pfVar33 + -2);
                fVar81 = (float)((ulong)*(undefined8 *)(pfVar33 + -2) >> 0x20);
                fVar77 = (float)*(undefined8 *)(pfVar33 + -4);
                fVar79 = (float)((ulong)*(undefined8 *)(pfVar33 + -4) >> 0x20);
                if (fVar65 < fVar66 + fVar81) break;
                auVar85._0_4_ = *pfVar33 - fVar77;
                auVar85._4_4_ = pfVar33[1] - fVar79;
                auVar85._8_4_ = pfVar33[2] - fVar80;
                auVar85._12_4_ = pfVar33[3] - fVar81;
                auVar11._4_4_ = fVar76;
                auVar11._0_4_ = fVar75;
                auVar11._8_4_ = fVar78;
                auVar11._12_4_ = fVar72;
                auVar12._4_4_ = fVar76;
                auVar12._0_4_ = fVar75;
                auVar12._8_4_ = fVar78;
                auVar12._12_4_ = fVar72;
                auVar60 = NEON_ext(auVar11,auVar12,4,1);
                auVar56 = NEON_ext(auVar85,auVar85,4,1);
                fVar103 = fVar77 - fVar71;
                fVar109 = fVar79 - fVar73;
                fVar110 = fVar80 - fVar74;
                auVar99._0_4_ = fVar75 * fVar75;
                auVar99._4_4_ = fVar76 * fVar76;
                auVar99._8_4_ = fVar78 * fVar78;
                auVar99._12_4_ = fVar72 * fVar72;
                auVar118 = NEON_ext(auVar99,auVar99,8,1);
                fVar89 = auVar60._0_4_ * auVar85._0_4_ - fVar75 * auVar56._0_4_;
                fVar95 = auVar60._4_4_ * auVar85._4_4_ - fVar76 * auVar56._4_4_;
                auVar94._0_8_ = CONCAT44(fVar95,fVar89);
                auVar94._8_4_ = fVar75 * auVar85._8_4_ - fVar78 * auVar85._0_4_;
                auVar94._12_4_ = fVar76 * auVar85._12_4_ - fVar72 * auVar85._4_4_;
                auVar60 = NEON_ext(auVar94,auVar94,4,1);
                uVar124 = NEON_ext(auVar60._0_8_,auVar94._0_8_,4,1);
                fVar126 = auVar60._0_4_;
                fVar127 = auVar60._4_4_;
                fVar121 = fVar126 * fVar126 + fVar127 * fVar127 + fVar89 * fVar89;
                fVar122 = fVar126 * fVar126 + fVar127 * fVar127 + fVar89 * fVar89;
                uVar49 = CONCAT44(fVar122,fVar121);
                uVar68 = NEON_frecpe(uVar49,4);
                uVar128 = NEON_frecps(uVar49,uVar68,4);
                fVar114 = (float)uVar68 * (float)uVar128;
                fVar116 = (float)((ulong)uVar68 >> 0x20) * (float)((ulong)uVar128 >> 0x20);
                auVar113._0_4_ = auVar56._0_4_ * fVar126 - auVar85._0_4_ * (float)uVar124;
                auVar113._4_4_ =
                     auVar56._4_4_ * fVar127 - auVar85._4_4_ * (float)((ulong)uVar124 >> 0x20);
                auVar113._8_4_ = auVar85._0_4_ * fVar89 - auVar85._8_4_ * fVar126;
                auVar113._12_4_ = auVar85._4_4_ * fVar95 - auVar85._12_4_ * fVar127;
                auVar60 = NEON_ext(auVar113,auVar113,4,1);
                iVar24 = -(uint)(fVar121 == 0.0);
                iVar64 = -(uint)(fVar122 == 0.0);
                uVar68 = NEON_frecps(uVar49,CONCAT44(fVar116,fVar114),4);
                uVar90 = CONCAT17(~(byte)((uint)iVar64 >> 0x18),
                                  CONCAT16(~(byte)((uint)iVar64 >> 0x10),
                                           CONCAT15(~(byte)((uint)iVar64 >> 8),
                                                    CONCAT14(~(byte)iVar64,
                                                             CONCAT13(~(byte)((uint)iVar24 >> 0x18),
                                                                      CONCAT12(~(byte)((uint)iVar24
                                                                                      >> 0x10),
                                                                               CONCAT11(~(byte)((
                                                  uint)iVar24 >> 8),~(byte)iVar24)))))));
                fVar89 = fVar103 * auVar60._0_4_;
                fVar95 = fVar109 * auVar60._4_4_;
                fVar126 = fVar75 * fVar103;
                fVar127 = fVar76 * fVar109;
                fVar121 = fVar72 * (fVar81 - fVar66);
                auVar129._0_4_ = auVar85._0_4_ * auVar85._0_4_;
                auVar129._4_4_ = auVar85._4_4_ * auVar85._4_4_;
                auVar129._8_4_ = auVar85._8_4_ * auVar85._8_4_;
                auVar129._12_4_ = auVar85._12_4_ * auVar85._12_4_;
                auVar108._0_4_ = fVar103 * auVar85._0_4_;
                auVar108._4_4_ = fVar109 * auVar85._4_4_;
                auVar108._8_4_ = fVar110 * auVar85._8_4_;
                auVar108._12_4_ = (fVar81 - fVar66) * auVar85._12_4_;
                uVar111 = CONCAT44(fVar116 * (float)((ulong)uVar68 >> 0x20),fVar114 * (float)uVar68)
                          & uVar90;
                auVar15._4_4_ = fVar127;
                auVar15._0_4_ = fVar126;
                auVar15._8_4_ = fVar78 * fVar110;
                auVar15._12_4_ = fVar121;
                auVar16._4_4_ = fVar127;
                auVar16._0_4_ = fVar126;
                auVar16._8_4_ = fVar78 * fVar110;
                auVar16._12_4_ = fVar121;
                auVar56 = NEON_ext(auVar15,auVar16,8,1);
                auVar70 = NEON_ext(auVar129,auVar129,8,1);
                auVar60 = NEON_ext(auVar108,auVar108,8,1);
                uVar68 = NEON_fminnm(CONCAT44((float)(uVar111 >> 0x20) *
                                              (fVar89 + fVar95 + fVar110 * auVar113._0_4_),
                                              (float)uVar111 *
                                              (fVar89 + fVar95 + fVar110 * auVar113._0_4_)),uVar86,4
                                    );
                auVar100._0_4_ = auVar118._0_4_ + auVar99._0_4_ + auVar99._4_4_;
                auVar100._4_4_ = auVar56._0_4_ + fVar126 + fVar127;
                fVar89 = auVar70._0_4_ + auVar129._0_4_ + auVar129._4_4_;
                fVar110 = auVar60._0_4_ + auVar108._0_4_ + auVar108._4_4_;
                auVar100._12_4_ = fVar110;
                auVar100._8_4_ = fVar89;
                auVar60 = NEON_frecpe(auVar100,4);
                iVar24 = -(uint)(auVar100._0_4_ == 0.0);
                iVar64 = -(uint)(auVar100._4_4_ == 0.0);
                iVar119 = -(uint)(fVar89 == 0.0);
                iVar120 = -(uint)(fVar110 == 0.0);
                uVar112 = NEON_fmax(uVar68,0,4);
                auVar56 = NEON_frecps(auVar100,auVar60,4);
                fVar114 = fVar78 * auVar85._8_4_ + fVar75 * auVar85._0_4_ + fVar76 * auVar85._4_4_;
                fVar127 = fVar78 * auVar85._8_4_ + fVar75 * auVar85._0_4_ + fVar76 * auVar85._4_4_;
                auVar125._0_4_ = auVar60._0_4_ * auVar56._0_4_;
                auVar125._4_4_ = auVar60._4_4_ * auVar56._4_4_;
                auVar125._8_4_ = auVar60._8_4_ * auVar56._8_4_;
                auVar125._12_4_ = auVar60._12_4_ * auVar56._12_4_;
                auVar60 = NEON_frecps(auVar100,auVar125,4);
                fVar89 = auVar125._0_4_ * auVar60._0_4_;
                fVar95 = auVar125._4_4_ * auVar60._4_4_;
                fVar103 = auVar125._8_4_ * auVar60._8_4_;
                fVar109 = auVar125._12_4_ * auVar60._12_4_;
                auVar101._0_4_ =
                     (float)CONCAT13((byte)((uint)fVar89 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                                     CONCAT12((byte)((uint)fVar89 >> 0x10) &
                                              ~(byte)((uint)iVar24 >> 0x10),
                                              CONCAT11((byte)((uint)fVar89 >> 8) &
                                                       ~(byte)((uint)iVar24 >> 8),
                                                       SUB41(fVar89,0) & ~(byte)iVar24)));
                auVar101[4] = SUB41(fVar95,0) & ~(byte)iVar64;
                auVar101[5] = (byte)((uint)fVar95 >> 8) & ~(byte)((uint)iVar64 >> 8);
                auVar101[6] = (byte)((uint)fVar95 >> 0x10) & ~(byte)((uint)iVar64 >> 0x10);
                auVar101[7] = (byte)((uint)fVar95 >> 0x18) & ~(byte)((uint)iVar64 >> 0x18);
                auVar101[8] = SUB41(fVar103,0) & ~(byte)iVar119;
                auVar101[9] = (byte)((uint)fVar103 >> 8) & ~(byte)((uint)iVar119 >> 8);
                auVar101[10] = (byte)((uint)fVar103 >> 0x10) & ~(byte)((uint)iVar119 >> 0x10);
                auVar101[0xb] = (byte)((uint)fVar103 >> 0x18) & ~(byte)((uint)iVar119 >> 0x18);
                auVar101[0xc] = SUB41(fVar109,0) & ~(byte)iVar120;
                auVar101[0xd] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar120 >> 8);
                auVar101[0xe] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar120 >> 0x10);
                auVar101[0xf] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar120 >> 0x18);
                auVar60 = NEON_ext(auVar101,auVar101,8,1);
                fVar89 = ((float)uVar112 * fVar114 - fVar110) * auVar60._0_4_;
                fVar95 = ((float)(uVar112 >> 0x20) * fVar127 - fVar110) * auVar60._0_4_;
                uVar68 = NEON_fminnm(CONCAT44(fVar95,fVar89),uVar86,4);
                uVar68 = NEON_fmax(uVar68,0,4);
                fVar110 = (float)uVar68;
                fVar126 = (float)((ulong)uVar68 >> 0x20);
                uVar68 = NEON_fminnm(CONCAT44((auVar100._4_4_ + fVar127 * fVar126) * auVar101._0_4_,
                                              (auVar100._4_4_ + fVar114 * fVar110) * auVar101._0_4_)
                                     ,uVar86,4);
                uVar111 = NEON_fmax(uVar68,0,4);
                uVar111 = uVar111 ^ (uVar111 ^ uVar112) &
                                    CONCAT44(-(uint)(fVar126 == fVar95),-(uint)(fVar110 == fVar89))
                                    & uVar90;
                fVar89 = (float)uVar111;
                fVar103 = (float)(uVar111 >> 0x20);
                fVar95 = fVar71 + fVar75 * fVar89;
                fVar109 = fVar73 + fVar76 * fVar103;
                fVar89 = fVar74 + fVar78 * fVar89;
                fVar103 = fVar66 + fVar72 * fVar103;
                fVar77 = fVar95 - (fVar77 + auVar85._0_4_ * fVar110);
                fVar79 = fVar109 - (fVar79 + auVar85._4_4_ * fVar126);
                fVar80 = fVar89 - (fVar80 + auVar85._8_4_ * fVar110);
                fVar81 = fVar103 - (fVar81 + auVar85._12_4_ * fVar126);
                auVar102._0_4_ = fVar77 * fVar77;
                auVar102._4_4_ = fVar79 * fVar79;
                auVar102._8_4_ = fVar80 * fVar80;
                auVar102._12_4_ = fVar81 * fVar81;
                auVar56 = NEON_ext(auVar102,auVar102,8,1);
                fVar77 = fVar55 * (fVar95 + fVar77 * -0.5);
                fVar79 = fVar58 * (fVar109 + fVar79 * -0.5);
                fVar80 = fVar59 * (fVar89 + fVar80 * -0.5);
                fVar81 = fVar63 * (fVar103 + fVar81 * -0.5);
                auVar13._4_4_ = fVar79;
                auVar13._0_4_ = fVar77;
                auVar13._8_4_ = fVar80;
                auVar13._12_4_ = fVar81;
                auVar14._4_4_ = fVar79;
                auVar14._0_4_ = fVar77;
                auVar14._8_4_ = fVar80;
                auVar14._12_4_ = fVar81;
                auVar60 = NEON_ext(auVar13,auVar14,8,1);
                fVar77 = auVar60._0_4_ + fVar77 + fVar79;
                bVar20 = false;
                bVar22 = true;
                bVar23 = false;
                if (auVar102._0_4_ + auVar102._4_4_ + auVar56._0_4_ < fVar65 * fVar65) {
                  bVar20 = false;
                  bVar22 = false;
                  bVar23 = true;
                  if (!NAN(fVar77) && !NAN(fVar87)) {
                    bVar20 = fVar77 < fVar87;
                    bVar22 = fVar77 == fVar87;
                    bVar23 = false;
                  }
                }
                bVar21 = false;
                if ((!bVar22 && bVar20 == bVar23) && (bVar21 = false, !NAN(fVar77) && !NAN(fVar57)))
                {
                  bVar21 = fVar77 < fVar57;
                }
                if (bVar21) {
                  lVar39 = nn::os::GetSystemTick();
                  *(long *)(param_11 + 0x90) = (lVar39 - lVar27) + *(long *)(param_11 + 0x90);
                  *(int *)(param_11 + 0x98) = *(int *)(param_11 + 0x98) + 1;
                  goto LAB_0316ddcc;
                }
                uVar41 = uVar41 - 1;
                pfVar33 = pfVar33 + 8;
              } while (uVar41 != 0);
            }
            uVar36 = uVar36 + 1;
          } while (uVar36 != uVar43);
        }
        lVar39 = nn::os::GetSystemTick();
        *(long *)(param_11 + 0x90) = (lVar39 - lVar27) + *(long *)(param_11 + 0x90);
        *(int *)(param_11 + 0x98) = *(int *)(param_11 + 0x98) + 1;
        uVar36 = (ulong)(uVar8 >> 3) & 0x1ffc;
        *(uint *)(*param_10 + uVar36) = *(uint *)(*param_10 + uVar36) | 1 << (ulong)(uVar8 & 0x1f);
      }
LAB_0316ddcc:
      uVar31 = uVar31 + 1;
    } while (uVar31 != uVar3);
  }
  lVar32 = *(long *)(lVar26 + 0x38d490);
  if (lVar32 == 0) {
    lVar32 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar32;
  }
  lVar29 = *(long *)(lVar32 + 8);
  uVar45 = (ulong)(int)(iVar1 * 0x20 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar29 + 0x10) < uVar45) || (*(long *)(lVar29 + 0x18) != lVar40 + uVar45)) ||
     (*(long *)(lVar29 + 0x28) == lVar40)) {
    if (lVar40 != 0) {
      if (*(ulong *)(lVar29 + 0x10) < uVar45) {
        *(int *)(*(long *)(lVar29 + 8) + 0x20) = *(int *)(*(long *)(lVar29 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar29 + 0x40) + 0x18))(*(long **)(lVar29 + 0x40),lVar40,uVar45);
      }
      else if (*(long *)(lVar29 + 0x18) == lVar40 + uVar45) {
        *(long *)(lVar29 + 0x18) = lVar40;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar29,lVar40,uVar45);
      }
    }
    lVar32 = *(long *)(lVar26 + 0x38d490);
  }
  else {
    *(long *)(lVar29 + 0x18) = lVar40;
  }
  if (lVar32 == 0) {
    lVar32 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar32;
  }
  lVar32 = *(long *)(lVar32 + 8);
  if (((*(ulong *)(lVar32 + 0x10) < uVar45) || (*(long *)(lVar32 + 0x18) != lVar34 + uVar45)) ||
     (*(long *)(lVar32 + 0x28) == lVar34)) {
    if (lVar34 != 0) {
      if (*(ulong *)(lVar32 + 0x10) < uVar45) {
        *(int *)(*(long *)(lVar32 + 8) + 0x20) = *(int *)(*(long *)(lVar32 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar32 + 0x40) + 0x18))(*(long **)(lVar32 + 0x40),lVar34,uVar45);
      }
      else if (*(long *)(lVar32 + 0x18) == lVar34 + uVar45) {
        *(long *)(lVar32 + 0x18) = lVar34;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar32,lVar34,uVar45);
      }
    }
  }
  else {
    *(long *)(lVar32 + 0x18) = lVar34;
  }
LAB_0316e4b8:
  iVar1 = local_f8;
  lVar29 = local_100;
  lVar32 = local_110;
  if (local_100 == local_110) {
    local_108 = local_108 & 0xffffffff00000000;
  }
  lVar34 = *(long *)(lVar26 + 0x38d490);
  if (lVar34 == 0) {
    lVar34 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar34;
  }
  lVar34 = *(long *)(lVar34 + 8);
  uVar45 = (ulong)(int)(iVar1 * 0x20 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar34 + 0x10) < uVar45) || (*(long *)(lVar34 + 0x18) != uVar45 + lVar29)) ||
     (*(long *)(lVar34 + 0x28) == lVar29)) {
    if (lVar29 != 0) {
      if (*(ulong *)(lVar34 + 0x10) < uVar45) {
        *(int *)(*(long *)(lVar34 + 8) + 0x20) = *(int *)(*(long *)(lVar34 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar34 + 0x40) + 0x18))(*(long **)(lVar34 + 0x40),lVar29);
      }
      else if (*(long *)(lVar34 + 0x18) == uVar45 + lVar29) {
        *(long *)(lVar34 + 0x18) = lVar29;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar34,lVar29);
      }
    }
  }
  else {
    *(long *)(lVar34 + 0x18) = lVar29;
  }
  uVar31 = local_108;
  puVar19 = PTR_PTR_0434a080;
  uVar45 = local_108 >> 0x20;
  local_108 = uVar45 << 0x20;
  if ((lVar32 != 0) && (-1 < (long)uVar31)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,lVar32,(uVar45 & 0x3fffffff) << 5);
  }
  iVar1 = local_d8;
  lVar29 = local_e0;
  lVar32 = local_f0;
  if (local_e0 == local_f0) {
    local_e8 = local_e8 & 0xffffffff00000000;
  }
  lVar34 = *(long *)(lVar26 + 0x38d490);
  if (lVar34 == 0) {
    lVar34 = FUN_0333d16c(0,1);
    *(long *)(lVar26 + 0x38d490) = lVar34;
  }
  lVar26 = *(long *)(lVar34 + 8);
  uVar31 = (ulong)(int)(iVar1 * 0x20 + 0x7fU & 0xffffff80);
  uVar45 = local_e8;
  if (((*(ulong *)(lVar26 + 0x10) < uVar31) || (*(long *)(lVar26 + 0x18) != uVar31 + lVar29)) ||
     (*(long *)(lVar26 + 0x28) == lVar29)) {
    if (lVar29 != 0) {
      if (*(ulong *)(lVar26 + 0x10) < uVar31) {
        *(int *)(*(long *)(lVar26 + 8) + 0x20) = *(int *)(*(long *)(lVar26 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar26 + 0x40) + 0x18))(*(long **)(lVar26 + 0x40),lVar29);
        uVar45 = local_e8;
      }
      else if (*(long *)(lVar26 + 0x18) == uVar31 + lVar29) {
        *(long *)(lVar26 + 0x18) = lVar29;
        FUN_032ce944();
        uVar45 = local_e8;
      }
      else {
        FUN_032ceaf0(lVar26,lVar29);
        uVar45 = local_e8;
      }
    }
  }
  else {
    *(long *)(lVar26 + 0x18) = lVar29;
  }
  local_e8 = uVar45 & 0xffffffff00000000;
  if ((lVar32 != 0) && (-1 < (long)local_e8)) {
    (**(code **)(*(long *)puVar19 + 0x18))(puVar19,lVar32,(uVar45 >> 0x20 & 0x3fffffff) << 5);
  }
  if ((local_b8 != 0) && (local_b0 != '\0')) {
    FUN_032d5b34(local_b8,&DAT_0390f40e);
  }
  lVar26 = nn::os::GetSystemTick();
  *(long *)(param_11 + 8) = (lVar26 - lVar25) + *(long *)(param_11 + 8);
  *(int *)(param_11 + 0x10) = *(int *)(param_11 + 0x10) + 1;
  return;
}


