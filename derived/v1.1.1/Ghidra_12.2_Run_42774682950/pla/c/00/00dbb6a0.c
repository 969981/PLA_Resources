/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dbb6a0; name: FUN_00dbb6a0
 */


void FUN_00dbb6a0(long *param_1)

{
  long *plVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 *local_68;
  undefined8 uStack_60;
  long *local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  long *local_38;
  undefined8 uStack_30;
  long *local_28;
  
  if (((long *)param_1[0xd])[0x1a] == 0) {
    lVar9 = *(long *)param_1[0xd];
  }
  else {
    FUN_00dbd99c(&local_38);
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
      local_38 = (long *)0x0;
      uStack_30 = 0;
      local_48 = (undefined8 *)0x0;
      uStack_40 = 0;
      FUN_00dbd724(&local_48,param_1[0xd] + 0xd0);
      local_58 = (long *)0x0;
      uStack_50 = 0;
      FUN_00dbd724(&local_58,param_1[0xd] + 0xe0);
      local_68 = (undefined8 *)0x0;
      uStack_60 = 0;
      FUN_00dbd724(&local_68,param_1[0xd] + 0xf0);
      if (local_58 == (long *)0x0) {
        local_28 = (long *)0x0;
LAB_00dbba28:
        FUN_00dbd99c(&local_28,local_48);
        FUN_00dbd724(local_28[0xd] + 0x100,&local_68);
        if (local_28 == (long *)0x0) goto LAB_00dbba6c;
        lVar9 = local_28[0xb];
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
joined_r0x00dbbdf8:
        if (iVar8 != 0) goto LAB_00dbba6c;
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
        if (local_68 != (undefined8 *)0x0) goto LAB_00dbbe14;
LAB_00dbba74:
        local_28 = (long *)0x0;
LAB_00dbba78:
        FUN_00dbd99c(&local_28,local_48);
        FUN_00dbd724(local_28[0xd] + 0x110,&local_58);
        if (local_28 != (long *)0x0) {
          lVar9 = local_28[0xb];
          piVar2 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 == 0) {
LAB_00dbbe84:
            *(undefined8 *)(lVar9 + 0x18) = 0;
            (**(code **)(*local_28 + 0x20))();
          }
        }
      }
      else {
        FUN_00dbd99c(&local_28);
        if (local_28 == (long *)0x0) goto LAB_00dbba28;
        lVar9 = local_28[0xb];
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
        FUN_00dbd99c(&local_28,local_58);
        FUN_00dbd724(local_28[0xd] + 0xf0,&local_68);
        if (local_28 != (long *)0x0) {
          lVar9 = local_28[0xb];
          piVar2 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar2 + -1;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar8;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          goto joined_r0x00dbbdf8;
        }
LAB_00dbba6c:
        if (local_68 == (undefined8 *)0x0) goto LAB_00dbba74;
LAB_00dbbe14:
        FUN_00dbd99c(&local_28);
        if (local_28 == (long *)0x0) goto LAB_00dbba78;
        lVar9 = local_28[0xb];
        piVar2 = (int *)(lVar9 + 0xc);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
        FUN_00dbd99c(&local_28,local_68);
        FUN_00dbd724(local_28[0xd] + 0xe0,&local_58);
        if (local_28 != (long *)0x0) {
          lVar9 = local_28[0xb];
          piVar2 = (int *)(lVar9 + 0xc);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar8 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 + -1 != 0) goto LAB_00dbbabc;
          goto LAB_00dbbe84;
        }
      }
LAB_00dbbabc:
      FUN_00dbd724(param_1[0xd] + 0xe0,&local_38);
      FUN_00dbd724(param_1[0xd] + 0xf0,&local_38);
      puVar6 = local_68;
      if (local_68 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_68 + 1);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          local_68[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_28 = (long *)*puVar6;
          FUN_02a44274(lVar9 + 0xd8,&local_28);
        }
      }
      plVar7 = local_58;
      if (local_58 != (long *)0x0) {
        plVar3 = local_58 + 1;
        do {
          iVar8 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_58[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_68 = (undefined8 *)*plVar7;
          FUN_02a44274(lVar9 + 0xd8,&local_68);
        }
      }
      puVar6 = local_48;
      if (local_48 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_48 + 1);
        do {
          iVar8 = *piVar2;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          local_48[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_58 = (long *)*puVar6;
          FUN_02a44274(lVar9 + 0xd8,&local_58);
        }
      }
      plVar7 = local_38;
      if (local_38 != (long *)0x0) {
        plVar3 = local_38 + 1;
        do {
          iVar8 = (int)*plVar3 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar5) {
            *(int *)plVar3 = iVar8;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 == 0) {
          local_38[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar9 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar9;
          local_48 = (undefined8 *)*plVar7;
          FUN_02a44274(lVar9 + 0xd8,&local_48);
        }
      }
      goto LAB_00dbb6d4;
    }
    lVar9 = *(long *)param_1[0xd];
  }
  local_38 = (long *)0x0;
  if ((lVar9 != 0) && (uVar10 = FUN_02a43a8c(), (uVar10 & 1) == 0)) {
    if (*(long *)param_1[0xd] == 0) {
      local_58 = (long *)0x0;
    }
    else {
      FUN_00dbdb10(&local_58);
    }
    plVar7 = local_58;
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    FUN_00dbc824(&local_78,&local_38);
    plVar3 = local_38;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_48 = (undefined8 *)*plVar3;
        FUN_02a44274(lVar9 + 0xd8,&local_48);
      }
    }
    FUN_00dc27d0(plVar7,&local_78);
    puVar6 = local_78;
    if (local_78 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_78 + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_78[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_38 = (long *)*puVar6;
        FUN_02a44274(lVar9 + 0xd8,&local_38);
      }
    }
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
LAB_00dbb6d4:
  if ((*(long *)param_1[0xd] != 0) && (uVar10 = FUN_02a43a8c(), (uVar10 & 1) == 0)) {
    if (*(long *)param_1[0xd] == 0) {
      local_58 = (long *)0x0;
    }
    else {
      FUN_00dbdb10(&local_58);
    }
    plVar7 = local_58;
    (**(code **)(*param_1 + 0x10))(&local_38,param_1);
    local_88 = (undefined8 *)0x0;
    uStack_80 = 0;
    FUN_00dbc824(&local_88,&local_38);
    plVar3 = local_38;
    if (local_38 != (long *)0x0) {
      plVar1 = local_38 + 1;
      do {
        iVar8 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 == 0) {
        local_38[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_48 = (undefined8 *)*plVar3;
        FUN_02a44274(lVar9 + 0xd8,&local_48);
      }
    }
    FUN_00dc0b0c(plVar7,&local_88);
    puVar6 = local_88;
    if (local_88 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_88 + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_88[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_38 = (long *)*puVar6;
        FUN_02a44274(lVar9 + 0xd8,&local_38);
      }
    }
    if (local_58 != (long *)0x0) {
      lVar9 = local_58[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
  }
  *(undefined1 *)(param_1[0xd] + 0x29) = 0;
  *(undefined4 *)(param_1[0xd] + 100) = 0;
  *(undefined4 *)(param_1[0xd] + 0x6c) = 0;
  *(undefined4 *)(param_1[0xd] + 0x70) = 0;
  return;
}


