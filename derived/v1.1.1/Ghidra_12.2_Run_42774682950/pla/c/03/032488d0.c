/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032488d0; name: _INIT_1133
 */


void _INIT_1133(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ae08 & 1) == 0) {
    DAT_0443adf8 = 0;
    DAT_0443ae00 = 0;
    DAT_0444ac08 = &DAT_0443ade8;
    DAT_0443ade8 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443adf0 = &DAT_0431d890;
    DAT_0443ae08 = 1;
  }
  return;
}


