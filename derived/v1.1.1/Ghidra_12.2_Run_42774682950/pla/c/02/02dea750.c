/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dea750; name: _INIT_439
 */


void _INIT_439(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_043885d8;
  puVar1 = PTR_DAT_043885d0;
  if ((*PTR_DAT_043885d0 & 1) == 0) {
    *(undefined4 *)PTR_DAT_043885d8 = 0;
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)puVar1 = 1;
  }
  return;
}


