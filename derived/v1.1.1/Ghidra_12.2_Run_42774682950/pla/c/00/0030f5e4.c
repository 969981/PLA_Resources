/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f5e4; name: FUN_0030f5e4
 */


long FUN_0030f5e4(long param_1,undefined8 param_2)

{
  size_t sVar1;
  char acStack_a0 [127];
  undefined1 local_21;
  
  snprintf(acStack_a0,0x80,"%lu",param_2);
  local_21 = 0;
  sVar1 = strlen(acStack_a0);
  FUN_002e4094(param_1 + 0x18,acStack_a0,sVar1);
  return param_1;
}


