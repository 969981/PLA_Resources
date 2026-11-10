/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01214e4c; name: FUN_01214e4c
 */


void FUN_01214e4c(long param_1)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long *local_28;
  
  puVar1 = (undefined4 *)FUN_00d49e68();
  local_48 = *puVar1;
  local_40 = *(undefined8 *)(puVar1 + 2);
  local_38 = *(undefined8 *)(puVar1 + 4);
  local_30 = *(undefined8 *)(puVar1 + 6);
  local_28 = *(long **)(puVar1 + 8);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x18))();
  }
  local_48._0_2_ = 0x101;
  if (**(int **)(param_1 + 0x1648) == 1) {
    uVar3 = 0;
    uVar2 = 1;
  }
  else if (**(int **)(param_1 + 0x1648) == 2) {
    uVar3 = 0;
    uVar2 = 0;
    local_48._0_2_ = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 1;
  }
  local_48 = CONCAT13(uVar2,CONCAT12(uVar3,(undefined2)local_48));
  FUN_00d49e70(param_1,&local_48);
  FUN_01214dc8(param_1);
  FUN_00d5172c(param_1,0,3);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


