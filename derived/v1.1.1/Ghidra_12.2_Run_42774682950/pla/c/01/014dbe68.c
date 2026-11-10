/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014dbe68; name: FUN_014dbe68
 */


void FUN_014dbe68(long param_1,uint param_2)

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
  undefined8 local_68;
  char *pcStack_60;
  undefined8 local_58;
  long *local_50;
  long *local_48;
  
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
      local_68 = 0xc4dbc279d356203b;
      pcStack_60 = "common/net.dat";
      local_58 = 0xe;
      local_50 = (long *)0x0;
      FUN_00d37bb4(&local_48,uVar8,&local_68,10);
      plVar12 = (long *)local_48[0xd];
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
      if (local_48 != (long *)0x0) {
        lVar9 = local_48[0xb];
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
          (**(code **)(*local_48 + 0x20))();
        }
      }
      if (local_50 != (long *)0x0) {
        (**(code **)(*local_50 + 0x20))();
      }
      if (plVar12 != (long *)0x0) {
        if (param_2 < 3) {
          local_48 = *(long **)(&DAT_03a7c158 + (long)(int)param_2 * 8);
        }
        else {
          local_48 = (long *)0x244fe0f82580b7e;
        }
        FUN_02c2e7d0(plVar12,&local_48,plVar11);
        local_68 = 0x49aa9227c2de343e;
        pcStack_60 = "pane_T_info_00";
        local_58 = 0xe;
        local_50 = (long *)0x0;
        FUN_0283d080(plVar10,&local_68,10);
        if (local_50 != (long *)0x0) {
          (**(code **)(*local_50 + 0x20))();
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


