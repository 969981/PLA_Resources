/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03271d60; name: _INIT_1264
 */


void _INIT_1264(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443cf48 & 1) == 0) {
    DAT_0443cf38 = 0;
    DAT_0443cf40 = 0;
    DAT_0444ac08 = &DAT_0443cf28;
    DAT_0443cf28 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443cf30 = &DAT_0432d970;
    DAT_0443cf48 = 1;
  }
  return;
}


