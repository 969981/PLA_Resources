/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114fb7c; name: FUN_0114fb7c
 */


void FUN_0114fb7c(int *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 2) != 0) {
    iVar4 = *param_1;
    if (iVar4 - 1U < 3) {
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379558), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      lVar6 = *(long *)PTR_DAT_04379560;
      *(long *)PTR_DAT_04379568 = lVar6;
      FUN_010cee60(*(undefined8 *)(lVar6 + 0x100));
      iVar4 = *param_1;
    }
    if (iVar4 != 0) {
      plVar5 = (long *)FUN_01144ea0();
      lVar6 = *plVar5;
      *(long *)PTR_DAT_0437e4e8 = lVar6;
      if (lVar6 != 0) {
        FUN_01144888();
      }
    }
    plVar5 = *(long **)(param_1 + 2);
    param_1[2] = 0;
    param_1[3] = 0;
    if (plVar5 != (long *)0x0) {
      lVar6 = plVar5[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
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
        *(undefined8 *)(lVar6 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x0114fc40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x20))();
        return;
      }
    }
  }
  return;
}


