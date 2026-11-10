/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03364d50; name: _INIT_1826
 */


void _INIT_1826(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444fd38 & 1) == 0) {
    DAT_0444fd28 = 0;
    DAT_0444fd30 = 0;
    DAT_0444ac08 = &DAT_0444fd18;
    DAT_0444fd18 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444fd20 = &DAT_0436aea8;
    DAT_0444fd38 = 1;
  }
  return;
}


