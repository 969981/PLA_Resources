/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02be9978; name: FUN_02be9978
 */


void FUN_02be9978(undefined8 *param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  long *plVar25;
  long *plVar26;
  int local_7c;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar24 = (undefined8 *)param_1[0x3e];
  puVar23 = (undefined8 *)param_1[0x3f];
  *param_1 = &PTR_FUN_04287570;
  param_1[9] = &PTR_LAB_04287670;
  param_1[10] = &PTR_FUN_04287750;
  puVar15 = PTR_DAT_0437a598;
  puVar14 = PTR_DAT_0437a588;
  puVar12 = PTR_DAT_043794d0;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  if (puVar24 != puVar23) {
    do {
      local_78 = (undefined8 *)0x0;
      uStack_70 = 0;
      FUN_00bd0e30(&local_78,puVar24);
      puVar16 = local_78;
      if (local_78 != (undefined8 *)0x0) {
        puVar7 = local_78;
        if (*(int *)((long)local_78 + 0xc) != 0) {
          piVar2 = (int *)((long)local_78 + 0xc);
          local_7c = *(int *)((long)local_78 + 0xc);
          do {
            plVar25 = (long *)puVar16[2];
            if (((*puVar15 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar15), iVar17 != 0)) {
              if (((*puVar12 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar12), iVar17 != 0)) {
                uVar18 = FUN_0087f8f0();
                *(undefined8 *)PTR_DAT_043794d8 = uVar18;
                __cxa_guard_release(puVar12);
              }
              *(undefined **)puVar14 = PTR_DAT_043794d8;
              __cxa_guard_release(puVar15);
            }
            while( true ) {
              puVar7 = local_78;
              if (plVar25 == (long *)0x0) goto joined_r0x02be9b9c;
              if (plVar25 == (long *)puVar14) break;
              plVar25 = (long *)*plVar25;
            }
            iVar17 = *piVar2;
            if (iVar17 == local_7c) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar5) {
                *piVar2 = local_7c + 1;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 != '\0') goto LAB_02be9a34;
              lVar20 = puVar16[3];
              if (lVar20 != 0) {
                if (*(int *)(lVar20 + 0x2c) == 2) {
                  uVar22 = 3;
LAB_02be9b1c:
                  *(undefined4 *)(lVar20 + 0x2c) = uVar22;
                }
                else if (*(int *)(lVar20 + 0x2c) == 1) {
                  uVar22 = 4;
                  goto LAB_02be9b1c;
                }
                lVar21 = *(long *)(lVar20 + 8);
                piVar2 = (int *)(lVar21 + 0xc);
                do {
                  iVar17 = *piVar2;
                  cVar4 = '\x01';
                  bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                  if (bVar5) {
                    *piVar2 = iVar17 + -1;
                    cVar4 = ExclusiveMonitorsStatus();
                  }
                } while (cVar4 != '\0');
                if (iVar17 + -1 == 0) {
                  *(undefined8 *)(lVar21 + 0x18) = 0;
                  (**(code **)(*(long *)(lVar20 + -0x50) + 0x20))();
                  puVar7 = local_78;
                }
              }
              break;
            }
            ClearExclusiveLocal();
LAB_02be9a34:
            local_7c = iVar17;
          } while (iVar17 != 0);
        }
joined_r0x02be9b9c:
        local_78 = puVar7;
        if (puVar7 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar7 + 1);
          do {
            iVar17 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar17 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar17 + -1 == 0) {
            puVar7[2] = 0;
            if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar9), iVar17 != 0)) {
              FUN_00100250(PTR_LAB_04379590,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar9);
            }
            lVar20 = *(long *)puVar10;
            *(long *)puVar11 = lVar20;
            local_68 = *puVar7;
            FUN_02a44274(lVar20 + 0xd8,&local_68);
          }
        }
      }
      puVar13 = PTR_LAB_04379590;
      puVar24 = puVar24 + 2;
    } while (puVar24 != puVar23);
    puVar24 = (undefined8 *)param_1[0x3e];
    if ((undefined8 *)param_1[0x3f] != puVar24) {
      puVar23 = (undefined8 *)param_1[0x3f] + -2;
      plVar25 = (long *)*puVar23;
      while( true ) {
        if (plVar25 != (long *)0x0) {
          plVar1 = plVar25 + 1;
          do {
            iVar17 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar17 == 0) {
            plVar25[2] = 0;
            if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar9), iVar17 != 0)) {
              FUN_00100250(puVar13,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar9);
            }
            lVar20 = *(long *)puVar10;
            *(long *)puVar11 = lVar20;
            local_78 = (undefined8 *)*plVar25;
            FUN_02a44274(lVar20 + 0xd8,&local_78);
          }
        }
        if (puVar23 == puVar24) break;
        puVar23 = puVar23 + -2;
        plVar25 = (long *)*puVar23;
      }
    }
  }
  param_1[0x3f] = puVar24;
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2ec));
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x2d4));
  puVar12 = PTR_LAB_04379590;
  puVar11 = PTR_DAT_043794a8;
  puVar10 = PTR_DAT_043794a0;
  puVar9 = PTR_DAT_04379498;
  puVar24 = (undefined8 *)param_1[0x53];
  if (puVar24 == (undefined8 *)0x0) {
LAB_02be9dd8:
    lVar20 = param_1[0x4d];
    if (lVar20 == 0) goto LAB_02be9e64;
LAB_02be9de0:
    lVar21 = param_1[0x4f];
    param_1[0x4e] = lVar20;
    plVar25 = (long *)param_1[0x50];
    uVar19 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar19 & 1) == 0) {
LAB_02be9e48:
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar20,lVar21 - lVar20,0x10);
      goto LAB_02be9e64;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02be9e48;
    FUN_02bcc824(plVar25,lVar20,lVar21 - lVar20,0x10);
    lVar20 = param_1[0x47];
    if (lVar20 != 0) goto LAB_02be9e6c;
