/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e460; name: _INIT_571
 */


void _INIT_571(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04388a88;
  puVar1 = PTR_DAT_04388a80;
  if ((*PTR_DAT_04388a80 & 1) == 0) {
    *(undefined4 *)(PTR_DAT_04388a88 + 8) = 1;
    *(undefined ***)puVar2 = &PTR_LAB_042dff00;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


