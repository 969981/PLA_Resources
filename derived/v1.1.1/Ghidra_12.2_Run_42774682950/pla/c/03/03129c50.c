/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03129c50; name: _INIT_513
 */


void _INIT_513(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431ca0 & 1) == 0) {
    DAT_04431c90 = 0;
    DAT_04431c98 = 0;
    DAT_0444ac08 = &DAT_04431c80;
    DAT_04431c80 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431c88 = &DAT_042dc600;
    DAT_04431ca0 = 1;
  }
  return;
}


