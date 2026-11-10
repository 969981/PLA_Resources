/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312d900; name: _INIT_528
 */


void _INIT_528(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04431ef8 & 1) == 0) {
    DAT_04431ee8 = 0;
    DAT_04431ef0 = 0;
    DAT_0444ac08 = &DAT_04431ed8;
    DAT_04431ed8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04431ee0 = &DAT_042dd418;
    DAT_04431ef8 = 1;
  }
  return;
}


