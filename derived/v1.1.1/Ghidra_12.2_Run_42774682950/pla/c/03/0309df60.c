/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0309df60; name: FUN_0309df60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0309df60(undefined2 *param_1,int param_2,long param_3,long param_4,long param_5,
                 long param_6,undefined8 param_7,long param_8,long param_9,int param_10,int param_11
                 ,int param_12,int param_13,byte param_14)

{
  byte *pbVar1;
  undefined2 *puVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  char cVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  char cVar9;
  float *pfVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  bool bVar17;
  bool bVar18;
  int *piVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined8 uVar22;
  byte bVar23;
  double *pdVar24;
  undefined8 *puVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long *plVar30;
  long *plVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar48;
  double dVar49;
  double dVar50;
  float fVar51;
  int local_7c;
  int local_68;
  char local_64 [4];
  
  if (param_9 == 0) {
    return;
  }
  lVar28 = *(long *)(param_9 + 0x28);
  if (lVar28 == 0) {
    return;
  }
  if (*(char *)(lVar28 + 0x121) != '\0') {
    return;
  }
  local_64[0] = '\0';
  puVar2 = (undefined2 *)((long)param_1 + (long)param_2);
  cVar6 = *(char *)(lVar28 + 0x176);
  piVar19 = (int *)FUN_0309f0f0(lVar28,local_64);
  bVar18 = false;
  if (local_64[0] == '\0') {
    if ((piVar19[1] == *(int *)(param_8 + 0x18)) && (*piVar19 == *(int *)(param_8 + 8))) {
      bVar18 = piVar19[2] != *(int *)(param_8 + 0x30);
    }
    else {
      bVar18 = true;
    }
  }
  FUN_032cb060(piVar19 + 0x10,param_3);
  FUN_032cb060(piVar19 + 0x14,param_4);
  *piVar19 = (int)*(undefined8 *)(param_8 + 8);
  piVar19[1] = (int)*(undefined8 *)(param_8 + 0x18);
  piVar19[2] = *(int *)(param_8 + 0x30);
  iVar16 = piVar19[6];
  cVar9 = *(char *)((long)piVar19 + 0x19);
  *(byte *)(piVar19 + 0x18) = param_14 & 1;
  *(undefined2 *)(piVar19 + 6) = 0;
  local_68 = 0;
  *(short *)((long)piVar19 + 0x1a) = (short)*(undefined4 *)(lVar28 + 0x188);
  if (param_1 < puVar2) {
    iVar29 = 0;
    local_7c = 0;
    local_68 = 0;
LAB_0309e0ac:
    uVar8 = *param_1;
    switch(uVar8) {
    case 1:
      piVar4 = (int *)(param_1 + 0xc);
      param_1 = param_1 + 0x10;
      iVar29 = *piVar4 + iVar29;
      break;
    case 2:
      FUN_0309ee04(*(undefined4 *)(param_6 + 0x70),*(undefined4 *)(param_6 + 0x74),ZEXT816(0),0,
                   piVar19,lVar28,uVar8,1,0,0,0,0,iVar29,0);
      param_1 = param_1 + 0x48;
      break;
    case 3:
      FUN_0309ee04(*(undefined4 *)(param_6 + 0x70),*(undefined4 *)(param_6 + 0x74),ZEXT816(0),0,
                   piVar19,lVar28,uVar8,1,0,0,0,0,iVar29,0);
      param_1 = param_1 + 0x18;
      break;
    case 4:
      FUN_0309ee04(*(undefined4 *)(param_6 + 0x70),*(undefined4 *)(param_6 + 0x74),ZEXT816(0),0,
                   piVar19,lVar28,uVar8,1,0,0,0,0,iVar29,0);
      param_1 = param_1 + 0x38;
      break;
    case 5:
      uVar32 = *(undefined4 *)(param_1 + 2);
      uVar37 = *(undefined4 *)(param_1 + 4);
      uVar20 = 0;
      uVar22 = 0;
      goto LAB_0309e684;
    case 6:
      fVar33 = *(float *)(param_1 + 10);
      FUN_0309ee04(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x12),fVar33,fVar33,
                   piVar19,lVar28,uVar8,1,*(float *)(param_1 + 8) == fVar33,0,0,0,iVar29,1);
      iVar29 = iVar29 + 1;
      param_1 = param_1 + 0x18;
      break;
    case 7:
      FUN_0309ee04(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4),ZEXT816(0),0,piVar19,
                   lVar28,uVar8,1,1,*(undefined1 *)(param_1 + 1),0,0,iVar29,0);
      param_1 = param_1 + 8;
      goto joined_r0x0309e4d8;
    default:
      goto switchD_0309e0c8_caseD_8;
    case 9:
      fVar33 = *(float *)(param_1 + 4);
      if (*(float *)(param_1 + 2) == fVar33) {
        uVar32 = *(undefined4 *)(param_1 + 6);
        uVar37 = *(undefined4 *)(param_1 + 8);
        uVar7 = *(undefined1 *)(param_1 + 1);
        bVar17 = true;
        uVar21 = 0;
LAB_0309e4c0:
        FUN_0309ee04(uVar32,uVar37,fVar33,fVar33,piVar19,lVar28,uVar8,bVar17,1,uVar7,uVar21,0,iVar29
                     ,1);
      }
      goto LAB_0309e4cc;
    case 10:
      uVar26 = (uint)*(byte *)(param_1 + 1);
      if (*(byte *)(param_1 + 1) != 0) {
        if (*(float *)(param_1 + 2) == 0.0) {
LAB_0309e6d0:
          uVar26 = 0;
        }
        else {
          uVar26 = 2;
        }
      }
      goto LAB_0309e6d4;
    case 0xb:
    case 0x12:
      if (((*(long *)(param_1 + 4) != 0) && (*(long *)(param_1 + 4) != -8 - (long)param_1)) &&
         (*(char *)(param_1 + 1) != '\0' && cVar6 != '\0')) {
        bVar23 = *(byte *)((long)param_1 + 3);
        FUN_0309ee04(ZEXT816(0x3f800000),0x3f800000,ZEXT816(0),0,piVar19,lVar28,uVar8,1,1,bVar23,
                     (bVar23 + 1) % 3,(bVar23 + 2) % 3,iVar29,0);
        lVar27 = (long)local_7c;
        local_7c = local_7c + 1;
        FUN_0309f010(piVar19,lVar28,param_5 + lVar27 * 0x18 + 4,param_1);
        local_68 = local_68 + 1;
      }
      iVar29 = iVar29 + 2;
      param_1 = param_1 + 0x10;
      break;
    case 0xc:
      bVar23 = *(byte *)(param_1 + 1);
      FUN_0309ee04(*(undefined4 *)(param_1 + 2),*(undefined4 *)(param_1 + 4),ZEXT816(0),0,piVar19,
                   lVar28,uVar8,1,2,(bVar23 + 1) % 3,(bVar23 + 2) % 3,bVar23,iVar29,0);
      iVar29 = iVar29 + 2;
      goto joined_r0x0309e47c;
    case 0xd:
      bVar23 = *(byte *)((long)param_1 + 5);
      FUN_0309ee04(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 6),ZEXT816(0),0,piVar19,
                   lVar28,uVar8,1,bVar23,*(undefined1 *)(param_1 + 1),
                   *(undefined1 *)((long)param_1 + 3),*(undefined1 *)(param_1 + 2),iVar29,0);
      iVar29 = iVar29 + (uint)bVar23;
