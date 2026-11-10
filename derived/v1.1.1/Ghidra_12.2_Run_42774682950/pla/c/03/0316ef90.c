/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0316ef90; name: FUN_0316ef90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0316ef90(long param_1,long *param_2,uint param_3,int *param_4,ulong param_5,int *param_6,
                 undefined8 param_7,undefined8 param_8,undefined8 *param_9,undefined8 *param_10,
                 long *param_11,long param_12)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long *plVar4;
  long *plVar5;
  ushort uVar6;
  short sVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  uint uVar16;
  byte bVar17;
  undefined *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int *piVar34;
  ulong uVar35;
  undefined8 *puVar36;
  ulong uVar37;
  long lVar38;
  long lVar39;
  undefined8 *puVar40;
  long lVar41;
  long lVar42;
  float *pfVar43;
  ulong uVar44;
  uint uVar45;
  void *__s;
  uint uVar46;
  ulong uVar47;
  long lVar48;
  uint uVar49;
  void *pvVar50;
  float fVar51;
  float fVar52;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar53 [12];
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar68;
  undefined8 uVar63;
  float fVar70;
  undefined1 auVar65 [16];
  int iVar69;
  int iVar71;
  int iVar72;
  undefined1 auVar66 [16];
  undefined8 uVar64;
  undefined1 auVar67 [16];
  float fVar73;
  float fVar74;
  float fVar77;
  float fVar78;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar79;
  float fVar83;
  float fVar84;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined8 uVar85;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined8 uVar94;
  float fVar95;
  ulong uVar96;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar101;
  undefined1 auVar100 [16];
  uint uVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar115;
  float fVar116;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  ulong uVar117;
  ulong uVar118;
  undefined1 auVar119 [16];
  byte bVar121;
  float fVar120;
  float fVar122;
  undefined8 uVar123;
  undefined1 auVar124 [16];
  float fVar125;
  float fVar126;
  undefined8 uVar127;
  undefined8 uVar128;
  undefined1 auVar129 [16];
  float fVar130;
  float fVar131;
  undefined8 uVar132;
  undefined1 auVar133 [16];
  long *plVar134;
  long *plVar135;
  undefined8 *puVar136;
  float local_230;
  float fStack_22c;
  float local_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float local_174;
  undefined8 local_170;
  float fStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  float local_148;
  undefined8 local_140;
  undefined8 uStack_138;
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
  
  local_a8[0] = (undefined4)param_5;
  lVar29 = nn::os::GetSystemTick();
  FUN_0316c0bc(&local_b8,param_1,local_a8);
  uStack_c8 = param_9[1];
  local_d0 = *param_9;
  iVar27 = param_6[2];
  sVar7 = *(short *)((long)param_6 + 10);
  __s = (void *)*param_11;
  uVar47 = (ulong)(int)param_11[1];
  pvVar50 = __s;
  if (((ulong)__s & 0xf) == 0) {
    uVar35 = uVar47;
  }
  else {
    uVar35 = 4 - (((ulong)__s & 0xf) >> 2);
    uVar37 = uVar47;
    if (uVar35 <= uVar47) {
      uVar37 = uVar35;
    }
    pvVar2 = (void *)((long)__s + uVar37 * 4);
    uVar35 = uVar47 - uVar37;
    if (__s < pvVar2) {
      memset(__s,0,uVar37 << 2);
      do {
        pvVar50 = (void *)((long)pvVar50 + 4);
      } while (pvVar50 < pvVar2);
    }
  }
  if ((3 < uVar35) && (0 < (long)(uVar35 & 0xfffffffffffffffc))) {
    pvVar2 = (void *)((long)pvVar50 + (uVar35 & 0xfffffffffffffffc) * 4);
    pvVar3 = pvVar2;
    if (pvVar2 <= (void *)((long)pvVar50 + 0x10U)) {
      pvVar3 = (void *)((long)pvVar50 + 0x10U);
    }
    uVar35 = (long)pvVar3 + ~(ulong)pvVar50;
    memset(pvVar50,0,uVar35 + 0x10 & 0xfffffffffffffff0);
    uVar1 = ((uint)(uVar35 >> 4) & 0xfffffff) + 1;
    uVar37 = (ulong)uVar1 & 7;
    if ((uVar1 & 7) != 0) {
      do {
        pvVar50 = (void *)((long)pvVar50 + 0x10);
        uVar37 = uVar37 - 1;
      } while (uVar37 != 0);
    }
    if (0x6f < uVar35) {
      do {
        pvVar50 = (void *)((long)pvVar50 + 0x80);
      } while (pvVar50 < pvVar2);
    }
  }
  if (pvVar50 < (void *)((long)__s + uVar47 * 4)) {
    memset(pvVar50,0,(long)__s + ~(ulong)pvVar50 + uVar47 * 4 + 4 & 0xfffffffffffffffc);
  }
  if (param_2 != (long *)0x0) {
    lVar30 = nn::os::GetSystemTick();
    lVar31 = nn::os::GetSystemTick();
    uVar47 = (**(code **)(*param_2 + 0x20))
                       (param_2,param_1,param_5 & 0xffffffff,param_6,param_7,param_8);
    lVar32 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x38) = (lVar32 - lVar31) + *(long *)(param_12 + 0x38);
    *(int *)(param_12 + 0x40) = *(int *)(param_12 + 0x40) + 1;
    lVar31 = nn::os::GetSystemTick();
    *(long *)(param_12 + 0x20) = (lVar31 - lVar30) + *(long *)(param_12 + 0x20);
    *(int *)(param_12 + 0x28) = *(int *)(param_12 + 0x28) + 1;
    if ((uVar47 & 1) == 0) goto LAB_031700a8;
  }
  iVar27 = (int)sVar7 + (int)(short)iVar27;
  local_f0 = 0;
  local_e8 = 0x8000000000000000;
  local_d8 = 0x80;
  lVar30 = tpidr_el0;
  lVar31 = *(long *)(lVar30 + 0x38d490);
  if (lVar31 == 0) {
    lVar31 = FUN_0333d16c(0,1);
    *(long *)(lVar30 + 0x38d490) = lVar31;
  }
  lVar31 = *(long *)(lVar31 + 8);
  if (*(ulong *)(lVar31 + 0x10) < 0x1000) {
LAB_0316f580:
    local_e0 = FUN_032ce670(lVar31,0x1000);
  }
  else {
    local_e0 = *(long *)(lVar31 + 0x18);
    if (*(ulong *)(lVar31 + 0x20) < local_e0 + 0x1000U) goto LAB_0316f580;
    *(ulong *)(lVar31 + 0x18) = local_e0 + 0x1000U;
  }
  local_e8 = CONCAT44(0x80000080,(int)local_e8);
  local_110 = 0;
  local_108 = 0x8000000000000000;
  local_f8 = iVar27;
  local_f0 = local_e0;
  if (iVar27 == 0) {
    local_100 = 0;
  }
  else {
    lVar31 = *(long *)(lVar30 + 0x38d490);
    if (lVar31 == 0) {
      lVar31 = FUN_0333d16c(0,1);
      *(long *)(lVar30 + 0x38d490) = lVar31;
    }
    lVar31 = *(long *)(lVar31 + 8);
    uVar47 = (ulong)(int)(iVar27 * 0x20 + 0x7fU & 0xffffff80);
    if (uVar47 <= *(ulong *)(lVar31 + 0x10)) {
      local_100 = *(long *)(lVar31 + 0x18);
      uVar47 = local_100 + uVar47;
      if (uVar47 <= *(ulong *)(lVar31 + 0x20)) {
        *(ulong *)(lVar31 + 0x18) = uVar47;
        goto LAB_0316f24c;
      }
    }
    local_100 = FUN_032ce670(lVar31);
  }
