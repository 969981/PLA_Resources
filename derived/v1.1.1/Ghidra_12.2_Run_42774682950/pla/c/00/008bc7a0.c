/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008bc7a0; name: FUN_008bc7a0
 */


void FUN_008bc7a0(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  
  plVar10 = *(long **)(param_1 + 0x90);
  if (plVar10 == (long *)0x0) {
    return;
  }
  if ((char)plVar10[0xf] == '\0') {
    (**(code **)(*plVar10 + 0x40))(plVar10);
    *(undefined1 *)(plVar10 + 0xf) = 1;
    if (*(char *)((long)plVar10 + 0x79) == '\0') goto LAB_008bc7cc;
  }
  else {
    do {
      if (*(char *)((long)plVar10 + 0x79) != '\0') goto LAB_008bc808;
LAB_008bc7cc:
      iVar5 = (**(code **)(*plVar10 + 0x48))(plVar10);
      if (iVar5 == 0) {
        if (*(char *)((long)plVar10 + 0x79) == '\0') {
          return;
        }
        goto LAB_008bc808;
      }
    } while (iVar5 != 2);
    *(undefined1 *)((long)plVar10 + 0x79) = 1;
  }
LAB_008bc808:
  if (*(char *)((long)plVar10 + 0x7a) == '\0') {
    (**(code **)(*plVar10 + 0x50))(plVar10);
    *(undefined1 *)((long)plVar10 + 0x7a) = 1;
    if (*(char *)((long)plVar10 + 0x79) == '\0') {
      return;
    }
  }
  lVar6 = *(long *)(param_1 + 0x98);
  if (*(long *)(lVar6 + 0x48) == 0) {
    plVar10 = (long *)0x0;
  }
  else {
    uVar9 = (*(long *)(lVar6 + 0x48) + *(long *)(lVar6 + 0x40)) - 1;
    plVar11 = *(long **)(*(long *)(*(long *)(lVar6 + 8) + (uVar9 >> 6 & 0x3fffffffffffff8)) +
                        (uVar9 & 0x1ff) * 8);
    plVar10 = plVar11;
    if (plVar11 != (long *)0x0) {
      lVar6 = plVar11[0xb];
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
LAB_008bc9ac:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_008be788(*(undefined8 *)(param_1 + 0x98));
      lVar6 = plVar11[0xb];
      if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) goto LAB_008bc9ac;
      if (*(long *)(lVar6 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
        *(undefined8 *)(lVar6 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      bVar4 = false;
      goto LAB_008bc848;
    }
    FUN_008be788();
  }
  plVar11 = (long *)0x0;
  bVar4 = true;
LAB_008bc848:
  plVar7 = *(long **)(param_1 + 0x90);
  *(long **)(param_1 + 0x90) = plVar11;
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  if (!bVar4) {
    lVar6 = plVar10[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x008bc8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar10 + 0x20))(plVar10);
      return;
    }
  }
  return;
}


