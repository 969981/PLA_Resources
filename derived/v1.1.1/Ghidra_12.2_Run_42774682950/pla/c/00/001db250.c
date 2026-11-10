/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001db250; name: _INIT_19
 */


void _INIT_19(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_043726f0;
  if ((*PTR_DAT_043726f0 & 1) == 0) {
    FUN_032f750c(PTR_DAT_043726f8,PTR_DAT_04372700);
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


