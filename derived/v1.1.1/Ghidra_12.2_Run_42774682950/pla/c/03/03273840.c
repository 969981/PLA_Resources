/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03273840; name: _INIT_1327
 */


void _INIT_1327(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d920 & 1) == 0) {
    DAT_0443d910 = 0;
    DAT_0443d918 = 0;
    DAT_0444ac08 = &DAT_0443d900;
    DAT_0443d900 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d908 = &DAT_04332260;
    DAT_0443d920 = 1;
  }
  return;
}


