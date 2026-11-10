/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032720e0; name: _INIT_1278
 */


void _INIT_1278(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d178 & 1) == 0) {
    DAT_0443d168 = 0;
    DAT_0443d170 = 0;
    DAT_0444ac08 = &DAT_0443d158;
    DAT_0443d158 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d160 = &DAT_0432eaa0;
    DAT_0443d178 = 1;
  }
  return;
}


