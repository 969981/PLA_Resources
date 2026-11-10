/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318a9b0; name: FUN_0318a9b0
 */


void FUN_0318a9b0(long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 *local_38;
  undefined4 local_24;
  
  local_24 = param_3;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_02898b44();
  }
  FUN_0318f32c(uVar1,param_2,param_3);
  local_38 = &local_24;
  FUN_0318aa28(param_1,&local_38);
  return;
}


