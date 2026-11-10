/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bab8f4; name: FUN_01bab8f4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01bab8f4(long *param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  undefined8 *puVar24;
  undefined8 *puVar25;
  long *plVar26;
  undefined4 uVar27;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 *local_120;
  undefined8 *local_110;
  undefined8 *local_100;
  undefined8 *local_f0;
  long *local_d0;
  undefined8 uStack_c8;
  long *local_c0;
  undefined8 uStack_b8;
  long *local_b0 [2];
  long *local_a0;
  undefined8 uStack_98;
  long *local_90 [2];
  undefined1 local_80;
  undefined1 *local_70 [2];
  
  if (*(char *)((long)param_1 + 10) != '\0') {
    return;
  }
  if (*(int *)((long)param_1 + 0x34) < (int)param_1[6]) {
    return;
  }
  lVar17 = *param_1;
  puVar24 = *(undefined8 **)(lVar17 + 0x3c0);
  puVar25 = *(undefined8 **)(lVar17 + 0x3c8);
  if (puVar24 == puVar25) {
    bVar15 = 0;
  }
  else {
    do {
      plVar23 = (long *)*puVar24;
      cVar3 = DAT_00000101;
      if (plVar23 != (long *)0x0) {
        lVar17 = plVar23[0xb];
        if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01bacae8;
        if (*(long *)(lVar17 + 0x10) == 0) {
          uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
          *(undefined8 *)(lVar17 + 0x10) = uVar14;
        }
        piVar1 = (int *)(lVar17 + 0xc);
        do {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        lVar17 = plVar23[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        cVar3 = *(char *)((long)plVar23 + 0x101);
        do {
          iVar12 = *piVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar23 + 0x20))(plVar23);
        }
      }
      if (cVar3 == '\0') {
        bVar15 = 1;
        goto LAB_01bab9f0;
      }
      puVar24 = puVar24 + 1;
    } while (puVar24 != puVar25);
    bVar15 = 0;
LAB_01bab9f0:
    lVar17 = *param_1;
  }
  lVar17 = *(long *)(lVar17 + 0x4c8);
  if (*(char *)(lVar17 + 0x43) == '\0' && *(char *)(lVar17 + 0x42) == '\0') {
    return;
  }
  if (*(char *)(lVar17 + 0xc3) == '\0' && *(char *)(lVar17 + 0xc2) == '\0') {
    return;
  }
  if (*(char *)(lVar17 + 0x143) == '\0' && *(char *)(lVar17 + 0x142) == '\0') {
    return;
  }
  if (*(char *)(lVar17 + 0x1c3) == '\0' && *(char *)(lVar17 + 0x1c2) == '\0') {
    return;
  }
  if (*(char *)(lVar17 + 0x243) == '\0' && *(char *)(lVar17 + 0x242) == '\0') {
    return;
  }
  if (*(char *)(lVar17 + 0x2c3) == '\0' && *(char *)(lVar17 + 0x2c2) == '\0') {
    return;
  }
  if (*(char *)(lVar17 + 0x343) == '\0' && *(char *)(lVar17 + 0x342) == '\0') {
    return;
  }
  if ((bool)(bVar15 | (*(char *)(lVar17 + 0x3c3) == '\0' && *(char *)(lVar17 + 0x3c2) == '\0'))) {
    return;
  }
  *(undefined1 *)((long)param_1 + 10) = 1;
  puVar8 = PTR_DAT_04379558;
  if (*(char *)((long)param_1 + 0xb) == '\0') {
    FUN_01badf14(1);
    puVar11 = PTR_DAT_043796e8;
    puVar10 = PTR_DAT_043796e0;
    puVar9 = PTR_DAT_043794d8;
    puVar8 = PTR_DAT_043794d0;
    lVar17 = *(long *)(*param_1 + 0x488);
    if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
      piVar1 = (int *)(lVar17 + 0xc);
      iVar12 = *(int *)(lVar17 + 0xc);
      do {
        plVar23 = *(long **)(lVar17 + 0x10);
        if (((*puVar10 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar10), iVar13 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar14;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar11 = puVar9;
          __cxa_guard_release(puVar10);
        }
        while( true ) {
          if (plVar23 == (long *)0x0) goto LAB_01babb0c;
          if (plVar23 == (long *)puVar11) break;
          plVar23 = (long *)*plVar23;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar12 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar17 = *(long *)(lVar17 + 0x18);
            if (lVar17 != 0) {
              local_d0 = (long *)0x0;
              uStack_c8 = 0;
              FUN_01933b30(&local_d0,lVar17 + 0xe8);
              local_138 = (undefined8 *)0x0;
              local_130 = (undefined8 *)0x0;
              FUN_008802f0(&local_138,*(long *)(lVar17 + 0x58) + 0x58);
              local_c0 = (long *)0x0;
              uStack_b8 = 0;
              FUN_00ca524c(&local_c0,&local_138);
              puVar24 = local_138;
              if (local_138 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_138 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  local_138[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (undefined1 *)*puVar24;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              puVar8 = PTR_DAT_04379558;
              if (((*PTR_DAT_04379558 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              puVar10 = PTR_DAT_04379568;
              puVar9 = PTR_DAT_04379560;
              lVar16 = *(long *)PTR_DAT_04379560;
              *(long *)PTR_DAT_04379568 = lVar16;
              plVar23 = *(long **)(lVar16 + 0x300);
              if (plVar23 != (long *)0x0) {
                lVar16 = plVar23[0xb];
                if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01bacae8;
                if (*(long *)(lVar16 + 0x10) == 0) {
                  uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                  *(undefined8 *)(lVar16 + 0x10) = uVar14;
                }
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_0168485c(local_b0,plVar23);
              if (((*puVar8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              lVar16 = *(long *)puVar9;
              *(long *)puVar10 = lVar16;
              plVar21 = *(long **)(lVar16 + 0x228);
              if (plVar21 != (long *)0x0) {
                lVar16 = plVar21[0xb];
                if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01bacae8;
                if (*(long *)(lVar16 + 0x10) == 0) {
                  uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                  *(undefined8 *)(lVar16 + 0x10) = uVar14;
                }
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              local_138 = (undefined8 *)0x0;
              local_130 = (undefined8 *)0x0;
              FUN_008802f0(&local_138,plVar21 + 0xb);
              local_a0 = (long *)0x0;
              uStack_98 = 0;
              FUN_01685098(&local_a0,&local_138);
              puVar24 = local_138;
              if (local_138 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_138 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  local_138[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (undefined1 *)*puVar24;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              if (((*puVar8 & 1) == 0) &&
                 (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              lVar16 = *(long *)puVar9;
              *(long *)puVar10 = lVar16;
              plVar26 = *(long **)(lVar16 + 0x298);
              if (plVar26 == (long *)0x0) {
                FUN_0168493c(local_90,0);
                local_80 = 0;
              }
              else {
                lVar16 = plVar26[0xb];
                if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_01bacae8;
                if (*(long *)(lVar16 + 0x10) == 0) {
                  uVar14 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
                  *(undefined8 *)(lVar16 + 0x10) = uVar14;
                }
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                FUN_0168493c(local_90,plVar26);
                local_80 = 0;
                lVar16 = plVar26[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar26 + 0x20))(plVar26);
                }
              }
              if (plVar21 != (long *)0x0) {
                lVar16 = plVar21[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar21 + 0x20))(plVar21);
                }
              }
              if (plVar23 != (long *)0x0) {
                lVar16 = plVar23[0xb];
                piVar1 = (int *)(lVar16 + 0xc);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  *(undefined8 *)(lVar16 + 0x18) = 0;
                  (**(code **)(*plVar23 + 0x20))(plVar23);
                }
              }
              FUN_0192d1e0(&local_138,&local_d0);
              local_70[0] = &DAT_cbf29ce484222645;
              FUN_01930d68(&local_138,local_70);
              local_138 = (undefined8 *)(PTR_DAT_04380730 + 0x10);
              if (local_f0 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_f0 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  local_f0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (undefined1 *)*local_f0;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              if (local_100 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_100 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  local_100[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (undefined1 *)*local_100;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              if (local_110 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_110 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  local_110[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (undefined1 *)*local_110;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              if (local_120 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_120 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  local_120[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (undefined1 *)*local_120;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              puVar24 = local_130;
              if (local_130 != (undefined8 *)0x0) {
                piVar1 = (int *)(local_130 + 1);
                do {
                  iVar12 = *piVar1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar5) {
                    *piVar1 = iVar12 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 + -1 == 0) {
                  local_130[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_70[0] = (undefined1 *)*puVar24;
                  FUN_02a44274(lVar16 + 0xd8,local_70);
                }
              }
              if (local_90[0] != (long *)0x0) {
                plVar23 = local_90[0] + 1;
                do {
                  iVar12 = (int)*plVar23 + -1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar5) {
                    *(int *)plVar23 = iVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 == 0) {
                  local_90[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_138 = (undefined8 *)*local_90[0];
                  FUN_02a44274(lVar16 + 0xd8,&local_138);
                }
              }
              plVar23 = local_a0;
              if (local_a0 != (long *)0x0) {
                plVar21 = local_a0 + 1;
                do {
                  iVar12 = (int)*plVar21 + -1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar5) {
                    *(int *)plVar21 = iVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 == 0) {
                  local_a0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_138 = (undefined8 *)*plVar23;
                  FUN_02a44274(lVar16 + 0xd8,&local_138);
                }
              }
              if (local_b0[0] != (long *)0x0) {
                plVar23 = local_b0[0] + 1;
                do {
                  iVar12 = (int)*plVar23 + -1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar23,0x10);
                  if (bVar5) {
                    *(int *)plVar23 = iVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 == 0) {
                  local_b0[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_138 = (undefined8 *)*local_b0[0];
                  FUN_02a44274(lVar16 + 0xd8,&local_138);
                }
              }
              plVar23 = local_c0;
              if (local_c0 != (long *)0x0) {
                plVar21 = local_c0 + 1;
                do {
                  iVar12 = (int)*plVar21 + -1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar5) {
                    *(int *)plVar21 = iVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 == 0) {
                  local_c0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_138 = (undefined8 *)*plVar23;
                  FUN_02a44274(lVar16 + 0xd8,&local_138);
                }
              }
              plVar23 = local_d0;
              if (local_d0 != (long *)0x0) {
                plVar21 = local_d0 + 1;
                do {
                  iVar12 = (int)*plVar21 + -1;
                  cVar3 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
                  if (bVar5) {
                    *(int *)plVar21 = iVar12;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar12 == 0) {
                  local_d0[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar16 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar16;
                  local_138 = (undefined8 *)*plVar23;
                  FUN_02a44274(lVar16 + 0xd8,&local_138);
                }
              }
              lVar16 = *(long *)(lVar17 + 8);
              piVar1 = (int *)(lVar16 + 0xc);
              do {
                iVar12 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar12 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar12 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*(long *)(lVar17 + -0x50) + 0x20))((long *)(lVar17 + -0x50));
              }
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
LAB_01babb0c:
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  if ((undefined1 *)param_1[3] == &DAT_cbf29ce484222645) {
    FUN_01bae058(param_1);
    local_138 = (undefined8 *)0x624711d8cfec1c7f;
    FUN_0166d550(&local_138,param_1[8],*(undefined8 *)(*param_1 + 0x290),&DAT_cbf29ce484222645,
                 &DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
    FUN_01baddd0(1);
    goto LAB_01babb0c;
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar10 = PTR_DAT_04379568;
  puVar9 = PTR_DAT_04379560;
  lVar17 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar17;
  plVar23 = *(long **)(lVar17 + 0x300);
  if (plVar23 == (long *)0x0) {
    return;
  }
  lVar17 = plVar23[0xb];
  if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
LAB_01bacae8:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar17 + 0x10) == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
    *(undefined8 *)(lVar17 + 0x10) = uVar14;
  }
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar21 = param_1 + 8;
  iVar12 = FUN_01103cb8(plVar23,plVar21,*param_1 + 0x290);
  if (iVar12 == 1) {
    if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379558), iVar12 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379558);
    }
    lVar17 = *(long *)puVar9;
    *(long *)puVar10 = lVar17;
    plVar26 = *(long **)(lVar17 + 0x300);
    if (plVar26 == (long *)0x0) goto LAB_01bac2dc;
    lVar17 = plVar26[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01bacae8;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_0110293c(&local_138,plVar26,plVar21,*param_1 + 0x290);
    if (local_138 != (undefined8 *)0x0) {
      local_d0 = (long *)CONCAT44(local_d0._4_4_,2);
      FUN_01103ea4(plVar26,plVar21,*param_1 + 0x290,&local_d0);
      FUN_01102e78(plVar26,plVar21,*param_1 + 0x290,0);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)((long)local_138 + 0x74);
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      *(undefined1 *)((long)param_1 + 10) = 0;
      puVar8 = PTR_DAT_04379660;
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar10 = PTR_DAT_04379670;
      puVar9 = PTR_DAT_04379668;
      lVar17 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar17;
      uVar18 = *(ulong *)(lVar17 + 0x60);
      uVar27 = 0;
      if (uVar18 != 0) {
        uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
        uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar19 < 2) {
          uVar20 = uVar18 - 1 & 0x9459466dc0004abc;
        }
        else {
          uVar20 = 0x9459466dc0004abc;
          if (uVar18 < 0x9459466dc0004abd) {
            uVar20 = 0;
            if (uVar18 != 0) {
              uVar20 = 0x9459466dc0004abc / uVar18;
            }
            uVar20 = 0x9459466dc0004abc - uVar20 * uVar18;
          }
        }
        plVar21 = *(long **)(*(long *)(lVar17 + 0x58) + uVar20 * 8);
        if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
          if (uVar19 < 2) {
            do {
              if (plVar21[1] == 0x9459466dc0004abc) {
                if (plVar21[2] == -0x6ba6b9923fffb544) goto LAB_01babe54;
              }
              else if ((plVar21[1] & uVar18 - 1) != uVar20) break;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              uVar19 = plVar21[1];
              if (uVar19 == 0x9459466dc0004abc) {
                if (plVar21[2] == -0x6ba6b9923fffb544) goto LAB_01babe54;
              }
              else {
                if (uVar18 <= uVar19) {
                  uVar7 = 0;
                  if (uVar18 != 0) {
                    uVar7 = uVar19 / uVar18;
                  }
                  uVar19 = uVar19 - uVar7 * uVar18;
                }
                if (uVar19 != uVar20) break;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
      }
      goto LAB_01babf8c;
    }
    bVar5 = false;
    goto LAB_01bac254;
  }
  FUN_01bae058(param_1);
  FUN_01baddd0(1);
  goto LAB_01bac2dc;
LAB_01babe54:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar2 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = plVar21[0x21];
    uVar27 = 0;
    if (uVar18 != 0) {
      uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar20 = uVar18 - 1 & 0xcda8ed7a281666d5;
      }
      else if (uVar18 < 0xcda8ed7a281666d6) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = 0xcda8ed7a281666d5 / uVar18;
        }
        uVar20 = 0xcda8ed7a281666d5 - uVar20 * uVar18;
      }
      else {
        uVar20 = 0xcda8ed7a281666d5;
      }
      plVar22 = *(long **)(plVar21[0x20] + uVar20 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar22[1] == 0xcda8ed7a281666d5) {
              if (plVar22[2] == -0x32571285d7e9992b) goto LAB_01babf74;
            }
            else if ((plVar22[1] & uVar18 - 1) != uVar20) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar22[1];
            if (uVar19 == 0xcda8ed7a281666d5) {
              if (plVar22[2] == -0x32571285d7e9992b) goto LAB_01babf74;
            }
            else {
              if (uVar18 <= uVar19) {
                uVar7 = 0;
                if (uVar18 != 0) {
                  uVar7 = uVar19 / uVar18;
                }
                uVar19 = uVar19 - uVar7 * uVar18;
              }
              if (uVar19 != uVar20) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    goto LAB_01babf78;
  }
  goto LAB_01babf8c;
LAB_01babf74:
  uVar27 = (undefined4)plVar22[6];
LAB_01babf78:
  do {
    iVar12 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar21 + 0x10))();
  }
LAB_01babf8c:
  *(undefined4 *)(param_1 + 10) = uVar27;
  if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar17 = *(long *)puVar9;
  *(long *)puVar10 = lVar17;
  uVar18 = *(ulong *)(lVar17 + 0x60);
  uVar27 = 0;
  if (uVar18 != 0) {
    uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      uVar20 = uVar18 - 1 & 0x9459466dc0004abc;
    }
    else {
      uVar20 = 0x9459466dc0004abc;
      if (uVar18 < 0x9459466dc0004abd) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = 0x9459466dc0004abc / uVar18;
        }
        uVar20 = 0x9459466dc0004abc - uVar20 * uVar18;
      }
    }
    plVar21 = *(long **)(*(long *)(lVar17 + 0x58) + uVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if (plVar21[1] == 0x9459466dc0004abc) {
            if (plVar21[2] == -0x6ba6b9923fffb544) goto LAB_01bac114;
          }
          else if ((plVar21[1] & uVar18 - 1) != uVar20) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          uVar19 = plVar21[1];
          if (uVar19 == 0x9459466dc0004abc) {
            if (plVar21[2] == -0x6ba6b9923fffb544) goto LAB_01bac114;
          }
          else {
            if (uVar18 <= uVar19) {
              uVar7 = 0;
              if (uVar18 != 0) {
                uVar7 = uVar19 / uVar18;
              }
              uVar19 = uVar19 - uVar7 * uVar18;
            }
            if (uVar19 != uVar20) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_01bac24c;
LAB_01bac114:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar2 = plVar21 + 10;
    do {
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar18 = plVar21[0x21];
    uVar27 = 0;
    if (uVar18 != 0) {
      uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar20 = uVar18 - 1 & 0xdc74e78f9029b137;
      }
      else if (uVar18 < 0xdc74e78f9029b138) {
        uVar20 = 0;
        if (uVar18 != 0) {
          uVar20 = 0xdc74e78f9029b137 / uVar18;
        }
        uVar20 = 0xdc74e78f9029b137 - uVar20 * uVar18;
      }
      else {
        uVar20 = 0xdc74e78f9029b137;
      }
      plVar22 = *(long **)(plVar21[0x20] + uVar20 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar22[1] == 0xdc74e78f9029b137) {
              if (plVar22[2] == -0x238b18706fd64ec9) goto LAB_01bac234;
            }
            else if ((plVar22[1] & uVar18 - 1) != uVar20) break;
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar22[1];
            if (uVar19 == 0xdc74e78f9029b137) {
              if (plVar22[2] == -0x238b18706fd64ec9) goto LAB_01bac234;
            }
            else {
              if (uVar18 <= uVar19) {
                uVar7 = 0;
                if (uVar18 != 0) {
                  uVar7 = uVar19 / uVar18;
                }
                uVar19 = uVar19 - uVar7 * uVar18;
              }
              if (uVar19 != uVar20) break;
            }
            plVar22 = (long *)*plVar22;
          } while (plVar22 != (long *)0x0);
        }
      }
    }
    goto LAB_01bac238;
  }
  goto LAB_01bac24c;
LAB_01bac234:
  uVar27 = (undefined4)plVar22[6];
LAB_01bac238:
  do {
    iVar12 = (int)*plVar2 + -1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar12;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar21 + 0x10))();
  }
LAB_01bac24c:
  bVar5 = true;
  *(undefined4 *)((long)param_1 + 0x54) = uVar27;
LAB_01bac254:
  lVar17 = plVar26[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar26 + 0x20))(plVar26);
  }
  if (bVar5) {
    local_138 = (undefined8 *)0x624711d8cfec1c7f;
    FUN_0166d550(&local_138,param_1[8],*(undefined8 *)(*param_1 + 0x290),&DAT_cbf29ce484222645,
                 &DAT_cbf29ce484222645,&DAT_cbf29ce484222645);
  }
  else {
LAB_01bac2dc:
    *(undefined1 *)(param_1 + 1) = 0;
  }
  lVar17 = plVar23[0xb];
  piVar1 = (int *)(lVar17 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  return;
}


