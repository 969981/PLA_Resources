/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f78ce0; name: FUN_00f78ce0
 */


void FUN_00f78ce0(undefined8 param_1)

{
  char *__s;
  size_t sVar1;
  undefined1 *local_28;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = &LAB_00f78bc8;
  __s = (char *)FUN_00f78bf0(param_1,&local_28);
  FUN_0014ff10(param_1,0);
  if (__s == (char *)0x0) {
    FUN_00151490(param_1);
  }
  else {
    sVar1 = strlen(__s);
    FUN_001514f0(param_1,__s,sVar1);
  }
  return;
}


