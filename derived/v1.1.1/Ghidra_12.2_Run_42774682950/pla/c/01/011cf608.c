/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011cf608; name: FUN_011cf608
 */


void FUN_011cf608(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long local_a0;
  char *local_98;
  char *local_90;
  long *local_88;
  long *plStack_80;
  
  *(long *)(param_1 + 0x660) = param_2;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_011d1070(param_1 + 0x5b0,*(undefined8 *)(param_1 + 0x5b0));
  lVar10 = 0;
  lVar5 = tpidr_el0;
  do {
    lVar9 = *(long *)(param_1 + 0x660) + lVar10;
    local_a0 = *(long *)(lVar9 + 0x68);
    FUN_011d0c90(&local_98,lVar9 + 0x70);
    if ((local_a0 != 0) && (uVar7 = FUN_0093217c(), (uVar7 & 1) == 0)) {
      FUN_011cf888(param_1 + 0x5b0,&local_a0);
    }
    plVar8 = plStack_80;
    pcVar6 = local_98;
    if (local_98 != (char *)0x0) {
      local_90 = local_98;
      lVar9 = (long)local_88 - (long)local_98;
      uVar7 = (**(code **)(*plStack_80 + 0xc0))(plStack_80);
      if ((uVar7 & 1) != 0) {
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar5 + 0x38d480)) {
          FUN_02bcc824(plVar8,pcVar6,lVar9,4);
          goto LAB_011cf684;
        }
      }
      (**(code **)(*plVar8 + 0x18))(plVar8,pcVar6,lVar9,4);
    }
LAB_011cf684:
    lVar10 = lVar10 + 0x40;
    if (lVar10 == 0x180) {
      FUN_011cf8dc(param_1);
      FUN_011cfa70(param_1,param_2);
      if (*(long *)(param_1 + 0x5f0) == *(long *)(param_1 + 0x5f8)) {
        plVar8 = *(long **)(param_1 + 0x2c8);
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_a0 = 0x49aa9227c2de343e;
        local_98 = "pane_T_info_00";
        local_90 = (char *)0xe;
        local_88 = (long *)0x0;
        FUN_0283b11c(plVar8,&local_a0,0);
        if (local_88 != (long *)0x0) {
          (**(code **)(*local_88 + 0x20))();
        }
        if (plVar8 != (long *)0x0) {
          plVar1 = plVar8 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      return;
    }
  } while( true );
}


