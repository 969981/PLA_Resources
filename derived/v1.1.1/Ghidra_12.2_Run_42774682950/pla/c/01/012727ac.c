/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012727ac; name: FUN_012727ac
 */


void FUN_012727ac(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  char *pcVar5;
  long *local_38;
  long *local_30;
  long *local_28;
  
  FUN_01272c24(&local_28,param_1,0);
  local_30 = local_28;
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  FUN_01252504(param_1 + 0xab0,&local_30);
  if (local_30 != (long *)0x0) {
    (**(code **)(*local_30 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (*(long *)(param_1 + 0xa10) == 0) {
    puVar4 = (undefined8 *)PTR_PTR_04379d00;
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 0xa10) + 0x60);
  }
  pcVar5 = (char *)*puVar4;
  if (*pcVar5 == '\0') {
    plVar3 = (long *)FUN_00938550();
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  else {
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar2 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar2;
    FUN_02a47cd8(&local_28,uVar2,pcVar5);
    plVar3 = local_28;
  }
  local_38 = plVar3;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  FUN_01252504(param_1 + 0xab0,&local_38);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  return;
}


