/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ad2580; name: FUN_00ad2580
 */


void FUN_00ad2580(long param_1,undefined8 param_2,undefined8 param_3,byte param_4,uint param_5,
                 long param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 *local_58;
  undefined8 uStack_50;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  if (param_6 == 0) {
    param_6 = *(long *)(param_1 + 8);
  }
  plVar6 = (long *)FUN_00ad276c(param_1,param_6,param_3,param_5 & 1);
  FUN_017d3974(plVar6 + 0x4e,param_2);
  *(undefined1 *)(plVar6 + 0x4c) = 1;
  plVar6[0x4b] = 0;
  plVar6[0x4a] = 0;
  *(byte *)((long)plVar6 + 0x2f1) = param_4 & 1;
  (**(code **)(*plVar6 + 0x10))(local_48,plVar6);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  FUN_00ad3450(&local_58,local_48);
  if (local_48[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_48[0] + 1);
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
      local_48[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_38 = *local_48[0];
      FUN_02a44274(lVar7 + 0xd8,&local_38);
    }
  }
  FUN_00ad52f4(param_1 + 0x4c0,&local_58);
  puVar4 = local_58;
  if (local_58 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_58 + 1);
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
      local_58[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_48[0] = (undefined8 *)*puVar4;
      FUN_02a44274(lVar7 + 0xd8,local_48);
    }
  }
  return;
}


