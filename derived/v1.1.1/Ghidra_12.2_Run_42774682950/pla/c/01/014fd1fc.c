/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014fd1fc; name: FUN_014fd1fc
 */


undefined8 FUN_014fd1fc(long param_1,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  char *local_90;
  long *local_88;
  long local_80;
  long lStack_78;
  long local_70;
  long *local_68;
  char acStack_60 [64];
  
  snprintf(acStack_60,0x40,"button_poke_waza_%02d",param_2);
  local_90 = acStack_60;
  FUN_009313e8(&local_88,&local_90);
  plVar1 = local_88;
  if (local_88 == (long *)0x0) {
    local_80 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_80 = local_88[0xb];
    if (local_88 != (long *)0x0) {
      plVar3 = local_88 + 0xc;
      goto LAB_014fd254;
    }
  }
  plVar3 = (long *)PTR_PTR_04379d00;
LAB_014fd254:
  lStack_78 = *plVar3;
  if (local_88 == (long *)0x0) {
    local_70 = 0;
  }
  else {
    local_70 = local_88[0xd];
  }
  local_68 = (long *)0x0;
  if (local_88 == (long *)0x0) {
    local_68 = local_88;
  }
  else {
    (**(code **)(*local_88 + 0x18))(local_88);
    plVar3 = local_68;
    local_68 = plVar1;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))();
    }
  }
  uVar2 = thunk_FUN_00d2e944(param_1 + 0x180,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  return uVar2;
}


