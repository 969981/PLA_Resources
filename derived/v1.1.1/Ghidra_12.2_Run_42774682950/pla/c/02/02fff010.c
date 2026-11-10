/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fff010; name: FUN_02fff010
 */


void FUN_02fff010(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)param_1[0x13];
  if ((plVar4 == (long *)0x0) || (plVar4[1] == 0)) {
LAB_02fff02c:
    plVar4 = (long *)param_1[0x10];
    if (plVar4 == (long *)0x0) goto LAB_02fff034;
LAB_02fff0c8:
    if (plVar4[1] == 0) goto LAB_02fff034;
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02fff034;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0xf];
  }
  else {
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 != 0) goto LAB_02fff02c;
    (**(code **)(*plVar4 + 0x18))();
    plVar4 = (long *)param_1[0x10];
    if (plVar4 != (long *)0x0) goto LAB_02fff0c8;
LAB_02fff034:
    plVar4 = (long *)param_1[0xf];
  }
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))();
      uVar5 = param_1[3];
      goto joined_r0x02fff040;
    }
  }
  uVar5 = param_1[3];
joined_r0x02fff040:
  if ((uVar5 & 1) == 0) {
    param_1 = (long *)*param_1;
  }
  else {
    lVar6 = tpidr_el0;
    lVar7 = *(long *)(lVar6 + 0x38d490);
    if (lVar7 == 0) {
      lVar7 = FUN_0333d16c(0,1);
      *(long *)(lVar6 + 0x38d490) = lVar7;
    }
    plVar4 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
    *(undefined8 *)(uVar5 - 0x11) = 0;
    (**(code **)(*plVar4 + 0x18))
              (plVar4,(undefined8 *)(uVar5 - 0x11),(long)*(int *)(uVar5 - 9) + 0x10);
    param_1 = (long *)*param_1;
  }
  if ((param_1 != (long *)0x0) && (param_1[1] != 0)) {
    plVar4 = param_1 + 2;
    do {
      lVar6 = *plVar4;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar3) {
        *plVar4 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02fff090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x18))();
      return;
    }
  }
  return;
}


