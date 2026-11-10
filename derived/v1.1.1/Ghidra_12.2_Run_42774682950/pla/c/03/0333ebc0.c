/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333ebc0; name: _INIT_1668
 */


void _INIT_1668(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0444b638 & 1) == 0) {
    DAT_0444b628 = 0;
    DAT_0444b630 = 0;
    DAT_0444ac08 = &DAT_0444b618;
    DAT_0444b618 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0444b620 = &DAT_04351070;
    DAT_0444b638 = 1;
  }
  return;
}


