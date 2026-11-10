/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00203b20; name: FUN_00203b20
 */


void FUN_00203b20(void)

{
  if (DAT_0438ec26 == '\x01') {
    (**(code **)(*(long *)PTR_PTR_04372758 + 0x28))();
    DAT_0438ec26 = '\0';
  }
  return;
}


