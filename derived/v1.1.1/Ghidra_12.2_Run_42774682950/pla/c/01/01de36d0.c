/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01de36d0; name: FUN_01de36d0
 */


void FUN_01de36d0(long param_1,long *param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long *plVar17;
  long *plVar18;
  undefined1 *local_260;
  code *local_258;
  undefined1 *local_250;
  undefined1 *local_248;
  long alStack_240 [12];
  undefined1 *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  long alStack_1c0 [12];
  undefined1 *local_160;
  code *local_158;
  undefined1 *local_150;
  undefined1 *puStack_148;
  long local_140 [13];
  undefined8 *local_d8;
  undefined8 uStack_d0;
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  long *local_88;
  undefined8 *local_80 [2];
  undefined8 local_70 [2];
  
  puVar10 = PTR_DAT_043796e8;
  puVar9 = PTR_DAT_043796e0;
  puVar8 = PTR_DAT_043794d0;
  local_90 = 0;
  local_88 = (long *)0x0;
  local_c8 = (undefined8 *)0x0;
  local_a0 = 0;
  local_98 = (undefined8 *)0x0;
  local_b0 = 0;
  local_a8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_b8 = (undefined8 *)0x0;
  lVar14 = *(long *)(param_1 + 0x90);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar2 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      plVar18 = *(long **)(lVar14 + 0x10);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
        if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar13;
          __cxa_guard_release(puVar8);
        }
        *(undefined **)puVar10 = PTR_DAT_043794d8;
        __cxa_guard_release(puVar9);
      }
      while( true ) {
        if (plVar18 == (long *)0x0) goto LAB_01de3718;
        if (plVar18 == (long *)puVar10) break;
        plVar18 = (long *)*plVar18;
      }
      iVar12 = *piVar2;
      if (iVar12 == iVar11) {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
        if (cVar5 == '\0') {
          lVar14 = *(long *)(lVar14 + 0x18);
          plVar18 = (long *)(lVar14 + -0x50);
          if (lVar14 != 0) {
            FUN_0199ce28(local_80,plVar18);
            FUN_018ff388(&local_a8,local_80);
            puVar7 = local_80[0];
            if (local_80[0] != (undefined8 *)0x0) {
              piVar2 = (int *)(local_80[0] + 1);
              do {
                iVar11 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 + -1 == 0) {
                local_80[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_d8 = (undefined8 *)*puVar7;
                FUN_02a44274(lVar16 + 0xd8,&local_d8);
              }
            }
            FUN_0199c220(local_80,plVar18);
            FUN_009ae564(&local_98,local_80);
            puVar7 = local_80[0];
            if (local_80[0] != (undefined8 *)0x0) {
              piVar2 = (int *)(local_80[0] + 1);
              do {
                iVar11 = *piVar2;
                cVar5 = '\x01';
                bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar6) {
                  *piVar2 = iVar11 + -1;
                  cVar5 = ExclusiveMonitorsStatus();
                }
              } while (cVar5 != '\0');
              if (iVar11 + -1 == 0) {
                local_80[0][2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_d8 = (undefined8 *)*puVar7;
                FUN_02a44274(lVar16 + 0xd8,&local_d8);
              }
            }
            lVar14 = *(long *)(lVar14 + 8);
            piVar2 = (int *)(lVar14 + 0xc);
            do {
              iVar11 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar11 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar11 + -1 == 0) {
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar18 + 0x20))(plVar18);
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
LAB_01de3718:
  (**(code **)(*(long *)*param_2 + 0x18))(local_80);
  local_d8 = (undefined8 *)0x0;
  uStack_d0 = 0;
  FUN_00946790(&local_d8,local_80);
  puVar7 = local_80[0];
  if (local_80[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_80[0] + 1);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_70[0] = *puVar7;
      FUN_02a44274(lVar14 + 0xd8,local_70);
    }
  }
  FUN_00b6081c(&local_c8,&local_d8);
  puVar7 = local_d8;
  if (local_d8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_d8 + 1);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_d8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_80[0] = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,local_80);
    }
  }
  FUN_01b3a354(local_80,*param_2);
  FUN_0095a500(&local_b8,local_80);
  puVar7 = local_80[0];
  if (local_80[0] != (undefined8 *)0x0) {
    piVar2 = (int *)(local_80[0] + 1);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_d8 = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,&local_d8);
    }
  }
  plVar18 = local_88;
  plVar17 = *(long **)(*param_2 + 0x5e8);
  if (plVar17 != (long *)0x0) {
    plVar1 = plVar17 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  local_88 = (long *)0x0;
  if (plVar18 != (long *)0x0) {
    plVar1 = plVar18 + 10;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar18 + 0x10))();
    }
  }
  local_88 = plVar17;
  lVar14 = FUN_01d47b70(*(long *)(param_1 + 0x68),*(undefined8 *)(*(long *)(param_1 + 0x68) + 8),
                        &local_c8);
  local_160 = &LAB_01debd1c;
  local_158 = FUN_01debe38;
  local_150 = &LAB_01debe3c;
  puStack_148 = &LAB_01debe48;
  local_1e0 = &LAB_01debe54;
  local_1d8 = FUN_01debf70;
  local_1d0 = &LAB_01debf74;
  local_1c8 = &LAB_01debf80;
  local_260 = &LAB_01debf8c;
  local_258 = FUN_01dec0a8;
  local_250 = &LAB_01dec0ac;
  local_248 = &LAB_01dec0b8;
  alStack_240[0] = param_1;
  alStack_1c0[0] = param_1;
  local_140[0] = param_1;
  FUN_019f2bb4(lVar14,&local_160,&local_1e0,&local_260);
  pcVar15 = local_258;
  if (local_258 != (code *)0x0) {
    local_250 = (undefined1 *)0x0;
    local_248 = (undefined1 *)0x0;
    local_260 = (undefined1 *)0x0;
    local_258 = (code *)0x0;
    (*pcVar15)(alStack_240);
  }
  pcVar15 = local_1d8;
  if (local_1d8 != (code *)0x0) {
    local_1d0 = (undefined1 *)0x0;
    local_1c8 = (undefined1 *)0x0;
    local_1e0 = (undefined1 *)0x0;
    local_1d8 = (code *)0x0;
    (*pcVar15)(alStack_1c0);
  }
  pcVar15 = local_158;
  if (local_158 != (code *)0x0) {
    local_150 = (undefined1 *)0x0;
    puStack_148 = (undefined1 *)0x0;
    local_160 = (undefined1 *)0x0;
    local_158 = (code *)0x0;
    (*pcVar15)(local_140);
  }
  FUN_01de9d9c(*param_3 + 0x2c8,lVar14 + 0x2e0);
  lVar16 = *param_3;
  if (*(long *)(lVar16 + 0x300) == 0) {
    pcVar15 = *(code **)(lVar16 + 0x308);
    if (pcVar15 != (code *)0x0) {
      *(undefined8 *)(lVar16 + 0x310) = 0;
      *(undefined8 *)(lVar16 + 0x318) = 0;
      *(undefined8 *)(lVar16 + 0x300) = 0;
      *(undefined8 *)(lVar16 + 0x308) = 0;
      (*pcVar15)(lVar16 + 800);
    }
    if (*(code **)(lVar14 + 0x370) != (code *)0x0) {
      (**(code **)(lVar14 + 0x370))(lVar14 + 0x380,lVar16 + 800);
      uVar13 = *(undefined8 *)(lVar14 + 0x360);
      uVar3 = *(undefined8 *)(lVar14 + 0x368);
      uVar4 = *(undefined8 *)(lVar14 + 0x378);
      *(undefined8 *)(lVar16 + 0x310) = *(undefined8 *)(lVar14 + 0x370);
      *(undefined8 *)(lVar16 + 0x318) = uVar4;
      *(undefined8 *)(lVar16 + 0x300) = uVar13;
      *(undefined8 *)(lVar16 + 0x308) = uVar3;
    }
  }
  puVar7 = local_98;
  if (local_88 != (long *)0x0) {
    plVar18 = local_88 + 10;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*local_88 + 0x10))();
      puVar7 = local_98;
    }
  }
  local_98 = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_80[0] = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,local_80);
    }
  }
  puVar7 = local_a8;
  if (local_a8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_a8 + 1);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_80[0] = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,local_80);
    }
  }
  puVar7 = local_b8;
  if (local_b8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_b8 + 1);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_b8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_80[0] = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,local_80);
    }
  }
  puVar7 = local_c8;
  if (local_c8 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_c8 + 1);
    do {
      iVar11 = *piVar2;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = iVar11 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 + -1 == 0) {
      local_c8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_80[0] = (undefined8 *)*puVar7;
      FUN_02a44274(lVar14 + 0xd8,local_80);
    }
  }
  return;
}


