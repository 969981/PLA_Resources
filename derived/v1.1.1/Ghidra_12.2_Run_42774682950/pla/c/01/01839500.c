/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01839500; name: FUN_01839500
 */


void FUN_01839500(undefined8 param_1,uint *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  bool bVar7;
  int iVar8;
  undefined1 uVar9;
  long lVar10;
  long *local_58;
  undefined8 *local_50 [2];
  long *local_40;
  long *local_38;
  undefined8 local_28;
  
  FUN_01839b24(&local_38,param_2 + 4);
  if (local_38 == (long *)0x0) {
    return;
  }
  uVar2 = *param_2;
  if (uVar2 == 0) {
    FUN_02be88ac(local_50,local_38,0);
    FUN_00ab5ae0(&local_40,local_50);
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = *puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
      }
    }
    if (local_40 != (long *)0x0) {
      if (*(char *)((long)local_40 + 0xf4) == '\0') {
        bVar7 = true;
      }
      else {
        bVar7 = param_2[1] == 0;
      }
      lVar10 = local_40[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_40 + 0x20))();
      }
      if (!bVar7) goto joined_r0x01839764;
    }
    FUN_02be88ac(local_50,local_38,0);
    FUN_00ab5ae0(&local_40,local_50);
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = *puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
      }
    }
    if (local_40 == (long *)0x0) {
      FUN_02be8e60(local_50,local_38,0);
      FUN_01839c8c(&local_58,local_50);
      if (local_50[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_50[0] + 1);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          local_50[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_28 = *local_50[0];
          FUN_02a44274(lVar10 + 0xd8,&local_28);
        }
      }
      if (local_58 != (long *)0x0) {
        *(char *)((long)local_58 + 0x322) = (char)param_2[2];
        lVar10 = local_58[0xb];
        *(undefined1 *)((long)local_58 + 0x79) = 1;
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      if (local_40 == (long *)0x0) goto joined_r0x01839764;
    }
    else {
      *(undefined1 *)((long)local_40 + 0x79) = 1;
    }
    lVar10 = local_40[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  else {
    if (((*PTR_DAT_0437a780 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
    lVar10 = *(long *)PTR_DAT_0437a788;
    *(long *)PTR_DAT_0437a790 = lVar10;
    uVar3 = *(uint *)(lVar10 + 0x8c);
    FUN_02be88ac(local_50,local_38,0);
    FUN_00ab5ae0(&local_40,local_50);
    puVar6 = local_50[0];
    if (local_50[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_50[0] + 1);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_50[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = *puVar6;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
      }
    }
    if (local_40 == (long *)0x0) {
      FUN_02be8e60(local_50,local_38,0);
      FUN_01839c8c(&local_58,local_50);
      if (local_50[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_50[0] + 1);
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          local_50[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_28 = *local_50[0];
          FUN_02a44274(lVar10 + 0xd8,&local_28);
        }
      }
      if (local_58 != (long *)0x0) {
        if ((uVar3 & uVar2) == 0) {
          uVar9 = (undefined1)param_2[2];
        }
        else {
          uVar9 = 1;
        }
        *(undefined1 *)((long)local_58 + 0x322) = uVar9;
        lVar10 = local_58[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        *(undefined1 *)((long)local_58 + 0x79) = 0;
        do {
          iVar8 = *piVar1;
          cVar4 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar8 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar8 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      if (local_40 == (long *)0x0) goto joined_r0x01839764;
    }
    else {
      *(undefined1 *)((long)local_40 + 0x79) = 0;
    }
    lVar10 = local_40[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1 + -1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (iVar8 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*local_40 + 0x20))();
  }
joined_r0x01839764:
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  return;
}


