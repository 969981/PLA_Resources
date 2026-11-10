/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b009a4; name: FUN_02b009a4
 */


void FUN_02b009a4(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  char *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  undefined8 local_210;
  char *pcStack_208;
  undefined8 local_200;
  long *local_1f8;
  undefined8 local_1f0;
  char *pcStack_1e8;
  undefined8 local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  char *pcStack_1c8;
  undefined8 local_1c0;
  long *local_1b8;
  undefined8 local_1b0;
  char *pcStack_1a8;
  undefined8 local_1a0;
  long *local_198;
  long *local_190;
  char *local_188;
  undefined8 local_180;
  long *local_178;
  long *local_170;
  undefined8 local_168;
  char *pcStack_160;
  undefined8 local_158;
  long *local_150;
  undefined8 local_148;
  char *pcStack_140;
  undefined8 local_138;
  long *local_130;
  long local_128;
  long *local_120;
  char *local_118;
  undefined8 local_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long *local_80 [2];
  undefined1 auStack_68 [8];
  
  lVar11 = *(long *)(param_2 + 4);
  uVar3 = *(uint *)(lVar11 + 0xa0);
  uVar13 = *(ulong *)(*(long *)(lVar11 + 0x98) + 0x138);
  uVar12 = (uint)uVar13;
  if (uVar3 < 3) {
    uVar12 = uVar12 & uVar3 - 1;
  }
  else {
    iVar6 = 0;
    if ((ulong)uVar3 != 0) {
      iVar6 = (int)(uVar13 / uVar3);
    }
    uVar12 = uVar12 - iVar6 * uVar3;
  }
  pcVar8 = (char *)FUN_02bc0470((long)(int)uVar12,lVar11 + 0x58);
  lVar11 = *(long *)(pcVar8 + 8);
  if (*pcVar8 != '\0' && lVar11 != 0) {
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar11 + 0x70);
    *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar11 + 0x78);
  }
  plVar7 = DAT_043ef568;
  if (DAT_043ef568 != (long *)0x0) {
    plVar14 = DAT_043ef568 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar5) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = *(long **)(*(long *)(DAT_043ef5a0 + 0x60) + 0x68);
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = (int)*plVar9 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_b8 = 0;
  uStack_b0 = 1;
  local_a8 = 2;
  uStack_a0 = 0x20000000b;
  local_98 = 0x400000003;
  uStack_90 = 5;
  local_d0 = *(undefined8 *)(param_1 + 0x98);
  local_c8 = *(undefined8 *)(param_1 + 0xa0);
  local_88 = 0x200000004;
  uStack_c0 = 0;
  local_120 = plVar7;
  lVar11 = FUN_01b34908(&local_190,plVar7[1],&local_120);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bc011c(lVar11,&local_d0,1,3,0);
  plVar15 = (long *)(param_1 + 0x80);
  plVar9 = (long *)*plVar15;
  *plVar15 = 0;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  *plVar15 = lVar11;
  local_120 = (long *)0x63ac9d1257a08b63;
  local_118 = "SSRHash";
  local_110 = 7;
  local_108 = (long *)0x0;
  FUN_02b300d4(plVar14,&local_120,plVar15);
  if (local_108 != (long *)0x0) {
    (**(code **)(*local_108 + 0x20))();
  }
  local_108 = (long *)0x0;
  uStack_100 = 1;
  local_f8 = 2;
  uStack_f0 = 0x20000003f;
  local_e8 = 0x400000003;
  uStack_e0 = 5;
  local_120 = *(long **)(param_1 + 0x98);
  local_118 = *(char **)(param_1 + 0xa0);
  local_d8 = 0x200000008;
  local_110 = 0;
  local_190 = plVar7;
  lVar11 = FUN_01b34908(local_80,plVar7[1],&local_190);
  if (lVar11 != 0) {
    piVar1 = (int *)(lVar11 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bc011c(lVar11,&local_120,1,1,0);
  plVar16 = (long *)(param_1 + 0x88);
  plVar9 = (long *)*plVar16;
  *plVar16 = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  *plVar16 = lVar11;
  local_190 = (long *)0x62f49367b58c47f9;
  local_188 = "SSRBuffer";
  local_180 = 9;
  local_178 = (long *)0x0;
  FUN_02b300d4(plVar14,&local_190,plVar16);
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_190 = (long *)&DAT_53292526d9e574e3;
  local_188 = "SSR";
  local_180 = 0x1f;
  local_178 = (long *)0x0;
  FUN_02b30210(local_80,plVar14,&local_190);
  plVar9 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  plVar9 = local_80[0];
  local_80[0] = (long *)0x0;
  *(long **)(param_1 + 0x90) = plVar9;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))(local_178);
    plVar9 = *(long **)(param_1 + 0x90);
  }
  FUN_02b62284(plVar9);
  local_190 = (long *)0x174c6db3002376ca;
  local_188 = "SSRCalc";
  local_180 = 0x1f;
  local_178 = (long *)0x0;
  local_80[0] = plVar7;
  local_128 = FUN_02ba378c(auStack_68,plVar7[1],local_80,&local_190);
  if (local_128 != 0) {
    piVar1 = (int *)(local_128 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bb9f68(plVar7[0xf],&local_128);
  plVar9 = *(long **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar10 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  lVar11 = local_128;
  local_128 = 0;
  *(long *)(param_1 + 0x58) = lVar11;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
    lVar11 = *(long *)(param_1 + 0x58);
  }
  if (*(int *)(lVar11 + 0x19c) != *param_2) {
    *(int *)(lVar11 + 0x19c) = *param_2;
    *(undefined1 *)(*(long *)(*(long *)(lVar11 + 0x58) + 0x78) + 0xa8) = 1;
    lVar11 = *(long *)(param_1 + 0x58);
  }
  if (*(char *)(lVar11 + 0x1f8) == '\0') {
    *(undefined4 *)(lVar11 + 0x1fc) = 2;
    *(undefined1 *)(lVar11 + 0x1f8) = 1;
  }
  else {
    *(undefined4 *)(lVar11 + 0x1fc) = 2;
  }
  plVar9 = *(long **)(*(long *)(param_1 + 0x58) + 0x80);
  if (plVar9 != (long *)0x0) {
    plVar10 = plVar9 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar5) {
        *(int *)plVar10 = (int)*plVar10 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bb0dac(plVar9,2,1,plVar15);
  FUN_02baed28(0,0,(float)*(ulong *)(param_1 + 0x98),(float)*(ulong *)(param_1 + 0xa0),plVar9,0);
  FUN_02bafdb0(0,plVar9,0);
  FUN_02bb5f9c(plVar9,0,0,0,0,0);
  FUN_02bb32fc(plVar9,0);
  FUN_02bb3880(plVar9,0);
  local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  FUN_02bae22c(plVar9,0,plVar16,0xffffffff,&local_190);
  local_190 = (long *)0x8976cc0604b4e18d;
  local_188 = "SSRResolve";
  local_180 = 0x1f;
  local_178 = (long *)0x0;
  local_80[0] = plVar7;
  local_128 = FUN_02ba378c(auStack_68,plVar7[1],local_80,&local_190);
  if (local_128 != 0) {
    piVar1 = (int *)(local_128 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  FUN_02bb9f68(plVar7[0xf],&local_128);
  plVar10 = *(long **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  lVar11 = local_128;
  local_128 = 0;
  *(long *)(param_1 + 0x60) = lVar11;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
    lVar11 = *(long *)(param_1 + 0x60);
  }
  if (*(int *)(lVar11 + 0x19c) != *param_2 + 1) {
    *(int *)(lVar11 + 0x19c) = *param_2 + 1;
    *(undefined1 *)(*(long *)(*(long *)(lVar11 + 0x58) + 0x78) + 0xa8) = 1;
    lVar11 = *(long *)(param_1 + 0x60);
  }
  if (*(char *)(lVar11 + 0x1f8) == '\0') {
    *(undefined4 *)(lVar11 + 0x1fc) = 2;
    *(undefined1 *)(lVar11 + 0x1f8) = 1;
  }
  else {
    *(undefined4 *)(lVar11 + 0x1fc) = 2;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x60) + 0x80);
  if (plVar10 != (long *)0x0) {
    plVar2 = plVar10 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  FUN_02bae22c(plVar10,0,plVar16,0xffffffff,&local_190);
  FUN_02bafdb0(0,plVar10,0);
  FUN_02bb5f9c(plVar10,0,1,1,1,1);
  FUN_02bb32fc(plVar10,0);
  FUN_02bb3880(plVar10,0);
  local_190 = (long *)0x3d948eb51351b29a;
  local_188 = "[ClearHash]";
  local_180 = 0xb;
  local_178 = (long *)0x0;
  FUN_02b59f30(local_80,DAT_043ef598,*(long *)(param_1 + 0x58) + 0x60,&local_190,0);
  plVar16 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  plVar16 = local_80[0];
  local_80[0] = (long *)0x0;
  *(long **)(param_1 + 0x68) = plVar16;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_138 = 8;
  local_130 = (long *)0x0;
  local_168 = 0x2682b19b6c78d0e2;
  pcStack_160 = "Clear";
  local_148 = 0x9a33ee12e00dbfd0;
  pcStack_140 = "PassType";
  local_158 = 5;
  local_150 = (long *)0x0;
  FUN_02b62868(*(undefined8 *)(param_1 + 0x90),&local_148,&local_168);
  if (local_150 != (long *)0x0) {
    (**(code **)(*local_150 + 0x20))();
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x90));
  lVar11 = *(long *)(param_1 + 0x90);
  lVar17 = *(long *)(param_1 + 0x68);
  local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  if (*(char *)(lVar11 + 0x118) != '\0') {
    local_188 = *(char **)(lVar11 + 0x120);
    local_180 = *(undefined8 *)(lVar11 + 0x128);
    local_178 = *(long **)(lVar11 + 0x130);
    local_170 = *(long **)(lVar11 + 0x138);
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x18))();
    }
    local_190 = (long *)CONCAT71(local_190._1_7_,1);
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar17 + 0x60),0,&local_190);
  if ((char)local_190 != '\0') {
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  }
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),0,0);
  FUN_02bb32fc(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),0);
  FUN_02bb3880(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),0);
  FUN_02bb27d4(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),0,1);
  FUN_02bb2d7c(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),4);
  *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x90) = 0;
  local_190 = (long *)0x62344750597211e2;
  local_188 = "[ProjectHash]";
  local_180 = 0xd;
  local_178 = (long *)0x0;
  FUN_02b59f30(local_80,DAT_043ef598,*(long *)(param_1 + 0x58) + 0x60,&local_190,0);
  plVar16 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  plVar16 = local_80[0];
  local_80[0] = (long *)0x0;
  *(long **)(param_1 + 0x70) = plVar16;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_1a0 = 8;
  local_198 = (long *)0x0;
  local_1d0 = 0xac19db3986edada2;
  pcStack_1c8 = "ProjectHash";
  local_1b0 = 0x9a33ee12e00dbfd0;
  pcStack_1a8 = "PassType";
  local_1c0 = 0xb;
  local_1b8 = (long *)0x0;
  FUN_02b62868(*(undefined8 *)(param_1 + 0x90),&local_1b0,&local_1d0);
  if (local_1b8 != (long *)0x0) {
    (**(code **)(*local_1b8 + 0x20))();
  }
  if (local_198 != (long *)0x0) {
    (**(code **)(*local_198 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x90));
  lVar11 = *(long *)(param_1 + 0x90);
  lVar17 = *(long *)(param_1 + 0x70);
  local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  if (*(char *)(lVar11 + 0x118) != '\0') {
    local_188 = *(char **)(lVar11 + 0x120);
    local_180 = *(undefined8 *)(lVar11 + 0x128);
    local_178 = *(long **)(lVar11 + 0x130);
    local_170 = *(long **)(lVar11 + 0x138);
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x18))();
    }
    local_190 = (long *)CONCAT71(local_190._1_7_,1);
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar17 + 0x60),0,&local_190);
  if ((char)local_190 != '\0') {
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  }
  FUN_02bb0c88(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x60),2,0,param_2 + 2);
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x60),0,0);
  FUN_02bb32fc(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x60),0);
  FUN_02bb3880(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x60),0);
  FUN_02bb27d4(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x60),0,1);
  FUN_02bb2d7c(*(undefined8 *)(*(long *)(param_1 + 0x70) + 0x60),4);
  *(undefined4 *)(*(long *)(param_1 + 0x70) + 0x90) = 0;
  local_190 = (long *)0x341707c8f55b619;
  local_188 = "[ResolveHash]";
  local_180 = 0xd;
  local_178 = (long *)0x0;
  FUN_02b59f30(local_80,DAT_043ef598,*(long *)(param_1 + 0x60) + 0x60,&local_190,0);
  plVar16 = *(long **)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      iVar6 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar16 + 0x10))();
    }
  }
  plVar16 = local_80[0];
  local_80[0] = (long *)0x0;
  *(long **)(param_1 + 0x78) = plVar16;
  if (local_178 != (long *)0x0) {
    (**(code **)(*local_178 + 0x20))();
  }
  local_1e0 = 8;
  local_1d8 = (long *)0x0;
  local_210 = 0xa918eb8fa9284c63;
  pcStack_208 = "ResolveHash";
  local_1f0 = 0x9a33ee12e00dbfd0;
  pcStack_1e8 = "PassType";
  local_200 = 0xb;
  local_1f8 = (long *)0x0;
  FUN_02b62868(*(undefined8 *)(param_1 + 0x90),&local_1f0,&local_210);
  if (local_1f8 != (long *)0x0) {
    (**(code **)(*local_1f8 + 0x20))();
  }
  if (local_1d8 != (long *)0x0) {
    (**(code **)(*local_1d8 + 0x20))();
  }
  FUN_02b62410(*(undefined8 *)(param_1 + 0x90));
  lVar11 = *(long *)(param_1 + 0x90);
  lVar17 = *(long *)(param_1 + 0x78);
  local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  if (*(char *)(lVar11 + 0x118) != '\0') {
    local_188 = *(char **)(lVar11 + 0x120);
    local_180 = *(undefined8 *)(lVar11 + 0x128);
    local_178 = *(long **)(lVar11 + 0x130);
    local_170 = *(long **)(lVar11 + 0x138);
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x18))();
    }
    local_190 = (long *)CONCAT71(local_190._1_7_,1);
  }
  FUN_02ba7ba0(*(undefined8 *)(lVar17 + 0x60),0,&local_190);
  if ((char)local_190 != '\0') {
    if (local_170 != (long *)0x0) {
      (**(code **)(*local_170 + 0x20))();
    }
    local_190 = (long *)((ulong)local_190 & 0xffffffffffffff00);
  }
  FUN_02bb0c88(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60),2,0,plVar15);
  FUN_02bb0c88(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60),2,1,param_2 + 4);
  FUN_02bb5928(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60),0,0);
  FUN_02bb32fc(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60),0);
  FUN_02bb3880(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60),0);
  FUN_02bb27d4(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60),0,1);
  FUN_02bb2d7c(*(undefined8 *)(*(long *)(param_1 + 0x78) + 0x60),4);
  *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x90) = 1;
  if (plVar10 != (long *)0x0) {
    plVar15 = plVar10 + 10;
    do {
      iVar6 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  if (plVar9 != (long *)0x0) {
    plVar15 = plVar9 + 10;
    do {
      iVar6 = (int)*plVar15 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar5) {
        *(int *)plVar15 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  if (plVar14 != (long *)0x0) {
    plVar9 = plVar14 + 10;
    do {
      iVar6 = (int)*plVar9 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
      if (bVar5) {
        *(int *)plVar9 = iVar6;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  plVar14 = plVar7 + 10;
  do {
    iVar6 = (int)*plVar14 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar5) {
      *(int *)plVar14 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  return;
}


