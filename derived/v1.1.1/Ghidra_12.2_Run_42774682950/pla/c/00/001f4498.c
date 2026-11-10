/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f4498; name: FUN_001f4498
 */


undefined8 FUN_001f4498(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [128];
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    uVar1 = FUN_001f450c(param_1,param_2,auStack_d0 + 0x80);
  }
  return uVar1;
}


