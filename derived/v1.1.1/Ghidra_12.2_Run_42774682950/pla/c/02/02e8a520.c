/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8a520; name: _INIT_472
 */


void _INIT_472(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_04388798;
  puVar1 = PTR_DAT_04388790;
  if ((*PTR_DAT_04388798 & 1) == 0) {
    *(undefined4 *)PTR_DAT_04388790 = 0;
    *(undefined8 *)(puVar1 + 8) = 0;
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)puVar2 = 1;
  }
  return;
}


