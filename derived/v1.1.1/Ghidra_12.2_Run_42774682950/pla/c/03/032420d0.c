/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032420d0; name: _INIT_867
 */


void _INIT_867(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04438478 & 1) == 0) {
    DAT_04438468 = 0;
    DAT_04438470 = 0;
    DAT_0444ac08 = &DAT_04438458;
    DAT_04438458 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04438460 = &DAT_0430d290;
    DAT_04438478 = 1;
  }
  return;
}


