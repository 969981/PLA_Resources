/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01783b7c; name: FUN_01783b7c
 */


void FUN_01783b7c(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long *local_28;
  
  for (plVar7 = *(long **)(param_1 + 0x1f0); plVar7 != (long *)0x0; plVar7 = (long *)*plVar7) {
    (**(code **)(*(long *)plVar7[3] + 0x38))();
  }
  *(undefined1 *)(param_1 + 0x170) = 0;
  if ((*(long *)(param_1 + 0x80) != 0) && (FUN_00ac64cc(&local_28), local_28 != (long *)0x0)) {
    uVar5 = FUN_0181ae88(local_28);
    if ((uVar5 & 1) != 0) {
      FUN_0181b198(local_28);
    }
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


