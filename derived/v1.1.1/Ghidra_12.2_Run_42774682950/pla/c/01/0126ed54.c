/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126ed54; name: FUN_0126ed54
 */


void FUN_0126ed54(long *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *local_18;
  
  FUN_00d37c90(&local_18,*(undefined8 *)(*(long *)(param_2 + 0x68) + 0xb0),0);
  lVar5 = local_18[0xd];
  *param_1 = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (local_18 != (long *)0x0) {
    lVar5 = local_18[0xb];
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
      (**(code **)(*local_18 + 0x20))();
      lVar5 = *param_1;
      goto joined_r0x0126ede8;
    }
  }
  lVar5 = *param_1;
joined_r0x0126ede8:
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