joined_r0x0309e47c:
      param_1 = param_1 + 8;
      break;
    case 0xe:
      fVar33 = *(float *)(param_1 + 6);
      if (*(float *)(param_1 + 4) == fVar33) {
        bVar17 = *(char *)(param_1 + 1) != '\0';
        uVar7 = *(undefined1 *)((long)param_1 + 3);
        uVar32 = *(undefined4 *)(param_1 + 8);
        uVar37 = *(undefined4 *)(param_1 + 10);
        uVar21 = *(undefined1 *)(param_1 + 2);
        goto LAB_0309e4c0;
      }
LAB_0309e4cc:
      param_1 = param_1 + 0x10;
joined_r0x0309e4d8:
      iVar29 = iVar29 + 1;
      break;
    case 0xf:
      bVar23 = *(byte *)(param_1 + 1);
      param_1 = param_1 + 0x10;
      goto joined_r0x0309e508;
    case 0x10:
      bVar23 = *(byte *)(param_1 + 1);
      param_1 = param_1 + 0x18;
joined_r0x0309e508:
      iVar29 = iVar29 + (uint)bVar23;
      break;
    case 0x11:
      uVar26 = (uint)*(byte *)(param_1 + 1);
      if (*(byte *)(param_1 + 1) != 0) {
        if (*(float *)(param_1 + 4) == 0.0) goto LAB_0309e6d0;
        uVar26 = (uint)*(byte *)(param_1 + 2) << 1;
      }
