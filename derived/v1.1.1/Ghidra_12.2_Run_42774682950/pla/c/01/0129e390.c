/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0129e390; name: FUN_0129e390
 */


void FUN_0129e390(long param_1)

{
  long *plVar1;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [24];
  long *local_28;
  
  *(undefined4 *)(param_1 + 0x5d0) = 10;
  local_58 = 0x8cdefba04317434b;
  local_50 = "grid_lansel";
  uStack_48 = 0xb;
  FUN_02a4754c(auStack_40,&local_58);
  plVar1 = (long *)thunk_FUN_00d2ec48(param_1 + 0x180,auStack_40);
  if (local_28 != (long *)0x0) {
    (**(code **)(*local_28 + 0x20))();
  }
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x58))(plVar1);
  }
  FUN_00d428b0(param_1,0);
  FUN_00d42438(param_1,1,1);
  return;
}


