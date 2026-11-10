/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02585c48; name: FUN_02585c48
 */


void FUN_02585c48(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long *local_40;
  undefined8 local_38;
  
  lVar7 = *(long *)(param_2 + 0x58);
  if (lVar7 == 0) {
    FUN_02585dd0(&local_38,*(undefined8 *)(param_2 + 8));
    plVar5 = *(long **)(param_2 + 0x58);
    *(undefined8 *)(param_2 + 0x58) = 0;
    if (plVar5 != (long *)0x0) {
      lVar7 = plVar5[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
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
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*plVar5 + 0x20))();
      }
    }
    *(undefined8 *)(param_2 + 0x58) = local_38;
    local_40 = *(long **)(param_2 + 0x68);
    if (local_40 == (long *)0x0) {
      FUN_02584fec(local_38,&local_40);
    }
    else {
      lVar7 = local_40[0xb];
      if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_02585db8;
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar6;
      }
      plVar5 = local_40;
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      FUN_02584fec(local_38,&local_40);
      if (plVar5 != (long *)0x0) {
        lVar7 = plVar5[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
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
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
      }
    }
    lVar7 = *(long *)(param_2 + 0x58);
    *param_1 = lVar7;
    if (lVar7 == 0) {
      return;
    }
  }
  else {
    *param_1 = lVar7;
  }
  lVar7 = *(long *)(lVar7 + 0x58);
  if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar6;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    return;
  }
LAB_02585db8:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


