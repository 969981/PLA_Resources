/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006de628; name: FUN_006de628
 */


void FUN_006de628(long *param_1,long *param_2,long *param_3,long *param_4)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long *plVar9;
  long local_100;
  long *plStack_f8;
  long local_f0;
  long *local_e8;
  long local_e0 [4];
  long *local_c0;
  long local_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  
  if (*param_2 == 0) {
    if (param_1 + 0x1e != param_3) {
      plVar3 = (long *)param_3[4];
      if (plVar3 == (long *)0x0) {
        param_1[0x22] = 0;
      }
      else if (plVar3 == param_3) {
        param_1[0x22] = (long)(param_1 + 0x1e);
        (**(code **)(*(long *)param_3[4] + 0x28))();
      }
      else {
        lVar8 = (**(code **)(*plVar3 + 0x30))();
        param_1[0x22] = lVar8;
      }
    }
    if (param_1 + 0x24 == param_4) {
      return;
    }
    plVar3 = (long *)param_4[4];
    if (plVar3 != (long *)0x0) {
      if (plVar3 == param_4) {
        param_1[0x28] = (long)(param_1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x006dec90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_4[4] + 0x28))();
        return;
      }
      lVar8 = (**(code **)(*plVar3 + 0x30))();
      param_1[0x28] = lVar8;
      return;
    }
    goto LAB_006dea38;
  }
  if (param_1[1] != 0) {
    lVar8 = *param_1;
    plVar9 = *(long **)(param_1[2] + 400);
    plVar3 = (long *)std::__shared_weak_count::lock();
    if (plVar3 != (long *)0x0) {
      plVar6 = plVar3 + 2;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar2) {
          *plVar6 = *plVar6 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      local_f0 = *param_2;
      local_e8 = (long *)param_2[1];
      if (local_e8 != (long *)0x0) {
        plVar6 = local_e8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar6 = local_e0;
      local_100 = lVar8;
      plStack_f8 = plVar3;
      if (plVar6 != param_3) {
        plVar4 = (long *)param_3[4];
        if (plVar4 == (long *)0x0) {
          local_c0 = (long *)0x0;
        }
        else if (plVar4 == param_3) {
          local_c0 = plVar6;
          (**(code **)(*plVar4 + 0x28))(plVar4,plVar6);
        }
        else {
          local_c0 = (long *)(**(code **)(*plVar4 + 0x30))();
        }
      }
      local_60 = (long *)0x0;
      plVar4 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x60,0x10);
      *plVar4 = (long)&PTR_LAB_0419ccc0;
      plVar4[1] = (long)plVar9;
      plVar4[3] = (long)plStack_f8;
      plVar4[2] = local_100;
      local_100 = 0;
      plStack_f8 = (long *)0x0;
      plVar4[4] = local_f0;
      plVar4[5] = (long)local_e8;
      if (local_e8 != (long *)0x0) {
        plVar9 = local_e8 + 1;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = *plVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      if (&local_100 != plVar4 + 2) {
        if (local_c0 == (long *)0x0) {
          plVar4[10] = 0;
        }
        else if (local_c0 == plVar6) {
          plVar4[10] = (long)(plVar4 + 6);
          (**(code **)(local_e0[0] + 0x28))(plVar6);
        }
        else {
          lVar8 = (**(code **)(*local_c0 + 0x30))();
          plVar4[10] = lVar8;
        }
      }
      local_60 = plVar4;
      if (param_1 + 0x1e == alStack_80) {
LAB_006de8a0:
        if (local_60 != (long *)0x0) {
          if (local_60 == alStack_80) {
            pcVar7 = *(code **)(*local_60 + 0x10);
            plVar9 = alStack_80;
          }
          else {
            pcVar7 = *(code **)(*local_60 + 0x18);
            plVar9 = local_60;
          }
          (*pcVar7)(plVar9);
        }
      }
      else if (plVar4 == (long *)0x0) {
        param_1[0x22] = 0;
      }
      else {
        if (plVar4 == alStack_80) {
          param_1[0x22] = (long)(param_1 + 0x1e);
          (**(code **)(*plVar4 + 0x28))(plVar4);
          goto LAB_006de8a0;
        }
        param_1[0x22] = (long)plVar4;
        local_60 = (long *)0x0;
      }
      if (local_c0 != (long *)0x0) {
        if (local_c0 == plVar6) {
          pcVar7 = *(code **)(*local_c0 + 0x10);
        }
        else {
          pcVar7 = *(code **)(*local_c0 + 0x18);
          plVar6 = local_c0;
        }
        (*pcVar7)(plVar6);
      }
      if (local_e8 != (long *)0x0) {
        plVar9 = local_e8 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*local_e8 + 0x10))(local_e8);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plStack_f8 != (long *)0x0) {
        std::__shared_weak_count::__release_weak();
      }
      plVar9 = plVar3 + 1;
      do {
        lVar8 = *plVar9;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = lVar8 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar8 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        std::__shared_weak_count::__release_weak();
        lVar8 = param_4[4];
      }
      else {
        lVar8 = param_4[4];
      }
      if (lVar8 == 0) {
        if (param_1 + 0x24 == param_4) {
          return;
        }
LAB_006dea38:
        param_1[0x28] = 0;
        return;
      }
      if (param_1[1] != 0) {
        plVar9 = *(long **)(param_1[2] + 400);
        lVar8 = *param_1;
        plVar3 = (long *)std::__shared_weak_count::lock();
        if (plVar3 == (long *)0x0) goto LAB_006ded64;
        plVar6 = plVar3 + 2;
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        local_f0 = *param_2;
        local_e8 = (long *)param_2[1];
        if (local_e8 != (long *)0x0) {
          plVar6 = local_e8 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = *plVar6 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        plVar6 = local_e0;
        local_100 = lVar8;
        plStack_f8 = plVar3;
        if (plVar6 != param_3) {
          plVar4 = (long *)param_3[4];
          if (plVar4 == (long *)0x0) {
            local_c0 = (long *)0x0;
          }
          else if (plVar4 == param_3) {
            local_c0 = plVar6;
            (**(code **)(*param_3 + 0x28))(param_3,plVar6);
          }
          else {
            local_c0 = (long *)(**(code **)(*plVar4 + 0x30))();
          }
        }
        if (local_b0 != param_4) {
          local_90 = local_b0;
          plVar4 = (long *)param_4[4];
          if (plVar4 == (long *)0x0) {
            local_90 = (long *)0x0;
          }
          else if (plVar4 == param_4) {
            (**(code **)(*plVar4 + 0x28))(plVar4,local_90);
          }
          else {
            local_90 = (long *)(**(code **)(*plVar4 + 0x30))();
          }
        }
        plVar4 = local_b0;
        local_60 = (long *)0x0;
        plVar5 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x90,0x10);
        *plVar5 = (long)&PTR_LAB_0419ce20;
        plVar5[1] = (long)plVar9;
        plVar5[3] = (long)plStack_f8;
        plVar5[2] = local_100;
        local_100 = 0;
        plStack_f8 = (long *)0x0;
        plVar5[4] = local_f0;
        plVar5[5] = (long)local_e8;
        if (local_e8 != (long *)0x0) {
          plVar9 = local_e8 + 1;
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        if (&local_100 != plVar5 + 2) {
          if (local_c0 == (long *)0x0) {
            plVar5[10] = 0;
          }
          else if (local_c0 == plVar6) {
            plVar5[10] = (long)(plVar5 + 6);
            (**(code **)(local_e0[0] + 0x28))(plVar6);
          }
          else {
            lVar8 = (**(code **)(*local_c0 + 0x30))();
            plVar5[10] = lVar8;
          }
          if (local_90 == (long *)0x0) {
            plVar5[0x10] = 0;
          }
          else if (local_90 == plVar4) {
            plVar5[0x10] = (long)(plVar5 + 0xc);
            (**(code **)(local_b0[0] + 0x28))(plVar4);
          }
          else {
            lVar8 = (**(code **)(*local_90 + 0x30))();
            plVar5[0x10] = lVar8;
          }
        }
        local_60 = plVar5;
        if (param_1 + 0x24 != alStack_80) {
          if (plVar5 == (long *)0x0) {
            param_1[0x28] = 0;
            goto joined_r0x006deca4;
          }
          if (plVar5 != alStack_80) {
            param_1[0x28] = (long)plVar5;
            local_60 = (long *)0x0;
            goto joined_r0x006deca4;
          }
          param_1[0x28] = (long)(param_1 + 0x24);
          (**(code **)(*plVar5 + 0x28))(plVar5);
        }
        if (local_60 != (long *)0x0) {
          if (local_60 == alStack_80) {
            pcVar7 = *(code **)(*local_60 + 0x10);
            plVar9 = alStack_80;
          }
          else {
            pcVar7 = *(code **)(*local_60 + 0x18);
            plVar9 = local_60;
          }
          (*pcVar7)(plVar9);
        }
joined_r0x006deca4:
        if (local_90 != (long *)0x0) {
          if (local_90 == plVar4) {
            pcVar7 = *(code **)(*local_90 + 0x10);
          }
          else {
            pcVar7 = *(code **)(*local_90 + 0x18);
            plVar4 = local_90;
          }
          (*pcVar7)(plVar4);
        }
        if (local_c0 != (long *)0x0) {
          if (local_c0 == plVar6) {
            pcVar7 = *(code **)(*local_c0 + 0x10);
          }
          else {
            pcVar7 = *(code **)(*local_c0 + 0x18);
            plVar6 = local_c0;
          }
          (*pcVar7)(plVar6);
        }
        if (local_e8 != (long *)0x0) {
          plVar9 = local_e8 + 1;
          do {
            lVar8 = *plVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = lVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar8 == 0) {
            (**(code **)(*local_e8 + 0x10))(local_e8);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plStack_f8 != (long *)0x0) {
          std::__shared_weak_count::__release_weak();
        }
        plVar9 = plVar3 + 1;
        do {
          lVar8 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar8 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
          std::__shared_weak_count::__release_weak();
        }
        return;
      }
      goto LAB_006ded64;
    }
  }
                    /* try { // try from 006ded60 to 006ded63 has its CatchHandler @ 006ded6c */
  FUN_006deec0();
LAB_006ded64:
                    /* try { // try from 006ded64 to 006ded67 has its CatchHandler @ 006ded68 */
  FUN_006deec0();
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 006ded64 with catch @ 006ded68
                        */
  FUN_00102150();
}