LAB_02be9ef0:
    plVar25 = (long *)param_1[0x46];
    if (plVar25 == (long *)0x0) goto LAB_02be9f14;
LAB_02be9ef8:
    lVar20 = plVar25[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar17 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar17 + -1 != 0) goto LAB_02be9f14;
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))();
    plVar25 = (long *)param_1[0x45];
    if (plVar25 != (long *)0x0) goto LAB_02be9f1c;
LAB_02be9f38:
    puVar24 = (undefined8 *)param_1[0x3e];
    pbVar8 = PTR_DAT_04379498;
    plVar25 = (long *)PTR_DAT_043794a0;
    plVar1 = (long *)PTR_DAT_043794a8;
    puVar9 = PTR_LAB_04379590;
  }
  else {
    if ((undefined8 *)param_1[0x54] == puVar24) {
      puVar23 = puVar24;
    }
    else {
      puVar23 = (undefined8 *)param_1[0x54] + -2;
      plVar25 = (long *)*puVar23;
      while( true ) {
        if (plVar25 != (long *)0x0) {
          plVar1 = plVar25 + 1;
          do {
            iVar17 = (int)*plVar1 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar5) {
              *(int *)plVar1 = iVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar17 == 0) {
            plVar25[2] = 0;
            if (((*puVar9 & 1) == 0) && (iVar17 = __cxa_guard_acquire(puVar9), iVar17 != 0)) {
              FUN_00100250(puVar12,puVar10,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar9);
            }
            lVar20 = *(long *)puVar10;
            *(long *)puVar11 = lVar20;
            local_78 = (undefined8 *)*plVar25;
            FUN_02a44274(lVar20 + 0xd8,&local_78);
          }
        }
        if (puVar23 == puVar24) break;
        puVar23 = puVar23 + -2;
        plVar25 = (long *)*puVar23;
      }
      puVar23 = (undefined8 *)param_1[0x53];
    }
    lVar20 = param_1[0x55];
    param_1[0x54] = puVar24;
    plVar25 = (long *)param_1[0x56];
    uVar19 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar19 & 1) == 0) {
LAB_02be9dbc:
      (**(code **)(*plVar25 + 0x18))(plVar25,puVar23,lVar20 - (long)puVar23,8);
      goto LAB_02be9dd8;
    }
    lVar21 = tpidr_el0;
    if (*(char *)(lVar21 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar21 + 0x38d488) = 1;
      *(undefined8 *)(lVar21 + 0x38d478) = 0;
      *(undefined8 *)(lVar21 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar21 + 0x38d480) < 1) goto LAB_02be9dbc;
    FUN_02bcc824(plVar25,puVar23,lVar20 - (long)puVar23,8);
    lVar20 = param_1[0x4d];
    if (lVar20 != 0) goto LAB_02be9de0;
