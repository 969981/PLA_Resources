/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312db40; name: _INIT_537
 */


void _INIT_537(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432060 & 1) == 0) {
    DAT_04432050 = 0;
    DAT_04432058 = 0;
    DAT_0444ac08 = &DAT_04432040;
    DAT_04432040 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432048 = &DAT_042ddc38;
    DAT_04432060 = 1;
  }
  return;
}


