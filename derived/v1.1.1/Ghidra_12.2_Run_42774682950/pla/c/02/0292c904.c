/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292c904; name: FUN_0292c904
 */


void FUN_0292c904(long param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  char *pcVar6;
  undefined1 uVar7;
  long *local_28;
  
  pcVar6 = (char *)param_2[1];
  if (*pcVar6 == '\0') {
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_0292d3a4(param_1 + 0x38,param_3);
      *(undefined1 *)(param_1 + 0x26) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(undefined1 *)(param_1 + 0x25) = 0;
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar2 != 0)) {
      local_28 = (long *)FUN_00938550();
      puVar1 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_28);
      FUN_00100250(PTR_LAB_0437a8d8,puVar1,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    plVar5 = *(long **)PTR_DAT_0437a7d0;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
    plVar4 = *(long **)(param_1 + 0x18);
    *(long **)(param_1 + 0x18) = plVar5;
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x20))();
    }
    uVar7 = 0;
    goto LAB_0292ca28;
  }
  if (*(int *)(param_1 + 0x88) == 0) {
LAB_0292c978:
    if (((*PTR_DAT_04379cd0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_04379d08,PTR_DAT_04379cd8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379cd0);
    }
    uVar3 = *(undefined8 *)PTR_DAT_04379cd8;
    *(undefined8 *)PTR_DAT_04379ce0 = uVar3;
    FUN_02a47cd8(&local_28,uVar3,pcVar6);
    plVar5 = local_28;
  }
  else {
    plVar5 = (long *)PTR_DAT_04379c88;
    if (*(long *)(param_1 + 0x18) != 0) {
      plVar5 = (long *)(*(long *)(param_1 + 0x18) + 0x58);
    }
    if (*param_2 == *plVar5) {
      return;
    }
    FUN_0292d3a4(param_1 + 0x38,param_3);
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    pcVar6 = (char *)param_2[1];
    if (*pcVar6 != '\0') goto LAB_0292c978;
    plVar5 = (long *)FUN_00938550();
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
    }
  }
  plVar4 = *(long **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))();
  }
  uVar7 = 1;
  *(long **)(param_1 + 0x18) = plVar5;
LAB_0292ca28:
  *(undefined1 *)(param_1 + 0x24) = uVar7;
  return;
}


