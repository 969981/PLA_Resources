/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002346f8; name: FUN_002346f8
 */


void FUN_002346f8(long param_1,undefined8 param_2)

{
  char acStack_a8 [136];
  
  nn::util::SNPrintf(acStack_a8,0x88,"%s_%s.bflan",*(undefined8 *)(param_1 + 0x30),param_2);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x50))
            (*(long **)(param_1 + 0x40),0x616e696d,acStack_a8);
  return;
}


