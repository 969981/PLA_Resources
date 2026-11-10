/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318aeac; name: FUN_0318aeac
 */


undefined8 FUN_0318aeac(long param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 *local_30;
  undefined4 local_24;
  
  local_24 = param_2;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = FUN_02898b44();
  }
  uVar1 = FUN_0318fc9c(uVar1,param_2);
  local_30 = &local_24;
  FUN_0318af1c(param_1,&local_30);
  return uVar1;
}


