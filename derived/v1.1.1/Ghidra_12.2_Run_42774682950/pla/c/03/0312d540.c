/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d540; name: _INIT_514
 */


void _INIT_514(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431cc8 & 1) == 0) {
    DAT_04431cb8 = 0;
    DAT_04431cc0 = 0;
    DAT_0444ac08 = &DAT_04431ca8;
    DAT_04431ca8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431cb0 = &DAT_042dc6b8;
    DAT_04431cc8 = 1;
  }
  return;
}


