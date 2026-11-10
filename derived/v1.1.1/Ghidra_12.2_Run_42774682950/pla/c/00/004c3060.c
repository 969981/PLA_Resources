/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c3060; name: FUN_004c3060
 */


undefined8 FUN_004c3060(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar1 = FUN_00404c40(*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    FUN_00403ee0(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return 1;
}


