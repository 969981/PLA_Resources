/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03241bc0; name: _INIT_847
 */


void _INIT_847(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438158 & 1) == 0) {
    DAT_04438148 = 0;
    DAT_04438150 = 0;
    DAT_0444ac08 = &DAT_04438138;
    DAT_04438138 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438140 = &DAT_0430be88;
    DAT_04438158 = 1;
  }
  return;
}