LAB_0309e6d4:
      param_1 = param_1 + 8;
      iVar29 = uVar26 + iVar29;
      break;
    case 0x13:
      plVar30 = (long *)(param_1 + 0x20);
      plVar31 = (long *)(param_1 + 0x24);
      lVar27 = *(long *)(param_1 + 0x28);
      if ((cVar6 != '\0') &&
         (cVar3 = (*plVar31 != -8 - (long)plVar30 && *plVar31 != 0) +
                  (*plVar30 != -(long)plVar30 && *plVar30 != 0) +
                  (lVar27 != -0x10 - (long)plVar30 && lVar27 != 0), cVar3 != '\0')) {
        FUN_0309ee04(ZEXT816(0x3f800000),0x3f800000,ZEXT816(0),0,piVar19,lVar28,uVar8,1,cVar3,0,1,2,
                     iVar29,0);
        if ((*plVar30 == 0) || (*plVar30 == -(long)plVar30)) {
          lVar27 = *plVar31;
        }
        else {
          lVar27 = (long)local_7c;
          local_7c = local_7c + 1;
          FUN_0309f010(piVar19,lVar28,param_5 + lVar27 * 0x18 + 4,param_1);
          local_68 = local_68 + 1;
          lVar27 = *plVar31;
        }
        if ((lVar27 != 0) && (lVar27 != -8 - (long)plVar30)) {
          lVar27 = (long)local_7c;
          local_7c = local_7c + 1;
          FUN_0309f010(piVar19,lVar28,param_5 + lVar27 * 0x18 + 4,param_1);
          local_68 = local_68 + 1;
        }
        lVar27 = *(long *)(param_1 + 0x28);
        if ((lVar27 != 0) && (lVar27 != -0x10 - (long)plVar30)) {
          lVar27 = (long)local_7c;
          local_7c = local_7c + 1;
          FUN_0309f010(piVar19,lVar28,param_5 + lVar27 * 0x18 + 4,param_1);
          local_68 = local_68 + 1;
        }
      }
      iVar29 = iVar29 + 6;
      param_1 = param_1 + 0x30;
      break;
    case 0x14:
      param_1 = param_1 + 0x20;
      goto LAB_0309e1b0;
    case 0x15:
    case 0x16:
      param_1 = param_1 + 0x10;
LAB_0309e1b0:
      iVar29 = iVar29 + 1;
      break;
    case 0x17:
      param_1 = param_1 + 8;
      break;
    case 0x18:
      uVar32 = *(undefined4 *)(param_1 + 2);
      uVar37 = *(undefined4 *)(param_1 + 4);
      uVar20 = 1;
      uVar22 = 2;