LAB_02be9e64:
    lVar20 = param_1[0x47];
    if (lVar20 == 0) goto LAB_02be9ef0;
LAB_02be9e6c:
    lVar21 = param_1[0x49];
    param_1[0x48] = lVar20;
    plVar25 = (long *)param_1[0x4a];
    uVar19 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar19 & 1) == 0) {
LAB_02be9ed4:
      (**(code **)(*plVar25 + 0x18))(plVar25,lVar20,lVar21 - lVar20,8);
      goto LAB_02be9ef0;
    }
    lVar6 = tpidr_el0;
    if (*(char *)(lVar6 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar6 + 0x38d488) = 1;
      *(undefined8 *)(lVar6 + 0x38d478) = 0;
      *(undefined8 *)(lVar6 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar6 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (*(int *)(lVar6 + 0x38d480) < 1) goto LAB_02be9ed4;
    FUN_02bcc824(plVar25,lVar20,lVar21 - lVar20,8);
    plVar25 = (long *)param_1[0x46];
    if (plVar25 != (long *)0x0) goto LAB_02be9ef8;
LAB_02be9f14:
    plVar25 = (long *)param_1[0x45];
    if (plVar25 == (long *)0x0) goto LAB_02be9f38;
LAB_02be9f1c:
    lVar20 = plVar25[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar17 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar17 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar17 + -1 != 0) goto LAB_02be9f38;
    *(undefined8 *)(lVar20 + 0x18) = 0;
    (**(code **)(*plVar25 + 0x20))();
    puVar24 = (undefined8 *)param_1[0x3e];
    pbVar8 = PTR_DAT_04379498;
    plVar25 = (long *)PTR_DAT_043794a0;
    plVar1 = (long *)PTR_DAT_043794a8;
    puVar9 = PTR_LAB_04379590;
  }
  PTR_DAT_04379498 = pbVar8;
  PTR_DAT_043794a0 = (undefined *)plVar25;
  PTR_DAT_043794a8 = (undefined *)plVar1;
  PTR_LAB_04379590 = puVar9;
  if (puVar24 != (undefined8 *)0x0) {
    if ((undefined8 *)param_1[0x3f] == puVar24) {
      puVar23 = puVar24;
    }
    else {
      puVar23 = (undefined8 *)param_1[0x3f] + -2;
      plVar26 = (long *)*puVar23;
      while( true ) {
        if (plVar26 != (long *)0x0) {
          plVar3 = plVar26 + 1;
          do {
            iVar17 = (int)*plVar3 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar5) {
              *(int *)plVar3 = iVar17;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar17 == 0) {
            plVar26[2] = 0;
            if (((*pbVar8 & 1) == 0) && (iVar17 = __cxa_guard_acquire(pbVar8), iVar17 != 0)) {
              FUN_00100250(puVar9,plVar25,&PTR_LOOP_0411a000);
              __cxa_guard_release(pbVar8);
            }
            lVar20 = *plVar25;
            *plVar1 = lVar20;
            local_78 = (undefined8 *)*plVar26;
            FUN_02a44274(lVar20 + 0xd8,&local_78);
          }
        }
        if (puVar23 == puVar24) break;
        puVar23 = puVar23 + -2;
        plVar26 = (long *)*puVar23;
      }
      puVar23 = (undefined8 *)param_1[0x3e];
    }
    lVar20 = param_1[0x40];
    param_1[0x3f] = puVar24;
    plVar25 = (long *)param_1[0x41];
    uVar19 = (**(code **)(*plVar25 + 0xc0))(plVar25);
    if ((uVar19 & 1) != 0) {
      lVar21 = tpidr_el0;
      if (*(char *)(lVar21 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar21 + 0x38d488) = 1;
        *(undefined8 *)(lVar21 + 0x38d478) = 0;
        *(undefined8 *)(lVar21 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar21 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar21 + 0x38d480)) {
        FUN_02bcc824(plVar25,puVar23,lVar20 - (long)puVar23,8);
        goto LAB_02bea088;
      }
    }
    (**(code **)(*plVar25 + 0x18))(plVar25,puVar23,lVar20 - (long)puVar23,8);
  }
LAB_02bea088:
  FUN_02a4c4ec(param_1);
  return;
}


