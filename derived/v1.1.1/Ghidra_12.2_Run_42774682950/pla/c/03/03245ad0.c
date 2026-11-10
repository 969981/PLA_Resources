/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03245ad0; name: _INIT_1021
 */


void _INIT_1021(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439c88 & 1) == 0) {
    DAT_04439c78 = 0;
    DAT_04439c80 = 0;
    DAT_0444ac08 = &DAT_04439c68;
    DAT_04439c68 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439c70 = &DAT_04316e58;
    DAT_04439c88 = 1;
  }
  return;
}


