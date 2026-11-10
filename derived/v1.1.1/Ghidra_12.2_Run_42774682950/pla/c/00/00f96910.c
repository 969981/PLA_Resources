/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f96910; name: FUN_00f96910
 */


void FUN_00f96910(undefined8 param_1,undefined8 param_2)

{
  char *__s;
  size_t sVar1;
  undefined8 local_28;
  
  local_28 = 0;
  __s = (char *)FUN_00f96980(param_1,&local_28,param_2);
  FUN_0014ff10(param_1,0);
  if (__s == (char *)0x0) {
    FUN_00151490(param_1);
    return;
  }
  sVar1 = strlen(__s);
  FUN_001514f0(param_1,__s,sVar1);
  return;
}


