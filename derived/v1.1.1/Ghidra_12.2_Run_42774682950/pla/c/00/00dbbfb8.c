/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00dbbfb8; name: FUN_00dbbfb8
 */


void FUN_00dbbfb8(long *param_1,int param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  long *local_40;
  long *local_38 [2];
  long local_28;
  
  local_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_00dbd724(&local_60,param_1[0xd] + 0x100);
  if (local_60 != (long *)0x0) {
LAB_00dbc3c4:
    do {
      FUN_00dbd99c(local_38);
      if (local_38[0] == (long *)0x0) goto LAB_00dbbff0;
      lVar10 = local_38[0][0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38[0] + 0x20))();
        if (local_60 == (long *)0x0) goto LAB_00dbc3f8;
LAB_00dbc4cc:
        FUN_00dbd99c(local_38);
        plVar9 = local_38[0];
      }
      else {
        if (local_60 != (long *)0x0) goto LAB_00dbc4cc;
LAB_00dbc3f8:
        local_38[0] = (long *)0x0;
        plVar9 = local_60;
      }
      FUN_00dbbfb8(plVar9,param_2 + 1);
      if (local_38[0] != (long *)0x0) {
        lVar10 = local_38[0][0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_38[0] + 0x20))();
        }
      }
      FUN_00dbd99c(local_38,local_60);
      FUN_00dbd724(&local_60,local_38[0][0xd] + 0xf0);
      if (local_38[0] != (long *)0x0) {
        lVar10 = local_38[0][0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_38[0] + 0x20))();
          if (local_60 == (long *)0x0) break;
          goto LAB_00dbc3c4;
        }
      }
    } while (local_60 != (long *)0x0);
  }
  local_38[0] = (long *)0x0;
LAB_00dbbff0:
  lVar10 = param_1[0xd];
  if (*(int *)(lVar10 + 100) == 1) {
    *(undefined4 *)(lVar10 + 100) = 2;
    *(undefined1 *)(param_1[0xd] + 0x29) = 1;
    if ((*(long *)param_1[0xd] != 0) && (uVar7 = FUN_02a43a8c(), (uVar7 & 1) == 0)) {
      if (*(long *)param_1[0xd] == 0) {
        local_40 = (long *)0x0;
      }
      else {
        FUN_00dbdb10(&local_40);
      }
      plVar9 = local_40;
      (**(code **)(*param_1 + 0x10))(local_38,param_1);
      local_50 = (undefined8 *)0x0;
      uStack_48 = 0;
      FUN_00dbc824(&local_50,local_38);
      plVar8 = local_38[0];
      if (local_38[0] != (long *)0x0) {
        plVar1 = local_38[0] + 1;
        do {
          iVar6 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 == 0) {
          local_38[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_28 = *plVar8;
          FUN_02a44274(lVar10 + 0xd8,&local_28);
        }
      }
      FUN_00dc2ca8(plVar9,&local_50);
      puVar5 = local_50;
      if (local_50 != (undefined8 *)0x0) {
        piVar2 = (int *)(local_50 + 1);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          local_50[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_38[0] = (long *)*puVar5;
          FUN_02a44274(lVar10 + 0xd8,local_38);
        }
      }
      if (local_40 != (long *)0x0) {
        lVar10 = local_40[0xb];
        piVar2 = (int *)(lVar10 + 0xc);
        do {
          iVar6 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar6 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*local_40 + 0x20))();
        }
      }
    }
    (**(code **)(*param_1 + 0x60))(param_1);
    plVar9 = local_60;
    if ((*(long *)(param_1[0xd] + 0x10) == 0) ||
       (uVar7 = FUN_02a43a8c(), plVar9 = local_60, (uVar7 & 1) != 0)) goto joined_r0x00dbc260;
    FUN_00dbdf54(local_38,*(undefined8 *)(param_1[0xd] + 0x10));
    (**(code **)(*local_38[0] + 0x40))();
    plVar9 = local_60;
    if (local_38[0] == (long *)0x0) goto joined_r0x00dbc260;
    lVar10 = local_38[0][0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_38[0];
    } while (cVar3 != '\0');
  }
  else {
    plVar9 = local_60;
    if (((*(char *)(lVar10 + 0x28) == '\0') ||
        (*(undefined1 *)(lVar10 + 0x28) = 0, *(long *)param_1[0xd] == 0)) ||
       (uVar7 = FUN_02a43a8c(), plVar9 = local_60, (uVar7 & 1) != 0)) goto joined_r0x00dbc260;
    if (*(long *)param_1[0xd] == 0) {
      local_40 = (long *)0x0;
    }
    else {
      FUN_00dbdb10(&local_40);
    }
    plVar9 = local_40;
    (**(code **)(*param_1 + 0x10))(local_38,param_1);
    local_50 = (undefined8 *)0x0;
    uStack_48 = 0;
    FUN_00dbc824(&local_50,local_38);
    plVar8 = local_38[0];
    if (local_38[0] != (long *)0x0) {
      plVar1 = local_38[0] + 1;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 == 0) {
        local_38[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_28 = *plVar8;
        FUN_02a44274(lVar10 + 0xd8,&local_28);
      }
    }
    FUN_00dc13f0(plVar9,&local_50);
    puVar5 = local_50;
    if (local_50 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_50 + 1);
      do {
        iVar6 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar6 + -1 == 0) {
        local_50[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38[0] = (long *)*puVar5;
        FUN_02a44274(lVar10 + 0xd8,local_38);
      }
    }
    plVar9 = local_60;
    if (local_40 == (long *)0x0) goto joined_r0x00dbc260;
    lVar10 = local_40[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar6 = *piVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
      plVar8 = local_40;
    } while (cVar3 != '\0');
  }
  plVar9 = local_60;
  if (iVar6 == 0) {
    *(undefined8 *)(lVar10 + 0x18) = 0;
    (**(code **)(*plVar8 + 0x20))();
    plVar9 = local_60;
  }
joined_r0x00dbc260:
  if (plVar9 != (long *)0x0) {
    plVar8 = plVar9 + 1;
    do {
      iVar6 = (int)*plVar8 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *(int *)plVar8 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      plVar9[2] = 0;
      local_60 = plVar9;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_38[0] = (long *)*plVar9;
      FUN_02a44274(lVar10 + 0xd8,local_38);
    }
  }
  return;
}


