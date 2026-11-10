/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d52298; name: FUN_00d52298
 */


void FUN_00d52298(long param_1,int param_2,ulong param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE;
  long lVar9;
  
  iVar2 = 0;
  if (param_2 != 2) {
    iVar2 = param_2;
  }
  lVar5 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar2 * 0x28);
  if ((param_3 & 1) == 0) {
    plVar6 = *(long **)(lVar5 + 0x880);
    if (plVar6 != (long *)0x0) {
      *(undefined8 *)(lVar5 + 0x880) = 0;
      lVar5 = plVar6[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x20);
        goto LAB_00d52424;
      }
    }
  }
  else {
    plVar6 = (long *)FUN_00d2f008(param_1 + 0x180,&DAT_043ab7f8 + (long)param_2 * 0x28);
    if (plVar6 != (long *)0x0) {
      lVar9 = plVar6[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_00d52438:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar9 = plVar6[0xb];
      if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_00d52438;
      if (*(long *)(lVar9 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
        *(undefined8 *)(lVar9 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar8 = *(long **)(lVar5 + 0x880);
    *(long **)(lVar5 + 0x880) = plVar6;
    if (plVar8 != (long *)0x0) {
      lVar5 = plVar8[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    if (plVar6 != (long *)0x0) {
      lVar5 = plVar6[0xb];
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar5 + 0x18) = 0;
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar6 + 0x20);
LAB_00d52424:
                    /* WARNING: Could not recover jumptable at 0x00d52434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(plVar6);
        return;
      }
    }
  }
  return;
}


