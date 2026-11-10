/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d75290; name: FUN_00d75290
 */


undefined8 FUN_00d75290(int *param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined1 *local_a0;
  undefined4 *local_98;
  undefined8 uStack_90;
  undefined4 local_78 [2];
  long *local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 uStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  long *local_38;
  
  uVar9 = 0x80000001;
  if ((param_1 != (int *)0x0) && (*param_1 == 0x736b6264)) {
    local_e8 = CONCAT44(local_e8._4_4_,0x40);
    plVar6 = (long *)FUN_00a246f0(local_78,*(undefined8 *)(param_1 + 4),&local_e8);
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = (int)*plVar8 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar8 = *(long **)(*(long *)(param_1 + 2) + 0x68);
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    local_e8 = 0x175cf8024ce2aa02;
    FUN_02c2e7d0(plVar8,&local_e8,plVar6);
    local_78[0] = 1;
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
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
    local_60 = &DAT_cbf29ce484222645;
    uStack_58 = 0x7d4ba5dcb10b220e;
    local_50 = &DAT_cbf29ce484222645;
    uStack_48 = 1;
    local_70 = plVar8;
    FUN_00d7674c(&local_e8);
    local_e8 = 0x8000000002;
    local_d0 = 0x500000010;
    local_c8 = 2;
    local_c4 = 0x700000003;
    local_bc = 0xb;
    local_e0 = FUN_02c2f268(plVar6);
    uStack_90 = FUN_02c2f268(*param_2);
    local_a0 = &LAB_00d755c0;
    local_98 = local_78;
    FUN_00d75f8c(&local_38,*(undefined8 *)(param_1 + 4));
    uVar9 = FUN_00d76780(*param_2,*(undefined8 *)(param_1 + 4),&local_e8);
    if (local_38 == (long *)0x0) {
      FUN_02a49534(0);
    }
    else {
      lVar10 = local_38[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar7;
      }
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = *piVar2 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      FUN_02a49534(local_38);
      lVar10 = local_38[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))(local_38);
      }
      lVar10 = local_38[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))(local_38);
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
    if (plVar8 != (long *)0x0) {
      plVar1 = plVar8 + 10;
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
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    if (plVar6 != (long *)0x0) {
      plVar8 = plVar6 + 10;
      do {
        iVar3 = (int)*plVar8 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar8,0x10);
        if (bVar5) {
          *(int *)plVar8 = iVar3;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return uVar9;
}


