/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032443a0; name: _INIT_943
 */


void _INIT_943(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439058 & 1) == 0) {
    DAT_04439048 = 0;
    DAT_04439050 = 0;
    DAT_0444ac08 = &DAT_04439038;
    DAT_04439038 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439040 = &DAT_04311a78;
    DAT_04439058 = 1;
  }
  return;
}


