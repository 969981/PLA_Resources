/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fdabd0; name: FUN_00fdabd0
 */


undefined8 FUN_00fdabd0(undefined8 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  
  lVar5 = FUN_001511d0(param_1,1);
  plVar6 = (long *)**(long **)(lVar5 + ((ulong)(uint)-(int)lVar5 & 7));
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
      (**(code **)(*plVar6 + 0x20))();
    }
  }
  return 0;
}


