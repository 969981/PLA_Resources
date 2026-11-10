/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dbe81c; name: FUN_00dbe81c
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00dbe81c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  undefined8 uVar16;
  long *plVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  long *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  long *local_d8;
  undefined8 uStack_d0;
  long *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  long *local_70 [2];
  
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_00dbd724(&local_98,&local_a8);
  puVar6 = PTR_DAT_04379498;
  puVar7 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_043794a8;
  puVar9 = PTR_LAB_04379590;
  puVar11 = PTR_LAB_04379590;
  puVar12 = PTR_DAT_043794a8;
  puVar13 = PTR_DAT_043794a0;
  puVar14 = PTR_DAT_04379498;
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x10))(&local_88);
    local_b8 = (long *)0x0;
    uStack_b0 = 0;
    FUN_00dbc824(&local_b8,&local_88);
    plVar21 = local_88;
    if (local_88 != (long *)0x0) {
      plVar17 = local_88 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_c8 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_c8);
      }
    }
    FUN_00dbdc54(&local_98,&local_b8);
    plVar21 = local_b8;
    puVar6 = PTR_DAT_04379498;
    puVar7 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_043794a8;
    puVar9 = PTR_LAB_04379590;
    puVar11 = PTR_LAB_04379590;
    puVar12 = PTR_DAT_043794a8;
    puVar13 = PTR_DAT_043794a0;
    puVar14 = PTR_DAT_04379498;
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6 = PTR_DAT_04379498;
      puVar7 = PTR_DAT_043794a0;
      puVar8 = PTR_DAT_043794a8;
      puVar9 = PTR_LAB_04379590;
      puVar11 = PTR_LAB_04379590;
      puVar12 = PTR_DAT_043794a8;
      puVar13 = PTR_DAT_043794a0;
      puVar14 = PTR_DAT_04379498;
      if (iVar15 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_88 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_88);
        puVar6 = PTR_DAT_04379498;
        puVar7 = PTR_DAT_043794a0;
        puVar8 = PTR_DAT_043794a8;
        puVar9 = PTR_LAB_04379590;
        puVar11 = PTR_LAB_04379590;
        puVar12 = PTR_DAT_043794a8;
        puVar13 = PTR_DAT_043794a0;
        puVar14 = PTR_DAT_04379498;
      }
    }
  }
  while (PTR_DAT_04379498 = puVar14, PTR_DAT_043794a0 = puVar13, PTR_DAT_043794a8 = puVar12,
        PTR_LAB_04379590 = puVar11, puVar11 = PTR_LAB_04379590, puVar12 = PTR_DAT_043794a8,
        puVar13 = PTR_DAT_043794a0, puVar14 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar6,
        PTR_DAT_043794a0 = puVar7, PTR_DAT_043794a8 = puVar8, PTR_LAB_04379590 = puVar9,
        local_98 != (long *)0x0) {
    FUN_00dbd99c(&local_88);
    plVar21 = local_98;
    if (local_88 == (long *)0x0) {
      if (local_98 != (long *)0x0) {
        plVar17 = local_98 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_98[2] = 0;
          if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)
             ) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar12 = lVar19;
          local_88 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_88);
        }
      }
      break;
    }
    lVar19 = local_88[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
    local_b8 = (long *)0x0;
    uStack_b0 = 0;
    FUN_00dbd724(&local_b8,&local_a8);
    if (local_98 == (long *)0x0) {
      if (*(long *)(_DAT_00000068 + 0x88) == 0) goto LAB_00dbee7c;
LAB_00dbed84:
      FUN_00dbd99c(local_70,local_98);
      (**(code **)(**(long **)(local_70[0][0xd] + 0x88) + 0x10))(&local_88);
      local_c8 = (long *)0x0;
      uStack_c0 = 0;
      FUN_00dbc824(&local_c8,&local_88);
      plVar21 = local_88;
      if (local_88 != (long *)0x0) {
        plVar17 = local_88 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_88[2] = 0;
          if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar14), iVar15 != 0)) {
            FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar14);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar12 = lVar19;
          local_108 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_108);
        }
      }
      FUN_00dbdc54(&local_b8,&local_c8);
      plVar21 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar17 = local_c8 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_c8[2] = 0;
          if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar14), iVar15 != 0)) {
            FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar14);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar12 = lVar19;
          local_88 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_88);
        }
      }
      if (local_70[0] == (long *)0x0) goto LAB_00dbee7c;
      lVar19 = local_70[0][0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 != 0) goto LAB_00dbee7c;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_70[0] + 0x20))();
      if (local_98 != (long *)0x0) goto LAB_00dbfb44;
