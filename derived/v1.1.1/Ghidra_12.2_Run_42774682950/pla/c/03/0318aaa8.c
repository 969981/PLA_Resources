/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318aaa8; name: FUN_0318aaa8
 */


void FUN_0318aaa8(long param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 *local_50;
  long lStack_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  local_34 = param_4;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_02898b44();
  }
  local_38 = *param_2;
  FUN_0318f5c0(uVar1,&local_38,param_3,param_4);
  local_50 = &local_34;
  lStack_48 = param_1;
  local_40 = param_2;
  FUN_0318ab34(param_1,&local_50);
  return;
}


