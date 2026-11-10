/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c38c0; name: _INIT_7
 */


void _INIT_7(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_043725a0;
  puVar1 = PTR_DAT_04372598;
  if ((*PTR_DAT_04372598 & 1) == 0) {
    *(undefined8 *)PTR_DAT_043725a0 = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


