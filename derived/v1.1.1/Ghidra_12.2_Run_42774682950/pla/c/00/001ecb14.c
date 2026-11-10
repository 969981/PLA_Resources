/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ecb14; name: FUN_001ecb14
 */


undefined4 FUN_001ecb14(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  char *__s;
  size_t sVar2;
  undefined8 *puVar3;
  undefined1 auStack_f0 [128];
  
  puVar3 = (undefined8 *)*param_1;
  __s = (char *)FUN_001e66b8(param_2,auStack_f0 + 0x80);
  if (__s == (char *)0x0) {
    FUN_002044d4(*puVar3);
    FUN_002044d4(puVar3);
    *param_1 = 0;
    uVar1 = 0x1b;
  }
  else {
    sVar2 = strlen(__s);
    uVar1 = FUN_001ecbe4(param_1,__s,sVar2);
    FUN_002044d4(__s);
  }
  return uVar1;
}


