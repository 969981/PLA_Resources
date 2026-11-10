/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ed0f4; name: FUN_010ed0f4
 */


bool FUN_010ed0f4(long param_1,uint param_2)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = *(uint *)(param_1 + 0x454);
  fVar2 = exp2f((float)param_2);
  return (uVar1 & (int)fVar2) != 0;
}


