/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01914998; name: FUN_01914998
 */


void FUN_01914998(long *param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  
  puVar5 = PTR_DAT_043794d8;
  if (*(int *)(param_2 + 0xc) != 0) {
    piVar1 = (int *)(param_2 + 0xc);
    iVar8 = *(int *)(param_2 + 0xc);
    while ((puVar9 = *(undefined8 **)(param_2 + 0x10), (DAT_043d1b28 & 1) != 0 ||
           (iVar6 = __cxa_guard_acquire(&DAT_043d1b28), iVar6 == 0))) {
      while( true ) {
        if (puVar9 == (undefined8 *)0x0) goto LAB_01914a38;
LAB_019149ec:
        if ((undefined **)puVar9 == &DAT_043d1b20) break;
        puVar9 = (undefined8 *)*puVar9;
      }
      iVar6 = *piVar1;
      if (iVar6 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar2 = 0;
          if (*(long *)(param_2 + 0x18) != 0) {
            lVar2 = *(long *)(param_2 + 0x18) + -0x50;
          }
          *param_1 = lVar2;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar8 = iVar6;
      if (iVar6 == 0) goto LAB_01914a38;
    }
    if (((*PTR_DAT_043794d0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
      uVar7 = FUN_0087f8f0();
      *(undefined8 *)puVar5 = uVar7;
      __cxa_guard_release(PTR_DAT_043794d0);
    }
    DAT_043d1b20 = puVar5;
    __cxa_guard_release(&DAT_043d1b28);
    if (puVar9 != (undefined8 *)0x0) goto LAB_019149ec;
  }
LAB_01914a38:
  *param_1 = 0;
  return;
}


