/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d74f10; name: FUN_00d74f10
 */


undefined8 FUN_00d74f10(int *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  long *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined4 local_78 [2];
  long *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar10 = 0x80000001;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x736b6264)) {
    local_e8._0_4_ = 0x40;
    plVar6 = (long *)FUN_00a246f0(local_78,*(undefined8 *)(param_1 + 4),&local_e8);
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar9 = *(long **)(*(long *)(param_1 + 2) + 0x68);
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = (int)*plVar7 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_e8 = CONCAT44(local_e8._4_4_,0x40);
    plVar7 = (long *)FUN_00a246f0(local_78,*(undefined8 *)(param_1 + 4),&local_e8);
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_e8 = 0x85774f59e4e87e12;
    FUN_02c2e7d0(plVar9,&local_e8,plVar6);
    local_78[0] = 0xc;
    if (plVar9 != (long *)0x0) {
      plVar1 = plVar9 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_68 = *(undefined8 *)(param_1 + 4);
    local_60 = 0xb9e4e56c5c7aa74f;
    uStack_58 = 0xb9e4e36c5c7aa3e9;
    local_50 = 0xb9e4e06c5c7a9ed0;
    uStack_48 = 1;
    local_70 = plVar9;
    FUN_00d7674c(&local_e8);
    FUN_00d74270(&local_e8,8,0x10);
    local_e0 = FUN_02c2f268(plVar6);
    uStack_90 = FUN_02c2f268(*param_2);
    local_a0 = &LAB_00d74300;
    local_98 = local_78;
    FUN_00d75f8c(&local_f0,*(undefined8 *)(param_1 + 4));
    uVar10 = FUN_00d76780(*param_2,*(undefined8 *)(param_1 + 4),&local_e8);
    if (local_f0 == (long *)0x0) {
      FUN_02a49534(0);
    }
    else {
      lVar11 = local_f0[0xb];
      if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar11 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
        *(undefined8 *)(lVar11 + 0x10) = uVar8;
      }
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02a49534(local_f0);
      lVar11 = local_f0[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))(local_f0);
      }
      lVar11 = local_f0[0xb];
      piVar2 = (int *)(lVar11 + 0xc);
      do {
        iVar3 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*local_f0 + 0x20))(local_f0);
      }
    }
    if (local_70 != (long *)0x0) {
      plVar1 = local_70 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*local_70 + 0x10))();
      }
    }
    if (plVar7 != (long *)0x0) {
      plVar1 = plVar7 + 10;
      do {
        iVar3 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar9 != (long *)0x0) {
      plVar7 = plVar9 + 10;
      do {
        iVar3 = (int)*plVar7 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar7,0x10);
        if (bVar5) {
          *(int *)plVar7 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar9 = plVar6 + 10;
      do {
        iVar3 = (int)*plVar9 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar10;
}


