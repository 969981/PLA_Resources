/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bbbc0; name: FUN_008bbbc0
 */


undefined8 FUN_008bbbc0(long param_1)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *local_38;
  long *local_28;
  
  if (*(int *)(param_1 + 0x7c) == 1) {
    local_38 = *(long **)(param_1 + 0x80);
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar8 = FUN_008b2884(param_1,&local_38);
    if (local_38 != (long *)0x0) {
      lVar9 = local_38[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
      }
    }
    if ((uVar8 & 1) != 0) {
      FUN_008b2878(param_1);
      FUN_00923bcc(&local_28);
      plVar7 = (long *)local_28[0x21];
      if (plVar7 == (long *)0x0) {
        FUN_00972e9c(0);
      }
      else {
        plVar2 = plVar7 + 10;
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        FUN_00972e9c(plVar7);
        do {
          iVar3 = (int)*plVar2 + -1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar5) {
            *(int *)plVar2 = iVar3;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (iVar3 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      if (local_28 != (long *)0x0) {
        plVar7 = local_28 + 10;
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
          (**(code **)(*local_28 + 0x10))();
        }
      }
      FUN_008b2878(param_1);
      uVar6 = FUN_00923ca8();
      FUN_0092778c(uVar6,*(undefined1 *)(param_1 + 0x7b));
      FUN_008b2878(param_1);
      uVar6 = FUN_00923ca8();
      FUN_009277b4(uVar6,*(undefined1 *)(param_1 + 0x7b));
      return 2;
    }
  }
  else if (*(int *)(param_1 + 0x7c) == 0) {
    FUN_008b2878(param_1);
    uVar6 = FUN_00923bc4();
    FUN_0099feac(&local_28,uVar6,*(undefined1 *)(param_1 + 0x7b));
    plVar7 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    *(long **)(param_1 + 0x80) = local_28;
    *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
    return 0;
  }
  return 0;
}


