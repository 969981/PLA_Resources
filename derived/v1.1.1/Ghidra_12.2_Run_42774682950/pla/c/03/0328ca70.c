/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328ca70; name: _INIT_1460
 */


void _INIT_1460(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f020 & 1) == 0) {
    DAT_0443f010 = 0;
    DAT_0443f018 = 0;
    DAT_0444ac08 = &DAT_0443f000;
    DAT_0443f000 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f008 = &DAT_0433cd10;
    DAT_0443f020 = 1;
  }
  return;
}


