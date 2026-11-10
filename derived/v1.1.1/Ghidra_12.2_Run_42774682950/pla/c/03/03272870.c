/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272870; name: _INIT_1308
 */


void _INIT_1308(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d628 & 1) == 0) {
    DAT_0443d618 = 0;
    DAT_0443d620 = 0;
    DAT_0444ac08 = &DAT_0443d608;
    DAT_0443d608 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d610 = &DAT_04330ef8;
    DAT_0443d628 = 1;
  }
  return;
}


