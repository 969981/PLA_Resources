/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0048dfe0; name: FUN_0048dfe0
 */


long FUN_0048dfe0(long param_1,long param_2)

{
  int iVar1;
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [64];
  
  FUN_00494d70(auStack_60,param_1 + 0x40,param_2);
  FUN_00494d70(auStack_a0,param_2 + 0x40,param_1);
  iVar1 = FUN_004945a0(auStack_60,auStack_a0);
  return (long)iVar1;
}


