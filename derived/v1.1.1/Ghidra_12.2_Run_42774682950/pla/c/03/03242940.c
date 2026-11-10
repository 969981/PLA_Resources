/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03242940; name: _INIT_893
 */


void _INIT_893(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438888 & 1) == 0) {
    DAT_04438878 = 0;
    DAT_04438880 = 0;
    DAT_0444ac08 = &DAT_04438868;
    DAT_04438868 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438870 = &DAT_0430eb18;
    DAT_04438888 = 1;
  }
  return;
}


