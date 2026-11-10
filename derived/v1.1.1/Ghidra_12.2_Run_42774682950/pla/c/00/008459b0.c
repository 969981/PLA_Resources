/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008459b0; name: FUN_008459b0
 */


void FUN_008459b0(undefined8 param_1)

{
  undefined1 local_d0 [128];
  
  nn::util::VSNPrintf(&DAT_043a55d8,0x200,param_1,local_d0 + 0x80);
  if (*(code **)PTR_DAT_04377fe8 != (code *)0x0) {
    (**(code **)PTR_DAT_04377fe8)(&DAT_043a55d8);
  }
  return;
}


