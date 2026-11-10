/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364b10; name: _INIT_1817
 */


void _INIT_1817(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fbd0 & 1) == 0) {
    DAT_0444fbc0 = 0;
    DAT_0444fbc8 = 0;
    DAT_0444ac08 = &DAT_0444fbb0;
    DAT_0444fbb0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fbb8 = &DAT_0436a550;
    DAT_0444fbd0 = 1;
  }
  return;
}


