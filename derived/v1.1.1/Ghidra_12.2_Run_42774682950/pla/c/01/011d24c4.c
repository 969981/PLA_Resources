/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d24c4; name: FUN_011d24c4
 */


void FUN_011d24c4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379690), iVar4 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar5 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar5;
  lVar5 = *(long *)(*(long *)(*(long *)(lVar5 + 0x50) + 0x2d10) + 8);
  if (lVar5 == 0) {
    *param_1 = 0;
  }
  else {
    plVar6 = *(long **)(lVar5 + 0x48);
    if (plVar6 != (long *)0x0) {
      FUN_02a439f4(plVar6[0xb]);
    }
    lVar5 = plVar6[0xd];
    *param_1 = lVar5;
    if (lVar5 != 0) {
      piVar1 = (int *)(lVar5 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    lVar5 = plVar6[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x011d257c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x20))(plVar6);
      return;
    }
  }
  return;
}


