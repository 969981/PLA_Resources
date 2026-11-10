/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a439f4; name: FUN_02a439f4
 */


void FUN_02a439f4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  
  if (*(undefined8 **)(param_1 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar4 = (**(code **)**(undefined8 **)(param_1 + 0x18))();
    *(undefined8 *)(param_1 + 0x10) = uVar4;
  }
  piVar1 = (int *)(param_1 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  return;
}


