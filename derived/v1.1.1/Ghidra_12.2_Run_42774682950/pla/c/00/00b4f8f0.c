/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b4f8f0; name: FUN_00b4f8f0
 */


undefined8 FUN_00b4f8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *__s;
  size_t sVar1;
  
  __s = (char *)FUN_00b4f960();
  FUN_0014ff10(param_3,0);
  if (__s == (char *)0x0) {
    FUN_00151490(param_3);
  }
  else {
    sVar1 = strlen(__s);
    FUN_001514f0(param_3,__s,sVar1);
  }
  return 1;
}


