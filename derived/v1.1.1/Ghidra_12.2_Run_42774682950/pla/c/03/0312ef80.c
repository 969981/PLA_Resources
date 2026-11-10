/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312ef80; name: _INIT_615
 */


void _INIT_615(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432c80 & 1) == 0) {
    DAT_04432c70 = 0;
    DAT_04432c78 = 0;
    DAT_0444ac08 = &DAT_04432c60;
    DAT_04432c60 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432c68 = &DAT_042e2a08;
    DAT_04432c80 = 1;
  }
  return;
}


