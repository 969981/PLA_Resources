/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d7e81c; name: FUN_01d7e81c
 */


long FUN_01d7e81c(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  undefined8 *local_480;
  undefined8 uStack_478;
  long *local_470;
  long *local_468;
  long *local_460;
  long *local_458;
  long *local_450;
  long *local_448;
  char *pcStack_440;
  long *local_438;
  long *local_430;
  long *local_428;
  undefined1 auStack_420 [16];
  undefined1 auStack_410 [32];
  undefined1 auStack_3f0 [16];
  undefined1 auStack_3e0 [48];
  undefined1 auStack_3b0 [96];
  undefined1 auStack_350 [40];
  undefined1 auStack_328 [24];
  undefined4 local_310;
  undefined4 local_b8;
  undefined1 local_ab;
  undefined1 *local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  lVar18 = param_1 + 0x3f0;
  FUN_01a7cc68(auStack_420,lVar18);
  (**(code **)(**(long **)(param_1 + 0x170) + 0x10))(&local_448);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_00bd1f90(&local_80,&local_448);
  plVar13 = local_448;
  if (local_448 != (long *)0x0) {
    plVar20 = local_448 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_70[0] = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,local_70);
    }
  }
  FUN_00ab3f84(auStack_420,&local_80);
  plVar13 = local_80;
  if (local_80 != (long *)0x0) {
    plVar20 = local_80 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_448 = (long *)*plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_448);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x178) + 0x10))(&local_448);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_01355c20(&local_80,&local_448);
  plVar13 = local_448;
  if (local_448 != (long *)0x0) {
    plVar20 = local_448 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_70[0] = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,local_70);
    }
  }
  FUN_00b67cfc(auStack_410,&local_80);
  plVar13 = local_80;
  if (local_80 != (long *)0x0) {
    plVar20 = local_80 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_448 = (long *)*plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_448);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x160) + 0x10))(&local_448);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_018fed88(&local_80,&local_448);
  plVar13 = local_448;
  if (local_448 != (long *)0x0) {
    plVar20 = local_448 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_70[0] = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,local_70);
    }
  }
  FUN_019fa21c(auStack_3f0,&local_80);
  plVar13 = local_80;
  if (local_80 != (long *)0x0) {
    plVar20 = local_80 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_448 = (long *)*plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_448);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x180) + 0x10))(&local_448);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_01caa5c4(&local_80,&local_448);
  plVar13 = local_448;
  if (local_448 != (long *)0x0) {
    plVar20 = local_448 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_70[0] = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,local_70);
    }
  }
  FUN_00abc168(auStack_3b0,&local_80);
  plVar13 = local_80;
  if (local_80 != (long *)0x0) {
    plVar20 = local_80 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_448 = (long *)*plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_448);
    }
  }
  (**(code **)(**(long **)(param_1 + 0x880) + 0x10))(&local_448);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_01ca9fc4(&local_80,&local_448);
  plVar13 = local_448;
  if (local_448 != (long *)0x0) {
    plVar20 = local_448 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_70[0] = *plVar13;
      FUN_02a44274(lVar17 + 0xd8,local_70);
    }
  }
  FUN_01cae078(auStack_350,&local_80);
  plVar13 = local_80;
  if (local_80 != (long *)0x0) {
    plVar20 = local_80 + 1;
    do {
      iVar11 = (int)*plVar20 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *(int *)plVar20 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_448 = (long *)*plVar13;
      FUN_02a44274(lVar17 + 0xd8,&local_448);
    }
  }
  puVar9 = PTR_DAT_043796e8;
  puVar8 = PTR_DAT_043796e0;
  local_a0 = &DAT_817adb705f596ed9;
  local_98 = "player_controller";
  local_90 = 0x11;
  lVar17 = *(long *)(param_1 + 0x90);
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar11 = *(int *)(lVar17 + 0xc);
    do {
      plVar13 = *(long **)(lVar17 + 0x10);
      if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar9 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar13 == (long *)0x0) goto LAB_01d7ed40;
        if (plVar13 == (long *)puVar9) break;
        plVar13 = (long *)*plVar13;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          plVar13 = (long *)(lVar17 + -0x50);
          if (lVar17 != 0) {
            FUN_0199ce28(&local_448,plVar13);
            FUN_018ff388(auStack_3e0,&local_448);
            plVar20 = local_448;
            if (local_448 != (long *)0x0) {
              plVar16 = local_448 + 1;
              do {
                iVar11 = (int)*plVar16 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
                if (bVar4) {
                  *(int *)plVar16 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 == 0) {
                local_448[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*plVar20;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
            lVar17 = *(long *)(lVar17 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar13 + 0x20))(plVar13);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01d7ed40:
  plVar13 = (long *)FUN_01caed6c(&local_448,*(undefined8 *)(param_1 + 8));
  if (plVar13 == (long *)0x0) {
    local_428 = (long *)0x0;
  }
  else {
    lVar17 = plVar13[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d7fa64;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar17 = plVar13[0xb];
    local_428 = plVar13;
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d7fa64;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_448 = (long *)&DAT_817adb705f596ed9;
  pcStack_440 = "player_controller";
  local_438 = (long *)&DAT_00000011;
  local_430 = (long *)0x0;
  FUN_01cb17d0(&local_428,&local_448);
  if (local_430 != (long *)0x0) {
    (**(code **)(*local_430 + 0x20))();
  }
  if (local_428 != (long *)0x0) {
    lVar17 = local_428[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_428 + 0x20))();
    }
  }
  local_450 = plVar13;
  if (plVar13 != (long *)0x0) {
    lVar17 = plVar13[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d7fa64;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_448 = (long *)&DAT_817adb705f596ed9;
  pcStack_440 = "player_controller";
  local_438 = (long *)&DAT_00000011;
  local_430 = (long *)0x0;
  FUN_01cb4ba0(&local_450,&local_448);
  if (local_430 != (long *)0x0) {
    (**(code **)(*local_430 + 0x20))();
  }
  if (local_450 != (long *)0x0) {
    lVar17 = local_450[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_450 + 0x20))();
    }
  }
  local_458 = *(long **)(param_1 + 0x68);
  if (local_458 != (long *)0x0) {
    lVar17 = local_458[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d7fa64;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_448 = (long *)&DAT_817adb705f596ed9;
  pcStack_440 = "player_controller";
  local_438 = (long *)&DAT_00000011;
  local_430 = (long *)0x0;
  FUN_01cb51e0(&local_458,auStack_420,&local_448);
  if (local_430 != (long *)0x0) {
    (**(code **)(*local_430 + 0x20))();
  }
  if (local_458 != (long *)0x0) {
    lVar17 = local_458[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*local_458 + 0x20))();
    }
  }
  local_460 = *(long **)(param_1 + 0x68);
  if (local_460 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    lVar17 = local_460[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d7fa64;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar20 = local_460;
  }
  FUN_01cb9c80(&local_460,auStack_420,&local_448);
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  local_468 = *(long **)(param_1 + 0x68);
  if (local_468 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    lVar17 = local_468[0xb];
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_01d7fa64;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar20 = local_468;
  }
  FUN_01cb9a20(&local_468,auStack_420,&local_448);
  if (plVar20 != (long *)0x0) {
    lVar17 = plVar20[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))(plVar20);
    }
  }
  (**(code **)(*plVar13 + 0x10))(&local_448,plVar13);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_01caa8c4(&local_80,&local_448);
  plVar20 = local_448;
  if (local_448 != (long *)0x0) {
    plVar16 = local_448 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_70[0] = *plVar20;
      FUN_02a44274(lVar17 + 0xd8,local_70);
    }
  }
  FUN_01caf6a8(auStack_328,&local_80);
  plVar20 = local_80;
  if (local_80 != (long *)0x0) {
    plVar16 = local_80 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar17 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar17;
      local_448 = (long *)*plVar20;
      FUN_02a44274(lVar17 + 0xd8,&local_448);
    }
  }
  *(undefined4 *)((long)plVar13 + 0xac) = 0x120ee000;
  if ((*(long *)(param_1 + 0x160) == 0) ||
     (FUN_02be8e60(&local_448,*(long *)(param_1 + 0x160),0), plVar20 = local_448,
     puVar10 = PTR_DAT_0437a590, puVar9 = PTR_DAT_0437a588, puVar8 = PTR_DAT_0437a580,
     local_448 == (long *)0x0)) {
LAB_01d7f14c:
    lVar17 = *(long *)(param_1 + 0x90);
    pbVar5 = PTR_DAT_043794d0;
    pbVar6 = PTR_DAT_043796e0;
    puVar7 = (undefined8 *)PTR_DAT_043796e8;
  }
  else {
    if (*(int *)((long)local_448 + 0xc) != 0) {
      piVar1 = (int *)((long)local_448 + 0xc);
      iVar11 = *(int *)((long)local_448 + 0xc);
      do {
        plVar16 = (long *)plVar20[2];
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          if (((*PTR_DAT_0437a598 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar12 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
              uVar14 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar14;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar9 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_0437a598);
          }
          *(undefined **)puVar10 = puVar9;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01d7fdb0;
          if (plVar16 == (long *)puVar10) break;
          plVar16 = (long *)*plVar16;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar17 = plVar20[3];
            plVar20 = (long *)0x0;
            plVar16 = local_448;
            if (lVar17 != 0) {
              plVar20 = (long *)(lVar17 + -0x50);
            }
            goto joined_r0x01d7fca8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01d7fdb0:
    plVar20 = (long *)0x0;
    plVar16 = local_448;
joined_r0x01d7fca8:
    local_448 = plVar16;
    if (plVar16 != (long *)0x0) {
      plVar19 = plVar16 + 1;
      do {
        iVar11 = (int)*plVar19 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(int *)plVar19 = iVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 == 0) {
        plVar16[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar17 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar17;
        local_80 = (long *)*plVar16;
        FUN_02a44274(lVar17 + 0xd8,&local_80);
      }
    }
    if (plVar20 == (long *)0x0) goto LAB_01d7f14c;
    *(undefined4 *)((long)plVar20 + 0x324) = local_310;
    FUN_02be4978(plVar20);
    lVar17 = plVar20[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 != 0) goto LAB_01d7f14c;
    *(undefined8 *)(lVar17 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
    lVar17 = *(long *)(param_1 + 0x90);
    pbVar5 = PTR_DAT_043794d0;
    pbVar6 = PTR_DAT_043796e0;
    puVar7 = (undefined8 *)PTR_DAT_043796e8;
  }
  PTR_DAT_043794d0 = pbVar5;
  PTR_DAT_043796e0 = pbVar6;
  PTR_DAT_043796e8 = (undefined *)puVar7;
  if ((lVar17 != 0) && (*(int *)(lVar17 + 0xc) != 0)) {
    piVar1 = (int *)(lVar17 + 0xc);
    iVar11 = *(int *)(lVar17 + 0xc);
    do {
      plVar20 = *(long **)(lVar17 + 0x10);
      if (((*pbVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar6), iVar12 != 0)) {
        if (((*pbVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(pbVar5), iVar12 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar14;
          __cxa_guard_release(pbVar5);
        }
        *puVar7 = PTR_DAT_043794d8;
        __cxa_guard_release(pbVar6);
      }
      while( true ) {
        if (plVar20 == (long *)0x0) goto LAB_01d7f154;
        if (plVar20 == puVar7) break;
        plVar20 = (long *)*plVar20;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar17 = *(long *)(lVar17 + 0x18);
          plVar20 = (long *)(lVar17 + -0x50);
          if (lVar17 != 0) {
            FUN_0199ce28(&local_448,plVar20);
            FUN_018ff388(auStack_3e0,&local_448);
            plVar16 = local_448;
            if (local_448 != (long *)0x0) {
              plVar19 = local_448 + 1;
              do {
                iVar11 = (int)*plVar19 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                if (bVar4) {
                  *(int *)plVar19 = iVar11;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar11 == 0) {
                local_448[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar15 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar15;
                local_80 = (long *)*plVar16;
                FUN_02a44274(lVar15 + 0xd8,&local_80);
              }
            }
            FUN_019a0f18(&local_448,plVar20);
            if (local_448 == (long *)0x0) {
              local_470 = (long *)0x0;
            }
            else {
              FUN_009597b8(&local_470);
              plVar16 = local_448;
              if (local_448 != (long *)0x0) {
                plVar19 = local_448 + 1;
                do {
                  iVar11 = (int)*plVar19 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar4) {
                    *(int *)plVar19 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_448[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_80 = (long *)*plVar16;
                  FUN_02a44274(lVar15 + 0xd8,&local_80);
                }
              }
            }
            if (local_470 != (long *)0x0) {
              plVar19 = local_470 + 0xd;
              (**(code **)(*plVar19 + 0x20))(&local_80,plVar19);
              local_448 = (long *)0x0;
              pcStack_440 = (char *)0x0;
              FUN_01800100(&local_448,&local_80);
              plVar16 = local_80;
              if (local_80 != (long *)0x0) {
                plVar2 = local_80 + 1;
                do {
                  iVar11 = (int)*plVar2 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                  if (bVar4) {
                    *(int *)plVar2 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_80[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_70[0] = *plVar16;
                  FUN_02a44274(lVar15 + 0xd8,local_70);
                }
              }
              local_438 = plVar19;
              FUN_019d1ef8(param_1 + 0x7c0,&local_448);
              plVar16 = local_448;
              *(long **)(param_1 + 2000) = local_438;
              if (local_448 != (long *)0x0) {
                plVar19 = local_448 + 1;
                do {
                  iVar11 = (int)*plVar19 + -1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
                  if (bVar4) {
                    *(int *)plVar19 = iVar11;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 == 0) {
                  local_448[2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar15 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar15;
                  local_80 = (long *)*plVar16;
                  FUN_02a44274(lVar15 + 0xd8,&local_80);
                }
              }
              if (local_470 != (long *)0x0) {
                lVar15 = local_470[0xb];
                piVar1 = (int *)(lVar15 + 0xc);
                do {
                  iVar11 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar11 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar11 + -1 == 0) {
                  *(undefined8 *)(lVar15 + 0x18) = 0;
                  (**(code **)(*local_470 + 0x20))();
                }
              }
            }
            lVar17 = *(long *)(lVar17 + 8);
            piVar1 = (int *)(lVar17 + 0xc);
            do {
              iVar11 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar17 + 0x18) = 0;
              (**(code **)(*plVar20 + 0x20))(plVar20);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01d7f154:
  local_b8 = 0x3f39999a;
  local_ab = 1;
  FUN_01d80280(lVar18,auStack_420);
  lVar17 = *(long *)(param_1 + 0x68);
  plVar20 = *(long **)(lVar17 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), puVar8 = PTR_DAT_04379528, iVar11 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar20;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  plVar16 = (long *)(**(code **)(*plVar20 + 0x10))(plVar20,0xca0,0x10);
  if (plVar16 == (long *)0x0) {
    (**(code **)(*plVar20 + 0xb8))(plVar20);
  }
  FUN_01b05288(plVar16,lVar18);
  plVar16[1] = (long)plVar20;
  plVar16[2] = (long)plVar16;
  plVar16[3] = 0xca0;
  plVar16[4] = 0x10;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + -1;
  if (plVar16 != (long *)0x0) {
    lVar18 = plVar16[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_01d7fa64;
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar20 = (long *)0x0;
  if (plVar16 != (long *)0x0) {
    plVar20 = plVar16 + 9;
  }
  (**(code **)(*plVar20 + 0xb8))(plVar20,lVar17);
  local_448 = (long *)0x0;
  pcStack_440 = (char *)0x0;
  FUN_009ad580(&local_448,lVar17 + 0x318);
  (**(code **)(*plVar20 + 0xc0))(plVar20,&local_448);
  plVar19 = local_448;
  if (local_448 != (long *)0x0) {
    plVar2 = local_448 + 1;
    do {
      iVar11 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_80 = (long *)*plVar19;
      FUN_02a44274(lVar18 + 0xd8,&local_80);
    }
  }
  (**(code **)(*plVar20 + 200))(plVar20,*(undefined1 *)(lVar17 + 0x33b));
  (**(code **)(*plVar20 + 0x90))(plVar20);
  local_80 = plVar16;
  FUN_02a4dad4(lVar17 + 0xf0,&local_80);
  if (local_80 != (long *)0x0) {
    lVar18 = local_80[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar18 = plVar16[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
LAB_01d7fa64:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar20 = *(long **)(param_1 + 0x188);
  *(long **)(param_1 + 0x188) = plVar16;
  if (plVar20 != (long *)0x0) {
    lVar18 = plVar20[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))();
    }
  }
  uVar14 = *(undefined8 *)(param_1 + 0x7e0);
  (**(code **)(**(long **)(param_1 + 0x188) + 0x10))(&local_448);
  local_80 = (long *)0x0;
  uStack_78 = 0;
  FUN_009cca14(&local_80,&local_448);
  plVar20 = local_448;
  if (local_448 != (long *)0x0) {
    plVar16 = local_448 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_448[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_70[0] = *plVar20;
      FUN_02a44274(lVar18 + 0xd8,local_70);
    }
  }
  local_480 = (undefined8 *)0x0;
  uStack_478 = 0;
  FUN_01d8aa2c(&local_480,&local_80);
  FUN_01aee828(uVar14,&local_480);
  puVar7 = local_480;
  if (local_480 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_480 + 1);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      local_480[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_448 = (long *)*puVar7;
      FUN_02a44274(lVar18 + 0xd8,&local_448);
    }
  }
  plVar20 = local_80;
  if (local_80 != (long *)0x0) {
    plVar16 = local_80 + 1;
    do {
      iVar11 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar18 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar18;
      local_448 = (long *)*plVar20;
      FUN_02a44274(lVar18 + 0xd8,&local_448);
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar18 = plVar13[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  FUN_01a7f4b4(auStack_420);
  return param_1 + 0x120;
}


