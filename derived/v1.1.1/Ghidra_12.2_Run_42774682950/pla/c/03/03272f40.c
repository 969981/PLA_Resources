/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03272f40; name: _INIT_1317
 */


void _INIT_1317(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443d790 & 1) == 0) {
    DAT_0443d780 = 0;
    DAT_0443d788 = 0;
    DAT_0444ac08 = &DAT_0443d770;
    DAT_0443d770 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443d778 = &DAT_04331930;
    DAT_0443d790 = 1;
  }
  return;
}


