/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032742a0; name: _INIT_1350
 */


void _INIT_1350(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443dcb8 & 1) == 0) {
    DAT_0443dca8 = 0;
    DAT_0443dcb0 = 0;
    DAT_0444ac08 = &DAT_0443dc98;
    DAT_0443dc98 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443dca0 = &DAT_04333b98;
    DAT_0443dcb8 = 1;
  }
  return;
}