LAB_0309e684:
      FUN_0309ee04(uVar32,uVar37,ZEXT816(0),0,piVar19,lVar28,uVar8,1,3,0,uVar20,uVar22,iVar29,0);
      iVar29 = iVar29 + 3;
      param_1 = param_1 + 8;
      break;
    case 0x19:
    case 0x1a:
      param_1 = param_1 + 0x30;
      iVar29 = iVar29 + 3;
      goto switchD_0309e0c8_caseD_8;
    case 0x1d:
      pbVar1 = (byte *)(param_1 + 1);
      param_1 = param_1 + 0x18;
      iVar29 = iVar29 + (uint)*pbVar1 * 2;
    }
    goto joined_r0x0309e508;
  }
LAB_0309e7a8:
  *(uint *)(lVar28 + 0x188) = *(int *)(lVar28 + 0x188) + (*(byte *)(param_8 + 0x55) & 0x1f);
  if (*(char *)((long)piVar19 + 0x19) == '\0') {
    lVar27 = (long)*(int *)(lVar28 + 0x184) + -1;
    *(int *)(lVar28 + 0x184) = (int)lVar27;
    lVar27 = *(long *)(lVar28 + 0x38) + lVar27 * 0x70;
    iVar16 = (uint)*(byte *)(lVar27 + 0x18) + (int)*(short *)(lVar27 + 0x16);
    if ((int)(*(uint *)(lVar28 + 0x54) & 0x3fffffff) < iVar16) {
      uVar20 = FUN_0309ec78(PTR_PTR_0434a080,iVar16,*(undefined8 *)(lVar28 + 0x48),
                            *(undefined4 *)(lVar28 + 0x50));
      *(undefined8 *)(lVar28 + 0x48) = uVar20;
    }
    if (*(int *)(lVar28 + 0x50) != iVar16) {
      *(int *)(lVar28 + 0x50) = iVar16;
    }
    *(int *)(lVar28 + 0x1b0) = *(int *)(lVar28 + 0x1b0) + 1;
    return;
  }
  if ((bVar18) || (piVar19[2] == 0x7fffffff)) {
    *(undefined1 *)(lVar28 + 0x121) = 1;
    return;
  }
  *(int *)(lVar28 + 0x18c) = *(int *)(lVar28 + 0x18c) + local_68;
  if (*(char *)(lVar28 + 0x122) == '\0') {
    bVar23 = *(byte *)(param_8 + 0x42) & 1;
  }
  else {
    bVar23 = 1;
  }
  *(byte *)(lVar28 + 0x122) = bVar23;
  if (local_64[0] == '\0') {
    piVar4 = (int *)(*(long *)(lVar28 + 8) + (long)(short)piVar19[3] * 0x10);
    piVar5 = (int *)(*(long *)(lVar28 + 8) + (long)*(short *)((long)piVar19 + 0xe) * 0x10);
    *piVar4 = param_10;
    piVar4[1] = param_12;
    *piVar5 = param_11;
    piVar5[1] = param_13;
    piVar4[2] = *piVar19;
    piVar5[2] = piVar19[1];
    if ((*(char *)(lVar28 + 0x120) == '\0') &&
       ((param_10 == 0) == (bool)*(char *)((long)piVar4 + 0xf))) {
      bVar18 = (param_11 == 0) != (bool)*(char *)((long)piVar5 + 0xf);
    }
    else {
      bVar18 = true;
    }
    *(bool *)(lVar28 + 0x120) = bVar18;
    *(bool *)((long)piVar4 + 0xf) = param_10 == 0;
    *(bool *)((long)piVar5 + 0xf) = param_11 == 0;
    if (*(char *)(lVar28 + 0x120) == '\0') goto LAB_0309e958;
LAB_0309e97c:
    bVar18 = true;
  }
  else {
    FUN_0309f4f0(lVar28,param_10,param_11,param_12,param_13);
    if (*(char *)(lVar28 + 0x120) != '\0') goto LAB_0309e97c;
LAB_0309e958:
    if ((int)(char)iVar16 != (uint)*(byte *)(piVar19 + 6)) goto LAB_0309e97c;
    bVar18 = (int)cVar9 != (uint)*(byte *)((long)piVar19 + 0x19);
  }
  *(bool *)(lVar28 + 0x120) = bVar18;
  if (*(char *)(lVar28 + 0x1a8) == '\0') {
    if (*(int *)(lVar28 + 0x114) == param_10) {
      puVar25 = *(undefined8 **)(param_6 + 0x88);
      *(undefined1 *)(lVar28 + 0x1a8) = 1;
      *(undefined8 *)(lVar28 + 400) = *puVar25;
      *(undefined8 *)(lVar28 + 0x198) = puVar25[1];
      *(undefined8 *)(lVar28 + 0x1a0) = puVar25[2];
    }
    else {
      if (*(int *)(lVar28 + 0x114) != param_11) goto LAB_0309e98c;
      fVar33 = *(float *)(param_6 + 0x60);
      fVar34 = *(float *)(param_6 + 100);
      fVar38 = *(float *)(param_6 + 0x68);
      pdVar24 = *(double **)(param_6 + 0x88);
      dVar11 = *pdVar24;
      dVar40 = pdVar24[1];
      dVar12 = pdVar24[2];
      *(undefined1 *)(lVar28 + 0x1a8) = 1;
      *(double *)(lVar28 + 0x1a0) = dVar12 + (double)fVar38;
      *(double *)(lVar28 + 400) = dVar11 + (double)fVar33;
      *(double *)(lVar28 + 0x198) = dVar40 + (double)fVar34;
    }
    *(undefined8 *)(lVar28 + 0x158) = 0;
    *(undefined8 *)(lVar28 + 0x160) = 0;
    *(undefined8 *)(lVar28 + 0x168) = 0;
  }