LAB_00dbee84:
      iVar15 = *(int *)(_DAT_00000068 + 0x60);
    }
    else {
      FUN_00dbd99c(&local_88);
      lVar19 = *(long *)(local_88[0xd] + 0x88);
      if (local_88 != (long *)0x0) {
        lVar20 = local_88[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
      if (lVar19 != 0) goto LAB_00dbed84;
LAB_00dbee7c:
      if (local_98 == (long *)0x0) goto LAB_00dbee84;
LAB_00dbfb44:
      FUN_00dbd99c(&local_88);
      iVar15 = *(int *)(local_88[0xd] + 0x60);
      if (local_88 != (long *)0x0) {
        lVar19 = local_88[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar2 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
    if (iVar15 == 0) {
      local_d8 = (long *)0x0;
      uStack_d0 = 0;
      FUN_00dbd724(&local_d8,&local_98);
      FUN_00dc0b0c(param_1,&local_d8);
      plVar21 = local_d8;
      if (local_d8 != (long *)0x0) {
        plVar17 = local_d8 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_d8[2] = 0;
          if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar14), iVar15 != 0)) {
            FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar14);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar12 = lVar19;
          local_88 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_88);
        }
      }
      if (local_98 == (long *)0x0) {
        local_88 = (long *)0x0;
        *(undefined4 *)(_DAT_00000068 + 0x60) = 1;
      }
      else {
        FUN_00dbd99c(&local_88);
        *(undefined4 *)(local_88[0xd] + 0x60) = 1;
        if (local_88 != (long *)0x0) {
          lVar19 = local_88[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
    }
    FUN_00dbd724(&local_98,&local_b8);
    plVar21 = local_b8;
    puVar6 = PTR_DAT_04379498;
    puVar7 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_043794a8;
    puVar9 = PTR_LAB_04379590;
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6 = PTR_DAT_04379498;
      puVar7 = PTR_DAT_043794a0;
      puVar8 = PTR_DAT_043794a8;
      puVar9 = PTR_LAB_04379590;
      if (iVar15 == 0) {
        local_b8[2] = 0;
        if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar14), iVar15 != 0)) {
          FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar14);
        }
        lVar19 = *(long *)puVar13;
        *(long *)puVar12 = lVar19;
        local_88 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_88);
        puVar6 = PTR_DAT_04379498;
        puVar7 = PTR_DAT_043794a0;
        puVar8 = PTR_DAT_043794a8;
        puVar9 = PTR_LAB_04379590;
      }
    }
  }
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_00dbd724(&local_88,param_1 + 0x1a8);
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  while (local_88 != (long *)0x0) {
    FUN_00dbd99c(&local_98);
    plVar21 = local_88;
    if (local_98 == (long *)0x0) {
      if (local_88 != (long *)0x0) {
        plVar17 = local_88 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_88[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)puVar7;
          *(long *)puVar8 = lVar19;
          local_98 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_98);
        }
      }
      break;
    }
    lVar19 = local_98[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
    FUN_00dbd99c(&local_b8,local_88);
    local_98 = (long *)0x0;
    uStack_90 = 0;
    FUN_00dbd724(&local_98,local_b8[0xd] + 0xc0);
    if (local_b8 == (long *)0x0) {
LAB_00dbef8c:
      if (local_88 == (long *)0x0) goto LAB_00dbef94;
LAB_00dbfac4:
      FUN_00dbd99c(&local_b8);
      plVar21 = local_b8;
    }
    else {
      lVar19 = local_b8[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 != 0) goto LAB_00dbef8c;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_b8 + 0x20))();
      if (local_88 != (long *)0x0) goto LAB_00dbfac4;
