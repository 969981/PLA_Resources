/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d3568; name: FUN_013d3568
 */


undefined8 FUN_013d3568(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x5d0);
  if (((uint)uVar1 >> 5 & 1) == 0) {
    if (((uint)uVar1 >> 6 & 1) == 0) {
      return 0;
    }
    *(ulong *)(param_1 + 0x5d0) = uVar1 & 0xffffffffffffffbf;
    FUN_013d36ac();
  }
  else {
    *(ulong *)(param_1 + 0x5d0) = uVar1 & 0xffffffffffffffdf;
    FUN_013d35b0();
  }
  return 1;
}


