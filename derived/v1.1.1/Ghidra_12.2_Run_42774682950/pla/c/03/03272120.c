/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272120; name: _INIT_1279
 */


void _INIT_1279(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d1a0 & 1) == 0) {
    DAT_0443d190 = 0;
    DAT_0443d198 = 0;
    DAT_0444ac08 = &DAT_0443d180;
    DAT_0443d180 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d188 = &DAT_0432ec38;
    DAT_0443d1a0 = 1;
  }
  return;
}


