/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f2b6a4; name: FUN_01f2b6a4
 */


void FUN_01f2b6a4(long *param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long *plVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  char *pcVar15;
  undefined8 *local_80;
  char *local_78;
  long *local_70;
  char *local_68;
  undefined8 local_60;
  long *local_58;
  long *local_50;
  undefined8 *local_48;
  
  if (*param_2 == 0) {
    local_70 = (long *)0x0;
  }
  else {
    FUN_019a9c30(&local_70);
  }
  plVar7 = local_70;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  puVar14 = (undefined8 *)*param_1;
  *param_1 = 0;
  puVar6 = PTR_DAT_043794a8;
  if (puVar14 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar14 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      puVar14[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)puVar5;
      *(long *)puVar6 = lVar11;
      local_70 = (long *)*puVar14;
      FUN_02a44274(lVar11 + 0xd8,&local_70);
    }
  }
  param_1[1] = 0;
  if (plVar7 != (long *)0x0) {
    local_70 = (long *)&DAT_753f74378b49da9c;
    local_68 = "View_Top";
    local_60 = 8;
    local_58 = (long *)0x0;
    lVar11 = FUN_02575a78(plVar7[0x99],&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    if (lVar11 != 0) {
      local_70 = (long *)0x0;
      local_68 = (char *)0x0;
      FUN_008802f0(&local_70,lVar11 + 0x58);
      local_80 = (undefined8 *)0x0;
      local_78 = (char *)0x0;
      FUN_00880560(&local_80,&local_70);
      plVar8 = local_70;
      if (local_70 != (long *)0x0) {
        plVar12 = local_70 + 1;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_70[2] = 0;
          if ((*puVar4 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
            if (iVar9 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_48 = (undefined8 *)*plVar8;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      local_70 = (long *)0x0;
      local_68 = (char *)0x0;
      do {
        pcVar15 = local_78;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_78,0x10);
        if (bVar3) {
          local_78 = (char *)0x0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      uVar10 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar10;
      FUN_02a44e0c(&local_50,uVar10,pcVar15);
      puVar14 = local_80;
      local_80 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar14 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          puVar14[2] = 0;
          if ((*puVar4 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
            if (iVar9 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_48 = (undefined8 *)*puVar14;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      plVar8 = local_70;
      local_70 = (long *)0x0;
      if (local_50 == (long *)0x0) {
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            lVar11 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *(int *)plVar12 = (int)lVar11 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if ((int)lVar11 == 1) {
            plVar8[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_48 = (undefined8 *)*plVar8;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        pcVar15 = (char *)0x0;
      }
      else {
        plVar12 = local_50;
        if (plVar8 != (long *)0x0) {
          plVar12 = plVar8 + 1;
          do {
            iVar9 = (int)*plVar12 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *(int *)plVar12 = iVar9;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 0) {
            plVar8[2] = 0;
            if ((*puVar4 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar9 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_48 = (undefined8 *)*plVar8;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
          plVar12 = local_50;
        }
        local_50 = (long *)0x0;
        local_70 = plVar12;
      }
      plVar8 = local_50;
      local_68 = pcVar15;
      if (local_50 != (long *)0x0) {
        plVar12 = local_50 + 1;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_50[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_48 = (undefined8 *)*plVar8;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      puVar14 = local_80;
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_80[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_48 = (undefined8 *)*puVar14;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      do {
        pcVar15 = local_68;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(&local_68,0x10);
        if (bVar3) {
          local_68 = (char *)0x0;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      uVar10 = *(undefined8 *)puVar5;
      *(undefined8 *)puVar6 = uVar10;
      FUN_02a44e0c(&local_48,uVar10,pcVar15);
      plVar8 = local_70;
      local_70 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        plVar12 = plVar8 + 1;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          plVar8[2] = 0;
          if ((*puVar4 & 1) == 0) {
            iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
            if (iVar9 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_80 = (undefined8 *)*plVar8;
          FUN_02a44274(lVar11 + 0xd8,&local_80);
        }
      }
      puVar14 = (undefined8 *)*param_1;
      *param_1 = 0;
      if (local_48 == (undefined8 *)0x0) {
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 == 1) {
            puVar14[2] = 0;
            if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_80 = (undefined8 *)*puVar14;
            FUN_02a44274(lVar11 + 0xd8,&local_80);
          }
        }
        pcVar15 = (char *)0x0;
      }
      else {
        puVar13 = local_48;
        if (puVar14 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar14 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar9 + -1 == 0) {
            puVar14[2] = 0;
            if ((*puVar4 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar9 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar11 = *(long *)puVar5;
            *(long *)puVar6 = lVar11;
            local_80 = (undefined8 *)*puVar14;
            FUN_02a44274(lVar11 + 0xd8,&local_80);
          }
          puVar13 = local_48;
        }
        local_48 = (undefined8 *)0x0;
        *param_1 = (long)puVar13;
      }
      puVar14 = local_48;
      param_1[1] = (long)pcVar15;
      if (local_48 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_48 + 1);
        do {
          iVar9 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 + -1 == 0) {
          local_48[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_80 = (undefined8 *)*puVar14;
          FUN_02a44274(lVar11 + 0xd8,&local_80);
        }
      }
      plVar8 = local_70;
      if (local_70 != (long *)0x0) {
        plVar12 = local_70 + 1;
        do {
          iVar9 = (int)*plVar12 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
          if (bVar3) {
            *(int *)plVar12 = iVar9;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar9 == 0) {
          local_70[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)puVar5;
          *(long *)puVar6 = lVar11;
          local_80 = (undefined8 *)*plVar8;
          FUN_02a44274(lVar11 + 0xd8,&local_80);
        }
      }
    }
    lVar11 = plVar7[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return;
}


