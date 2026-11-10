/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0224de10; name: FUN_0224de10
 */


void FUN_0224de10(long *param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  pcVar8 = (code *)*param_1;
  plVar2 = (long *)(param_2 + (param_1[1] >> 1));
  if ((param_1[1] & 1U) != 0) {
    pcVar8 = *(code **)(pcVar8 + *plVar2);
  }
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_008c4b3c(&local_38,param_3);
  (*pcVar8)(plVar2,&local_38);
  puVar5 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *puVar5;
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  return;
}