LAB_0316f24c:
  uVar47 = param_5 >> 0x16 & 0x3ff;
  local_108 = CONCAT44(iVar27,(int)local_108) | 0x8000000000000000;
  lVar48 = uVar47 * 0xf0;
  fVar9 = *(float *)(*(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x38) + lVar48) + 0x20) +
                              0x68) + 0xb0);
  uStack_118 = CONCAT44(fVar9,fVar9);
  lVar31 = param_12 + 0x18;
  local_120 = CONCAT44((float)((ulong)*param_10 >> 0x20) - fVar9,(float)*param_10 - fVar9);
  puVar136 = &local_130;
  plVar135 = &local_110;
  plVar134 = &local_f0;
  local_110 = local_100;
  FUN_031684f0(param_1,param_2,param_5 & 0xffffffff,param_6);
  uVar94 = local_d0;
  lVar32 = local_110;
  lVar38 = *(long *)(param_1 + 0x38);
  fVar19 = (float)local_d0;
  fVar20 = local_d0._4_4_;
  fVar21 = (float)uStack_c8;
  fVar22 = uStack_c8._4_4_;
  sVar7 = *(short *)((long)param_6 + 10);
  lVar42 = (long)(int)local_108;
  lVar48 = *(long *)(lVar38 + lVar48);
  uVar1 = (int)local_108 + sVar7;
  local_108 = CONCAT44(local_108._4_4_,uVar1);
  if (sVar7 != 0) {
    lVar39 = (long)param_6[1];
    uVar45 = (uint)(short)param_6[2];
    lVar38 = 0;
    uVar35 = (ulong)(uint)(int)sVar7;
    lVar41 = lVar39 * 0x14;
    pfVar43 = (float *)(local_110 + lVar42 * 0x20 + 0x10);
    lVar42 = lVar39;
    do {
      lVar33 = *(long *)(lVar48 + 0x20);
      if (lVar42 < *(int *)(lVar33 + 0x30)) {
        if (*(int *)(lVar33 + 0x78) == 0) {
          iVar27 = (int)lVar42;
        }
        else {
          iVar27 = *(int *)(*(long *)(lVar33 + 0x70) + lVar42 * 4);
        }
        if (iVar27 == -1) {
          piVar34 = (int *)(*(long *)(lVar33 + 0x28) + (lVar38 + lVar39) * 0x14);
        }
        else {
          piVar34 = (int *)(*(long *)(lVar33 + 0xc0) + (long)iVar27 * 0x14);
        }
      }
      else {
        piVar34 = (int *)(*(long *)(lVar33 + 0xe0) + (long)*(int *)(lVar33 + 0x30) * -0x14 + lVar41)
        ;
      }
      iVar69 = *(int *)(lVar33 + 0x40);
      iVar27 = *piVar34;
      iVar28 = piVar34[1];
      fVar62 = *(float *)(lVar48 + 0x6c);
      fVar68 = *(float *)(lVar48 + 0x7c);
      plVar4 = (long *)(lVar33 + 0x38);
      if (iVar69 <= iVar27) {
        plVar4 = (long *)(lVar33 + 0xf0);
      }
      iVar71 = 0;
      if (iVar69 <= iVar27) {
        iVar71 = iVar69;
      }
      plVar5 = (long *)(lVar33 + 0x38);
      if (iVar69 <= iVar28) {
        plVar5 = (long *)(lVar33 + 0xf0);
      }
      iVar72 = 0;
      if (iVar69 <= iVar28) {
        iVar72 = iVar69;
      }
      pfVar8 = (float *)(*plVar5 + (long)(iVar28 - iVar72) * 0x10);
      fVar52 = *pfVar8;
      fVar55 = pfVar8[1];
      fVar56 = pfVar8[2];
      lVar38 = lVar38 + 1;
      pfVar8 = (float *)(*plVar4 + (long)(iVar27 - iVar71) * 0x10);
      fVar58 = *pfVar8;
      fVar59 = pfVar8[1];
      fVar60 = pfVar8[2];
      fVar70 = (float)(uVar45 | 0x3f010000);
      uVar45 = uVar45 + 1;
      lVar41 = lVar41 + 0x14;
      lVar42 = lVar42 + 1;
      uVar35 = uVar35 - 1;
      fVar61 = *(float *)(lVar48 + 0x8c);
      uVar63 = *(undefined8 *)(lVar48 + 0x98);
      fVar74 = (float)uVar63;
      fVar57 = (float)*(undefined8 *)(lVar48 + 0x90);
      fVar73 = (float)((ulong)*(undefined8 *)(lVar48 + 0x90) >> 0x20);
      fVar51 = fVar57 + *(float *)(lVar48 + 0x80) * fVar56 +
                        *(float *)(lVar48 + 0x60) * fVar52 + *(float *)(lVar48 + 0x70) * fVar55;
      fVar54 = fVar73 + *(float *)(lVar48 + 0x84) * fVar56 +
                        *(float *)(lVar48 + 100) * fVar52 + *(float *)(lVar48 + 0x74) * fVar55;
      fVar52 = fVar74 + *(float *)(lVar48 + 0x88) * fVar56 +
                        *(float *)(lVar48 + 0x68) * fVar52 + *(float *)(lVar48 + 0x78) * fVar55;
      fVar57 = fVar57 + *(float *)(lVar48 + 0x80) * fVar60 +
                        *(float *)(lVar48 + 0x60) * fVar58 + *(float *)(lVar48 + 0x70) * fVar59;
      fVar73 = fVar73 + *(float *)(lVar48 + 0x84) * fVar60 +
                        *(float *)(lVar48 + 100) * fVar58 + *(float *)(lVar48 + 0x74) * fVar59;
      fVar74 = fVar74 + *(float *)(lVar48 + 0x88) * fVar60 +
                        *(float *)(lVar48 + 0x68) * fVar58 + *(float *)(lVar48 + 0x78) * fVar59;
      fVar55 = (float)local_d0 * fVar51;
      fVar77 = local_d0._4_4_ * fVar54;
      fVar78 = (float)uStack_c8 * fVar52;
      fVar56 = (float)local_d0 * fVar57;
      fVar83 = local_d0._4_4_ * fVar73;
      fVar84 = (float)uStack_c8 * fVar74;
      fVar79 = fVar56 + fVar83 + fVar84;
      fVar84 = fVar56 + fVar83 + fVar84;
      fVar56 = fVar55 + fVar77 + fVar78;
      pfVar43[-2] = fVar74 - (float)uStack_c8 * fVar79;
      pfVar43[-1] = ((float)((ulong)uVar63 >> 0x20) +
                    fVar61 * fVar60 + fVar62 * fVar58 + fVar68 * fVar59) - uStack_c8._4_4_ * fVar84;
      pfVar43[-4] = fVar57 - (float)local_d0 * fVar79;
      pfVar43[-3] = fVar73 - local_d0._4_4_ * fVar84;
      pfVar43[2] = fVar52 - (float)uStack_c8 * fVar56;
      pfVar43[3] = fVar70;
      *pfVar43 = fVar51 - (float)local_d0 * fVar56;
      pfVar43[1] = fVar54 - local_d0._4_4_ * (fVar55 + fVar77 + fVar78);
      pfVar43 = pfVar43 + 8;
    } while (uVar35 != 0);
    lVar38 = *(long *)(param_1 + 0x38);
  }
  iVar28 = *param_4;
  iVar69 = param_4[1];
  lVar48 = *(long *)(lVar38 + uVar47 * 0xf0);
  lVar38 = *(long *)(lVar48 + 0x20);
  fVar70 = (float)*(undefined8 *)(lVar48 + 0x88);
  fVar52 = (float)((ulong)*(undefined8 *)(lVar48 + 0x88) >> 0x20);
  fVar62 = (float)*(undefined8 *)(lVar48 + 0x80);
  fVar68 = (float)((ulong)*(undefined8 *)(lVar48 + 0x80) >> 0x20);
  auVar65 = *(undefined1 (*) [16])(lVar48 + 0x90);
  iVar71 = *(int *)(lVar38 + 0x40);
  iVar27 = 0;
  if (iVar71 <= iVar28) {
    iVar27 = iVar71;
  }
  plVar4 = (long *)(lVar38 + 0x38);
  if (iVar71 <= iVar28) {
    plVar4 = (long *)(lVar38 + 0xf0);
  }
  plVar5 = (long *)(lVar38 + 0x38);
  if (iVar71 <= iVar69) {
    plVar5 = (long *)(lVar38 + 0xf0);
  }
  iVar72 = 0;
  if (iVar71 <= iVar69) {
    iVar72 = iVar71;
  }
  pfVar43 = (float *)(*plVar4 + (long)(iVar28 - iVar27) * 0x10);
  fVar55 = *pfVar43;
  fVar56 = pfVar43[1];
  fVar58 = pfVar43[2];
  pfVar43 = (float *)(*plVar5 + (long)(iVar69 - iVar72) * 0x10);
  fVar59 = *pfVar43;
  fVar60 = pfVar43[1];
  fVar61 = pfVar43[2];
  fVar51 = auVar65._0_4_ +
           fVar62 * fVar58 + *(float *)(lVar48 + 0x60) * fVar55 + *(float *)(lVar48 + 0x70) * fVar56
  ;
  fVar54 = auVar65._4_4_ +
           fVar68 * fVar58 + *(float *)(lVar48 + 100) * fVar55 + *(float *)(lVar48 + 0x74) * fVar56;
  fVar57 = auVar65._8_4_ +
           fVar70 * fVar58 + *(float *)(lVar48 + 0x68) * fVar55 + *(float *)(lVar48 + 0x78) * fVar56
  ;
  fVar62 = auVar65._0_4_ +
           fVar62 * fVar61 + *(float *)(lVar48 + 0x60) * fVar59 + *(float *)(lVar48 + 0x70) * fVar60
  ;
  fVar68 = auVar65._4_4_ +
           fVar68 * fVar61 + *(float *)(lVar48 + 100) * fVar59 + *(float *)(lVar48 + 0x74) * fVar60;
  fVar70 = auVar65._8_4_ +
           fVar70 * fVar61 + *(float *)(lVar48 + 0x68) * fVar59 + *(float *)(lVar48 + 0x78) * fVar60
  ;
  fVar73 = (float)local_d0 * fVar51;
  fVar77 = local_d0._4_4_ * fVar54;
  fVar78 = (float)uStack_c8 * fVar57;
  fVar79 = (float)local_d0 * fVar62;
  fVar83 = local_d0._4_4_ * fVar68;
  fVar84 = (float)uStack_c8 * fVar70;
  fVar74 = fVar73 + fVar77 + fVar78;
  fVar78 = fVar73 + fVar77 + fVar78;
  fVar73 = fVar79 + fVar83 + fVar84;
  fVar84 = fVar79 + fVar83 + fVar84;
  fVar51 = fVar51 - (float)local_d0 * fVar74;
  fVar54 = fVar54 - local_d0._4_4_ * fVar78;
  auVar75._0_8_ = CONCAT44(fVar54,fVar51);
  auVar75._8_4_ = fVar57 - (float)uStack_c8 * fVar74;
  auVar75._12_4_ =
       (auVar65._12_4_ +
       fVar52 * fVar58 + *(float *)(lVar48 + 0x6c) * fVar55 + *(float *)(lVar48 + 0x7c) * fVar56) -
       uStack_c8._4_4_ * fVar78;
  fVar62 = fVar62 - (float)local_d0 * fVar73;
  fVar68 = fVar68 - local_d0._4_4_ * fVar84;
  auVar80._0_8_ = CONCAT44(fVar68,fVar62);
  auVar80._8_4_ = fVar70 - (float)uStack_c8 * fVar73;
  auVar80._12_4_ =
       (auVar65._12_4_ +
       fVar52 * fVar61 + *(float *)(lVar48 + 0x6c) * fVar59 + *(float *)(lVar48 + 0x7c) * fVar60) -
       uStack_c8._4_4_ * fVar84;
  uStack_158 = auVar75._8_8_;
  uStack_138 = auVar80._8_8_;
  local_160 = auVar75._0_8_;
  local_140 = auVar80._0_8_;
  iVar27 = FUN_0316e900(&local_160,&local_140,param_10,&uStack_118,&local_d0,&local_f0,&local_170,
                        param_12 + 0x58,plVar134,plVar135,puVar136,lVar31);
  if (iVar27 != 0) {
    fVar70 = (float)local_170;
    iVar27 = (int)local_e8;
    uVar47 = local_e8 & 0xffffffff;
    if ((int)local_e8 == 0) {
      lVar48 = 0;
      lVar38 = 0;
    }
    else {
      lVar38 = *(long *)(lVar30 + 0x38d490);
      if (lVar38 == 0) {
        lVar38 = FUN_0333d16c(0,1);
        *(long *)(lVar30 + 0x38d490) = lVar38;
      }
      lVar42 = *(long *)(lVar38 + 8);
      uVar35 = (ulong)(int)(iVar27 * 0x20 + 0x7fU & 0xffffff80);
      if (*(ulong *)(lVar42 + 0x10) < uVar35) {
LAB_0316f59c:
        lVar48 = FUN_032ce670(lVar42,uVar35);
        lVar38 = *(long *)(lVar30 + 0x38d490);
      }
      else {
        lVar48 = *(long *)(lVar42 + 0x18);
        if (*(ulong *)(lVar42 + 0x20) < lVar48 + uVar35) goto LAB_0316f59c;
        *(ulong *)(lVar42 + 0x18) = lVar48 + uVar35;
      }
      if (lVar38 == 0) {
        lVar38 = FUN_0333d16c(0,1);
        *(long *)(lVar30 + 0x38d490) = lVar38;
      }
      lVar42 = *(long *)(lVar38 + 8);
      if (uVar35 <= *(ulong *)(lVar42 + 0x10)) {
        lVar38 = *(long *)(lVar42 + 0x18);
        if (lVar38 + uVar35 <= *(ulong *)(lVar42 + 0x20)) {
          *(ulong *)(lVar42 + 0x18) = lVar38 + uVar35;
          goto LAB_0316f470;
        }
      }
      lVar38 = FUN_032ce670(lVar42,uVar35);
    }
LAB_0316f470:
    if ((*(byte *)(param_4 + 4) >> 4 & 1) == 0) {
      uVar45 = (param_3 & 0x3fffff) - *param_6;
    }
    else {
      uVar45 = ((param_3 & 0x3fffff) - param_6[1]) + (int)(short)param_6[2];
    }
    uVar35 = -(ulong)((uint)((int)uVar45 >> 5) >> 0x1f) & 0xfffffffc00000000 |
             (ulong)(uint)((int)uVar45 >> 5) << 2;
    *(uint *)(*param_11 + uVar35) = *(uint *)(*param_11 + uVar35) | 1 << (ulong)(uVar45 & 0x1f);
    puVar18 = PTR_DAT_043723a0;
    if (0 < (int)uVar1) {
      uVar63 = *param_10;
      fVar51 = fVar51 + (fVar62 - fVar51) * fVar70;
      fVar54 = fVar54 + (fVar68 - fVar54) * fVar70;
      fVar62 = auVar75._8_4_ + (auVar80._8_4_ - auVar75._8_4_) * fVar70;
      fVar68 = auVar75._12_4_ + (auVar80._12_4_ - auVar75._12_4_) * fVar70;
      auVar65._8_4_ = fVar21;
      auVar65._0_8_ = uVar94;
      auVar65._12_4_ = fVar22;
      auVar65 = NEON_ext(auVar65,auVar65,4,1);
      uVar94 = NEON_fmov(0x3f800000,4);
      uVar35 = 0;
      do {
        puVar36 = (undefined8 *)(lVar32 + uVar35 * 0x20);
        uStack_158 = puVar36[1];
        local_150 = puVar36[2];
        local_148 = *(float *)(puVar36 + 3);
        local_160 = *puVar36;
        uVar6 = *(ushort *)((long)puVar36 + 0x1c);
        if (uVar45 != uVar6) {
          uStack_164 = (float)CONCAT22(*(undefined2 *)((long)puVar36 + 0x1e),uVar6);
          local_170 = local_150;
          fStack_168 = local_148;
          local_140 = local_160;
          uStack_138 = uStack_158;
          iVar28 = FUN_0316e900(&local_140,&local_170,param_10,&uStack_118,&local_d0,&local_f0,
                                &local_174,param_12 + 0x58,plVar134,plVar135,puVar136,lVar31);
          if (iVar28 != 0) {
            fVar70 = (float)local_140 + ((float)local_170 - (float)local_140) * local_174;
            fVar55 = local_140._4_4_ + (local_170._4_4_ - local_140._4_4_) * local_174;
            fVar58 = (float)uStack_138 + (fStack_168 - (float)uStack_138) * local_174;
            fVar60 = uStack_138._4_4_ + (uStack_164 - uStack_138._4_4_) * local_174;
            fVar52 = fVar70 - fVar51;
            fVar56 = fVar55 - fVar54;
            fVar59 = fVar58 - fVar62;
            fVar61 = fVar60 - fVar68;
            auVar124._0_4_ = fVar52 * fVar52 + fVar56 * fVar56 + fVar59 * fVar59;
            auVar124._4_4_ = fVar52 * fVar52 + fVar56 * fVar56 + fVar59 * fVar59;
            lVar42 = nn::os::GetSystemTick();
            if (iVar27 < 1) {
              uVar49 = 0;
              uVar46 = 0;
            }
            else {
              auVar124._12_4_ = auVar124._4_4_;
              auVar124._8_4_ = auVar124._0_4_;
              auVar87._4_4_ = fVar56;
              auVar87._0_4_ = fVar52;
              auVar87._8_4_ = fVar59;
              auVar87._12_4_ = fVar61;
              auVar75 = NEON_frecpe(auVar124,4);
              iVar28 = -(uint)(auVar124._0_4_ == 0.0);
              iVar69 = -(uint)(auVar124._4_4_ == 0.0);
              iVar71 = -(uint)(auVar124._0_4_ == 0.0);
              iVar72 = -(uint)(auVar124._4_4_ == 0.0);
              auVar80 = NEON_frecps(auVar124,auVar75,4);
              auVar111._0_4_ = auVar75._0_4_ * auVar80._0_4_;
              auVar111._4_4_ = auVar75._4_4_ * auVar80._4_4_;
              auVar111._8_4_ = auVar75._8_4_ * auVar80._8_4_;
              auVar111._12_4_ = auVar75._12_4_ * auVar80._12_4_;
              uVar49 = 0;
              auVar75 = NEON_frecps(auVar124,auVar111,4);
              uVar46 = 0;
              fVar57 = fVar52 * auVar111._0_4_ * auVar75._0_4_;
              fVar73 = fVar56 * auVar111._4_4_ * auVar75._4_4_;
              fVar74 = fVar59 * auVar111._8_4_ * auVar75._8_4_;
              fVar77 = fVar61 * auVar111._12_4_ * auVar75._12_4_;
              fVar57 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                       CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                                ~(byte)((uint)iVar28 >> 0x10),
                                                CONCAT11((byte)((uint)fVar57 >> 8) &
                                                         ~(byte)((uint)iVar28 >> 8),
                                                         SUB41(fVar57,0) & ~(byte)iVar28)));
              auVar53._0_8_ =
                   CONCAT17((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                            CONCAT16((byte)((uint)fVar73 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                                     CONCAT15((byte)((uint)fVar73 >> 8) & ~(byte)((uint)iVar69 >> 8)
                                              ,CONCAT14(SUB41(fVar73,0) & ~(byte)iVar69,fVar57))));
              auVar53[8] = SUB41(fVar74,0) & ~(byte)iVar71;
              auVar53[9] = (byte)((uint)fVar74 >> 8) & ~(byte)((uint)iVar71 >> 8);
              auVar53[10] = (byte)((uint)fVar74 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
              auVar53[0xb] = (byte)((uint)fVar74 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
              auVar92[0xc] = SUB41(fVar77,0) & ~(byte)iVar72;
              auVar92._0_12_ = auVar53;
              auVar92[0xd] = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar72 >> 8);
              auVar92[0xe] = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
              auVar92[0xf] = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
              auVar99._0_4_ = fVar51 * fVar57;
              fVar73 = (float)((ulong)auVar53._0_8_ >> 0x20);
              auVar99._4_4_ = fVar54 * fVar73;
              fVar74 = auVar53._8_4_;
              auVar99._8_4_ = fVar62 * fVar74;
              auVar99._12_4_ = fVar68 * auVar92._12_4_;
              auVar75 = NEON_ext(auVar99,auVar99,8,1);
              fVar77 = -(auVar99._0_4_ + auVar99._4_4_ + auVar75._0_4_);
              auVar98._12_4_ = fVar77;
              auVar98._0_12_ = auVar53;
              auVar75 = NEON_ext(auVar87,auVar87,4,1);
              local_230 = auVar65._0_4_;
              fStack_22c = auVar65._4_4_;
              auVar104._0_4_ = fVar19 * auVar75._0_4_ - local_230 * fVar52;
              auVar104._4_4_ = fVar20 * auVar75._4_4_ - fStack_22c * fVar56;
              auVar104._8_4_ = fVar21 * fVar52 - fVar19 * fVar59;
              auVar104._12_4_ = fVar22 * fVar56 - fVar20 * fVar61;
              auVar75 = NEON_ext(auVar104,auVar104,4,1);
              fVar88 = auVar75._0_4_;
              fVar89 = auVar75._4_4_;
              fVar78 = fVar88 * fVar88 + fVar89 * fVar89 + auVar104._0_4_ * auVar104._0_4_;
              fVar83 = fVar88 * fVar88 + fVar89 * fVar89 + auVar104._0_4_ * auVar104._0_4_;
              uVar64 = CONCAT44(fVar83,fVar78);
              uVar85 = NEON_frsqrte(uVar64,4);
              fVar79 = (float)uVar85;
              fVar84 = (float)((ulong)uVar85 >> 0x20);
              uVar85 = NEON_frsqrts(uVar64,CONCAT44(fVar84 * fVar84,fVar79 * fVar79),4);
              fVar79 = fVar79 * (float)uVar85;
              fVar84 = fVar84 * (float)((ulong)uVar85 >> 0x20);
              iVar28 = -(uint)(fVar78 <= 0.0);
              iVar69 = -(uint)(fVar83 <= 0.0);
              uVar85 = NEON_frsqrts(uVar64,CONCAT44(fVar84 * fVar84,fVar79 * fVar79),4);
              fVar79 = (float)uVar85 * fVar79;
              fVar84 = (float)((ulong)uVar85 >> 0x20) * fVar84;
              fVar78 = (float)CONCAT13((byte)((uint)fVar79 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                       CONCAT12((byte)((uint)fVar79 >> 0x10) &
                                                ~(byte)((uint)iVar28 >> 0x10),
                                                CONCAT11((byte)((uint)fVar79 >> 8) &
                                                         ~(byte)((uint)iVar28 >> 8),
                                                         SUB41(fVar79,0) & ~(byte)iVar28)));
              auVar66._0_4_ = fVar88 * fVar78;
              fVar79 = (float)(CONCAT17((byte)((uint)fVar84 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18)
                                        ,CONCAT16((byte)((uint)fVar84 >> 0x10) &
                                                  ~(byte)((uint)iVar69 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar84 >> 8) &
                                                           ~(byte)((uint)iVar69 >> 8),
                                                           CONCAT14(SUB41(fVar84,0) & ~(byte)iVar69,
                                                                    fVar78)))) >> 0x20);
              auVar66._4_4_ = fVar89 * fVar79;
              auVar66._8_4_ = auVar104._0_4_ * fVar78;
              auVar76._0_4_ = fVar51 * auVar66._0_4_;
              auVar76._4_4_ = fVar54 * auVar66._4_4_;
              auVar76._8_4_ = fVar62 * auVar66._8_4_;
              auVar76._12_4_ = fVar68 * auVar104._4_4_ * fVar79;
              auVar75 = NEON_ext(auVar76,auVar76,8,1);
              local_220 = (float)local_130;
              fStack_21c = (float)((ulong)local_130 >> 0x20);
              fStack_218 = (float)uStack_128;
              fStack_214 = (float)((ulong)uStack_128 >> 0x20);
              fVar78 = -(auVar76._0_4_ + auVar76._4_4_ + auVar75._0_4_);
              auVar66._12_4_ = fVar78;
              auVar81._0_4_ = local_220 * auVar66._0_4_;
              auVar81._4_4_ = fStack_21c * auVar66._4_4_;
              auVar81._8_4_ = fStack_218 * auVar66._8_4_;
              auVar81._12_4_ = fStack_214 * fVar78;
              auVar80 = NEON_ext(auVar81,auVar81,8,1);
              auVar86._8_8_ = _UNK_03889298;
              auVar86._0_8_ = _DAT_03889290;
              puVar36 = (undefined8 *)(local_f0 + 0x10);
              auVar75 = a64_TBL(ZEXT816(0),auVar66,auVar86);
              auVar87 = a64_TBL(ZEXT816(0),auVar98,auVar86);
              uVar37 = uVar47;
              do {
                fVar88 = (float)puVar36[-1];
                fVar89 = (float)((ulong)puVar36[-1] >> 0x20);
                uVar128 = puVar36[-2];
                fVar84 = (float)((ulong)uVar128 >> 0x20);
                uVar64 = puVar36[1];
                fVar83 = (float)((ulong)uVar64 >> 0x20);
                uVar85 = *puVar36;
                fVar79 = (float)((ulong)uVar85 >> 0x20);
                auVar97._0_4_ = auVar66._0_4_ * (float)uVar85;
                auVar97._4_4_ = auVar66._4_4_ * fVar79;
                auVar97._8_4_ = auVar66._8_4_ * (float)uVar64;
                auVar97._12_4_ = fVar78 * fVar83;
                auVar110._0_4_ = fVar57 * (float)uVar85;
                auVar110._4_4_ = fVar73 * fVar79;
                auVar110._8_4_ = fVar74 * (float)uVar64;
                auVar110._12_4_ = fVar77 * fVar83;
                auVar91._0_4_ = auVar66._0_4_ * (float)uVar128;
                auVar91._4_4_ = auVar66._4_4_ * fVar84;
                auVar91._8_4_ = auVar66._8_4_ * fVar88;
                auVar91._12_4_ = fVar78 * fVar89;
                auVar103._0_4_ = fVar57 * (float)uVar128;
                auVar103._4_4_ = fVar73 * fVar84;
                auVar103._8_4_ = fVar74 * fVar88;
                auVar103._12_4_ = fVar77 * fVar89;
                auVar92 = NEON_ext(auVar91,auVar91,8,1);
                auVar98 = NEON_ext(auVar97,auVar97,8,1);
                auVar104 = NEON_ext(auVar103,auVar103,8,1);
                auVar111 = NEON_ext(auVar110,auVar110,8,1);
                auVar99 = auVar87 ^ (auVar87 ^ auVar75) & *(undefined1 (*) [16])(puVar18 + 0x30);
                auVar113._0_4_ = auVar92._0_4_ + auVar91._0_4_ + auVar91._4_4_ + auVar99._0_4_;
                auVar113._4_4_ = auVar98._0_4_ + auVar97._0_4_ + auVar97._4_4_ + auVar99._4_4_;
                auVar113._8_4_ = auVar104._0_4_ + auVar103._0_4_ + auVar103._4_4_ + auVar99._8_4_;
                auVar113._12_4_ = auVar111._0_4_ + auVar110._0_4_ + auVar110._4_4_ + auVar99._12_4_;
                auVar112._0_8_ =
                     CONCAT44(-(uint)(auVar113._12_4_ < auVar113._8_4_),
                              -(uint)(auVar113._12_4_ < auVar113._8_4_));
                auVar92 = NEON_rev64(auVar113,4);
                auVar112._8_8_ = auVar112._0_8_;
                auVar113 = auVar113 ^ (auVar113 ^ auVar92) & auVar112;
                fVar83 = auVar113._4_4_;
                fVar79 = fVar83;
                if (0.0 <= auVar113._12_4_) {
                  fVar79 = auVar113._0_4_;
                  bVar121 = auVar113[3];
                  if (auVar113._8_4_ <= 1.0) {
                    auVar92 = NEON_ext(auVar113,auVar113,8,1);
                    fVar89 = auVar92._0_4_;
                    fVar84 = auVar92._4_4_ - fVar89;
                    uVar123 = CONCAT44(auVar92._4_4_ - fVar89,fVar84);
                    uVar127 = NEON_frecpe(uVar123,4);
                    uVar132 = NEON_frecps(uVar123,uVar127,4);
                    fVar90 = (float)uVar127 * (float)uVar132;
                    iVar28 = -(uint)(fVar84 == 0.0);
                    uVar132 = NEON_frecps(uVar123,CONCAT44((float)((ulong)uVar127 >> 0x20) *
                                                           (float)((ulong)uVar132 >> 0x20),fVar90),4
                                         );
                    fVar90 = (float)((uint)(fVar90 * (float)uVar132) &
                                    CONCAT13(~(byte)((uint)iVar28 >> 0x18),
                                             CONCAT12(~(byte)((uint)iVar28 >> 0x10),
                                                      CONCAT11(~(byte)((uint)iVar28 >> 8),
                                                               ~(byte)iVar28))));
                    fVar84 = fVar79;
                    if (auVar113._8_4_ < 0.0) {
                      fVar84 = fVar79 - (fVar83 - fVar79) * fVar89 * fVar90;
                      bVar121 = (byte)((uint)fVar84 >> 0x18);
                    }
                    if (1.0 < auVar113._12_4_) {
                      fVar83 = fVar79 + (fVar83 - fVar79) * ((float)uVar94 - fVar89) * fVar90;
                    }
                    fVar84 = ABS(fVar84);
                    uVar102 = -(uint)(ABS(fVar83) < fVar84);
                    uVar16 = (uint)fVar84 ^ ((uint)fVar84 ^ (uint)ABS(fVar83)) & uVar102;
                    bVar17 = (byte)((uint)fVar83 >> 0x18);
                    fVar79 = (float)CONCAT13((bVar17 ^ (bVar17 ^ bVar121) & (byte)(uVar102 >> 0x18))
                                             & 0x80 ^ (byte)(uVar16 >> 0x18),(int3)uVar16);
                  }
                }
                fVar83 = fVar79;
                if (ABS(fVar79) < (float)uVar63 * 0.007874016) {
                  fVar83 = fVar79 - (auVar81._0_4_ + auVar81._4_4_ + auVar80._0_4_ + fVar78);
                }
                if (fVar83 <= 0.0) {
                  lVar41 = (long)(int)uVar49;
                  uVar49 = uVar49 + 1;
                  puVar40 = (undefined8 *)(lVar38 + lVar41 * 0x20);
                }
                else {
                  lVar41 = (long)(int)uVar46;
                  uVar46 = uVar46 + 1;
                  puVar40 = (undefined8 *)(lVar48 + lVar41 * 0x20);
                }
                puVar40[1] = CONCAT44(ABS(fVar79),fVar88);
                *puVar40 = uVar128;
                uVar37 = uVar37 - 1;
                puVar36 = puVar36 + 4;
                puVar40[3] = uVar64;
                puVar40[2] = uVar85;
              } while (uVar37 != 0);
            }
            lVar41 = nn::os::GetSystemTick();
            *(long *)(param_12 + 0x78) = (lVar41 - lVar42) + *(long *)(param_12 + 0x78);
            *(int *)(param_12 + 0x80) = *(int *)(param_12 + 0x80) + 1;
            if (uVar46 - 1 != 0 && 0 < (int)uVar46) {
              FUN_03174c60(lVar48,0,uVar46 - 1);
            }
            if (1 < (int)uVar49) {
              FUN_03174c60(lVar38,0,uVar49 - 1);
            }
            lVar42 = nn::os::GetSystemTick();
            if (((uVar49 != 0) && (uVar46 != 0)) && (0 < (int)uVar46)) {
              uVar85 = CONCAT44(auVar124._4_4_,auVar124._0_4_);
              uVar64 = NEON_frsqrte(uVar85,4);
              fVar57 = (float)uVar64;
              fVar73 = (float)((ulong)uVar64 >> 0x20);
              uVar64 = NEON_frsqrts(uVar85,CONCAT44(fVar73 * fVar73,fVar57 * fVar57),4);
              fVar57 = fVar57 * (float)uVar64;
              fVar73 = fVar73 * (float)((ulong)uVar64 >> 0x20);
              uVar85 = NEON_frsqrts(uVar85,CONCAT44(fVar73 * fVar73,fVar57 * fVar57),4);
              iVar28 = -(uint)(auVar124._0_4_ <= 0.0);
              iVar69 = -(uint)(auVar124._4_4_ <= 0.0);
              fVar57 = (float)uVar85 * fVar57;
              fVar73 = (float)((ulong)uVar85 >> 0x20) * fVar73;
              fVar57 = (float)CONCAT13((byte)((uint)fVar57 >> 0x18) & ~(byte)((uint)iVar28 >> 0x18),
                                       CONCAT12((byte)((uint)fVar57 >> 0x10) &
                                                ~(byte)((uint)iVar28 >> 0x10),
                                                CONCAT11((byte)((uint)fVar57 >> 8) &
                                                         ~(byte)((uint)iVar28 >> 8),
                                                         SUB41(fVar57,0) & ~(byte)iVar28)));
              fVar52 = fVar52 * fVar57;
              fVar73 = (float)(CONCAT17((byte)((uint)fVar73 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18)
                                        ,CONCAT16((byte)((uint)fVar73 >> 0x10) &
                                                  ~(byte)((uint)iVar69 >> 0x10),
                                                  CONCAT15((byte)((uint)fVar73 >> 8) &
                                                           ~(byte)((uint)iVar69 >> 8),
                                                           CONCAT14(SUB41(fVar73,0) & ~(byte)iVar69,
                                                                    fVar57)))) >> 0x20);
              fVar56 = fVar56 * fVar73;
              fVar59 = fVar59 * fVar57;
              fVar61 = fVar61 * fVar73;
              auVar67._0_4_ = fVar51 * fVar52;
              auVar67._4_4_ = fVar54 * fVar56;
              auVar67._8_4_ = fVar62 * fVar59;
              auVar67._12_4_ = fVar68 * fVar61;
              auVar75 = NEON_ext(auVar67,auVar67,8,1);
              auVar82._0_4_ = fVar70 * fVar52;
              auVar82._4_4_ = fVar55 * fVar56;
              auVar82._8_4_ = fVar58 * fVar59;
              auVar82._12_4_ = fVar60 * fVar61;
              fVar70 = auVar67._0_4_ + auVar67._4_4_ + auVar75._0_4_;
              auVar75 = NEON_ext(auVar82,auVar82,8,1);
              fVar55 = auVar82._0_4_ + auVar82._4_4_ + auVar75._0_4_;
              fVar58 = (float)*param_10 - fVar9;
              fVar58 = fVar58 + fVar58;
              uVar37 = 0;
              do {
                auVar75 = *(undefined1 (*) [16])(lVar48 + uVar37 * 0x20);
                fVar60 = auVar75._12_4_;
                if (fVar58 < fVar60) break;
                if (0 < (int)uVar49) {
                  lVar41 = lVar48 + uVar37 * 0x20;
                  uVar64 = *(undefined8 *)(lVar41 + 0x18);
                  uVar85 = *(undefined8 *)(lVar41 + 0x10);
                  fVar57 = auVar75._0_4_;
                  fVar77 = (float)uVar85 - fVar57;
                  fVar73 = auVar75._4_4_;
                  fVar78 = (float)((ulong)uVar85 >> 0x20) - fVar73;
                  fVar74 = auVar75._8_4_;
                  fVar79 = (float)uVar64 - fVar74;
                  fVar83 = (float)((ulong)uVar64 >> 0x20) - fVar60;
                  pfVar43 = (float *)(lVar38 + 0x10);
                  uVar44 = (ulong)uVar49;
                  do {
                    fVar89 = (float)*(undefined8 *)(pfVar43 + -2);
                    fVar90 = (float)((ulong)*(undefined8 *)(pfVar43 + -2) >> 0x20);
                    fVar84 = (float)*(undefined8 *)(pfVar43 + -4);
                    fVar88 = (float)((ulong)*(undefined8 *)(pfVar43 + -4) >> 0x20);
                    if (fVar58 < fVar60 + fVar90) break;
                    auVar93._0_4_ = *pfVar43 - fVar84;
                    auVar93._4_4_ = pfVar43[1] - fVar88;
                    auVar93._8_4_ = pfVar43[2] - fVar89;
                    auVar93._12_4_ = pfVar43[3] - fVar90;
                    auVar10._4_4_ = fVar78;
                    auVar10._0_4_ = fVar77;
                    auVar10._8_4_ = fVar79;
                    auVar10._12_4_ = fVar83;
                    auVar11._4_4_ = fVar78;
                    auVar11._0_4_ = fVar77;
                    auVar11._8_4_ = fVar79;
                    auVar11._12_4_ = fVar83;
                    auVar75 = NEON_ext(auVar10,auVar11,4,1);
                    auVar80 = NEON_ext(auVar93,auVar93,4,1);
                    fVar109 = fVar84 - fVar57;
                    fVar115 = fVar88 - fVar73;
                    fVar116 = fVar89 - fVar74;
                    auVar105._0_4_ = fVar77 * fVar77;
                    auVar105._4_4_ = fVar78 * fVar78;
                    auVar105._8_4_ = fVar79 * fVar79;
                    auVar105._12_4_ = fVar83 * fVar83;
                    auVar124 = NEON_ext(auVar105,auVar105,8,1);
                    fVar95 = auVar75._0_4_ * auVar93._0_4_ - fVar77 * auVar80._0_4_;
                    fVar101 = auVar75._4_4_ * auVar93._4_4_ - fVar78 * auVar80._4_4_;
                    auVar100._0_8_ = CONCAT44(fVar101,fVar95);
                    auVar100._8_4_ = fVar77 * auVar93._8_4_ - fVar79 * auVar93._0_4_;
                    auVar100._12_4_ = fVar78 * auVar93._12_4_ - fVar83 * auVar93._4_4_;
                    auVar75 = NEON_ext(auVar100,auVar100,4,1);
                    uVar128 = NEON_ext(auVar75._0_8_,auVar100._0_8_,4,1);
                    fVar130 = auVar75._0_4_;
                    fVar131 = auVar75._4_4_;
                    fVar125 = fVar130 * fVar130 + fVar131 * fVar131 + fVar95 * fVar95;
                    fVar126 = fVar130 * fVar130 + fVar131 * fVar131 + fVar95 * fVar95;
                    uVar64 = CONCAT44(fVar126,fVar125);
                    uVar85 = NEON_frecpe(uVar64,4);
                    uVar132 = NEON_frecps(uVar64,uVar85,4);
                    fVar120 = (float)uVar85 * (float)uVar132;
                    fVar122 = (float)((ulong)uVar85 >> 0x20) * (float)((ulong)uVar132 >> 0x20);
                    auVar119._0_4_ = auVar80._0_4_ * fVar130 - auVar93._0_4_ * (float)uVar128;
                    auVar119._4_4_ =
                         auVar80._4_4_ * fVar131 - auVar93._4_4_ * (float)((ulong)uVar128 >> 0x20);
                    auVar119._8_4_ = auVar93._0_4_ * fVar95 - auVar93._8_4_ * fVar130;
                    auVar119._12_4_ = auVar93._4_4_ * fVar101 - auVar93._12_4_ * fVar131;
                    auVar75 = NEON_ext(auVar119,auVar119,4,1);
                    iVar28 = -(uint)(fVar125 == 0.0);
                    iVar69 = -(uint)(fVar126 == 0.0);
                    uVar85 = NEON_frecps(uVar64,CONCAT44(fVar122,fVar120),4);
                    uVar96 = CONCAT17(~(byte)((uint)iVar69 >> 0x18),
                                      CONCAT16(~(byte)((uint)iVar69 >> 0x10),
                                               CONCAT15(~(byte)((uint)iVar69 >> 8),
                                                        CONCAT14(~(byte)iVar69,
                                                                 CONCAT13(~(byte)((uint)iVar28 >>
                                                                                 0x18),
                                                                          CONCAT12(~(byte)((uint)
                                                  iVar28 >> 0x10),
                                                  CONCAT11(~(byte)((uint)iVar28 >> 8),~(byte)iVar28)
                                                  ))))));
                    fVar95 = fVar109 * auVar75._0_4_;
                    fVar101 = fVar115 * auVar75._4_4_;
                    fVar130 = fVar77 * fVar109;
                    fVar131 = fVar78 * fVar115;
                    fVar125 = fVar83 * (fVar90 - fVar60);
                    auVar133._0_4_ = auVar93._0_4_ * auVar93._0_4_;
                    auVar133._4_4_ = auVar93._4_4_ * auVar93._4_4_;
                    auVar133._8_4_ = auVar93._8_4_ * auVar93._8_4_;
                    auVar133._12_4_ = auVar93._12_4_ * auVar93._12_4_;
                    auVar114._0_4_ = fVar109 * auVar93._0_4_;
                    auVar114._4_4_ = fVar115 * auVar93._4_4_;
                    auVar114._8_4_ = fVar116 * auVar93._8_4_;
                    auVar114._12_4_ = (fVar90 - fVar60) * auVar93._12_4_;
                    uVar117 = CONCAT44(fVar122 * (float)((ulong)uVar85 >> 0x20),
                                       fVar120 * (float)uVar85) & uVar96;
                    auVar14._4_4_ = fVar131;
                    auVar14._0_4_ = fVar130;
                    auVar14._8_4_ = fVar79 * fVar116;
                    auVar14._12_4_ = fVar125;
                    auVar15._4_4_ = fVar131;
                    auVar15._0_4_ = fVar130;
                    auVar15._8_4_ = fVar79 * fVar116;
                    auVar15._12_4_ = fVar125;
                    auVar80 = NEON_ext(auVar14,auVar15,8,1);
                    auVar87 = NEON_ext(auVar133,auVar133,8,1);
                    auVar75 = NEON_ext(auVar114,auVar114,8,1);
                    uVar85 = NEON_fminnm(CONCAT44((float)(uVar117 >> 0x20) *
                                                  (fVar95 + fVar101 + fVar116 * auVar119._0_4_),
                                                  (float)uVar117 *
                                                  (fVar95 + fVar101 + fVar116 * auVar119._0_4_)),
                                         uVar94,4);
                    auVar106._0_4_ = auVar124._0_4_ + auVar105._0_4_ + auVar105._4_4_;
                    auVar106._4_4_ = auVar80._0_4_ + fVar130 + fVar131;
                    fVar95 = auVar87._0_4_ + auVar133._0_4_ + auVar133._4_4_;
                    fVar116 = auVar75._0_4_ + auVar114._0_4_ + auVar114._4_4_;
                    auVar106._12_4_ = fVar116;
                    auVar106._8_4_ = fVar95;
                    auVar75 = NEON_frecpe(auVar106,4);
                    iVar28 = -(uint)(auVar106._0_4_ == 0.0);
                    iVar69 = -(uint)(auVar106._4_4_ == 0.0);
                    iVar71 = -(uint)(fVar95 == 0.0);
                    iVar72 = -(uint)(fVar116 == 0.0);
                    uVar118 = NEON_fmax(uVar85,0,4);
                    auVar80 = NEON_frecps(auVar106,auVar75,4);
                    fVar120 = fVar79 * auVar93._8_4_ +
                              fVar77 * auVar93._0_4_ + fVar78 * auVar93._4_4_;
                    fVar131 = fVar79 * auVar93._8_4_ +
                              fVar77 * auVar93._0_4_ + fVar78 * auVar93._4_4_;
                    auVar129._0_4_ = auVar75._0_4_ * auVar80._0_4_;
                    auVar129._4_4_ = auVar75._4_4_ * auVar80._4_4_;
                    auVar129._8_4_ = auVar75._8_4_ * auVar80._8_4_;
                    auVar129._12_4_ = auVar75._12_4_ * auVar80._12_4_;
                    auVar75 = NEON_frecps(auVar106,auVar129,4);
                    fVar95 = auVar129._0_4_ * auVar75._0_4_;
                    fVar101 = auVar129._4_4_ * auVar75._4_4_;
                    fVar109 = auVar129._8_4_ * auVar75._8_4_;
                    fVar115 = auVar129._12_4_ * auVar75._12_4_;
                    auVar107._0_4_ =
                         (float)CONCAT13((byte)((uint)fVar95 >> 0x18) &
                                         ~(byte)((uint)iVar28 >> 0x18),
                                         CONCAT12((byte)((uint)fVar95 >> 0x10) &
                                                  ~(byte)((uint)iVar28 >> 0x10),
                                                  CONCAT11((byte)((uint)fVar95 >> 8) &
                                                           ~(byte)((uint)iVar28 >> 8),
                                                           SUB41(fVar95,0) & ~(byte)iVar28)));
                    auVar107[4] = SUB41(fVar101,0) & ~(byte)iVar69;
                    auVar107[5] = (byte)((uint)fVar101 >> 8) & ~(byte)((uint)iVar69 >> 8);
                    auVar107[6] = (byte)((uint)fVar101 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10);
                    auVar107[7] = (byte)((uint)fVar101 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18);
                    auVar107[8] = SUB41(fVar109,0) & ~(byte)iVar71;
                    auVar107[9] = (byte)((uint)fVar109 >> 8) & ~(byte)((uint)iVar71 >> 8);
                    auVar107[10] = (byte)((uint)fVar109 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
                    auVar107[0xb] = (byte)((uint)fVar109 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
                    auVar107[0xc] = SUB41(fVar115,0) & ~(byte)iVar72;
                    auVar107[0xd] = (byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar72 >> 8);
                    auVar107[0xe] = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar72 >> 0x10);
                    auVar107[0xf] = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar72 >> 0x18);
                    auVar75 = NEON_ext(auVar107,auVar107,8,1);
                    fVar95 = ((float)uVar118 * fVar120 - fVar116) * auVar75._0_4_;
                    fVar101 = ((float)(uVar118 >> 0x20) * fVar131 - fVar116) * auVar75._0_4_;
                    uVar85 = NEON_fminnm(CONCAT44(fVar101,fVar95),uVar94,4);
                    uVar85 = NEON_fmax(uVar85,0,4);
                    fVar116 = (float)uVar85;
                    fVar130 = (float)((ulong)uVar85 >> 0x20);
                    uVar85 = NEON_fminnm(CONCAT44((auVar106._4_4_ + fVar131 * fVar130) *
                                                  auVar107._0_4_,
                                                  (auVar106._4_4_ + fVar120 * fVar116) *
                                                  auVar107._0_4_),uVar94,4);
                    uVar117 = NEON_fmax(uVar85,0,4);
                    uVar117 = uVar117 ^ (uVar117 ^ uVar118) &
                                        CONCAT44(-(uint)(fVar130 == fVar101),
                                                 -(uint)(fVar116 == fVar95)) & uVar96;
                    fVar95 = (float)uVar117;
                    fVar109 = (float)(uVar117 >> 0x20);
                    fVar101 = fVar57 + fVar77 * fVar95;
                    fVar115 = fVar73 + fVar78 * fVar109;
                    fVar95 = fVar74 + fVar79 * fVar95;
                    fVar109 = fVar60 + fVar83 * fVar109;
                    fVar84 = fVar101 - (fVar84 + auVar93._0_4_ * fVar116);
                    fVar88 = fVar115 - (fVar88 + auVar93._4_4_ * fVar130);
                    fVar89 = fVar95 - (fVar89 + auVar93._8_4_ * fVar116);
                    fVar90 = fVar109 - (fVar90 + auVar93._12_4_ * fVar130);
                    auVar108._0_4_ = fVar84 * fVar84;
                    auVar108._4_4_ = fVar88 * fVar88;
                    auVar108._8_4_ = fVar89 * fVar89;
                    auVar108._12_4_ = fVar90 * fVar90;
                    auVar80 = NEON_ext(auVar108,auVar108,8,1);
                    fVar84 = fVar52 * (fVar101 + fVar84 * -0.5);
                    fVar88 = fVar56 * (fVar115 + fVar88 * -0.5);
                    fVar89 = fVar59 * (fVar95 + fVar89 * -0.5);
                    fVar90 = fVar61 * (fVar109 + fVar90 * -0.5);
                    auVar12._4_4_ = fVar88;
                    auVar12._0_4_ = fVar84;
                    auVar12._8_4_ = fVar89;
                    auVar12._12_4_ = fVar90;
                    auVar13._4_4_ = fVar88;
                    auVar13._0_4_ = fVar84;
                    auVar13._8_4_ = fVar89;
                    auVar13._12_4_ = fVar90;
                    auVar75 = NEON_ext(auVar12,auVar13,8,1);
                    fVar84 = auVar75._0_4_ + fVar84 + fVar88;
                    bVar23 = false;
                    bVar25 = true;
                    bVar26 = false;
                    if (auVar108._0_4_ + auVar108._4_4_ + auVar80._0_4_ < fVar58 * fVar58) {
                      bVar23 = false;
                      bVar25 = false;
                      bVar26 = true;
                      if (!NAN(fVar84) && !NAN(fVar70)) {
                        bVar23 = fVar84 < fVar70;
                        bVar25 = fVar84 == fVar70;
                        bVar26 = false;
                      }
                    }
                    bVar24 = false;
                    if ((!bVar25 && bVar23 == bVar26) &&
                       (bVar24 = false, !NAN(fVar84) && !NAN(fVar55))) {
                      bVar24 = fVar84 < fVar55;
                    }
                    if (bVar24) {
                      lVar41 = nn::os::GetSystemTick();
                      *(long *)(param_12 + 0x90) = (lVar41 - lVar42) + *(long *)(param_12 + 0x90);
                      *(int *)(param_12 + 0x98) = *(int *)(param_12 + 0x98) + 1;
                      goto LAB_0316f8a0;
                    }
                    uVar44 = uVar44 - 1;
                    pfVar43 = pfVar43 + 8;
                  } while (uVar44 != 0);
                }
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar46);
            }
            lVar41 = nn::os::GetSystemTick();
            *(long *)(param_12 + 0x90) = (lVar41 - lVar42) + *(long *)(param_12 + 0x90);
            *(int *)(param_12 + 0x98) = *(int *)(param_12 + 0x98) + 1;
            uVar37 = (ulong)(uVar6 >> 3) & 0x1ffc;
            *(uint *)(*param_11 + uVar37) =
                 *(uint *)(*param_11 + uVar37) | 1 << (ulong)(uVar6 & 0x1f);
          }
        }
LAB_0316f8a0:
        uVar35 = uVar35 + 1;
      } while (uVar35 != uVar1);
    }
    lVar31 = *(long *)(lVar30 + 0x38d490);
    if (lVar31 == 0) {
      lVar31 = FUN_0333d16c(0,1);
      *(long *)(lVar30 + 0x38d490) = lVar31;
    }
    lVar32 = *(long *)(lVar31 + 8);
    uVar47 = (ulong)(int)(iVar27 * 0x20 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar32 + 0x10) < uVar47) || (*(long *)(lVar32 + 0x18) != lVar38 + uVar47)) ||
       (*(long *)(lVar32 + 0x28) == lVar38)) {
      if (lVar38 != 0) {
        if (*(ulong *)(lVar32 + 0x10) < uVar47) {
          *(int *)(*(long *)(lVar32 + 8) + 0x20) = *(int *)(*(long *)(lVar32 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar32 + 0x40) + 0x18))(*(long **)(lVar32 + 0x40),lVar38,uVar47);
        }
        else if (*(long *)(lVar32 + 0x18) == lVar38 + uVar47) {
          *(long *)(lVar32 + 0x18) = lVar38;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar32,lVar38,uVar47);
        }
      }
      lVar31 = *(long *)(lVar30 + 0x38d490);
    }
    else {
      *(long *)(lVar32 + 0x18) = lVar38;
    }
    if (lVar31 == 0) {
      lVar31 = FUN_0333d16c(0,1);
      *(long *)(lVar30 + 0x38d490) = lVar31;
    }
    lVar31 = *(long *)(lVar31 + 8);
    if (((*(ulong *)(lVar31 + 0x10) < uVar47) || (*(long *)(lVar31 + 0x18) != lVar48 + uVar47)) ||
       (*(long *)(lVar31 + 0x28) == lVar48)) {
      if (lVar48 != 0) {
        if (*(ulong *)(lVar31 + 0x10) < uVar47) {
          *(int *)(*(long *)(lVar31 + 8) + 0x20) = *(int *)(*(long *)(lVar31 + 8) + 0x20) + -1;
          (**(code **)(**(long **)(lVar31 + 0x40) + 0x18))(*(long **)(lVar31 + 0x40),lVar48,uVar47);
        }
        else if (*(long *)(lVar31 + 0x18) == lVar48 + uVar47) {
          *(long *)(lVar31 + 0x18) = lVar48;
          FUN_032ce944();
        }
        else {
          FUN_032ceaf0(lVar31,lVar48,uVar47);
        }
      }
    }
    else {
      *(long *)(lVar31 + 0x18) = lVar48;
    }
  }
  iVar27 = local_f8;
  lVar32 = local_100;
  lVar31 = local_110;
  if (local_100 == local_110) {
    local_108 = local_108 & 0xffffffff00000000;
  }
  lVar48 = *(long *)(lVar30 + 0x38d490);
  if (lVar48 == 0) {
    lVar48 = FUN_0333d16c(0,1);
    *(long *)(lVar30 + 0x38d490) = lVar48;
  }
  lVar48 = *(long *)(lVar48 + 8);
  uVar47 = (ulong)(int)(iVar27 * 0x20 + 0x7fU & 0xffffff80);
  if (((*(ulong *)(lVar48 + 0x10) < uVar47) || (*(long *)(lVar48 + 0x18) != uVar47 + lVar32)) ||
     (*(long *)(lVar48 + 0x28) == lVar32)) {
    if (lVar32 != 0) {
      if (*(ulong *)(lVar48 + 0x10) < uVar47) {
        *(int *)(*(long *)(lVar48 + 8) + 0x20) = *(int *)(*(long *)(lVar48 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar48 + 0x40) + 0x18))(*(long **)(lVar48 + 0x40),lVar32);
      }
      else if (*(long *)(lVar48 + 0x18) == uVar47 + lVar32) {
        *(long *)(lVar48 + 0x18) = lVar32;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar48,lVar32);
      }
    }
  }
  else {
    *(long *)(lVar48 + 0x18) = lVar32;
  }
  uVar35 = local_108;
  puVar18 = PTR_PTR_0434a080;
  uVar47 = local_108 >> 0x20;
  local_108 = uVar47 << 0x20;
  if ((lVar31 != 0) && (-1 < (long)uVar35)) {
    (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
              (PTR_PTR_0434a080,lVar31,(uVar47 & 0x3fffffff) << 5);
  }
  iVar27 = local_d8;
  lVar32 = local_e0;
  lVar31 = local_f0;
  if (local_e0 == local_f0) {
    local_e8 = local_e8 & 0xffffffff00000000;
  }
  lVar48 = *(long *)(lVar30 + 0x38d490);
  if (lVar48 == 0) {
    lVar48 = FUN_0333d16c(0,1);
    *(long *)(lVar30 + 0x38d490) = lVar48;
  }
  lVar30 = *(long *)(lVar48 + 8);
  uVar35 = (ulong)(int)(iVar27 * 0x20 + 0x7fU & 0xffffff80);
  uVar47 = local_e8;
  if (((*(ulong *)(lVar30 + 0x10) < uVar35) || (*(long *)(lVar30 + 0x18) != uVar35 + lVar32)) ||
     (*(long *)(lVar30 + 0x28) == lVar32)) {
    if (lVar32 != 0) {
      if (*(ulong *)(lVar30 + 0x10) < uVar35) {
        *(int *)(*(long *)(lVar30 + 8) + 0x20) = *(int *)(*(long *)(lVar30 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar30 + 0x40) + 0x18))(*(long **)(lVar30 + 0x40),lVar32);
        uVar47 = local_e8;
      }
      else if (*(long *)(lVar30 + 0x18) == uVar35 + lVar32) {
        *(long *)(lVar30 + 0x18) = lVar32;
        FUN_032ce944();
        uVar47 = local_e8;
      }
      else {
        FUN_032ceaf0(lVar30,lVar32);
        uVar47 = local_e8;
      }
    }
  }
  else {
    *(long *)(lVar30 + 0x18) = lVar32;
  }
  local_e8 = uVar47 & 0xffffffff00000000;
  if ((lVar31 != 0) && (-1 < (long)local_e8)) {
    (**(code **)(*(long *)puVar18 + 0x18))(puVar18,lVar31,(uVar47 >> 0x20 & 0x3fffffff) << 5);
  }
LAB_031700a8:
  if ((local_b8 != 0) && (local_b0 != '\0')) {
    FUN_032d5b34(local_b8,&DAT_0390f40e);
  }
  lVar30 = nn::os::GetSystemTick();
  *(long *)(param_12 + 8) = (lVar30 - lVar29) + *(long *)(param_12 + 8);
  *(int *)(param_12 + 0x10) = *(int *)(param_12 + 0x10) + 1;
  return;
}


