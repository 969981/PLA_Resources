/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bfc81c; name: FUN_01bfc81c
 */


void FUN_01bfc81c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *local_40;
  undefined8 local_38;
  undefined8 local_28;
  
  local_38 = 0;
  local_40 = (undefined8 *)0x0;
  FUN_019ec938(&local_40);
  FUN_01a069a4(param_1,&local_40);
  puVar5 = local_40;
  if (local_40 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_40 + 1);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      local_40[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar6 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  puVar4 = PTR_DAT_04382818;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[0x49] = (long)(puVar4 + 0x220);
  param_1[9] = (long)(puVar4 + 0x118);
  param_1[10] = (long)(puVar4 + 0x1f8);
  FUN_00cf9b38(param_1 + 0x4e,param_3);
  param_1[0x51] = 0;
  param_1[0x50] = 0;
  FUN_00d828bc(param_1 + 0x50,param_4);
  param_1[0x53] = 0;
  param_1[0x52] = 0;
  return;
}


