/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025feca4; name: FUN_025feca4
 */


void FUN_025feca4(undefined8 *param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  plVar2 = (long *)0x0;
  if (*(long *)(param_2 + 0x208) != 0) {
    plVar2 = (long *)(*(long *)(param_2 + 0x208) + 0x68);
  }
  (**(code **)(*plVar2 + 0x20))(local_38,plVar2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01800100(param_1,local_38);
  if (local_38[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38[0] + 1);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      local_38[0][2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *local_38[0];
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  param_1[2] = plVar2;
  return;
}


