/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332145c; name: FUN_0332145c
 */


undefined8 * FUN_0332145c(long param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1 = (undefined8 *)FUN_032cf5b0(0x28);
    *puVar1 = &PTR_LAB_0434fe80;
    puVar1[1] = param_1;
    FUN_032d645c(param_1);
    puVar1[2] = 0;
    puVar1[3] = 0x8000000000000000;
    puVar1[4] = 0xffffffffffffffff;
  }
  return puVar1;
}


