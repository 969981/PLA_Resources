/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087c028; name: FUN_0087c028
 */


uint FUN_0087c028(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 1);
  uVar2 = (uint)param_1;
  return uVar2 & 0x20 |
         uVar2 >> 3 & 2 | uVar1 & 4 | uVar2 & 1 | (uVar1 & 1) << 3 | (uVar2 >> 2 & 1) << 4;
}


