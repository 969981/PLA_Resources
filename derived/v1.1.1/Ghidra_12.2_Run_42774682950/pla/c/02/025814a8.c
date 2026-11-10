/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025814a8; name: FUN_025814a8
 */


/* WARNING: Removing unreachable block (ram,0x0258218c) */

void FUN_025814a8(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  long *plVar15;
  byte *__s;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  size_t sVar19;
  long lVar20;
  code *pcVar21;
  byte *pbVar22;
  long lVar23;
  long *plVar24;
  long *plVar25;
  undefined1 *puVar26;
  long *aplStack_460 [12];
  long *local_400;
  code *local_3f8;
  code *local_3f0;
  undefined1 *local_3e8;
  long *aplStack_3e0 [13];
  long local_378;
  char *pcStack_370;
  undefined8 local_368;
  long *local_360;
  undefined8 local_358;
  char *pcStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  char *pcStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  char *pcStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  char *pcStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  char *pcStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  char *pcStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  char *pcStack_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  char *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  char *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  char *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  char *local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  char *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  long *local_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  long *local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  long *local_160;
  undefined8 local_158;
  char *local_150;
  undefined8 local_148;
  long *local_140;
  undefined8 local_138;
  char *local_130;
  undefined8 local_128;
  long *local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  long *local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  long *local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  long *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [16];
  long local_80;
  long local_78;
  long local_70;
  
  puVar8 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar8 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar9 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar9 = PTR_DAT_04379528;
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar12 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = 0;
    if (*(long *)(lVar12 + 0x80) != 0) {
      lVar20 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_0425dab0;
  param_1[1] = lVar20;
  param_1[9] = (long)&PTR_LAB_0425dae8;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  lVar12 = *param_2;
  param_1[0x14] = lVar12;
  if (lVar12 != 0) {
    lVar12 = *(long *)(lVar12 + 0x58);
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_02582684;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar12 = *param_3;
  param_1[0x15] = lVar12;
  if (lVar12 != 0) {
    piVar2 = (int *)(lVar12 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (param_1[0x14] == 0) goto LAB_02582684;
  lVar12 = FUN_00d48784(&local_378,param_1[1],&DAT_03a7d634);
  if (lVar12 != 0) {
    piVar2 = (int *)(lVar12 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar14 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      iVar11 = (int)*plVar15 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  param_1[0x13] = lVar12;
  lVar12 = param_3[2];
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  lVar20 = FUN_00d48784(&local_378,param_1[1],&DAT_03a7d634);
  if (lVar20 != 0) {
    piVar2 = (int *)(lVar20 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar14 = (long *)param_1[0x13];
  param_1[0x13] = 0;
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      iVar11 = (int)*plVar15 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  param_1[0x13] = lVar20;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar20 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar20;
  plVar14 = *(long **)(lVar20 + 0xd0);
  if (plVar14 != (long *)0x0) {
    plVar15 = plVar14 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = PTR_DAT_043879a8 + 0x10;
  FUN_00d31758(auStack_90,plVar14 + 0x1a);
  local_80 = plVar14[0x1c];
  if (local_80 != 0) {
    piVar2 = (int *)(local_80 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_78 = plVar14[0x1d];
  if (local_78 != 0) {
    piVar2 = (int *)(local_78 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_70 = plVar14[0x1e];
  if (local_70 != 0) {
    lVar20 = *(long *)(local_70 + 0x58);
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_02582684;
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_98 = PTR_DAT_0437b4c0 + 0x10;
  plVar15 = plVar14 + 10;
  do {
    iVar11 = (int)*plVar15 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar7) {
      *(int *)plVar15 = iVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  plVar14 = (long *)param_1[1];
  if (((*puVar8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar10 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar10,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar20 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
  if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_02582694;
  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar14;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
  plVar15 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x120,0x10);
  if (plVar15 == (long *)0x0) {
    (**(code **)(*plVar14 + 0xb8))(plVar14);
  }
  FUN_0283ee34(plVar15,plVar14,&local_98,0,0);
  plVar15[1] = (long)plVar14;
  plVar15[2] = (long)plVar15;
  plVar15[3] = 0x120;
  plVar15[4] = 0x10;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar7) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_378 = -0x6b86fa6fe9097303;
  pcStack_370 = "ui2d2";
  local_368 = 5;
  local_360 = (long *)0x0;
  __s = (byte *)(**(code **)(*DAT_043ef740 + 0x38))(DAT_043ef740,&local_378,0);
  puVar10 = PTR_DAT_0437a0d8;
  if (__s == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar11 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar26 = *(undefined1 **)puVar10;
    __s = *(byte **)(puVar10 + 8);
    sVar19 = *(size_t *)(puVar10 + 0x10);
    plVar14 = *(long **)(puVar10 + 0x18);
    if (plVar14 == (long *)0x0) goto LAB_02581868;
    (**(code **)(*plVar14 + 0x18))();
  }
  else {
    puVar26 = &DAT_cbf29ce484222645;
    sVar19 = strlen((char *)__s);
    bVar5 = *__s;
    pbVar22 = __s;
    while (bVar5 != 0) {
      pbVar22 = pbVar22 + 1;
      puVar26 = (undefined1 *)(((ulong)puVar26 ^ (ulong)bVar5) * 0x100000001b3);
      bVar5 = *pbVar22;
    }
LAB_02581868:
    plVar14 = (long *)0x0;
  }
  if (local_360 != (long *)0x0) {
    (**(code **)(*local_360 + 0x20))();
  }
  *(undefined1 *)((long)plVar15 + 0x112) = 1;
  local_378 = param_1[1];
  plVar16 = (long *)FUN_00d305cc(&local_400,local_378,&local_378);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar16[0x3a] = (long)puVar26;
  plVar16[0x3b] = (long)__s;
  plVar16[0x3c] = sVar19;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
  }
  plVar17 = (long *)plVar16[0x3d];
  plVar16[0x3d] = (long)plVar14;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))();
  }
  plVar17 = plVar16 + 10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar7) {
      *(int *)plVar17 = (int)*plVar17 + 1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  local_400 = plVar16;
  (**(code **)(*plVar15 + 0x28))(plVar15,&local_400);
  if (local_400 != (long *)0x0) {
    plVar17 = local_400 + 10;
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_400 + 0x10))();
    }
  }
  plVar24 = param_1 + 0xb;
  plVar17 = (long *)*plVar24;
  *plVar24 = 0;
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *plVar24 = (long)plVar16;
  FUN_0283d118(plVar16,(char)lVar12,0);
  FUN_0283c5bc(*plVar24);
  lVar12 = *(long *)(*plVar24 + 0xf8);
  if (lVar12 != 0) {
    lVar20 = *(long *)(*plVar24 + 0xf0);
    *(undefined1 *)(*(long *)(lVar20 + 0x20) + 0x670) = 0;
    if ((lVar12 != 1) && (*(undefined1 *)(*(long *)(lVar20 + 0x48) + 0x670) = 0, lVar12 != 2)) {
      lVar12 = lVar12 * 0x28 + -0x50;
      plVar16 = (long *)(lVar20 + 0x70);
      do {
        lVar12 = lVar12 + -0x28;
        *(undefined1 *)(*plVar16 + 0x670) = 0;
        plVar16 = plVar16 + 5;
      } while (lVar12 != 0);
    }
  }
  plVar16 = (long *)FUN_00d34e14(&local_378,param_1[1],plVar24);
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar17 = (long *)param_1[1];
  if (((*puVar8 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
  if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_02582694:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar17;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
  lVar20 = (**(code **)(*plVar17 + 0x10))(plVar17,0x98,8);
  if (lVar20 == 0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  FUN_02830ec0(lVar20,plVar17);
  *(long **)(lVar20 + 8) = plVar17;
  *(long *)(lVar20 + 0x10) = lVar20;
  *(undefined8 *)(lVar20 + 0x18) = 0x98;
  *(undefined8 *)(lVar20 + 0x20) = 8;
  *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
  if (lVar20 != 0) {
    piVar2 = (int *)(lVar20 + 0x50);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar17 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar17 != (long *)0x0) {
    plVar18 = plVar17 + 10;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  param_1[0xc] = lVar20;
  plVar17 = *(long **)(lVar20 + 0x58);
  if (plVar17 != (long *)0x0) {
    lVar12 = plVar17[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_02582684:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar13;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = *piVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_378 = 0x60dd9a51c30b7a73;
  pcStack_370 = "ContextMenu";
  local_368 = 0xb;
  local_360 = (long *)0x0;
  lVar12 = FUN_025828d0(plVar17,param_1[1],&local_378);
  if (local_360 != (long *)0x0) {
    (**(code **)(*local_360 + 0x20))();
  }
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar11 = *piVar2;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar7) {
        *piVar2 = iVar11 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))(plVar17);
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar11 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  uVar13 = *(undefined8 *)puVar10;
  uVar4 = *(undefined8 *)(puVar10 + 8);
  uVar3 = *(undefined8 *)(puVar10 + 0x10);
  plVar17 = *(long **)(puVar10 + 0x18);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  local_280 = 0;
  local_260 = 0;
  local_240 = 0;
  local_220 = 0;
  local_358 = 0x658572ce83b26f60;
  pcStack_350 = "pane_common_context_menu_n_cursor_00";
  local_338 = 0x61459902c14951c1;
  pcStack_330 = "pane_common_context_menu_item_01";
  local_200 = 0;
  local_318 = 0x658573ce83b27113;
  pcStack_310 = "pane_common_context_menu_n_cursor_01";
  local_348 = 0x24;
  uStack_340 = 0;
  local_308 = 0x24;
  uStack_300 = 0;
  local_2c8 = 0x24;
  uStack_2c0 = 0;
  local_288 = 0x24;
  local_248 = 0x24;
  local_208 = 0x24;
  local_1c8 = 0x24;
  local_1b8 = 0xa76046bb27a29b01;
  local_198 = 0x69b70be3fafcc53a;
  local_178 = 0x69b70ce3fafcc6ed;
  local_170 = "pane_common_context_menu_window01";
  local_158 = 0x40550a211a46679c;
  local_150 = "pane_common_context_menu_marker";
  local_148 = 0x1f;
  local_128 = 0x1f;
  local_118 = 0x244a7f4535d68bed;
  local_110 = "anime_common_context_menu_in";
  local_108 = 0x1c;
  local_f8 = 0x92d81f9a85b43436;
  local_f0 = "anime_common_context_menu_out";
  local_e8 = 0x1d;
  local_2f8 = 0x61459602c1494ca8;
  pcStack_2f0 = "pane_common_context_menu_item_02";
  local_1e0 = 0;
  local_2d8 = 0x658574ce83b272c6;
  pcStack_2d0 = "pane_common_context_menu_n_cursor_02";
  local_1c0 = 0;
  local_2b8 = 0x61459702c1494e5b;
  pcStack_2b0 = "pane_common_context_menu_item_03";
  local_1a0 = (long *)0x0;
  local_298 = 0x658575ce83b27479;
  pcStack_290 = "pane_common_context_menu_n_cursor_03";
  local_270 = "pane_common_context_menu_item_04";
  local_258 = 0x658576ce83b2762c;
  local_180 = (long *)0x0;
  local_238 = 0x61459d02c149588d;
  local_378 = 0x61459802c149500e;
  pcStack_370 = "pane_common_context_menu_item_00";
  local_368 = 0x20;
  local_360 = (long *)0x0;
  local_268 = 0x20;
  local_228 = 0x20;
  local_210 = "pane_common_context_menu_n_cursor_05";
  local_1e8 = 0x20;
  local_1f8 = 0x61459a02c1495374;
  local_278 = 0x61459c02c14956da;
  local_1d0 = "pane_common_context_menu_n_cursor_06";
  local_250 = "pane_common_context_menu_n_cursor_04";
  local_190 = "pane_common_context_menu_window00";
  local_230 = "pane_common_context_menu_item_05";
  local_138 = 0x5ca35cae4e20004;
  local_218 = 0x658577ce83b277df;
  local_130 = "pane_common_context_menu_cursor";
  local_1f0 = "pane_common_context_menu_item_06";
  local_160 = (long *)0x0;
  local_140 = (long *)0x0;
  local_120 = (long *)0x0;
  local_100 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_d8 = 0x45d2cbddc5cfd808;
  local_d0 = "anime_common_context_menu_pattern";
  local_c0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_328 = 0x20;
  uStack_320 = 0;
  local_2e8 = 0x20;
  uStack_2e0 = 0;
  local_2a8 = 0x20;
  uStack_2a0 = 0;
  local_1d8 = 0x658578ce83b27992;
  local_1b0 = "pane_common_context_menu_position";
  local_1a8 = 0x21;
  local_188 = 0x21;
  local_168 = 0x21;
  local_c8 = 0x21;
  local_b8 = 0x33bc076dd9516ad7;
  local_b0 = "anime_common_context_menu_keep";
  local_a8 = 0x1e;
  if (plVar16 != (long *)0x0) {
    plVar18 = plVar16 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar7) {
        *(int *)plVar18 = (int)*plVar18 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar18 = *(long **)(lVar12 + 0xe8);
  *(undefined8 *)(lVar12 + 0xe8) = 0;
  if (plVar18 != (long *)0x0) {
    plVar25 = plVar18 + 10;
    do {
      iVar11 = (int)*plVar25 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar25,0x10);
      if (bVar7) {
        *(int *)plVar25 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  plVar18 = *(long **)(lVar12 + 0xc0);
  *(long **)(lVar12 + 0xe8) = plVar16;
  *(undefined8 *)(lVar12 + 0xa8) = 0x7c12258c26ae9b5;
  *(char **)(lVar12 + 0xb0) = "pane_common_context_menu_all";
  *(undefined8 *)(lVar12 + 0xb8) = 0x1c;
  *(undefined8 *)(lVar12 + 0xc0) = 0;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  *(undefined8 *)(lVar12 + 200) = uVar13;
  *(undefined8 *)(lVar12 + 0xd0) = uVar4;
  *(undefined8 *)(lVar12 + 0xd8) = uVar3;
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  plVar18 = *(long **)(lVar12 + 0xe0);
  *(long **)(lVar12 + 0xe0) = plVar17;
  if (plVar18 != (long *)0x0) {
    (**(code **)(*plVar18 + 0x20))();
  }
  FUN_02583818(lVar12 + 0xf8,&local_378);
  pcVar21 = *(code **)(lVar12 + 1000);
  local_400 = (long *)&LAB_02583e24;
  local_3f8 = FUN_02583e34;
  local_3f0 = FUN_02583e38;
  local_3e8 = &LAB_02583e44;
  aplStack_3e0[0] = param_1;
  if (pcVar21 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x3f0) = 0;
    *(undefined8 *)(lVar12 + 0x3f8) = 0;
    *(undefined8 *)(lVar12 + 0x3e0) = 0;
    *(undefined8 *)(lVar12 + 1000) = 0;
    (*pcVar21)(lVar12 + 0x400);
    if (local_3f0 == (code *)0x0) goto LAB_02581ff8;
  }
  (*local_3f0)(aplStack_3e0,lVar12 + 0x400);
  *(code **)(lVar12 + 1000) = local_3f8;
  *(undefined1 **)(lVar12 + 0x3f8) = local_3e8;
  *(code **)(lVar12 + 0x3f0) = local_3f0;
  *(undefined8 *)(lVar12 + 0x3e0) = local_400;
LAB_02581ff8:
  plVar18 = *(long **)(*plVar24 + 0x148);
  lVar20 = *(long *)(*plVar24 + 0x150);
  if ((lVar20 == 0) || (*plVar18 == 0x61459802c149500e)) {
    plVar24 = plVar18;
  }
  else {
    lVar23 = lVar20 * 0x30;
    plVar25 = plVar18;
    do {
      lVar23 = lVar23 + -0x30;
      if (lVar23 == 0) goto LAB_0258232c;
      plVar1 = plVar25 + 6;
      plVar24 = plVar25 + 6;
      plVar25 = plVar25 + 6;
    } while (*plVar1 != 0x61459802c149500e);
  }
  if (plVar24 == plVar18 + lVar20 * 6) {
LAB_0258232c:
    lVar20 = 0;
  }
  else {
    lVar20 = plVar24[4];
  }
  lVar23 = FUN_002443dc(lVar20,"color_select");
  if ((lVar23 != 0) && (lVar20 = FUN_002443dc(lVar20,"color_unselect"), lVar20 != 0)) {
    *(char *)(param_1 + 0x11) = (char)*(undefined4 *)(lVar23 + (ulong)*(uint *)(lVar23 + 4));
    *(char *)((long)param_1 + 0x8c) = (char)*(undefined4 *)(lVar20 + (ulong)*(uint *)(lVar20 + 4));
    *(char *)((long)param_1 + 0x89) =
         (char)*(undefined4 *)(lVar23 + (ulong)*(uint *)(lVar23 + 4) + 4);
    *(char *)((long)param_1 + 0x8d) =
         (char)*(undefined4 *)(lVar20 + (ulong)*(uint *)(lVar20 + 4) + 4);
    *(char *)((long)param_1 + 0x8a) =
         (char)*(undefined4 *)(lVar23 + (ulong)*(uint *)(lVar23 + 4) + 8);
    *(char *)((long)param_1 + 0x8e) =
         (char)*(undefined4 *)(lVar20 + (ulong)*(uint *)(lVar20 + 4) + 8);
  }
  *(undefined1 *)((long)param_1 + 0x8b) = 0xff;
  *(undefined1 *)((long)param_1 + 0x8f) = 0xff;
  pcVar21 = *(code **)(lVar12 + 0x718);
  aplStack_460[0] = param_1;
  if (pcVar21 != (code *)0x0) {
    *(undefined8 *)(lVar12 + 0x720) = 0;
    *(undefined8 *)(lVar12 + 0x728) = 0;
    *(undefined8 *)(lVar12 + 0x710) = 0;
    *(undefined8 *)(lVar12 + 0x718) = 0;
    (*pcVar21)(lVar12 + 0x730);
  }
  FUN_025841cc(aplStack_460,lVar12 + 0x730);
  *(code **)(lVar12 + 0x718) = FUN_025841c8;
  *(undefined1 **)(lVar12 + 0x728) = &LAB_025841d8;
  *(code **)(lVar12 + 0x720) = FUN_025841cc;
  *(undefined8 *)(lVar12 + 0x710) = &LAB_02583e50;
  if (*(char *)(param_1[0xc] + 0x62) == '\0') {
    FUN_028324b0(*(undefined8 *)(param_1[0xc] + 0x58),0);
  }
  *(undefined4 *)(param_1 + 0xd) = 0xfffffffe;
  FUN_025841c8(aplStack_460);
  pcVar21 = local_3f8;
  if (local_3f8 == (code *)0x0) {
    local_3f8 = (code *)0x0;
  }
  else {
    local_3f0 = (code *)0x0;
    local_3e8 = (undefined1 *)0x0;
    local_400 = (long *)0x0;
    local_3f8 = (code *)0x0;
    (*pcVar21)(aplStack_3e0);
  }
  if (local_a0 != (long *)0x0) {
    (**(code **)(*local_a0 + 0x20))();
  }
  if (local_c0 != (long *)0x0) {
    (**(code **)(*local_c0 + 0x20))();
  }
  if (local_e0 != (long *)0x0) {
    (**(code **)(*local_e0 + 0x20))();
  }
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_160 != (long *)0x0) {
    (**(code **)(*local_160 + 0x20))();
  }
  if (local_180 != (long *)0x0) {
    (**(code **)(*local_180 + 0x20))();
  }
  if (local_1a0 != (long *)0x0) {
    (**(code **)(*local_1a0 + 0x20))();
  }
  FUN_02583bb0(&local_378);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x20))(plVar17);
  }
  if (plVar16 != (long *)0x0) {
    plVar17 = plVar16 + 10;
    do {
      iVar11 = (int)*plVar17 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar7) {
        *(int *)plVar17 = iVar11;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  plVar14 = plVar15 + 10;
  do {
    iVar11 = (int)*plVar14 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar7) {
      *(int *)plVar14 = iVar11;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  FUN_00d44898(&local_98);
  return;
}


