/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274020; name: _INIT_1340
 */


void _INIT_1340(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443db28 & 1) == 0) {
    DAT_0443db18 = 0;
    DAT_0443db20 = 0;
    DAT_0444ac08 = &DAT_0443db08;
    DAT_0443db08 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443db10 = &DAT_043330a0;
    DAT_0443db28 = 1;
  }
  return;
}


