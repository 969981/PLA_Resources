/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019767bc; name: FUN_019767bc
 */


undefined8 FUN_019767bc(undefined8 *param_1)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long *plStack_28;
  
  if ((*PTR_DAT_0437a780 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437a780);
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar3;
  local_40 = *param_1;
  local_38 = param_1[1];
  local_30 = param_1[2];
  plVar1 = (long *)param_1[3];
  plStack_28 = plVar1;
  if (plVar1 == (long *)0x0) {
    uVar3 = FUN_01e65b28(uVar3,&local_40);
  }
  else {
    (**(code **)(*plVar1 + 0x18))(plVar1);
    uVar3 = FUN_01e65b28(uVar3,&local_40);
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return uVar3;
}


