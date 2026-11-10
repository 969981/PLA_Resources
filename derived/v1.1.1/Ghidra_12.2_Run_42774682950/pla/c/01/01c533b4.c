/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c533b4; name: FUN_01c533b4
 */


void FUN_01c533b4(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  code *pcVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  
  *param_1 = &PTR_FUN_0424c0f0;
  param_1[9] = &PTR_LAB_0424c250;
  param_1[10] = &PTR_LAB_0424c330;
  param_1[0x3f] = &PTR_LAB_0424c358;
  pcVar5 = (code *)param_1[0xcd];
  param_1[0x49] = &PTR_LAB_0424c3a8;
  if (pcVar5 != (code *)0x0) {
    param_1[0xcf] = 0;
    param_1[0xce] = 0;
    param_1[0xcd] = 0;
    param_1[0xcc] = 0;
    (*pcVar5)(param_1 + 0xd0);
  }
  FUN_01c54198(param_1 + 0xc5,param_1[0xc6]);
  FUN_01c542d8(param_1 + 0xbc);
  FUN_01c542d8(param_1 + 0xb5);
  puVar7 = (undefined8 *)param_1[0xb3];
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
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
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar6 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar6;
      local_28 = *puVar7;
      FUN_02a44274(lVar6 + 0xd8,&local_28);
    }
  }
  FUN_01b5c158(param_1);
  return;
}


