/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0167a178; name: FUN_0167a178
 */


void FUN_0167a178(undefined8 *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  long *local_28;
  
  FUN_0199ce80(&local_38,*param_1);
  if (CONCAT44(uStack_34,local_38) == 0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_0095a2ac(&local_28);
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_02a43934();
    }
  }
  if (local_28 != (long *)0x0) {
    uVar2 = FUN_026bf324();
    plVar1 = local_28;
    if ((uVar2 & 1) != 0) {
      FUN_026bf63c(local_28);
      plVar1 = local_28;
    }
    local_28 = plVar1;
    if ((plVar1 != (long *)0x0) && (uVar2 = FUN_02a43a5c(plVar1[0xb]), (uVar2 & 1) != 0)) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  FUN_0199d14c(&local_38,*param_1);
  if (CONCAT44(uStack_34,local_38) == 0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_00959d38(&local_28);
    if (CONCAT44(uStack_34,local_38) != 0) {
      FUN_02a43934();
    }
  }
  if (local_28 != (long *)0x0) {
    local_38 = 6;
    FUN_02604d38(local_28,&local_38);
    plVar1 = local_28;
    if ((local_28 != (long *)0x0) && (uVar2 = FUN_02a43a5c(local_28[0xb]), (uVar2 & 1) != 0)) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
    }
  }
  return;
}