LAB_00dbef94:
      local_b8 = (long *)0x0;
      plVar21 = local_88;
    }
    FUN_00dbb6a0(plVar21);
    if (local_b8 != (long *)0x0) {
      lVar19 = local_b8[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    local_e8 = (undefined8 *)0x0;
    uStack_e0 = 0;
    FUN_00dbd724(&local_e8,&local_88);
    FUN_00dc0f18(param_1,&local_e8);
    puVar10 = local_e8;
    if (local_e8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_e8 + 1);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        local_e8[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
          FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar19 = *(long *)puVar7;
        *(long *)puVar8 = lVar19;
        local_b8 = (long *)*puVar10;
        FUN_02a44274(lVar19 + 0xd8,&local_b8);
      }
    }
    FUN_00dbd724(&local_88,&local_98);
    plVar21 = local_98;
    if (local_98 != (long *)0x0) {
      plVar17 = local_98 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_98[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
          FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar19 = *(long *)puVar7;
        *(long *)puVar8 = lVar19;
        local_b8 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_b8);
      }
    }
  }
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_00dbd724(&local_88,param_1 + 0x188);
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  while (local_88 != (long *)0x0) {
    FUN_00dbd99c(&local_98);
    plVar21 = local_88;
    if (local_98 == (long *)0x0) {
      if (local_88 != (long *)0x0) {
        plVar17 = local_88 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_88[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)puVar7;
          *(long *)puVar8 = lVar19;
          local_98 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_98);
        }
      }
      break;
    }
    lVar19 = local_98[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
    }
    FUN_00dbd99c(&local_b8,local_88);
    local_98 = (long *)0x0;
    uStack_90 = 0;
    FUN_00dbd724(&local_98,local_b8[0xd] + 0xa0);
    if (local_b8 != (long *)0x0) {
      lVar19 = local_b8[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    FUN_00dbd99c(&local_b8,local_88);
    uVar18 = FUN_00dbe0c8(local_b8[0xd]);
    if (local_b8 != (long *)0x0) {
      lVar19 = local_b8[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
      }
    }
    if ((uVar18 & 1) != 0) {
      if (local_88 == (long *)0x0) {
        local_b8 = (long *)0x0;
      }
      else {
        FUN_00dbd99c(&local_b8);
      }
      FUN_00db9920(local_b8);
      if (local_b8 != (long *)0x0) {
        lVar19 = local_b8[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_b8 + 0x20))();
        }
      }
      local_f8 = (undefined8 *)0x0;
      uStack_f0 = 0;
      FUN_00dbd724(&local_f8,&local_88);
      FUN_00dc13f0(param_1,&local_f8);
      puVar10 = local_f8;
      if (local_f8 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_f8 + 1);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          local_f8[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar19 = *(long *)puVar7;
          *(long *)puVar8 = lVar19;
          local_b8 = (long *)*puVar10;
          FUN_02a44274(lVar19 + 0xd8,&local_b8);
        }
      }
    }
    FUN_00dbd724(&local_88,&local_98);
    plVar21 = local_98;
    if (local_98 != (long *)0x0) {
      plVar17 = local_98 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_98[2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
          FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar19 = *(long *)puVar7;
        *(long *)puVar8 = lVar19;
        local_b8 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_b8);
      }
    }
  }
  local_98 = (long *)0x0;
  uStack_90 = 0;
  FUN_00dbd724(&local_98,&local_a8);
  puVar6 = PTR_DAT_04379498;
  puVar7 = PTR_DAT_043794a0;
  puVar8 = PTR_DAT_043794a8;
  puVar9 = PTR_LAB_04379590;
  puVar11 = PTR_LAB_04379590;
  puVar12 = PTR_DAT_043794a8;
  puVar13 = PTR_DAT_043794a0;
  puVar14 = PTR_DAT_04379498;
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x10))(&local_88);
    local_b8 = (long *)0x0;
    uStack_b0 = 0;
    FUN_00dbc824(&local_b8,&local_88);
    plVar21 = local_88;
    if (local_88 != (long *)0x0) {
      plVar17 = local_88 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_c8 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_c8);
      }
    }
    FUN_00dbdc54(&local_98,&local_b8);
    plVar21 = local_b8;
    puVar6 = PTR_DAT_04379498;
    puVar7 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_043794a8;
    puVar9 = PTR_LAB_04379590;
    puVar11 = PTR_LAB_04379590;
    puVar12 = PTR_DAT_043794a8;
    puVar13 = PTR_DAT_043794a0;
    puVar14 = PTR_DAT_04379498;
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6 = PTR_DAT_04379498;
      puVar7 = PTR_DAT_043794a0;
      puVar8 = PTR_DAT_043794a8;
      puVar9 = PTR_LAB_04379590;
      puVar11 = PTR_LAB_04379590;
      puVar12 = PTR_DAT_043794a8;
      puVar13 = PTR_DAT_043794a0;
      puVar14 = PTR_DAT_04379498;
      if (iVar15 == 0) {
        local_b8[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_88 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_88);
        puVar6 = PTR_DAT_04379498;
        puVar7 = PTR_DAT_043794a0;
        puVar8 = PTR_DAT_043794a8;
        puVar9 = PTR_LAB_04379590;
        puVar11 = PTR_LAB_04379590;
        puVar12 = PTR_DAT_043794a8;
        puVar13 = PTR_DAT_043794a0;
        puVar14 = PTR_DAT_04379498;
      }
    }
  }
  while (PTR_DAT_04379498 = puVar14, PTR_DAT_043794a0 = puVar13, PTR_DAT_043794a8 = puVar12,
        PTR_LAB_04379590 = puVar11, puVar11 = PTR_LAB_04379590, puVar12 = PTR_DAT_043794a8,
        puVar13 = PTR_DAT_043794a0, puVar14 = PTR_DAT_04379498, PTR_DAT_04379498 = puVar6,
        PTR_DAT_043794a0 = puVar7, PTR_DAT_043794a8 = puVar8, PTR_LAB_04379590 = puVar9,
        local_98 != (long *)0x0) {
    FUN_00dbd99c(&local_88);
    plVar21 = local_98;
    if (local_88 == (long *)0x0) {
      if (local_98 != (long *)0x0) {
        plVar17 = local_98 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_98[2] = 0;
          if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)
             ) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar12 = lVar19;
          local_88 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_88);
        }
      }
      break;
    }
    lVar19 = local_88[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
    local_b8 = (long *)0x0;
    uStack_b0 = 0;
    FUN_00dbd724(&local_b8,&local_a8);
    if (local_98 == (long *)0x0) {
      lVar19 = *(long *)(_DAT_00000068 + 0x88);
    }
    else {
      FUN_00dbd99c(&local_88);
      lVar19 = *(long *)(local_88[0xd] + 0x88);
      if (local_88 != (long *)0x0) {
        lVar20 = local_88[0xb];
        piVar1 = (int *)(lVar20 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
    if (lVar19 != 0) {
      FUN_00dbd99c(local_70,local_98);
      (**(code **)(**(long **)(local_70[0][0xd] + 0x88) + 0x10))(&local_88);
      local_c8 = (long *)0x0;
      uStack_c0 = 0;
      FUN_00dbc824(&local_c8,&local_88);
      plVar21 = local_88;
      if (local_88 != (long *)0x0) {
        plVar17 = local_88 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_88[2] = 0;
          if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar14), iVar15 != 0)) {
            FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar14);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar12 = lVar19;
          local_108 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_108);
        }
      }
      FUN_00dbdc54(&local_b8,&local_c8);
      plVar21 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar17 = local_c8 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_c8[2] = 0;
          if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar14), iVar15 != 0)) {
            FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar14);
          }
          lVar19 = *(long *)puVar13;
          *(long *)puVar12 = lVar19;
          local_88 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_88);
        }
      }
      if (local_70[0] != (long *)0x0) {
        lVar19 = local_70[0][0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
        }
      }
    }
    FUN_00dbd99c(&local_88,local_98);
    uVar18 = FUN_00dbe0c8(local_88[0xd]);
    if (local_88 != (long *)0x0) {
      lVar19 = local_88[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
    }
    if ((uVar18 & 1) != 0) {
      if (local_98 == (long *)0x0) {
        cVar3 = *(char *)(_DAT_00000068 + 0x2a);
      }
      else {
        FUN_00dbd99c(&local_88);
        cVar3 = *(char *)(local_88[0xd] + 0x2a);
        if (local_88 != (long *)0x0) {
          lVar19 = local_88[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
      if (cVar3 != '\0') {
        if (local_98 == (long *)0x0) {
          local_88 = (long *)0x0;
          *(undefined4 *)(_DAT_00000068 + 0x60) = 4;
        }
        else {
          FUN_00dbd99c(&local_88);
          *(undefined4 *)(local_88[0xd] + 0x60) = 4;
          if (local_88 != (long *)0x0) {
            lVar19 = local_88[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
            }
          }
        }
        if (local_98 == (long *)0x0) {
          local_88 = (long *)0x0;
          *(undefined1 *)(_DAT_00000068 + 0x2a) = 0;
        }
        else {
          FUN_00dbd99c(&local_88);
          *(undefined1 *)(local_88[0xd] + 0x2a) = 0;
          if (local_88 != (long *)0x0) {
            lVar19 = local_88[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar15 = *piVar1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar15 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 + -1 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*local_88 + 0x20))();
            }
          }
        }
      }
    }
    FUN_00dbd724(&local_98,&local_b8);
    plVar21 = local_b8;
    puVar6 = PTR_DAT_04379498;
    puVar7 = PTR_DAT_043794a0;
    puVar8 = PTR_DAT_043794a8;
    puVar9 = PTR_LAB_04379590;
    if (local_b8 != (long *)0x0) {
      plVar17 = local_b8 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      puVar6 = PTR_DAT_04379498;
      puVar7 = PTR_DAT_043794a0;
      puVar8 = PTR_DAT_043794a8;
      puVar9 = PTR_LAB_04379590;
      if (iVar15 == 0) {
        local_b8[2] = 0;
        if (((*puVar14 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar14), iVar15 != 0)) {
          FUN_00100250(puVar11,puVar13,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar14);
        }
        lVar19 = *(long *)puVar13;
        *(long *)puVar12 = lVar19;
        local_88 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_88);
        puVar6 = PTR_DAT_04379498;
        puVar7 = PTR_DAT_043794a0;
        puVar8 = PTR_DAT_043794a8;
        puVar9 = PTR_LAB_04379590;
      }
    }
  }
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_00dbd724(&local_88,param_1 + 0x1c8);
LAB_00dbea9c:
  if (local_88 != (long *)0x0) {
    do {
      FUN_00dbd99c(&local_98);
      if (local_98 == (long *)0x0) goto LAB_00dbeaa8;
      lVar19 = local_98[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
        if (local_88 != (long *)0x0) goto LAB_00dc0ae8;
LAB_00dc0a40:
        local_98 = (long *)0x0;
        plVar21 = local_88;
      }
      else {
        if (local_88 == (long *)0x0) goto LAB_00dc0a40;
LAB_00dc0ae8:
        FUN_00dbd99c(&local_98);
        plVar21 = local_98;
      }
      FUN_00db9668(plVar21,0);
      if (local_98 != (long *)0x0) {
        lVar19 = local_98[0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 == 0) {
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_98 + 0x20))();
        }
      }
      FUN_00dbd99c(&local_98,local_88);
      FUN_00dbd724(&local_88,local_98[0xd] + 0xf0);
      if (local_98 == (long *)0x0) goto LAB_00dbea9c;
      lVar19 = local_98[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 != 0) goto LAB_00dbea9c;
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
      if (local_88 == (long *)0x0) break;
    } while( true );
  }
  local_98 = (long *)0x0;
