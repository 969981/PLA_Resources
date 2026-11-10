/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001db2a0; name: _INIT_20
 */


void _INIT_20(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04372708;
  if ((*PTR_DAT_04372708 & 1) == 0) {
    FUN_032f750c(PTR_DAT_04372710,PTR_DAT_04372718);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


