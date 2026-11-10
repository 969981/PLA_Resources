/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312e5e0; name: _INIT_577
 */


void _INIT_577(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432690 & 1) == 0) {
    DAT_04432680 = 0;
    DAT_04432688 = 0;
    DAT_0444ac08 = &DAT_04432670;
    DAT_04432670 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432678 = &DAT_042e04e0;
    DAT_04432690 = 1;
  }
  return;
}


