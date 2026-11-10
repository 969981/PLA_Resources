/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013bdcac; name: FUN_013bdcac
 */


void FUN_013bdcac(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  plVar10 = *(long **)(param_1 + 0x2c8);
  if (plVar10 != (long *)0x0) {
    plVar1 = plVar10 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar11 = (long *)plVar10[0x38];
    if (plVar11 != (long *)0x0) {
      plVar2 = plVar11 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = (int)*plVar2 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      uVar8 = FUN_00d40878();
      local_60 = 0x9bf1d120b9d1525;
      pcStack_58 = "common/mystery.dat";
      local_50 = 0x12;
      local_48 = (long *)0x0;
      FUN_00d37bb4(&local_38,uVar8,&local_60,10);
      plVar12 = (long *)local_38[0xd];
      if (plVar12 != (long *)0x0) {
        plVar3 = plVar12 + 10;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = (int)*plVar3 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      if (local_38 != (long *)0x0) {
        lVar9 = local_38[0xb];
        piVar4 = (int *)(lVar9 + 0xc);
        do {
          iVar5 = *piVar4;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar4,0x10);
          if (bVar7) {
            *piVar4 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar9 + 0x18) = 0;
          (**(code **)(*local_38 + 0x20))();
        }
      }
      if (local_48 != (long *)0x0) {
        (**(code **)(*local_48 + 0x20))();
      }
      if (plVar12 != (long *)0x0) {
        local_60 = 0x74ad16e7d59434cf;
        FUN_02c2e7d0(plVar12,&local_60,plVar11);
        local_60 = 0x8fb819a4e5c08617;
        pcStack_58 = "pane_T_text_04";
        local_50 = 0xe;
        local_48 = (long *)0x0;
        FUN_0283d080(plVar10,&local_60,10);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        local_60 = 0x74ad17e7d5943682;
        FUN_02c2e7d0(plVar12,&local_60,plVar11);
        local_60 = 0x8fb816a4e5c080fe;
        pcStack_58 = "pane_T_text_03";
        local_50 = 0xe;
        local_48 = (long *)0x0;
        FUN_0283d080(plVar10,&local_60,10);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        plVar3 = plVar12 + 10;
        do {
          iVar5 = (int)*plVar3 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar7) {
            *(int *)plVar3 = iVar5;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
        do {
          iVar5 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = iVar5;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
        do {
          iVar5 = (int)*plVar1 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar7) {
            *(int *)plVar1 = iVar5;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar5 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


