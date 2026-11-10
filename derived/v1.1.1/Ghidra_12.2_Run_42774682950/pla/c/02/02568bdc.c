/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02568bdc; name: FUN_02568bdc
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02568bdc(long *param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  code *pcVar16;
  undefined4 *puVar17;
  ushort *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 *local_758;
  undefined8 uStack_750;
  undefined8 *local_748;
  undefined8 uStack_740;
  undefined8 *local_738;
  undefined8 uStack_730;
  char local_728 [8];
  undefined1 *local_720;
  undefined1 auStack_718 [88];
  undefined1 auStack_6c0 [16];
  long *local_6b0;
  long *local_6a8;
  ulong local_6a0;
  undefined1 auStack_698 [88];
  long *local_640;
  undefined8 uStack_638;
  long *local_630;
  long *local_628;
  long *local_620;
  long *local_618;
  long *local_610;
  ulong local_608;
  undefined8 local_600;
  undefined8 local_5f0;
  code *local_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined1 auStack_5d0 [96];
  undefined8 local_570;
  code *local_568;
  undefined8 local_560;
  undefined8 local_558;
  undefined1 auStack_550 [96];
  undefined8 local_4f0;
  undefined8 local_4e0;
  code *local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined1 auStack_4c0 [96];
  undefined8 local_460;
  code *local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined1 auStack_440 [96];
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined8 local_3c8;
  long *local_3c0;
  undefined1 *local_3b8;
  undefined1 *local_3b0;
  undefined8 local_3a8;
  long *local_3a0;
  undefined4 local_398;
  long *local_390;
  undefined8 local_388;
  undefined1 local_380;
  long *local_378;
  undefined1 local_370;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined1 local_348;
  long *local_340;
  long *local_338;
  undefined1 *local_330;
  long *local_328;
  long *local_320;
  undefined4 local_318;
  undefined8 local_310;
  undefined8 local_300;
  code *local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined1 auStack_2e0 [96];
  undefined1 *local_280;
  code *local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  undefined1 *local_260 [12];
  undefined8 local_200;
  undefined8 local_1f0;
  code *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined1 auStack_1d0 [96];
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150 [12];
  undefined8 local_f0;
  long local_e8;
  uint local_e0;
  undefined8 local_d8;
  long *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  long *local_b0;
  undefined4 local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  undefined4 local_84;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  lVar21 = *(long *)(param_2 + 0xe0);
  if (lVar21 != 0) {
    lVar22 = *(long *)(lVar21 + 0x58);
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0256a7e4;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = (long *)param_1[0x75];
  param_1[0x75] = lVar21;
  if (plVar13 != (long *)0x0) {
    lVar21 = plVar13[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  *(undefined1 *)((long)param_1 + 0x466) = *(undefined1 *)(param_2 + 1);
  FUN_0198a454(local_728,param_2);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (local_728[0] == '\0') {
    if (local_720 != &DAT_cbf29ce484222645) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01148a98(&local_630);
      uVar20 = FUN_010f4ccc(local_630,&local_720);
      if ((uVar20 & 1) != 0) {
        *(undefined4 *)(param_1 + 0xd) = 2;
      }
      if (local_630 == (long *)0x0) {
LAB_02569fc8:
        iVar12 = (int)param_1[0xd];
      }
      else {
        lVar21 = local_630[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 + -1 != 0) goto LAB_02569fc8;
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_630 + 0x20))();
        iVar12 = (int)param_1[0xd];
      }
      if (iVar12 != 0) goto LAB_02568c60;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xd) = 1;
LAB_02568c60:
    FUN_00b26ad8(param_1 + 0x6f,auStack_718);
    lVar21 = param_1[0x79];
    local_630 = (long *)(PTR_DAT_0437ace8 + 0x10);
    FUN_00937ea0(&local_628,auStack_6c0);
    local_618 = local_6b0;
    if (local_6b0 != (long *)0x0) {
      local_6b0 = local_6b0 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(local_6b0,0x10);
        if (bVar6) {
          *(int *)local_6b0 = (int)*local_6b0 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_610 = local_6a8;
    if (local_6a8 != (long *)0x0) {
      local_6a8 = local_6a8 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(local_6a8,0x10);
        if (bVar6) {
          *(int *)local_6a8 = (int)*local_6a8 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_608 = local_6a0;
    if (local_6a0 != 0) {
      lVar22 = *(long *)(local_6a0 + 0x58);
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0256a7e4;
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    local_338 = (long *)0x0;
    local_340 = (long *)0x0;
    local_630 = (long *)(PTR_DAT_0437a508 + 0x10);
    FUN_018c736c(&local_340,auStack_698);
    FUN_018c5de4(lVar21,&local_630,&local_340);
    plVar13 = local_340;
    if (local_340 != (long *)0x0) {
      plVar15 = local_340 + 1;
      do {
        iVar12 = (int)*plVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_340[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_80 = (long *)*plVar13;
        FUN_02a44274(lVar21 + 0xd8,&local_80);
      }
    }
    FUN_00936104(&local_630);
  }
  FUN_0198a6c8(local_728);
  local_738 = (undefined8 *)0x0;
  uStack_730 = 0;
  FUN_01901970(&local_738,param_2 + 0xb0);
  local_338 = (long *)0x0;
  local_340 = (long *)0x0;
  FUN_01901970(&local_340,&local_738);
  FUN_01901970(param_1 + 0x44,&local_340);
  plVar13 = local_340;
  if (local_340 != (long *)0x0) {
    plVar15 = local_340 + 1;
    do {
      iVar12 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_340[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_630 = (long *)*plVar13;
      FUN_02a44274(lVar21 + 0xd8,&local_630);
    }
  }
  (**(code **)(*param_1 + 0x10))(&local_630,param_1);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_0198c5c0(&local_80,&local_630);
  plVar13 = local_630;
  if (local_630 != (long *)0x0) {
    plVar15 = local_630 + 1;
    do {
      iVar12 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_630[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_640 = (long *)*plVar13;
      FUN_02a44274(lVar21 + 0xd8,&local_640);
    }
  }
  local_630 = (long *)0x0;
  local_628 = (long *)0x0;
  FUN_019c1160(&local_630,&local_80);
  pcVar16 = (code *)param_1[0x11];
  if (pcVar16 != (code *)0x0) {
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    (*pcVar16)(param_1 + 0x14);
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  FUN_0198e1a4(param_1 + 0x14,&local_630);
  plVar13 = local_630;
  param_1[0x10] = (long)&LAB_02570d88;
  param_1[0x11] = (long)&LAB_02570df8;
  param_1[0x12] = (long)&LAB_02571020;
  param_1[0x13] = (long)&LAB_02571034;
  if (local_630 != (long *)0x0) {
    plVar15 = local_630 + 1;
    do {
      iVar12 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_630[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_640 = (long *)*plVar13;
      FUN_02a44274(lVar21 + 0xd8,&local_640);
    }
  }
  local_630 = (long *)0x0;
  local_628 = (long *)0x0;
  FUN_019c1160(&local_630,&local_80);
  pcVar16 = (code *)param_1[0x21];
  if (pcVar16 != (code *)0x0) {
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    (*pcVar16)(param_1 + 0x24);
  }
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  FUN_0198e1a4(param_1 + 0x24,&local_630);
  plVar13 = local_630;
  param_1[0x20] = (long)&LAB_02571048;
  param_1[0x21] = (long)&LAB_02571594;
  param_1[0x22] = (long)&LAB_02571654;
  param_1[0x23] = (long)&LAB_02571668;
  if (local_630 != (long *)0x0) {
    plVar15 = local_630 + 1;
    do {
      iVar12 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_630[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_640 = (long *)*plVar13;
      FUN_02a44274(lVar21 + 0xd8,&local_640);
    }
  }
  local_630 = (long *)0x0;
  local_628 = (long *)0x0;
  FUN_019c1160(&local_630,&local_80);
  pcVar16 = (code *)param_1[0x31];
  if (pcVar16 != (code *)0x0) {
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    (*pcVar16)(param_1 + 0x34);
  }
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_0198e1a4(param_1 + 0x34,&local_630);
  plVar13 = local_630;
  param_1[0x30] = (long)&LAB_0257167c;
  param_1[0x31] = (long)&LAB_025716ec;
  param_1[0x32] = (long)&LAB_02571a88;
  param_1[0x33] = (long)&LAB_02571a9c;
  if (local_630 != (long *)0x0) {
    plVar15 = local_630 + 1;
    do {
      iVar12 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_630[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_640 = (long *)*plVar13;
      FUN_02a44274(lVar21 + 0xd8,&local_640);
    }
  }
  plVar13 = local_80;
  if (local_80 != (long *)0x0) {
    plVar15 = local_80 + 1;
    do {
      iVar12 = (int)*plVar15 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar6) {
        *(int *)plVar15 = iVar12;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_630 = (long *)*plVar13;
      FUN_02a44274(lVar21 + 0xd8,&local_630);
    }
  }
  puVar11 = local_738;
  if (local_738 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_738 + 1);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      local_738[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_630 = (long *)*puVar11;
      FUN_02a44274(lVar21 + 0xd8,&local_630);
    }
  }
  lVar21 = *(long *)(param_2 + 200);
  param_1[0xe] = *(long *)(param_2 + 0xc0);
  param_1[0xf] = lVar21;
  local_748 = (undefined8 *)0x0;
  uStack_740 = 0;
  FUN_0198b5d8(&local_748,param_2 + 0xd0);
  FUN_0198b5d8(param_1 + 0x77,&local_748);
  puVar11 = local_748;
  if (local_748 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_748 + 1);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      local_748[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_630 = (long *)*puVar11;
      FUN_02a44274(lVar21 + 0xd8,&local_630);
    }
  }
  local_758 = (undefined8 *)0x0;
  uStack_750 = 0;
  FUN_008c4b3c(&local_758,param_2 + 0xa0);
  if ((int)param_1[0xd] == 0) goto LAB_02569df4;
  local_84 = 0;
  piVar1 = (int *)((long)*(uint **)(param_1[0x70] + 0x250) +
                  (ulong)**(uint **)(param_1[0x70] + 0x250));
  puVar18 = (ushort *)((long)piVar1 - (long)*piVar1);
  uVar4 = *puVar18;
  if (uVar4 < 0xd) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    puVar17 = (undefined4 *)0x0;
    if ((ulong)puVar18[6] != 0) {
      puVar2 = (uint *)((long)piVar1 + (ulong)puVar18[6]);
      puVar17 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
    }
  }
  piVar3 = (int *)((long)(puVar17 + 1) + (ulong)(uint)puVar17[1]);
  if ((*(ushort *)((long)piVar3 - (long)*piVar3) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)piVar3 - (long)*piVar3))[2], uVar20 == 0)) {
    puVar19 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (uint *)((long)piVar3 + uVar20);
    puVar19 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
  }
  if (uVar4 < 9) {
    fVar25 = 0.0;
    fVar26 = 0.0;
  }
  else {
    fVar26 = 0.0;
    fVar25 = 0.0;
    if ((ulong)puVar18[4] != 0) {
      fVar25 = *(float *)((long)piVar1 + (ulong)puVar18[4]);
    }
    if ((10 < uVar4) && ((ulong)puVar18[5] != 0)) {
      fVar26 = *(float *)((long)piVar1 + (ulong)puVar18[5]);
    }
  }
  plVar13 = (long *)((long)(puVar19 + 1) + (ulong)(uint)puVar19[1] + 4);
  fVar27 = (float)NEON_ucvtf(*puVar19);
  fVar28 = (float)NEON_ucvtf(*puVar17);
  *(int *)(param_1 + 0x96) = (int)(fVar25 * fVar27);
  *(int *)((long)param_1 + 0x4b4) = (int)(fVar26 * fVar28);
  local_630 = plVar13;
  FUN_01be57f0(&local_90,&local_630,".trtrr");
  local_630 = plVar13;
  FUN_014bcde4(&local_98,&local_630,".trhf");
  FUN_01e65d58(&local_a0);
  plVar13 = local_90;
  if (local_a0 == (long *)0x0) goto LAB_0256a7e4;
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x18))(local_90);
  }
  plVar15 = (long *)param_1[0x8e];
  param_1[0x8e] = 0;
  if (plVar15 != (long *)0x0) {
    (**(code **)(*plVar15 + 0x20))();
  }
  param_1[0x8e] = (long)plVar13;
  if (*(char *)((long)param_1 + 0x466) != '\0') {
    FUN_01cd3f08(&local_630,local_a0,&DAT_03a7d628);
    FUN_00956dac(&local_80,&local_630);
    plVar13 = local_630;
    if (local_630 != (long *)0x0) {
      plVar15 = local_630 + 1;
      do {
        iVar12 = (int)*plVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_630[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_340 = (long *)*plVar13;
        FUN_02a44274(lVar21 + 0xd8,&local_340);
      }
    }
    if (local_80 != (long *)0x0) {
      lVar21 = FUN_02571ab0(local_80 + 0x1e,&local_630);
      plVar15 = local_80;
      plVar13 = (long *)PTR_DAT_04379c88;
      if (local_90 != (long *)0x0) {
        plVar13 = local_90 + 0xb;
      }
      if (*(long *)(lVar21 + 0x228) == *plVar13) {
        if (local_80 != (long *)0x0) {
          lVar21 = local_80[0xb];
          if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0256a7e4;
          if (*(long *)(lVar21 + 0x10) == 0) {
            uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
            *(undefined8 *)(lVar21 + 0x10) = uVar14;
          }
          piVar1 = (int *)(lVar21 + 0xc);
          do {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = *piVar1 + 1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
        }
        plVar13 = (long *)param_1[0x8f];
        param_1[0x8f] = (long)plVar15;
        if (plVar13 != (long *)0x0) {
          lVar21 = plVar13[0xb];
          piVar1 = (int *)(lVar21 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar6) {
              *piVar1 = iVar12 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar21 + 0x18) = 0;
            (**(code **)(*plVar13 + 0x20))();
          }
        }
        *(undefined1 *)(param_1 + 0x9e) = 1;
      }
      if (local_80 != (long *)0x0) {
        lVar21 = local_80[0xb];
        piVar1 = (int *)(lVar21 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar21 + 0x18) = 0;
          (**(code **)(*local_80 + 0x20))();
        }
      }
    }
  }
  plVar13 = (long *)PTR_DAT_04379c88;
  if (local_90 != (long *)0x0) {
    plVar13 = local_90 + 0xb;
  }
  param_1[0x94] = *plVar13;
  if ((char)param_1[0x9e] == '\0') {
    FUN_01e65d58(&local_80);
    uVar14 = FUN_01cd5580(local_80);
    local_630 = (long *)&DAT_9e3e3a97af1825ee;
    local_628 = (long *)0x3915a4f;
    local_620 = (long *)0x7;
    local_618 = (long *)0x0;
    FUN_0256b8f8(&local_340,uVar14,&local_630);
    plVar13 = (long *)param_1[0x8f];
    param_1[0x8f] = 0;
    if (plVar13 != (long *)0x0) {
      lVar21 = plVar13[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
      }
    }
    plVar13 = local_340;
    local_340 = (long *)0x0;
    param_1[0x8f] = (long)plVar13;
    if (local_618 != (long *)0x0) {
      (**(code **)(*local_618 + 0x20))();
    }
    if (local_80 != (long *)0x0) {
      lVar21 = local_80[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
    local_340 = (long *)0x0;
    local_320 = (long *)0x0;
    local_330 = &DAT_03996322;
    local_338 = (long *)&DAT_cbf29ce484222645;
    local_328 = (long *)0x0;
    local_318 = 0;
    local_300 = 0;
    local_310 = 0;
    local_2f0 = 0;
    local_2f8 = (code *)0x0;
    local_280 = (undefined1 *)0x0;
    local_2e8 = 0;
    local_270 = (undefined1 *)0x0;
    local_278 = (code *)0x0;
    local_200 = 0;
    local_268 = (undefined1 *)0x0;
    local_1d8 = 0;
    local_1e0 = 0;
    local_1e8 = (code *)0x0;
    local_1f0 = 0;
    local_158 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_168 = (code *)0x0;
    local_170 = (undefined1 *)0x0;
    local_e8 = 0;
    local_f0 = 0;
    local_e0 = 0x1000101;
    local_d8 = 0x3f9110e453d20f2c;
    local_d0 = (long *)0x0;
    local_c8 = &DAT_cbf29ce484222645;
    local_c0 = &DAT_03996322;
    local_a8 = 0;
    local_b0 = (long *)0x0;
    local_b8 = 0;
    FUN_00936410(&local_630,param_1 + 0x8e);
    plVar13 = local_340;
    local_340 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    plVar13 = local_320;
    local_340 = local_630;
    local_630 = (long *)0x0;
    local_330 = (undefined1 *)local_620;
    local_338 = local_628;
    local_328 = local_618;
    local_320 = (long *)0x0;
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x20))();
    }
    local_320 = local_610;
    local_610 = (long *)0x0;
    local_318 = (undefined4)local_608;
    if (local_630 != (long *)0x0) {
      (**(code **)(*local_630 + 0x20))();
    }
    FUN_01e65d58(&local_630);
    local_f0 = FUN_01cd5580(local_630);
    if (local_630 != (long *)0x0) {
      lVar21 = local_630[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_630 + 0x20))();
      }
    }
    pcVar16 = local_278;
    if (((*(char *)((long)param_1 + 0x465) == '\0') ||
        (lVar21 = param_1[0x75], *(char *)(lVar21 + 0xe0) == '\0')) ||
       ((*(byte *)(lVar21 + 0xe1) & 1) == 0)) {
LAB_0256a188:
      local_e8 = 0;
    }
    else if (*(long *)(lVar21 + 0x70) == 0) {
      local_e8 = 0;
    }
    else {
      if (*(char *)(*(long *)(lVar21 + 0x70) + 0x1e1) == '\0') goto LAB_0256a188;
      local_e8 = param_1[0x75] + 0x98;
    }
    if (local_278 != (code *)0x0) {
      local_270 = (undefined1 *)0x0;
      local_268 = (undefined1 *)0x0;
      local_280 = (undefined1 *)0x0;
      local_278 = (code *)0x0;
      (*pcVar16)(local_260);
    }
    pcVar16 = local_168;
    local_260[0] = &LAB_0256b980;
    local_280 = &LAB_02572074;
    local_270 = &LAB_02572088;
    local_278 = FUN_02572084;
    local_268 = &LAB_02572094;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      local_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar16)(local_150);
    }
    local_170 = &LAB_02572074;
    local_160 = &LAB_02572088;
    local_168 = FUN_02572084;
    local_150[0] = &LAB_0256bc20;
    local_158 = &LAB_02572094;
    local_e0 = local_e0 & 0xffffff;
    lVar21 = FUN_025720a0(param_1[0x8f],*(undefined8 *)(param_1[0x8f] + 8));
    local_610 = (long *)0x0;
    local_608 = local_608 & 0xffffffff00000000;
    local_630 = (long *)0x0;
    local_628 = (long *)&DAT_cbf29ce484222645;
    local_600 = 0;
    local_570 = 0;
    local_560 = 0;
    local_568 = (code *)0x0;
    local_4f0 = 0;
    local_558 = 0;
    local_4c8 = 0;
    local_4d0 = 0;
    local_4d8 = (code *)0x0;
    local_4e0 = 0;
    local_448 = 0;
    local_450 = 0;
    local_458 = (code *)0x0;
    local_460 = 0;
    local_3e0 = 0;
    local_3d8 = 0;
    local_3d0 = 0x1000101;
    local_3c8 = 0x3f9110e453d20f2c;
    local_3c0 = (long *)0x0;
    local_3b8 = &DAT_cbf29ce484222645;
    local_3b0 = &DAT_03996322;
    local_3a8 = 0;
    local_3a0 = (long *)0x0;
    local_398 = 0;
    local_378 = (long *)0x0;
    local_370 = 0;
    local_350 = 0;
    local_348 = 0;
    local_380 = 0;
    local_388 = 0;
    local_390 = (long *)0x0;
    local_620 = (long *)&DAT_03996322;
    local_618 = (long *)0x0;
    local_5f0 = 0;
    local_5e8 = (code *)0x0;
    local_5e0 = 0;
    uStack_5d8 = 0;
    FUN_025645e4(&local_630,&local_340);
    (**(code **)(*(long *)param_1[0x75] + 0x10))(&local_80);
    local_640 = (long *)0x0;
    uStack_638 = 0;
    FUN_00d0b0c0(&local_640,&local_80);
    plVar13 = local_80;
    if (local_80 != (long *)0x0) {
      plVar15 = local_80 + 1;
      do {
        iVar12 = (int)*plVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_70[0] = *plVar13;
        FUN_02a44274(lVar22 + 0xd8,local_70);
      }
    }
    FUN_02572430(&local_390,&local_640);
    plVar13 = local_640;
    if (local_640 != (long *)0x0) {
      plVar15 = local_640 + 1;
      do {
        iVar12 = (int)*plVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_640[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar22 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar22;
        local_80 = (long *)*plVar13;
        FUN_02a44274(lVar22 + 0xd8,&local_80);
      }
    }
    plVar13 = local_98;
    if (local_98 != (long *)0x0) {
      (**(code **)(*local_98 + 0x18))(local_98);
    }
    plVar15 = local_378;
    local_378 = plVar13;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 0x20))();
    }
    local_370 = *(undefined1 *)((long)param_1 + 0x466);
    uStack_358 = _UNK_03888d58;
    local_360 = _DAT_03888d50;
    local_350 = 0x1138218df6576eb1;
    local_348 = (undefined1)param_1[0x76];
    FUN_02562054(lVar21,&local_630);
    if (lVar21 != 0) {
      lVar22 = *(long *)(lVar21 + 0x58);
      if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0256a7e4;
      if (*(long *)(lVar22 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
        *(undefined8 *)(lVar22 + 0x10) = uVar14;
      }
      piVar1 = (int *)(lVar22 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar13 = (long *)param_1[0x91];
    param_1[0x91] = lVar21;
    if (plVar13 != (long *)0x0) {
      lVar21 = plVar13[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
      }
    }
    if (local_378 != (long *)0x0) {
      (**(code **)(*local_378 + 0x20))();
    }
    plVar13 = local_390;
    if (local_390 != (long *)0x0) {
      plVar15 = local_390 + 1;
      do {
        iVar12 = (int)*plVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_390[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_80 = (long *)*plVar13;
        FUN_02a44274(lVar21 + 0xd8,&local_80);
      }
    }
    if (local_3a0 != (long *)0x0) {
      (**(code **)(*local_3a0 + 0x20))();
    }
    if (local_3c0 != (long *)0x0) {
      (**(code **)(*local_3c0 + 0x20))();
    }
    pcVar16 = local_458;
    if (local_458 == (code *)0x0) {
      local_458 = (code *)0x0;
      pcVar16 = local_4d8;
    }
    else {
      local_450 = 0;
      local_448 = 0;
      local_460 = 0;
      local_458 = (code *)0x0;
      (*pcVar16)(auStack_440);
      pcVar16 = local_4d8;
    }
    local_4d8 = (code *)0x0;
    pcVar7 = local_568;
    if (pcVar16 != (code *)0x0) {
      local_4d0 = 0;
      local_4c8 = 0;
      local_4e0 = 0;
      local_4d8 = (code *)0x0;
      (*pcVar16)(auStack_4c0);
      pcVar7 = local_568;
    }
    local_568 = (code *)0x0;
    pcVar16 = local_5e8;
    if (pcVar7 != (code *)0x0) {
      local_560 = 0;
      local_558 = 0;
      local_570 = 0;
      local_568 = (code *)0x0;
      (*pcVar7)(auStack_550);
      pcVar16 = local_5e8;
    }
    local_5e8 = (code *)0x0;
    if (pcVar16 != (code *)0x0) {
      local_5e0 = 0;
      uStack_5d8 = 0;
      local_5f0 = 0;
      local_5e8 = (code *)0x0;
      (*pcVar16)(auStack_5d0);
    }
    if (local_610 != (long *)0x0) {
      (**(code **)(*local_610 + 0x20))();
    }
    if (local_630 != (long *)0x0) {
      (**(code **)(*local_630 + 0x20))();
    }
    if (local_b0 != (long *)0x0) {
      (**(code **)(*local_b0 + 0x20))();
    }
    if (local_d0 != (long *)0x0) {
      (**(code **)(*local_d0 + 0x20))();
    }
    pcVar16 = local_168;
    if (local_168 != (code *)0x0) {
      local_160 = (undefined1 *)0x0;
      local_158 = (undefined1 *)0x0;
      local_170 = (undefined1 *)0x0;
      local_168 = (code *)0x0;
      (*pcVar16)(local_150);
    }
    pcVar16 = local_1e8;
    if (local_1e8 == (code *)0x0) {
      local_1e8 = (code *)0x0;
      pcVar16 = local_278;
    }
    else {
      local_1e0 = 0;
      local_1d8 = 0;
      local_1f0 = 0;
      local_1e8 = (code *)0x0;
      (*pcVar16)(auStack_1d0);
      pcVar16 = local_278;
    }
    local_278 = (code *)0x0;
    pcVar7 = local_2f8;
    if (pcVar16 != (code *)0x0) {
      local_270 = (undefined1 *)0x0;
      local_268 = (undefined1 *)0x0;
      local_280 = (undefined1 *)0x0;
      local_278 = (code *)0x0;
      (*pcVar16)(local_260);
      pcVar7 = local_2f8;
    }
    local_2f8 = (code *)0x0;
    if (pcVar7 != (code *)0x0) {
      local_2f0 = 0;
      local_2e8 = 0;
      local_300 = 0;
      local_2f8 = (code *)0x0;
      (*pcVar7)(auStack_2e0);
    }
    if (local_320 != (long *)0x0) {
      (**(code **)(*local_320 + 0x20))();
    }
    if (local_340 != (long *)0x0) {
      (**(code **)(*local_340 + 0x20))();
    }
  }
  lVar21 = FUN_00c60148(param_1[0x8f] + 0xf0,&local_630);
  if (lVar21 != 0) {
    lVar22 = *(long *)(lVar21 + 0x58);
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0256a7e4;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = (long *)param_1[0x92];
  param_1[0x92] = lVar21;
  if (plVar13 != (long *)0x0) {
    lVar21 = plVar13[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  uVar14 = FUN_02572730(param_1[0x8f] + 0xf0,&local_630);
  FUN_02572bc4(param_1 + 0x90,uVar14);
  lVar21 = FUN_02571ab0(param_1[0x8f] + 0xf0,&local_630);
  if (lVar21 != 0) {
    lVar22 = *(long *)(lVar21 + 0x58);
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) goto LAB_0256a7e4;
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  plVar13 = (long *)param_1[0x91];
  param_1[0x91] = lVar21;
  if (plVar13 != (long *)0x0) {
    lVar21 = plVar13[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))();
    }
  }
  lVar21 = param_1[0x90];
  FUN_00956dac(&local_630,&local_758);
  FUN_02c0bb5c(lVar21,&local_630);
  if (local_630 == (long *)0x0) {
LAB_02569cf4:
    cVar5 = (char)param_1[0x9e];
  }
  else {
    lVar21 = local_630[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 != 0) goto LAB_02569cf4;
    *(undefined8 *)(lVar21 + 0x18) = 0;
    (**(code **)(*local_630 + 0x20))();
    cVar5 = (char)param_1[0x9e];
  }
  if (cVar5 != '\0') {
    lVar23 = param_1[0x90];
    lVar22 = *(long *)(lVar23 + 0x248);
    lVar24 = *(long *)(lVar23 + 0x240);
    local_628 = (long *)0x0;
    local_620 = (long *)0x0;
    local_630 = (long *)0x0;
    plVar13 = *(long **)(lVar23 + 0x290);
    local_610 = *(long **)(lVar23 + 0x298);
    local_608 = *(ulong *)(lVar23 + 0x2a0);
    local_600 = *(undefined8 *)(lVar23 + 0x2a8);
    lVar21 = *(long *)(lVar23 + 0x280) - *(long *)(lVar23 + 0x278);
    local_618 = plVar13;
    if (lVar21 != 0) {
      plVar15 = local_610;
      if ((long *)0x7ffffffffffffffe < local_610) {
        plVar15 = (long *)0x7fffffffffffffff;
      }
      if (plVar15 < (long *)(lVar21 >> 3)) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      plVar15 = (long *)(**(code **)(*plVar13 + 0x10))(plVar13,lVar21,8);
      if (plVar15 == (long *)0x0) {
        (**(code **)(*plVar13 + 0xb8))(plVar13);
      }
      local_620 = plVar15 + (lVar21 >> 3);
      lVar21 = *(long *)(lVar23 + 0x278);
      lVar23 = *(long *)(lVar23 + 0x280);
      local_630 = plVar15;
      local_628 = plVar15;
      if (lVar21 != lVar23) {
        do {
          FUN_02564e08(&local_618,local_628,lVar21);
          lVar21 = lVar21 + 8;
          local_628 = local_628 + 1;
        } while (lVar23 != lVar21);
      }
    }
    puVar10 = PTR_DAT_043794a8;
    puVar9 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_04379498;
    lVar22 = lVar22 - lVar24;
    if (lVar22 != 0) {
      lVar21 = 0;
      do {
        FUN_00956dac(&local_640,local_630[lVar21] + 0x1a8);
        if (local_640 != (long *)0x0) {
          lVar23 = FUN_00c60148(local_640 + 0x1e,&local_340);
          if ((lVar23 != 0) && (FUN_02be88ac(&local_340,lVar23,0), local_340 != (long *)0x0)) {
            if (*(int *)((long)local_340 + 0xc) != 0) {
              FUN_0256c14c(param_1 + 0x9f,&local_340);
            }
            plVar13 = local_340;
            if (local_340 != (long *)0x0) {
              plVar15 = local_340 + 1;
              do {
                iVar12 = (int)*plVar15 + -1;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
                if (bVar6) {
                  *(int *)plVar15 = iVar12;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar12 == 0) {
                local_340[2] = 0;
                if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar8);
                }
                lVar23 = *(long *)puVar9;
                *(long *)puVar10 = lVar23;
                local_80 = (long *)*plVar13;
                FUN_02a44274(lVar23 + 0xd8,&local_80);
              }
            }
          }
          if (local_640 != (long *)0x0) {
            lVar23 = local_640[0xb];
            piVar1 = (int *)(lVar23 + 0xc);
            do {
              iVar12 = *piVar1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar6) {
                *piVar1 = iVar12 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar12 + -1 == 0) {
              *(undefined8 *)(lVar23 + 0x18) = 0;
              (**(code **)(*local_640 + 0x20))();
            }
          }
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 != lVar22 >> 3);
    }
    plVar15 = local_618;
    plVar13 = local_630;
    if (local_630 != (long *)0x0) {
      local_628 = local_630;
      lVar21 = (long)local_620 - (long)local_630;
      uVar20 = (**(code **)(*local_618 + 0xc0))(local_618);
      if ((uVar20 & 1) != 0) {
        lVar22 = tpidr_el0;
        if (*(char *)(lVar22 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar22 + 0x38d488) = 1;
          *(undefined8 *)(lVar22 + 0x38d478) = 0;
          *(undefined8 *)(lVar22 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar22 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar22 + 0x38d480)) {
          FUN_02bcc824(plVar15,plVar13,lVar21,8);
          goto LAB_0256a974;
        }
      }
      (**(code **)(*plVar15 + 0x18))(plVar15,plVar13,lVar21,8);
    }
LAB_0256a974:
    (**(code **)(*(long *)param_1[0x8f] + 0xa0))((long *)param_1[0x8f],0);
    FUN_02be88ac(&local_630,param_1[0x92],0);
    FUN_00ab5ae0(&local_80,&local_630);
    plVar13 = local_630;
    if (local_630 != (long *)0x0) {
      plVar15 = local_630 + 1;
      do {
        iVar12 = (int)*plVar15 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar6) {
          *(int *)plVar15 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_630[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar21 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar21;
        local_340 = (long *)*plVar13;
        FUN_02a44274(lVar21 + 0xd8,&local_340);
      }
    }
    if (local_80 == (long *)0x0) goto LAB_0256a7e4;
    *(undefined1 *)((long)local_80 + 0x79) = 1;
    FUN_0256bcdc(param_1,(char)param_1[0x76]);
    if (local_80 != (long *)0x0) {
      lVar21 = local_80[0xb];
      piVar1 = (int *)(lVar21 + 0xc);
      do {
        iVar12 = *piVar1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar12 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar21 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  lVar21 = FUN_025706d4(param_1[0x8f] + 0xf0,&local_630);
  if (lVar21 != 0) {
    FUN_02c2ad44(lVar21,param_1 + (long)(int)param_1[0x40] * 0x10 + 0x10);
  }
  local_630 = (long *)param_1[0x8f];
  if (local_630 != (long *)0x0) {
    lVar21 = local_630[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_0256a7e4:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  FUN_00da9be0(&local_630,param_1 + 0xe);
  if (local_630 != (long *)0x0) {
    lVar21 = local_630[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_630 + 0x20))();
    }
  }
  FUN_02572c84(param_1 + 0x54,&local_84,param_1 + 0x8d);
  if (local_a0 != (long *)0x0) {
    lVar21 = local_a0[0xb];
    piVar1 = (int *)(lVar21 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  if (local_90 != (long *)0x0) {
    (**(code **)(*local_90 + 0x20))();
  }
LAB_02569df4:
  puVar11 = local_758;
  if (local_758 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_758 + 1);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      local_758[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar21 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar21;
      local_630 = (long *)*puVar11;
      FUN_02a44274(lVar21 + 0xd8,&local_630);
    }
  }
  lVar21 = param_1[0x9d];
  plVar13 = (long *)(*(code *)**(undefined8 **)(lVar21 + 0x50))((undefined8 *)(lVar21 + 0x50));
  if (((*PTR_DAT_0437b510 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437b510), iVar12 != 0)) {
    uVar14 = FUN_00d8faf4();
    *(undefined8 *)PTR_DAT_0437b518 = uVar14;
    __cxa_guard_release(PTR_DAT_0437b510);
  }
  do {
    if (plVar13 == (long *)0x0) {
LAB_02569ecc:
      (**(code **)(*(long *)param_1[0x9d] + 0x40))((long *)param_1[0x9d],0);
      return;
    }
    if (plVar13 == (long *)PTR_DAT_0437b518) {
      pcVar16 = *(code **)(lVar21 + 0x3a8);
      if (pcVar16 != (code *)0x0) {
        *(undefined8 *)(lVar21 + 0x3b0) = 0;
        *(undefined8 *)(lVar21 + 0x3b8) = 0;
        *(undefined8 *)(lVar21 + 0x3a0) = 0;
        *(undefined8 *)(lVar21 + 0x3a8) = 0;
        (*pcVar16)(lVar21 + 0x3c0);
      }
      *(undefined1 **)(lVar21 + 0x3a0) = &LAB_02570b68;
      *(long **)(lVar21 + 0x3c0) = param_1;
      *(undefined1 **)(lVar21 + 0x3a8) = &LAB_02570d6c;
      *(undefined1 **)(lVar21 + 0x3b0) = &LAB_02570d70;
      *(undefined1 **)(lVar21 + 0x3b8) = &LAB_02570d7c;
      goto LAB_02569ecc;
    }
    plVar13 = (long *)*plVar13;
  } while( true );
}


