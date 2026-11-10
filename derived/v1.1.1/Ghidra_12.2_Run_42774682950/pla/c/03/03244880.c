/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03244880; name: _INIT_955
 */


void _INIT_955(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04439238 & 1) == 0) {
    DAT_04439228 = 0;
    DAT_04439230 = 0;
    DAT_0444ac08 = &DAT_04439218;
    DAT_04439218 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04439220 = &DAT_04312648;
    DAT_04439238 = 1;
  }
  return;
}


