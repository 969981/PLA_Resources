/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0126897c; name: FUN_0126897c
 */


void FUN_0126897c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_041ffd88;
  param_1[9] = (long)&PTR_LAB_041ffdd8;
  param_1[10] = (long)&PTR_LAB_041ffe20;
  if ((long *)param_1[0x1c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1c] + 0x20))();
  }
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 0x20))();
  }
  FUN_01268bb8(param_1 + 0x13);
  FUN_00936104(param_1 + 0xd);
  puVar1 = PTR_DAT_04379610 + 0x58;
  puVar2 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  puVar8 = (undefined8 *)param_1[0xb];
  if (puVar8 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar8 + 1);
    do {
      iVar6 = *piVar3;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar3,0x10);
      if (bVar5) {
        *piVar3 = iVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar6 + -1 == 0) {
      puVar8[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_18 = *puVar8;
      FUN_02a44274(lVar7 + 0xd8,&local_18);
    }
  }
  return;
}


