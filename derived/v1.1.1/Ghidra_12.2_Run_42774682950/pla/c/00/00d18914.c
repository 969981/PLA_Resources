/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d18914; name: FUN_00d18914
 */


void FUN_00d18914(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined8 *local_30 [2];
  undefined8 local_18;
  
  local_38[0] = 1;
  local_34[0] = 0;
  FUN_00d18a40(local_30,*(undefined8 *)(param_1 + 0x78),(undefined8 *)(param_1 + 0x78),local_34,
               local_38);
  FUN_00d1c274((long *)(param_1 + 0x90),local_30);
  if (local_30[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_30[0] + 1);
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
      local_30[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar4 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_18 = *local_30[0];
      FUN_02a44274(lVar5 + 0xd8,&local_18);
    }
  }
  lVar5 = *(long *)(param_1 + 0x90);
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0xc) == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  return;
}


