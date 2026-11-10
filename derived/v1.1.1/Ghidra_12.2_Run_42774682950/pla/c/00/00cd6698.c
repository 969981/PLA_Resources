/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00cd6698; name: FUN_00cd6698
 */


uint FUN_00cd6698(undefined4 param_1,uint param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  if ((*PTR_DAT_0437a708 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_0437a708);
    if (iVar6 != 0) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
  }
  uVar7 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar7;
  uVar7 = FUN_010ab0e0(uVar7,param_1,param_2 & 1,param_3 & 1);
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  FUN_00cdadc0(&local_38,param_4);
  uVar5 = FUN_00cd6258(uVar7,&local_38);
  puVar4 = local_38;
  if (local_38 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38 + 1);
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
      local_38[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_28 = *puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_28);
    }
  }
  return uVar5 & 1;
}


