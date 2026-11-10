/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01442514; name: FUN_01442514
 */


bool FUN_01442514(float param_1,long param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  long local_50;
  long lStack_48;
  long local_40;
  long *local_38;
  long *local_28;
  
  if (**(char **)(param_2 + 0x150) == '\0') {
    return true;
  }
  FUN_014417ec(&local_28,param_2 + 0x148);
  plVar1 = local_28;
  if (local_28 == (long *)0x0) {
    local_50 = *(long *)PTR_DAT_04379c88;
  }
  else {
    local_50 = local_28[0xb];
    if (local_28 != (long *)0x0) {
      lStack_48 = local_28[0xc];
      goto joined_r0x0144261c;
    }
  }
  lStack_48 = *(long *)PTR_PTR_04379d00;
joined_r0x0144261c:
  if (local_28 == (long *)0x0) {
    local_40 = 0;
  }
  else {
    local_40 = local_28[0xd];
  }
  local_38 = (long *)0x0;
  if (local_28 == (long *)0x0) {
    local_38 = local_28;
  }
  else {
    (**(code **)(*local_28 + 0x18))(local_28);
    local_38 = plVar1;
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x20))();
    }
  }
  fVar2 = (float)FUN_0283b914(*(undefined8 *)(param_2 + 0x58),&local_50);
  fVar3 = fVar2;
  if (param_1 <= fVar2) {
    fVar3 = param_1;
  }
  FUN_0283b748(fVar3,*(undefined8 *)(param_2 + 0x58),&local_50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return fVar2 <= param_1;
}


