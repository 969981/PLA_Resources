/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032452e0; name: _INIT_996
 */


void _INIT_996(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_044398a0 & 1) == 0) {
    DAT_04439890 = 0;
    DAT_04439898 = 0;
    DAT_0444ac08 = &DAT_04439880;
    DAT_04439880 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439888 = &DAT_043153d8;
    DAT_044398a0 = 1;
  }
  return;
}


