/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c25c8; name: FUN_013c25c8
 */


void FUN_013c25c8(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *local_28;
  
  local_28 = *(long **)(param_1 + 0x5c8);
  if (local_28 == (long *)0x0) {
    return;
  }
  lVar6 = local_28[0x16];
  if (lVar6 != 0) {
    local_28[0x16] = lVar6 + (lVar6 * 0x78 >> 3) * 0x1111111111111111;
    local_28 = *(long **)(param_1 + 0x5c8);
    if (local_28 == (long *)0x0) goto LAB_013c2650;
  }
  lVar6 = local_28[0xb];
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
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_013c2650:
  FUN_013be240(param_2,&local_28);
  if (local_28 != (long *)0x0) {
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
      (**(code **)(*local_28 + 0x20))();
    }
  }
  FUN_013c26cc(param_1);
  return;
}


