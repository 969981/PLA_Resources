/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300a26c; name: FUN_0300a26c
 */


undefined8 FUN_0300a26c(long param_1)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined2 local_190;
  char local_18e;
  undefined1 uStack_18d;
  undefined1 uStack_18c;
  undefined1 uStack_18b;
  undefined2 uStack_18a;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [48];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [48];
  undefined1 auStack_d0 [16];
  undefined2 local_c0;
  undefined2 local_be;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined8 local_b8;
  undefined1 auStack_90 [32];
  
  *(undefined1 *)(param_1 + 0x300) = 1;
  if (*(char *)(param_1 + 0x300) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x300) = 0;
  FUN_032d59e0(param_1 + 0x308,0xffffffff,0x13);
  FUN_032d59e0(param_1 + 0x354,0xffffffff,0x13);
  *(undefined4 *)(param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x3ec) = 0xffffffff;
  FUN_032d59e0(param_1 + 0x3a0,0xffffffff,0x13);
  lVar1 = param_1 + 0x3f0;
  if (*(int *)(param_1 + 0x3f8) != 0) {
    if (*(int *)(param_1 + 0x3fc) == 0) {
      *(int *)(param_1 + 0x3fc) = *(int *)(param_1 + 0x3f8);
    }
    *(undefined4 *)(param_1 + 0x3f8) = 0;
  }
  FUN_0300b410(param_1,param_1 + 0x50,0);
  FUN_0300b640(param_1,param_1 + 0xe0);
  bVar2 = *(char *)(param_1 + 0x34) == '\x02';
  cVar3 = *(char *)(param_1 + 0x33);
  bVar7 = 2;
  if (!(bool)bVar2) {
    bVar7 = 1;
  }
  if (*(char *)(param_1 + 0x35) == '\x02') {
    bVar2 = bVar7;
  }
  bVar7 = bVar2;
  if (cVar3 == '\x02') {
    bVar7 = bVar2 + 1;
  }
  if (bVar7 < 3) {
    if (*(char *)(param_1 + 0xf2) == '\0') {
      lVar13 = 0;
      iVar9 = 4;
      lVar14 = 0x33;
      do {
        if ((*(char *)(param_1 + lVar13 + 0x152) != '\0') && (*(char *)(param_1 + lVar14) != '\x02')
           ) {
          FUN_0300bae0(param_1,param_1 + lVar13 + 0x150,(int)lVar14 + -0x30,iVar9);
        }
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x10;
        iVar9 = iVar9 + 2;
      } while (lVar14 != 0x36);
      if (bVar7 == 3) goto LAB_0300a42c;
    }
    else {
      FUN_0300b870(param_1,param_1 + 0xf0);
    }
    if (bVar2 == 1) {
      cVar8 = *(char *)(param_1 + 0x34);
      local_c0 = 0xd;
      local_b8 = 0xbf800000bf800000;
      uVar5 = 1;
      if (cVar8 == '\x02') {
        uVar5 = 2;
      }
      if (cVar3 == '\x02') {
        bVar4 = cVar8 == '\x02';
        local_bc = 1;
        if (bVar4) {
          local_bc = 2;
        }
        local_bb = 2;
        local_be = CONCAT11(bVar4,!bVar4 << 1);
        uVar11 = 0x11;
        if (bVar4) {
          uVar11 = 0x12;
        }
        FUN_0300bd70(param_1,&local_c0,0x13);
        iVar12 = *(int *)(param_1 + 0x304);
        iVar9 = iVar12 + 1;
        *(int *)(param_1 + 0x3e0) = iVar12;
        *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x3ec);
        *(int *)(param_1 + 0x304) = iVar12 + 2;
LAB_0300a798:
        lVar14 = param_1 + uVar11 * 4;
        *(int *)(lVar14 + 0x3a0) = iVar9;
        *(undefined4 *)(lVar14 + 0x354) = *(undefined4 *)(param_1 + 0x3ec);
      }
      else {
        if (cVar3 == '\x01') {
          FUN_0300c040(param_1,param_1 + 0x180);
        }
        local_be = 2;
        local_bb = 1;
        local_bc = (char)uVar5;
        FUN_0300bd70(param_1,&local_c0,0x13);
        if ((uVar5 | 0x10) != 0x13) {
          iVar9 = *(int *)(param_1 + 0x304);
          uVar11 = (ulong)(uVar5 | 0x10);
          *(int *)(param_1 + 0x304) = iVar9 + 1;
          goto LAB_0300a798;
        }
      }
      if (*(char *)(param_1 + (ulong)(uVar5 + 3) + 0x30) == '\x01') {
        local_190 = 0xe;
        local_18e = '\x01';
        uStack_18c = 0;
        uStack_188 = *(undefined4 *)(param_1 + 0x38 + (long)(int)uVar5 * 8 + -8);
        uStack_184 = *(undefined4 *)(param_1 + 0x38 + (long)(int)(uVar5 << 1) * 4 + -4);
        local_180 = 0x3f8000003f4ccccd;
        uVar6 = 0x11;
        if (cVar8 != '\x02') {
          uVar6 = 0x12;
        }
        uStack_18d = (char)uVar5;
        FUN_0300c2a0(param_1,&local_190,uVar6);
      }
    }
    else if (bVar2 == 2) {
      local_190 = 0xd;
      uStack_188 = 0xbf800000;
      uStack_184 = 0xbf800000;
      local_18e = '\x01';
      uStack_18d = 2;
      uStack_18c = 0;
      uStack_18b = 2;
      FUN_0300bd70(param_1,&local_190,0x11);
      if (cVar3 == '\x01') {
        FUN_0300c040(param_1,param_1 + 0x180);
      }
    }
    else {
      if (cVar3 == '\x02') {
        local_190 = 0xd;
        uStack_188 = 0xbf800000;
        uStack_184 = 0xbf800000;
        local_18e = '\0';
        uStack_18d = 1;
        uStack_18c = 2;
        uStack_18b = 1;
        FUN_0300bd70(param_1,&local_190,0x10);
      }
      else if (cVar3 == '\x01') {
        FUN_0300c040(param_1,param_1 + 0x180);
      }
      fVar15 = *(float *)(param_1 + 0x3c);
      fVar17 = *(float *)(param_1 + 0x38) * 0.5 + fVar15 * 0.5;
      fVar16 = *(float *)(param_1 + 0x44);
      fVar18 = *(float *)(param_1 + 0x40) * 0.5 + fVar16 * 0.5;
      if (fVar17 != 0.0 || fVar18 != 0.0) {
        FUN_032caaf4(fVar17,auStack_90,param_1 + 0xb0);
        FUN_032c9fc0(&local_c0,auStack_90);
        FUN_032caaf4(fVar18,auStack_d0,param_1 + 0xc0);
        FUN_032c9fc0(auStack_100,auStack_d0);
        FUN_032c9384(auStack_100,&local_c0);
        local_190 = 2;
        uStack_178 = *(undefined8 *)(param_1 + 0x68);
        local_180 = *(undefined8 *)(param_1 + 0x60);
        uStack_168 = *(undefined8 *)(param_1 + 0x78);
        local_170 = *(undefined8 *)(param_1 + 0x70);
        uStack_158 = *(undefined8 *)(param_1 + 0x88);
        local_160 = *(undefined8 *)(param_1 + 0x80);
        uStack_148 = *(undefined8 *)(param_1 + 0x98);
        local_150 = *(undefined8 *)(param_1 + 0x90);
        uStack_108 = *(undefined8 *)(param_1 + 0xd8);
        local_110 = *(undefined8 *)(param_1 + 0xd0);
        FUN_032c9038(auStack_140,auStack_100,param_1 + 0xa0);
        FUN_0300b410(param_1,&local_190,0x13);
        fVar15 = *(float *)(param_1 + 0x3c);
        fVar16 = *(float *)(param_1 + 0x44);
      }
      *(float *)(param_1 + 0x1a8) = fVar15 - fVar17;
      *(float *)(param_1 + 0x1ac) = fVar16 - fVar18;
      FUN_03009bc4(param_1 + 0x1a0);
      FUN_0300c510(param_1,param_1 + 0x1a0);
      if (fVar17 != 0.0 || fVar18 != 0.0) {
        FUN_0300b410(param_1,param_1 + 0x50,0x13);
      }
    }
  }
  else {
LAB_0300a42c:
    local_190 = 0xd;
    uStack_188 = 0xbf800000;
    uStack_184 = 0xbf800000;
    local_18e = '\0';
    uStack_18d = 1;
    uStack_18c = 2;
    uStack_18b = 3;
    FUN_0300bd70(param_1,&local_190,0x10);
  }
  cVar3 = *(char *)(param_1 + 0x30) == '\x02';
  cVar8 = '\x02';
  if (!(bool)cVar3) {
    cVar8 = '\x01';
  }
  if (*(char *)(param_1 + 0x31) == '\x02') {
    cVar3 = cVar8;
  }
  if (*(char *)(param_1 + 0x32) == '\x02') {
    cVar3 = cVar3 + '\x01';
  }
  if (*(float *)(param_1 + 0x1e4) == 0.0) {
    if ((cVar3 == '\x03') || (*(float *)(param_1 + 0x1ec) < 0.0)) {
LAB_0300a5cc:
      FUN_0300c760(param_1,param_1 + 0x2f0);
      goto LAB_0300a5d8;
    }
  }
  else if (cVar3 == '\x03') goto LAB_0300a5cc;
  lVar14 = param_1 + 0x290;
  iVar9 = 10;
  lVar13 = 0x30;
  do {
    if ((*(char *)(param_1 + lVar13) != '\x02') && (*(char *)(lVar14 + 2) != '\0')) {
      FUN_0300c9c0(param_1,lVar14,(int)lVar13 + -0x20,iVar9);
    }
    lVar13 = lVar13 + 1;
    lVar14 = lVar14 + 0x20;
    iVar9 = iVar9 + 2;
  } while (lVar13 != 0x33);
  FUN_0300cc50(param_1,param_1 + 0x1d0);
  lVar10 = 0;
  lVar13 = 0;
  local_190 = 7;
  iVar9 = 10;
  uStack_18c = 0;
  uStack_18b = 0;
  uStack_18a = 0xbf80;
  uStack_188 = 0xbf800000;
  lVar14 = 0x30;
  do {
    iVar12 = (int)lVar14;
    if (*(char *)(param_1 + lVar14) == '\x01') {
      FUN_0300d0f0(param_1,param_1 + lVar13 + 0x200,iVar12 + -0x26,iVar12 + -0x30);
    }
    else if (*(char *)(param_1 + lVar14) == '\x02') {
      local_18e = (char)lVar14 + -0x30;
      FUN_0300ce90(param_1,&local_190,iVar12 + -0x30);
    }
    if ((*(float *)(param_1 + lVar10 + 0x264) != 0.0) &&
       (*(char *)(param_1 + lVar13 + 0x292) == '\0')) {
      FUN_0300d370(param_1,param_1 + lVar10 + 0x260,iVar12 + -0x23,iVar9);
    }
    lVar14 = lVar14 + 1;
    lVar13 = lVar13 + 0x20;
    lVar10 = lVar10 + 0x10;
    iVar9 = iVar9 + 2;
  } while (lVar14 != 0x33);
