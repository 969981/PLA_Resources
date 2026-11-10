/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031319d0; name: _INIT_779
 */


void _INIT_779(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_04434620 & 1) == 0) {
    DAT_04434610 = 0;
    DAT_04434618 = 0;
    DAT_0444ac08 = &DAT_04434600;
    DAT_04434600 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_04434608 = &DAT_042ed300;
    DAT_04434620 = 1;
  }
  return;
}


