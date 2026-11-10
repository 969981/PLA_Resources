/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241e80; name: _INIT_858
 */


void _INIT_858(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438310 & 1) == 0) {
    DAT_04438300 = 0;
    DAT_04438308 = 0;
    DAT_0444ac08 = &DAT_044382f0;
    DAT_044382f0 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_044382f8 = &DAT_0430c858;
    DAT_04438310 = 1;
  }
  return;
}


