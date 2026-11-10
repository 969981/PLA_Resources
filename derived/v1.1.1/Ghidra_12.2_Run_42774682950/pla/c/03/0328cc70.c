/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0328cc70; name: _INIT_1468
 */


void _INIT_1468(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443f160 & 1) == 0) {
    DAT_0443f150 = 0;
    DAT_0443f158 = 0;
    DAT_0444ac08 = &DAT_0443f140;
    DAT_0443f140 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443f148 = &DAT_0433d518;
    DAT_0443f160 = 1;
  }
  return;
}


