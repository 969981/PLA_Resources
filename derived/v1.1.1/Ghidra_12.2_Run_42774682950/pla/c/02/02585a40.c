/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02585a40; name: FUN_02585a40
 */


void FUN_02585a40(long *param_1,long param_2,long param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *local_48;
  undefined8 local_38;
  
  lVar7 = *(long *)(param_2 + 0x58);
  if (lVar7 != 0) {
    *param_1 = lVar7;
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
        *(undefined8 *)(lVar7 + 0x10) = uVar5;
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
    goto LAB_02585c30;
  }
  FUN_02585e48(&local_38,*(undefined8 *)(param_2 + 8));
  plVar6 = *(long **)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = 0;
  if (plVar6 != (long *)0x0) {
    lVar7 = plVar6[0xb];
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
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  *(undefined8 *)(param_2 + 0x58) = local_38;
  local_48 = *(long **)(param_2 + 0x68);
  if (local_48 == (long *)0x0) {
    FUN_02584fec(local_38,&local_48);
    lVar7 = *(long *)(param_2 + 0x58);
  }
  else {
    lVar7 = local_48[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto LAB_02585c30;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
    }
    plVar6 = local_48;
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    FUN_02584fec(local_38,&local_48);
    if (plVar6 != (long *)0x0) {
      lVar7 = plVar6[0xb];
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
        (**(code **)(*plVar6 + 0x20))(plVar6);
        lVar7 = *(long *)(param_2 + 0x58);
        goto joined_r0x02585c28;
      }
    }
    lVar7 = *(long *)(param_2 + 0x58);
  }
joined_r0x02585c28:
  if (lVar7 == 0) {
    *param_1 = 0;
  }
  else {
    if (*(long *)(lVar7 + 0x70) == 0) {
      *param_1 = lVar7;
    }
    else {
      *(undefined8 *)(lVar7 + 0x78) = *(undefined8 *)(param_3 + 0x20);
      *(undefined1 *)(lVar7 + 0x88) = 1;
      lVar7 = *(long *)(param_2 + 0x58);
      *param_1 = lVar7;
      if (lVar7 == 0) {
        return;
      }
    }
    lVar7 = *(long *)(lVar7 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
LAB_02585c30:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar5;
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
  }
  return;
}


