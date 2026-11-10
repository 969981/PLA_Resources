/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03249000; name: _INIT_1161
 */


void _INIT_1161(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443b268 & 1) == 0) {
    DAT_0443b258 = 0;
    DAT_0443b260 = 0;
    DAT_0444ac08 = &DAT_0443b248;
    DAT_0443b248 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443b250 = &DAT_0431f550;
    DAT_0443b268 = 1;
  }
  return;
}


