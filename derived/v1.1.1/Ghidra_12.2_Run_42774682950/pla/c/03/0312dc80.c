/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0312dc80; name: _INIT_542
 */


void _INIT_542(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04432128 & 1) == 0) {
    DAT_04432118 = 0;
    DAT_04432120 = 0;
    DAT_0444ac08 = &DAT_04432108;
    DAT_04432108 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04432110 = &DAT_042de148;
    DAT_04432128 = 1;
  }
  return;
}


