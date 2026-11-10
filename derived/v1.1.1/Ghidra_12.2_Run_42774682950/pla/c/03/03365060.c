/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03365060; name: _INIT_1837
 */


void _INIT_1837(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fef0 & 1) == 0) {
    DAT_0444fee0 = 0;
    DAT_0444fee8 = 0;
    DAT_0444ac08 = &DAT_0444fed0;
    DAT_0444fed0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fed8 = &DAT_0436b8b0;
    DAT_0444fef0 = 1;
  }
  return;
}