LAB_0309e98c:
  pdVar24 = *(double **)(param_6 + 0x88);
  uVar20 = *(undefined8 *)(param_4 + 0x38);
  dVar40 = pdVar24[1] - *(double *)(lVar28 + 0x198);
  dVar11 = *pdVar24 - *(double *)(lVar28 + 400);
  dVar50 = pdVar24[3];
  dVar12 = pdVar24[2] - *(double *)(lVar28 + 0x1a0);
  fVar51 = (float)(dVar11 + (double)*(float *)(param_3 + 0x30));
  fVar48 = (float)(dVar40 + (double)*(float *)(param_3 + 0x34));
  fVar38 = (float)(dVar11 + (double)(float)*(undefined8 *)(param_4 + 0x30));
  fVar39 = (float)(dVar40 + (double)(float)((ulong)*(undefined8 *)(param_4 + 0x30) >> 0x20));
  fVar46 = (float)(dVar12 + (double)(float)uVar20);
  fVar33 = (float)(dVar50 + (double)*(float *)(param_3 + 0x3c));
  fVar47 = (float)(dVar12 + (double)*(float *)(param_3 + 0x38));
  *(ulong *)(piVar19 + 0xb) = CONCAT44(fVar48,fVar51);
  fVar34 = (float)(dVar50 + (double)(float)((ulong)uVar20 >> 0x20));
  auVar41._8_8_ = _UNK_0388a1f8;
  auVar41._0_8_ = _DAT_0388a1f0;
  auVar13._4_4_ = fVar48;
  auVar13._0_4_ = fVar51;
  auVar13._8_4_ = fVar47;
  auVar13._12_4_ = fVar33;
  auVar42 = a64_TBL(ZEXT816(0),auVar13,auVar41);
  piVar19[9] = (int)fVar46;
  piVar19[10] = auVar42._12_4_;
  piVar19[7] = (int)fVar38;
  piVar19[8] = (int)fVar39;
  uVar32 = *(undefined4 *)(lVar28 + 0x160);
  auVar45._12_4_ = uVar32;
  auVar45._8_4_ = uVar32;
  uVar32 = *(undefined4 *)(lVar28 + 0x16c);
  auVar35._12_4_ = uVar32;
  auVar35._8_4_ = uVar32;
  auVar35._0_8_ = *(undefined8 *)(lVar28 + 0x164);
  auVar45._0_8_ = *(undefined8 *)(lVar28 + 0x158);
  auVar14._4_4_ = fVar48;
  auVar14._0_4_ = fVar51;
  auVar14._8_4_ = fVar47;
  auVar14._12_4_ = fVar33;
  auVar43 = NEON_fmax(auVar45,auVar14,4);
  auVar44._8_4_ = auVar43._8_4_;
  auVar15._4_4_ = fVar48;
  auVar15._0_4_ = fVar51;
  auVar15._8_4_ = fVar47;
  auVar15._12_4_ = fVar33;
  auVar42 = NEON_fmin(auVar35,auVar15,4);
  auVar44._0_8_ = auVar43._0_8_;
  auVar44._12_4_ = auVar44._8_4_;
  auVar36._8_4_ = auVar42._8_4_;
  auVar36._0_8_ = auVar42._0_8_;
  auVar36._12_4_ = auVar36._8_4_;
  auVar42._4_4_ = fVar39;
  auVar42._0_4_ = fVar38;
  auVar42._8_4_ = fVar46;
  auVar42._12_4_ = fVar34;
  auVar45 = NEON_fmax(auVar44,auVar42,4);
  *(long *)(lVar28 + 0x158) = auVar45._0_8_;
  auVar43._4_4_ = fVar39;
  auVar43._0_4_ = fVar38;
  auVar43._8_4_ = fVar46;
  auVar43._12_4_ = fVar34;
  auVar42 = NEON_fmin(auVar36,auVar43,4);
  *(undefined4 *)(lVar28 + 0x160) = auVar45._8_4_;
  *(undefined8 *)(lVar28 + 0x164) = auVar42._0_8_;
  *(undefined4 *)(lVar28 + 0x16c) = auVar42._8_4_;
  if (param_10 == 0) {
    pdVar24 = *(double **)(param_6 + 0x88);
    fVar33 = *(float *)(param_6 + 0x50);
    fVar34 = *(float *)(param_6 + 0x54);
    fVar38 = *(float *)(param_6 + 0x5c);
    dVar11 = *(double *)(lVar28 + 400);
    dVar50 = *(double *)(lVar28 + 0x198);
    dVar49 = *pdVar24;
    dVar12 = pdVar24[1];
    dVar40 = pdVar24[3];
    pfVar10 = (float *)(*(long *)(lVar28 + 0x18) + (long)(short)piVar19[3] * 0x20);
    pfVar10[2] = (float)((pdVar24[2] - *(double *)(lVar28 + 0x1a0)) +
                        (double)*(float *)(param_6 + 0x58));
    pfVar10[3] = (float)(dVar40 + (double)fVar38);
    *pfVar10 = (float)((dVar49 - dVar11) + (double)fVar33);
    pfVar10[1] = (float)((dVar12 - dVar50) + (double)fVar34);
  }
  if (param_11 == 0) {
    pdVar24 = *(double **)(param_6 + 0x88);
    fVar33 = *(float *)(param_6 + 0x60);
    fVar34 = *(float *)(param_6 + 100);
    fVar38 = *(float *)(param_6 + 0x6c);
    dVar11 = *(double *)(lVar28 + 400);
    dVar50 = *(double *)(lVar28 + 0x198);
    dVar49 = *pdVar24;
    dVar12 = pdVar24[1];
    dVar40 = pdVar24[3];
    pfVar10 = (float *)(*(long *)(lVar28 + 0x18) + (long)*(short *)((long)piVar19 + 0xe) * 0x20);
    pfVar10[2] = (float)((pdVar24[2] - *(double *)(lVar28 + 0x1a0)) +
                        (double)*(float *)(param_6 + 0x68));
    pfVar10[3] = (float)(dVar40 + (double)fVar38);
    *pfVar10 = (float)((dVar49 - dVar11) + (double)fVar33);
    pfVar10[1] = (float)((dVar12 - dVar50) + (double)fVar34);
  }
  return;
switchD_0309e0c8_caseD_8:
joined_r0x0309e508:
  if (puVar2 <= param_1) goto LAB_0309e7a8;
  goto LAB_0309e0ac;
}


