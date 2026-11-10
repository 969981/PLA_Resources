/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031297f0; name: _INIT_496
 */


void _INIT_496(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_043888f0;
  puVar1 = PTR_DAT_043888e8;
  if ((*PTR_DAT_043888e8 & 1) == 0) {
    *(undefined4 *)(PTR_DAT_043888f0 + 8) = 1;
    puVar3 = PTR_DAT_043888f8;
    *(undefined8 *)puVar1 = 1;
    *(undefined **)puVar2 = puVar3 + 0x10;
  }
  return;
}


