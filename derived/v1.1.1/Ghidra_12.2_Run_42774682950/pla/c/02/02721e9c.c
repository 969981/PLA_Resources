/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02721e9c; name: FUN_02721e9c
 */


void FUN_02721e9c(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_0271e8cc(&local_38,param_3);
  FUN_0271dd7c(param_1,param_2,&local_38);
  puVar4 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  *param_1 = &PTR_FUN_0426b058;
  param_1[9] = &PTR_LAB_0426b0f0;
  param_1[10] = &PTR_LAB_0426b138;
  return;
}


