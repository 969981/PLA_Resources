/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b6e60; name: FUN_014b6e60
 */


void FUN_014b6e60(undefined8 *param_1,long *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  
  FUN_014b71a8(param_1,param_3);
  *param_1 = &PTR_FUN_04214c20;
  lVar5 = *param_2;
  param_1[2] = lVar5;
  if (lVar5 == 0) {
    uVar4 = FUN_02c58424(0);
  }
  else {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar4 = FUN_02c58424(param_1[2]);
  }
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (uVar4 <= param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}


