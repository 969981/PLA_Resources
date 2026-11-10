/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c1b81c; name: FUN_01c1b81c
 */


void FUN_01c1b81c(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 uVar6;
  long *local_30;
  undefined1 auStack_28 [8];
  
  FUN_01c1b8f4(&local_30);
  if (local_30 == (long *)0x0) {
    *param_1 = 0;
  }
  else {
    lVar5 = FUN_00ab4c74(local_30 + 0x1e,auStack_28);
    *param_1 = lVar5;
    if (lVar5 != 0) {
      lVar5 = *(long *)(lVar5 + 0x58);
      if (*(undefined8 **)(lVar5 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar5 + 0x10) == 0) {
        uVar6 = (**(code **)**(undefined8 **)(lVar5 + 0x18))();
        *(undefined8 *)(lVar5 + 0x10) = uVar6;
      }
      piVar1 = (int *)(lVar5 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar5 = local_30[0xb];
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
      (**(code **)(*local_30 + 0x20))(local_30);
    }
  }
  return;
}


