/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01504168; name: FUN_01504168
 */


void FUN_01504168(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long *local_28;
  
  FUN_015051c0(&local_40,*(undefined8 *)(param_1 + 8));
  uVar1 = local_40;
  local_40 = 0;
  lVar2 = *(long *)(param_1 + 0x5c0);
  *(undefined8 *)(param_1 + 0x5c0) = uVar1;
  if (lVar2 == 0) {
    *(long **)(param_1 + 0x5d8) = local_28;
  }
  else {
    FUN_01508450(param_1 + 0x5c8);
    *(long **)(param_1 + 0x5d8) = local_28;
    uVar1 = *(undefined8 *)(param_1 + 0x5c0);
  }
  *(undefined8 *)(param_1 + 0x5d0) = local_30;
  *(char **)(param_1 + 0x5c8) = local_38;
  local_40 = 0x2eac95f716d976fd;
  local_38 = "L_info_basedata_00";
  local_30 = 0x12;
  local_28 = (long *)0x0;
  thunk_FUN_014efa78(uVar1,&local_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


