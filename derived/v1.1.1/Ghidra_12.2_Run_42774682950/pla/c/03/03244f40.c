/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244f40; name: _INIT_982
 */


void _INIT_982(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439670 & 1) == 0) {
    DAT_04439660 = 0;
    DAT_04439668 = 0;
    DAT_0444ac08 = &DAT_04439650;
    DAT_04439650 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439658 = &DAT_04314478;
    DAT_04439670 = 1;
  }
  return;
}


