/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d8c88c; name: FUN_00d8c88c
 */


void FUN_00d8c88c(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_00d8ea48();
  *(ulong *)(lVar4 + 0x1e0) = *(ulong *)(lVar4 + 0x1e0) | 8;
  *param_1 = lVar4;
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x58);
    if (*(undefined8 **)(lVar4 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x18))();
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
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
  return;
}


