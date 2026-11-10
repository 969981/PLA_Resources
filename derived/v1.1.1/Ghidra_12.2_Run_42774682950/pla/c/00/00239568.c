/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00239568; name: FUN_00239568
 */


void FUN_00239568(long param_1)

{
  ushort uVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = 0;
  uVar1 = FUN_00227728();
  *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) & 0xfffffff0;
  *(float *)(param_1 + 0x20) = (float)uVar1;
  return;
}


