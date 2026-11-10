/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f333e4; name: FUN_01f333e4
 */


void FUN_01f333e4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *local_28;
  
  if ((*(long *)(param_1 + 0x138) != 0) &&
     (FUN_01f37cc8(&local_28,*(long *)(param_1 + 0x138)), plVar5 = local_28, local_28 != (long *)0x0
     )) {
    FUN_0257e578(local_28,0);
    *(undefined1 *)(param_1 + 0x148) = 0;
    lVar6 = plVar5[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
      lVar6 = *(long *)(param_1 + 0x150);
      goto joined_r0x01f3347c;
    }
  }
  lVar6 = *(long *)(param_1 + 0x150);
joined_r0x01f3347c:
  if ((lVar6 != 0) && (FUN_01f37e80(&local_28), local_28 != (long *)0x0)) {
    FUN_0146719c(local_28);
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
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
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return;
}


