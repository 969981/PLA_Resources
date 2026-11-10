/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e3e5c; name: FUN_017e3e5c
 */


void FUN_017e3e5c(char *param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  if (*param_1 == '\0') {
    lVar8 = *param_2;
    *(long *)(param_1 + 0x10) = lVar8;
    if (lVar8 != 0) {
      piVar2 = (int *)(lVar8 + 0x50);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar8 = param_2[1];
    *(long *)(param_1 + 0x18) = lVar8;
    if (lVar8 == 0) {
LAB_017e3f70:
      param_1[0x20] = (char)param_2[2];
      param_1[0x30] = '\0';
      if ((char)param_2[4] != '\0') {
        memcpy(param_1 + 0x40,param_2 + 6,0x90);
        param_1[0x30] = '\x01';
      }
      *param_1 = '\x01';
      return;
    }
    lVar8 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar8 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar7;
      }
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = *piVar2 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      goto LAB_017e3f70;
    }
    goto LAB_017e4058;
  }
  lVar8 = *param_2;
  if (lVar8 != 0) {
    piVar2 = (int *)(lVar8 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar8;
  if (plVar6 == (long *)0x0) {
LAB_017e3ea8:
    lVar8 = param_2[1];
  }
  else {
    plVar1 = plVar6 + 10;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 != 0) goto LAB_017e3ea8;
    (**(code **)(*plVar6 + 0x10))();
    lVar8 = param_2[1];
  }
  if (lVar8 != 0) {
    lVar9 = *(long *)(lVar8 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_017e4058:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar7;
    }
    piVar2 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar8;
  if (plVar6 != (long *)0x0) {
    lVar8 = plVar6[0xb];
    piVar2 = (int *)(lVar8 + 0xc);
    do {
      iVar5 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  param_1[0x20] = (char)param_2[2];
  if (param_1[0x30] == '\0') {
    if ((char)param_2[4] != '\0') {
      memcpy(param_1 + 0x40,param_2 + 6,0x90);
      param_1[0x30] = '\x01';
    }
  }
  else {
    if ((char)param_2[4] != '\0') {
      memcpy(param_1 + 0x40,param_2 + 6,0x90);
      return;
    }
    param_1[0x30] = '\0';
  }
  return;
}


