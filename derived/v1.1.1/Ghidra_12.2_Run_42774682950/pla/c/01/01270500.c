/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01270500; name: FUN_01270500
 */


void FUN_01270500(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_28;
  long local_18;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  FUN_011cfd48(&local_18,local_28,&DAT_03a7a3d0,&local_28);
  plVar5 = *(long **)(param_1 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5b0) = 0;
  if (plVar5 != (long *)0x0) {
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(long *)(param_1 + 0x5b0) = local_18;
  if (local_18 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


