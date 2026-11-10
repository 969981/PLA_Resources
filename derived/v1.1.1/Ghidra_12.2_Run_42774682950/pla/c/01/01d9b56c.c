/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d9b56c; name: FUN_01d9b56c
 */


void FUN_01d9b56c(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined4 uVar18;
  undefined8 *local_128;
  char *pcStack_120;
  undefined8 local_118;
  long *local_110;
  long *local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_88;
  ulong local_84;
  undefined8 local_68;
  
  local_88 = 0;
  local_84 = 0;
  FUN_01d98a18(param_1,&local_88);
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_a0 = 0x41200000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_c0 = CONCAT44((undefined4)local_84,(undefined4)local_84);
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = local_84 & 0xffffffff;
  local_128 = (undefined8 *)0x0;
  pcStack_120 = (char *)0x0;
  FUN_008802f0(&local_128,*(long *)(param_1 + 0x1c0) + 0x58);
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_01da42ac(&local_100,&local_128);
  puVar9 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_128 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_128[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  FUN_01adf064(&local_f0,&local_100);
  puVar9 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_100 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_128 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_128);
    }
  }
  local_128 = (undefined8 *)0x0;
  pcStack_120 = (char *)0x0;
  FUN_008802f0(&local_128,*(long *)(param_1 + 0x1c0) + 0x58);
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  FUN_01da42ac(&local_100,&local_128);
  puVar9 = local_128;
  if (local_128 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_128 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_128[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_68 = *puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_68);
    }
  }
  FUN_01da7798(&local_e0,&local_100);
  puVar9 = local_100;
  if (local_100 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_100 + 1);
    do {
      iVar10 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      local_100[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_128 = (undefined8 *)*puVar9;
      FUN_02a44274(lVar15 + 0xd8,&local_128);
    }
  }
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  lVar15 = *(long *)(param_1 + 0x90);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar2 = (int *)(lVar15 + 0xc);
    iVar10 = *(int *)(lVar15 + 0xc);
    do {
      plVar17 = *(long **)(lVar15 + 0x10);
      if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
        if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
          uVar14 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar14;
          __cxa_guard_release(puVar5);
        }
        *(undefined **)puVar8 = puVar6;
        __cxa_guard_release(puVar7);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_01d9b7c4;
        if (plVar17 == (long *)puVar8) break;
        plVar17 = (long *)*plVar17;
      }
      iVar11 = *piVar2;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          plVar17 = (long *)(lVar15 + -0x50);
          if (lVar15 != 0) {
            FUN_0199c1ac(&local_108,plVar17);
            (**(code **)(*local_108 + 0x10))(&local_128);
            local_100 = (undefined8 *)0x0;
            uStack_f8 = 0;
            FUN_0198c5c0(&local_100,&local_128);
            puVar9 = local_128;
            if (local_128 != (undefined8 *)0x0) {
              piVar2 = (int *)(local_128 + 1);
              do {
                iVar10 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                local_128[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_68 = *puVar9;
                FUN_02a44274(lVar16 + 0xd8,&local_68);
              }
            }
            FUN_0198e1a4(&local_d0,&local_100);
            puVar9 = local_100;
            if (local_100 != (undefined8 *)0x0) {
              piVar2 = (int *)(local_100 + 1);
              do {
                iVar10 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                local_100[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar16 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar16;
                local_128 = (undefined8 *)*puVar9;
                FUN_02a44274(lVar16 + 0xd8,&local_128);
              }
            }
            if (local_108 != (long *)0x0) {
              lVar16 = local_108[0xb];
              piVar2 = (int *)(lVar16 + 0xc);
              do {
                iVar10 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar10 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar10 + -1 == 0) {
                *(undefined8 *)(lVar16 + 0x18) = 0;
                (**(code **)(*local_108 + 0x20))();
              }
            }
            lVar15 = *(long *)(lVar15 + 8);
            piVar2 = (int *)(lVar15 + 0xc);
            do {
              iVar10 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar15 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))(plVar17);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01d9b7c4:
  plVar17 = DAT_043ef560;
  if (DAT_043ef560 == (long *)0x0) {
    uVar18 = 0x41200000;
    goto LAB_01d9b868;
  }
  plVar1 = DAT_043ef560 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  plVar12 = (long *)(**(code **)(plVar17[0xb] + 0x28))();
  if (plVar12 == (long *)0x0) {
LAB_01d9b850:
    uVar18 = 0x41200000;
  }
  else {
    local_100 = (undefined8 *)((ulong)local_100 & 0xffffffff00000000);
    local_128 = (undefined8 *)0xd678b0133e2bf856;
    pcStack_120 = "kGrassCollisionAreaDistance";
    local_118 = 0x1f;
    local_110 = (long *)0x0;
    uVar13 = (**(code **)(*plVar12 + 0x38))(plVar12,&local_128,&local_100);
    if (local_110 != (long *)0x0) {
      (**(code **)(*local_110 + 0x20))();
    }
    if ((uVar13 & 1) == 0) goto LAB_01d9b850;
    uVar18 = local_100._0_4_;
  }
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar17 + 0x10))(plVar17);
  }
LAB_01d9b868:
  plVar17 = *(long **)(*(long *)(param_1 + 0x68) + 8);
  local_a0 = uVar18;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar10 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar15 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar15 + *(ulong *)(lVar15 + 0x80) * 8) = plVar17;
  *(long *)(lVar15 + 0x80) = *(long *)(lVar15 + 0x80) + 1;
  lVar15 = (**(code **)(*plVar17 + 0x10))(plVar17,0x270,0x10);
  if (lVar15 == 0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02a4c0f4(lVar15,0);
}