LAB_00dbeaa8:
  FUN_00dbd724(&local_88,param_1 + 0x1e8);
  while (local_88 != (long *)0x0) {
    FUN_00dbd99c(&local_98);
    plVar21 = local_88;
    if (local_98 == (long *)0x0) {
      if (local_88 != (long *)0x0) {
        plVar17 = local_88 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_88[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar19;
          local_98 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_98);
        }
      }
      break;
    }
    lVar19 = local_98[0xb];
    piVar1 = (int *)(lVar19 + 0xc);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*local_98 + 0x20))();
      if (local_88 != (long *)0x0) goto LAB_00dbfa24;
LAB_00dbec7c:
      local_98 = (long *)0x0;
      plVar21 = local_88;
    }
    else {
      if (local_88 == (long *)0x0) goto LAB_00dbec7c;
LAB_00dbfa24:
      FUN_00dbd99c(&local_98);
      plVar21 = local_98;
    }
    FUN_00db9668(plVar21,0);
    if (local_98 != (long *)0x0) {
      lVar19 = local_98[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
    FUN_00dbd99c(&local_98,local_88);
    FUN_00dbd724(&local_88,local_98[0xd] + 0xf0);
    if (local_98 != (long *)0x0) {
      lVar19 = local_98[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_98 + 0x20))();
      }
    }
  }
  local_b8 = (long *)0x0;
  uStack_b0 = 0;
  FUN_00dbd724(&local_b8,&local_a8);
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 0x10))(&local_88);
    local_98 = (long *)0x0;
    uStack_90 = 0;
    FUN_00dbc824(&local_98,&local_88);
    plVar21 = local_88;
    if (local_88 != (long *)0x0) {
      plVar17 = local_88 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_c8 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_c8);
      }
    }
    FUN_00dbdc54(&local_b8,&local_98);
    plVar21 = local_98;
    if (local_98 != (long *)0x0) {
      plVar17 = local_98 + 1;
      do {
        iVar15 = (int)*plVar17 + -1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar5) {
          *(int *)plVar17 = iVar15;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 == 0) {
        local_98[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar19 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar19;
        local_88 = (long *)*plVar21;
        FUN_02a44274(lVar19 + 0xd8,&local_88);
      }
    }
  }
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  if (local_b8 != (long *)0x0) {
    do {
      FUN_00dbd99c(&local_88);
      plVar21 = local_b8;
      if (local_88 == (long *)0x0) {
        if (local_b8 != (long *)0x0) {
          plVar17 = local_b8 + 1;
          do {
            iVar15 = (int)*plVar17 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *(int *)plVar17 = iVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 != 0) break;
          local_b8[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0))
          {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar19 = *(long *)puVar7;
          *(long *)puVar8 = lVar19;
          local_88 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_88);
          if (local_a8 == (undefined8 *)0x0) {
            return;
          }
          goto LAB_00dbebd0;
        }
        break;
      }
      lVar19 = local_88[0xb];
      piVar1 = (int *)(lVar19 + 0xc);
      do {
        iVar15 = *piVar1;
        cVar3 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar15 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar15 + -1 == 0) {
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_88 + 0x20))();
      }
      local_c8 = (long *)0x0;
      uStack_c0 = 0;
      FUN_00dbd724(&local_c8,&local_a8);
      if (local_b8 == (long *)0x0) {
        if (*(long *)(_DAT_00000068 + 0x88) == 0) goto LAB_00dbf5dc;
LAB_00dbf4e4:
        FUN_00dbd99c(local_70,local_b8);
        (**(code **)(**(long **)(local_70[0][0xd] + 0x88) + 0x10))(&local_88);
        local_98 = (long *)0x0;
        uStack_90 = 0;
        FUN_00dbc824(&local_98,&local_88);
        plVar21 = local_88;
        if (local_88 != (long *)0x0) {
          plVar17 = local_88 + 1;
          do {
            iVar15 = (int)*plVar17 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *(int *)plVar17 = iVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 == 0) {
            local_88[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar19 = *(long *)puVar7;
            *(long *)puVar8 = lVar19;
            local_108 = (long *)*plVar21;
            FUN_02a44274(lVar19 + 0xd8,&local_108);
          }
        }
        FUN_00dbdc54(&local_c8,&local_98);
        plVar21 = local_98;
        if (local_98 != (long *)0x0) {
          plVar17 = local_98 + 1;
          do {
            iVar15 = (int)*plVar17 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *(int *)plVar17 = iVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 == 0) {
            local_98[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar19 = *(long *)puVar7;
            *(long *)puVar8 = lVar19;
            local_88 = (long *)*plVar21;
            FUN_02a44274(lVar19 + 0xd8,&local_88);
          }
        }
        if (local_70[0] == (long *)0x0) goto LAB_00dbf5dc;
        lVar19 = local_70[0][0xb];
        piVar1 = (int *)(lVar19 + 0xc);
        do {
          iVar15 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar15 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 + -1 != 0) goto LAB_00dbf5dc;
        *(undefined8 *)(lVar19 + 0x18) = 0;
        (**(code **)(*local_70[0] + 0x20))();
        if (local_b8 != (long *)0x0) goto LAB_00dbfc24;
LAB_00dbf5e4:
        iVar15 = *(int *)(_DAT_00000068 + 0x60);
      }
      else {
        FUN_00dbd99c(&local_88);
        lVar19 = *(long *)(local_88[0xd] + 0x88);
        if (local_88 != (long *)0x0) {
          lVar20 = local_88[0xb];
          piVar1 = (int *)(lVar20 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
        if (lVar19 != 0) goto LAB_00dbf4e4;
LAB_00dbf5dc:
        if (local_b8 == (long *)0x0) goto LAB_00dbf5e4;
LAB_00dbfc24:
        FUN_00dbd99c(&local_88);
        iVar15 = *(int *)(local_88[0xd] + 0x60);
        if (local_88 != (long *)0x0) {
          lVar19 = local_88[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar2 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar2 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar2 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
      if (iVar15 == 6) {
        FUN_00dbd99c(&local_88,local_b8);
        local_108 = (long *)0x0;
        uStack_100 = 0;
        FUN_00dbd4ac(&local_108,local_88[0xd] + 0x10);
        if (local_88 != (long *)0x0) {
          lVar19 = local_88[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
        local_118 = (undefined8 *)0x0;
        uStack_110 = 0;
        FUN_00dbd724(&local_118,&local_b8);
        FUN_00dc18c8(param_1,&local_118);
        puVar10 = local_118;
        if (local_118 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_118 + 1);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            local_118[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar19 = *(long *)puVar7;
            *(long *)puVar8 = lVar19;
            local_88 = (long *)*puVar10;
            FUN_02a44274(lVar19 + 0xd8,&local_88);
          }
        }
        local_128 = (long *)0x0;
        uStack_120 = 0;
        FUN_00dbd724(&local_128,&local_b8);
        if (local_128 == (long *)0x0) {
          local_78 = (long *)0x0;
        }
        else {
          FUN_00dbd99c(&local_78);
        }
        local_88 = (long *)0x0;
        uStack_80 = 0;
        FUN_00dbd99c(local_70,local_128);
        local_98 = (long *)0x0;
        uStack_90 = 0;
        FUN_00dbd724(&local_98,local_70[0][0xd] + 0x78);
        if (local_70[0] != (long *)0x0) {
          lVar19 = local_70[0][0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        FUN_00dbd99c(local_70,local_128);
        plVar21 = *(long **)(local_70[0][0xd] + 0x88);
        if (plVar21 != (long *)0x0) {
          lVar19 = plVar21[0xb];
          if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) goto LAB_00dc09d8;
          if (*(long *)(lVar19 + 0x10) == 0) {
            uVar16 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
            *(undefined8 *)(lVar19 + 0x10) = uVar16;
          }
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = *piVar1 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (local_70[0] == (long *)0x0) {
LAB_00dbfde8:
          if (local_98 == (long *)0x0) goto LAB_00dbfdf0;
LAB_00dc0124:
          FUN_00dbd99c(local_70);
          if (local_70[0] == (long *)0x0) goto LAB_00dbfdf4;
          lVar19 = local_70[0][0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
          FUN_00dbd99c(local_70,local_98);
          lVar19 = local_70[0][0xd];
          if (plVar21 != (long *)0x0) {
            lVar20 = plVar21[0xb];
            if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) goto LAB_00dc09d8;
            if (*(long *)(lVar20 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
              *(undefined8 *)(lVar20 + 0x10) = uVar16;
            }
            piVar1 = (int *)(lVar20 + 0xc);
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar17 = *(long **)(lVar19 + 0x88);
          *(long **)(lVar19 + 0x88) = plVar21;
          if (plVar17 == (long *)0x0) {
LAB_00dc0190:
            if (local_70[0] == (long *)0x0) goto joined_r0x00dbfe24;
LAB_00dc0198:
            lVar19 = local_70[0][0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar15 = *piVar1 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar15;
                cVar3 = ExclusiveMonitorsStatus();
              }
              plVar17 = local_70[0];
            } while (cVar3 != '\0');
            goto joined_r0x00dc01b0;
          }
          lVar19 = plVar17[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 != 0) goto LAB_00dc0190;
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))();
          if (local_70[0] != (long *)0x0) goto LAB_00dc0198;
        }
        else {
          lVar19 = local_70[0][0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 != 0) goto LAB_00dbfde8;
          *(undefined8 *)(lVar19 + 0x18) = 0;
          (**(code **)(*local_70[0] + 0x20))();
          if (local_98 != (long *)0x0) goto LAB_00dc0124;
LAB_00dbfdf0:
          local_70[0] = (long *)0x0;
LAB_00dbfdf4:
          if (plVar21 != (long *)0x0) {
            lVar19 = plVar21[0xb];
            if (*(undefined8 **)(lVar19 + 0x18) == (undefined8 *)0x0) {
LAB_00dc09d8:
                    /* WARNING: Subroutine does not return */
              nn::diag::detail::AbortImpl("","","",0);
            }
            if (*(long *)(lVar19 + 0x10) == 0) {
              uVar16 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
              *(undefined8 *)(lVar19 + 0x10) = uVar16;
            }
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          plVar17 = *(long **)(param_1 + 0x170);
          *(long **)(param_1 + 0x170) = plVar21;
          if (plVar17 != (long *)0x0) {
            lVar19 = plVar17[0xb];
            piVar1 = (int *)(lVar19 + 0xc);
            do {
              iVar15 = *piVar1 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = iVar15;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
joined_r0x00dc01b0:
            if (iVar15 == 0) {
              *(undefined8 *)(lVar19 + 0x18) = 0;
              (**(code **)(*plVar17 + 0x20))();
            }
          }
        }
joined_r0x00dbfe24:
        lVar19 = param_1 + 0x178;
        if (plVar21 != (long *)0x0) {
          lVar19 = plVar21[0xd] + 0x78;
        }
        FUN_00dbd724(lVar19,&local_98);
        FUN_00dbd99c(local_70,local_128);
        FUN_00dbd724(local_70[0][0xd] + 0x78,&local_88);
        if (local_70[0] != (long *)0x0) {
          lVar19 = local_70[0][0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        FUN_00dbd99c(local_70,local_128);
        plVar17 = *(long **)(local_70[0][0xd] + 0x88);
        *(undefined8 *)(local_70[0][0xd] + 0x88) = 0;
        if (plVar17 != (long *)0x0) {
          lVar19 = plVar17[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*plVar17 + 0x20))();
          }
        }
        if (local_70[0] != (long *)0x0) {
          lVar19 = local_70[0][0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        plVar17 = local_98;
        if (plVar21 != (long *)0x0) {
          lVar19 = plVar21[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*plVar21 + 0x20))(plVar21);
            plVar17 = local_98;
          }
        }
        local_98 = plVar17;
        if (plVar17 != (long *)0x0) {
          plVar21 = plVar17 + 1;
          do {
            iVar15 = (int)*plVar21 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar21,0x10);
            if (bVar5) {
              *(int *)plVar21 = iVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 == 0) {
            plVar17[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar19 = *(long *)puVar7;
            *(long *)puVar8 = lVar19;
            local_70[0] = (long *)*plVar17;
            FUN_02a44274(lVar19 + 0xd8,local_70);
          }
        }
        plVar21 = local_88;
        if (local_88 != (long *)0x0) {
          plVar17 = local_88 + 1;
          do {
            iVar15 = (int)*plVar17 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *(int *)plVar17 = iVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 == 0) {
            local_88[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar19 = *(long *)puVar7;
            *(long *)puVar8 = lVar19;
            local_98 = (long *)*plVar21;
            FUN_02a44274(lVar19 + 0xd8,&local_98);
          }
        }
        plVar21 = local_128;
        if (local_78 != (long *)0x0) {
          lVar19 = local_78[0xb];
          piVar1 = (int *)(lVar19 + 0xc);
          do {
            iVar15 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar15 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 + -1 == 0) {
            *(undefined8 *)(lVar19 + 0x18) = 0;
            (**(code **)(*local_78 + 0x20))();
            plVar21 = local_128;
          }
        }
        local_128 = plVar21;
        if (plVar21 != (long *)0x0) {
          plVar17 = plVar21 + 1;
          do {
            iVar15 = (int)*plVar17 + -1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar5) {
              *(int *)plVar17 = iVar15;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar15 == 0) {
            plVar21[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar19 = *(long *)puVar7;
            *(long *)puVar8 = lVar19;
            local_88 = (long *)*plVar21;
            FUN_02a44274(lVar19 + 0xd8,&local_88);
          }
        }
        if (local_108 != (long *)0x0) {
          uVar18 = FUN_02a43a8c();
          plVar21 = local_108;
          if ((uVar18 & 1) == 0) {
            FUN_00dbdf54(&local_88,local_108);
            (**(code **)(*local_88 + 0x48))();
            plVar21 = local_108;
            if (local_88 != (long *)0x0) {
              lVar19 = local_88[0xb];
              piVar1 = (int *)(lVar19 + 0xc);
              do {
                iVar15 = *piVar1;
                cVar3 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar5) {
                  *piVar1 = iVar15 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar15 + -1 == 0) {
                *(undefined8 *)(lVar19 + 0x18) = 0;
                (**(code **)(*local_88 + 0x20))();
                plVar21 = local_108;
              }
            }
          }
          local_108 = plVar21;
          if (plVar21 != (long *)0x0) {
            plVar17 = plVar21 + 1;
            do {
              iVar15 = (int)*plVar17 + -1;
              cVar3 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
              if (bVar5) {
                *(int *)plVar17 = iVar15;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar15 == 0) {
              plVar21[2] = 0;
              if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
                FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar6);
              }
              lVar19 = *(long *)puVar7;
              *(long *)puVar8 = lVar19;
              local_88 = (long *)*plVar21;
              FUN_02a44274(lVar19 + 0xd8,&local_88);
            }
          }
        }
      }
      FUN_00dbd724(&local_b8,&local_c8);
      plVar21 = local_c8;
      if (local_c8 != (long *)0x0) {
        plVar17 = local_c8 + 1;
        do {
          iVar15 = (int)*plVar17 + -1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar5) {
            *(int *)plVar17 = iVar15;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar15 == 0) {
          local_c8[2] = 0;
          if (((*puVar6 & 1) == 0) && (iVar15 = __cxa_guard_acquire(puVar6), iVar15 != 0)) {
            FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar6);
          }
          lVar19 = *(long *)puVar7;
          *(long *)puVar8 = lVar19;
          local_88 = (long *)*plVar21;
          FUN_02a44274(lVar19 + 0xd8,&local_88);
        }
      }
    } while (local_b8 != (long *)0x0);
  }
  if (local_a8 != (undefined8 *)0x0) {
LAB_00dbebd0:
    puVar10 = local_a8;
    piVar1 = (int *)(local_a8 + 1);
    do {
      iVar15 = *piVar1;
      cVar3 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar15 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar15 + -1 == 0) {
      local_a8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04379498), iVar15 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar19 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar19;
      local_88 = (long *)*puVar10;
      FUN_02a44274(lVar19 + 0xd8,&local_88);
    }
  }
  return;
}


