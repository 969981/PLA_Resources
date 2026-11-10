/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b488c; name: FUN_008b488c
 */


bool FUN_008b488c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long *local_28;
  
  plVar7 = *(long **)(param_1 + 0x90);
  if (plVar7 == (long *)0x0) {
    return true;
  }
  lVar8 = plVar7[0xb];
  if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar8 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
    *(undefined8 *)(lVar8 + 0x10) = uVar6;
  }
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    cVar3 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (plVar7[0xd] == 0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_009c66e4(&local_28);
    if (local_28 != (long *)0x0) {
      bVar5 = (int)local_28[0xd] == 3;
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
      goto LAB_008b48ec;
    }
  }
  bVar5 = true;
LAB_008b48ec:
  lVar8 = plVar7[0xb];
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
    (**(code **)(*plVar7 + 0x20))(plVar7);
  }
  return bVar5;
}


