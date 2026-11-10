/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0180e9f4; name: FUN_0180e9f4
 */


void FUN_0180e9f4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  code *pcVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_18;
  
  *param_1 = (long)&PTR_FUN_04226b48;
  param_1[9] = (long)&PTR_LAB_04226ba8;
  param_1[10] = (long)&PTR_LAB_04226bf0;
  FUN_0180f4d8(param_1 + 0x24);
  pcVar7 = (code *)param_1[0x15];
  if (pcVar7 != (code *)0x0) {
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    (*pcVar7)(param_1 + 0x18);
  }
  FUN_00936104(param_1 + 0xe);
  puVar1 = PTR_DAT_04379610 + 0x58;
  puVar2 = PTR_DAT_04379610 + 0xa0;
  *param_1 = (long)(PTR_DAT_04379610 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  puVar9 = (undefined8 *)param_1[0xb];
  if (puVar9 != (undefined8 *)0x0) {
    piVar3 = (int *)(puVar9 + 1);
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
      puVar9[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_18 = *puVar9;
      FUN_02a44274(lVar8 + 0xd8,&local_18);
    }
  }
  return;
}


