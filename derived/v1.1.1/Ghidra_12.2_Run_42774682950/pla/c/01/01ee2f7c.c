/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ee2f7c; name: FUN_01ee2f7c
 */


undefined8 * FUN_01ee2f7c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  long *extraout_x8;
  
  lVar4 = FUN_01ee59d0();
  if (lVar4 != 0) {
    return *(undefined8 **)(lVar4 + 0x18);
  }
  FUN_01ee44c0();
  lVar4 = FUN_01ee5ae4();
  *extraout_x8 = lVar4;
  puVar5 = (undefined8 *)0x0;
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x58);
    puVar5 = *(undefined8 **)(lVar4 + 0x18);
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar5 = (undefined8 *)(**(code **)*puVar5)();
      *(undefined8 **)(lVar4 + 0x10) = puVar5;
    }
    piVar1 = (int *)(lVar4 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return puVar5;
}


