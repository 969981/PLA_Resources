/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033650a0; name: _INIT_1838
 */


void _INIT_1838(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444ff18 & 1) == 0) {
    DAT_0444ff08 = 0;
    DAT_0444ff10 = 0;
    DAT_0444ac08 = &DAT_0444fef8;
    DAT_0444fef8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444ff00 = &DAT_0436b968;
    DAT_0444ff18 = 1;
  }
  return;
}


