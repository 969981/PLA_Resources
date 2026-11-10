/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03243540; name: _INIT_913
 */


void _INIT_913(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438ba8 & 1) == 0) {
    DAT_04438b98 = 0;
    DAT_04438ba0 = 0;
    DAT_0444ac08 = &DAT_04438b88;
    DAT_04438b88 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438b90 = &DAT_0430fe50;
    DAT_04438ba8 = 1;
  }
  return;
}


