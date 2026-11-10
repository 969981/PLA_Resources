/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db76fc; name: FUN_00db76fc
 */


void FUN_00db76fc(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_30 [8];
  long local_28;
  
  plVar5 = *(long **)(*(long *)(param_1 + 0xc0) + *(long *)(param_1 + 200) * 8 + -8);
  if ((int)plVar5[0xe] != 4) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
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
  uVar7 = *(long *)(param_1 + 200) - 1;
  *(ulong *)(param_1 + 200) = uVar7;
  if (uVar7 < *(ulong *)(param_1 + 0xd0)) {
    FUN_00db80cc(param_1 + 0xa0,*(long *)(param_1 + 0xc0) + uVar7 * 8,param_1 + 0x70);
    *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 1;
  }
  else {
    local_28 = *(long *)(param_1 + 0xc0) + uVar7 * 8;
    FUN_00db81ac(auStack_30,param_1 + 0xa0,&local_28,1);
  }
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x6b) = 0;
  return;
}


