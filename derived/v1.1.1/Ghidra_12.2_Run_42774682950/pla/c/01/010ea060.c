/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ea060; name: FUN_010ea060
 */


void FUN_010ea060(long param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x68) = 2;
  FUN_00d15530();
  uVar1 = FUN_00d15d48();
  *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) & 3 | (uVar1 & 0xf) << 2 | 0x2a31ddc0;
  return;
}