LAB_0300a5d8:
  if (-1 < *(int *)(param_1 + 0x310)) {
    lVar14 = *(long *)(param_1 + 0x3f0) + lVar1 + (long)*(int *)(param_1 + 0x310);
    lVar13 = 0;
    if (*(long *)(param_1 + 0x130) != 0) {
      lVar13 = (*(long *)(param_1 + 0x130) + param_1 + 0x130) - (lVar14 + 0x40);
    }
    *(long *)(lVar14 + 0x40) = lVar13;
    lVar13 = 0;
    if (*(long *)(param_1 + 0x138) != 0) {
      lVar13 = (*(long *)(param_1 + 0x138) + param_1 + 0x138) - (lVar14 + 0x48);
    }
    *(long *)(lVar14 + 0x48) = lVar13;
    lVar13 = 0;
    if (*(long *)(param_1 + 0x140) != 0) {
      lVar13 = ((param_1 + 0x140) - (lVar14 + 0x50)) + *(long *)(param_1 + 0x140);
    }
    *(long *)(lVar14 + 0x50) = lVar13;
  }
  if (-1 < *(int *)(param_1 + 0x348)) {
    lVar14 = *(long *)(param_1 + 0x3f0) + lVar1 + (long)*(int *)(param_1 + 0x348);
    lVar13 = 0;
    if (*(long *)(param_1 + 0x298) != 0) {
      lVar13 = (*(long *)(param_1 + 0x298) + param_1 + 0x298) - (lVar14 + 8);
    }
    *(long *)(lVar14 + 8) = lVar13;
  }
  if (-1 < *(int *)(param_1 + 0x34c)) {
    lVar14 = *(long *)(param_1 + 0x3f0) + lVar1 + (long)*(int *)(param_1 + 0x34c);
    lVar13 = 0;
    if (*(long *)(param_1 + 0x2b8) != 0) {
      lVar13 = (*(long *)(param_1 + 0x2b8) + param_1 + 0x2b8) - (lVar14 + 8);
    }
    *(long *)(lVar14 + 8) = lVar13;
  }
  if (-1 < *(int *)(param_1 + 0x350)) {
    lVar1 = *(long *)(param_1 + 0x3f0) + lVar1 + (long)*(int *)(param_1 + 0x350);
    lVar14 = 0;
    if (*(long *)(param_1 + 0x2d8) != 0) {
      lVar14 = (*(long *)(param_1 + 0x2d8) + param_1 + 0x2d8) - (lVar1 + 8);
    }
    *(long *)(lVar1 + 8) = lVar14;
  }
  return 1;
}


