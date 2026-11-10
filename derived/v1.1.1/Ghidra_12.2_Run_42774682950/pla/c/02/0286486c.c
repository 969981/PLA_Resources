/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0286486c; name: FUN_0286486c
 */


void FUN_0286486c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *local_28;
  
  if ((*(int *)(*(long *)(param_2 + 0x50) + 0xd60) != 0) &&
     (*(long *)(*(long *)(param_2 + 0x50) + 0xd68) != 0)) {
LAB_02864a40:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0286fa50(&local_28,param_3,param_4,param_5);
  plVar5 = local_28;
  FUN_0286fac8(param_1,local_28);
  local_28 = (long *)0x0;
  lVar8 = *(long *)(param_2 + 0x50);
  if (plVar5 != (long *)0x0) {
    lVar9 = plVar5[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_02864a40;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar6;
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
  plVar7 = *(long **)(lVar8 + 0xd68);
  if (*(int *)(lVar8 + 0xd60) == 0) {
    *(undefined4 *)(lVar8 + 0xd60) = 1;
    *(undefined8 *)(lVar8 + 0xd68) = 0;
    if (plVar7 != (long *)0x0) {
      lVar9 = plVar7[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
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
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
LAB_02864934:
    *(long **)(lVar8 + 0xd68) = plVar5;
    if (plVar5 == (long *)0x0) goto joined_r0x0286495c;
  }
  else {
    if (plVar7 == (long *)0x0) {
      *(undefined4 *)(lVar8 + 0xd60) = 1;
      *(undefined8 *)(lVar8 + 0xd68) = 0;
      goto LAB_02864934;
    }
    if (plVar5 == (long *)0x0) goto joined_r0x0286495c;
    lVar8 = plVar5[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  lVar8 = plVar5[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
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
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
joined_r0x0286495c:
  if (local_28 != (long *)0x0) {
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


