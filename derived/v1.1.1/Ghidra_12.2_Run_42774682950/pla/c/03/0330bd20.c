/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330bd20; name: _INIT_1640
 */


void _INIT_1640(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444af88 & 1) == 0) {
    DAT_0444af78 = 0;
    DAT_0444af80 = 0;
    DAT_0444ac08 = &DAT_0444af68;
    DAT_0444af68 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444af70 = &DAT_0434f1c0;
    DAT_0444af88 = 1;
  }
  return;
}


