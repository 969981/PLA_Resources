/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242980; name: _INIT_894
 */


void _INIT_894(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044388b0 & 1) == 0) {
    DAT_044388a0 = 0;
    DAT_044388a8 = 0;
    DAT_0444ac08 = &DAT_04438890;
    DAT_04438890 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438898 = &DAT_0430ec38;
    DAT_044388b0 = 1;
  }
  return;
}


