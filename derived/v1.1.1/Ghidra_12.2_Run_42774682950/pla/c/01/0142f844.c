/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0142f844; name: FUN_0142f844
 */


void FUN_0142f844(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char *local_70;
  long lStack_68;
  long local_60;
  long *local_58;
  char acStack_50 [32];
  long *local_28;
  
  snprintf(acStack_50,0x20,"anime_L_icon_marking_%02d",param_2);
  local_70 = acStack_50;
  FUN_0121f9f4(&local_28,&local_70,
               (long)*(int *)(param_1 + (long)param_2 * 4 + 0x5b0) * 8 + 0x420f650);
  plVar1 = local_28;
  if (local_28 == (long *)0x0) {
    local_70 = *(char **)PTR_DAT_04379c88;
  }
  else {
    local_70 = (char *)local_28[0xb];
    if (local_28 != (long *)0x0) {
      plVar2 = local_28 + 0xc;
      goto LAB_0142f8b8;
    }
  }
  plVar2 = (long *)PTR_PTR_04379d00;
LAB_0142f8b8:
  lStack_68 = *plVar2;
  if (local_28 == (long *)0x0) {
    local_60 = 0;
  }
  else {
    local_60 = local_28[0xd];
  }
  local_58 = (long *)0x0;
  if (local_28 == (long *)0x0) {
    local_58 = local_28;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    plVar2 = local_58;
    local_58 = plVar1;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x20))();
    }
  }
  FUN_00d2df7c(param_1 + 0x180,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


