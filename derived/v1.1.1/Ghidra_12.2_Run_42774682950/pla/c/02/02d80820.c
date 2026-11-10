/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02d80820; name: FUN_02d80820
 */


void FUN_02d80820(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  plVar4 = (long *)param_1[3];
  param_2[3] = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  lVar6 = param_1[4];
  param_2[4] = lVar6;
  if (lVar6 != 0) {
    lVar6 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar6 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar6 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar6 + 0x18))();
      *(undefined8 *)(lVar6 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar6 + 0xc);
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


