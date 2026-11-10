/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03277e10; name: _INIT_1437
 */


void _INIT_1437(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ea50 & 1) == 0) {
    DAT_0443ea40 = 0;
    DAT_0443ea48 = 0;
    DAT_0444ac08 = &DAT_0443ea30;
    DAT_0443ea30 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ea38 = &DAT_04339338;
    DAT_0443ea50 = 1;
  }
  return;
}


