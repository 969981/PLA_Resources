/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272530; name: _INIT_1295
 */


void _INIT_1295(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d420 & 1) == 0) {
    DAT_0443d410 = 0;
    DAT_0443d418 = 0;
    DAT_0444ac08 = &DAT_0443d400;
    DAT_0443d400 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d408 = &DAT_0432ffc0;
    DAT_0443d420 = 1;
  }
  return;
}


