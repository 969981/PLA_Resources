/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0097d998; name: FUN_0097d998
 */


void FUN_0097d998(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_28 = 0;
  local_30 = (undefined8 *)0x0;
  FUN_00963eb8(&local_30);
  FUN_00982c5c(param_1,&local_30);
  puVar4 = local_30;
  if (local_30 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_30 + 1);
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
      local_30[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar5 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_18 = *puVar4;
      FUN_02a44274(lVar6 + 0xd8,&local_18);
    }
  }
  *param_1 = &PTR_FUN_041c3ac8;
  param_1[9] = &PTR_LAB_041c3b10;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((long)param_1 + 0x7e) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0x1f;
  *(undefined2 *)((long)param_1 + 0x89) = 0x1f;
  return;
}


