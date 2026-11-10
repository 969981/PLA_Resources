/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da4770; name: FUN_00da4770
 */


void FUN_00da4770(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  lVar5 = *param_1;
  FUN_02a75858(&local_48,*(long *)(lVar5 + 0x88),*(undefined8 *)(*(long *)(lVar5 + 0x88) + 0x250));
  *(undefined8 *)(lVar5 + 0xb0) = local_48;
  FUN_008802f0(lVar5 + 0xb8,local_40);
  if (local_40[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40[0] + 1);
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
      local_40[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar4 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar5 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar5;
      local_28 = *local_40[0];
      FUN_02a44274(lVar5 + 0xd8,&local_28);
    }
  }
  FUN_00da48cc(param_1[1]);
  return;
}


