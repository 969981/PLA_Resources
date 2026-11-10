/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5c954; name: FUN_01a5c954
 */


bool FUN_01a5c954(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01a5badc(param_1,param_1 + 0x450);
  return 0xfffffffeffffffff < uVar1 && (uVar1 & 0xff) != 0;
}


