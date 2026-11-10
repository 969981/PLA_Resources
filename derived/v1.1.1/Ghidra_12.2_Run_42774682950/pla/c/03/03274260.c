/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03274260; name: _INIT_1349
 */


void _INIT_1349(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443dc90 & 1) == 0) {
    DAT_0443dc80 = 0;
    DAT_0443dc88 = 0;
    DAT_0444ac08 = &DAT_0443dc70;
    DAT_0443dc70 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443dc78 = &DAT_04333a68;
    DAT_0443dc90 = 1;
  }
  return;
}


