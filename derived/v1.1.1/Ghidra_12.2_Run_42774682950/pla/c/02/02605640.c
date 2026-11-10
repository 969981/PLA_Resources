/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02605640; name: FUN_02605640
 */


void FUN_02605640(undefined8 *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  long local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  
  local_70 = (undefined8 *)0x0;
  plVar8 = (long *)FUN_00957dc4(&local_58,*(undefined8 *)(param_2 + 8),&local_70);
  plVar8[0x3c] = plVar8[0x3c] | 8;
  if (plVar8 == (long *)0x0) {
LAB_026056f8:
    plVar10 = *(long **)(param_2 + 0x78);
    *(long **)(param_2 + 0x78) = plVar8;
    if (plVar10 != (long *)0x0) {
      lVar15 = plVar10[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    (**(code **)(**(long **)(param_2 + 0x78) + 0x10))(&local_70);
    local_58 = (undefined8 *)0x0;
    uStack_50 = 0;
    FUN_017eec30(&local_58,&local_70);
    puVar13 = local_70;
    puVar6 = PTR_DAT_043794a8;
    puVar5 = PTR_DAT_043794a0;
    puVar4 = PTR_DAT_04379498;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_70[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar15 = *(long *)puVar5;
        *(long *)puVar6 = lVar15;
        local_80 = (undefined8 *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_017eef30(&local_70,&local_58);
    pcVar12 = (code *)plVar8[0x75];
    local_60 = param_2;
    if (pcVar12 != (code *)0x0) {
      plVar8[0x76] = 0;
      plVar8[0x77] = 0;
      plVar8[0x74] = 0;
      plVar8[0x75] = 0;
      (*pcVar12)(plVar8 + 0x78);
    }
    plVar8[0x79] = 0;
    plVar8[0x78] = 0;
    FUN_017ef498(plVar8 + 0x78,&local_70);
    puVar13 = local_70;
    plVar8[0x74] = (long)&LAB_0260875c;
    plVar8[0x76] = (long)&LAB_0260a054;
    plVar8[0x7a] = local_60;
    plVar8[0x75] = (long)&LAB_02609f94;
    plVar8[0x77] = (long)&LAB_0260a08c;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_70[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar15 = *(long *)puVar5;
        *(long *)puVar6 = lVar15;
        local_80 = (undefined8 *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_80);
      }
    }
    plVar10 = *(long **)(param_2 + 0x78);
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x40))(plVar10,0);
      FUN_02604e3c(param_2,1);
    }
    if (((*PTR_DAT_043796b8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
    lVar15 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar15;
    uVar9 = *(undefined8 *)(lVar15 + 0x80);
    *(int *)(param_2 + 0x1a4) = (int)uVar9;
    *(int *)(param_2 + 0x1a8) = (int)((ulong)uVar9 >> 0x20);
    *(undefined4 *)(param_2 + 0x1b0) = 0;
    *(undefined4 *)(param_2 + 0x1ac) = *(undefined4 *)(param_2 + 0x1a0);
    (**(code **)(**(long **)(param_2 + 0x78) + 0x18))(&local_70);
    local_80 = (undefined8 *)0x0;
    local_78 = 0;
    FUN_017eec30(&local_80,&local_70);
    puVar13 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_70[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar15 = *(long *)puVar5;
        *(long *)puVar6 = lVar15;
        local_48 = (undefined8 *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_48);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    do {
      uVar9 = local_78;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(&local_78,0x10);
      if (bVar3) {
        local_78 = 0;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    uVar11 = *(undefined8 *)puVar5;
    *(undefined8 *)puVar6 = uVar11;
    FUN_02a44e0c(&local_48,uVar11,uVar9);
    puVar13 = local_80;
    local_80 = (undefined8 *)0x0;
    if (puVar13 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar13 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        puVar13[2] = 0;
        if ((*puVar4 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar7 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar15 = *(long *)puVar5;
        *(long *)puVar6 = lVar15;
        local_70 = (undefined8 *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_70);
      }
    }
    puVar13 = (undefined8 *)*param_1;
    *param_1 = 0;
    if (local_48 == (undefined8 *)0x0) {
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 1) {
          puVar13[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)puVar5;
          *(long *)puVar6 = lVar15;
          local_70 = (undefined8 *)*puVar13;
          FUN_02a44274(lVar15 + 0xd8,&local_70);
        }
      }
      uVar9 = 0;
    }
    else {
      puVar14 = local_48;
      if (puVar13 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar13 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          puVar13[2] = 0;
          if ((*puVar4 & 1) == 0) {
            iVar7 = __cxa_guard_acquire(PTR_DAT_04379498);
            if (iVar7 != 0) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
          }
          lVar15 = *(long *)puVar5;
          *(long *)puVar6 = lVar15;
          local_70 = (undefined8 *)*puVar13;
          FUN_02a44274(lVar15 + 0xd8,&local_70);
        }
        puVar14 = local_48;
      }
      local_48 = (undefined8 *)0x0;
      *param_1 = puVar14;
    }
    puVar13 = local_48;
    param_1[1] = uVar9;
    if (local_48 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_48[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar5;
        *(long *)puVar6 = lVar15;
        local_70 = (undefined8 *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_70);
      }
    }
    puVar13 = local_80;
    if (local_80 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_80 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_80[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar5;
        *(long *)puVar6 = lVar15;
        local_70 = (undefined8 *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_70);
      }
    }
    puVar13 = local_58;
    if (local_58 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_58 + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_58[2] = 0;
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)puVar5;
        *(long *)puVar6 = lVar15;
        local_70 = (undefined8 *)*puVar13;
        FUN_02a44274(lVar15 + 0xd8,&local_70);
      }
    }
    lVar15 = plVar8[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar8 + 0x20))(plVar8);
    }
    return;
  }
  lVar15 = plVar8[0xb];
  if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar15 = plVar8[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      goto LAB_026056f8;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


