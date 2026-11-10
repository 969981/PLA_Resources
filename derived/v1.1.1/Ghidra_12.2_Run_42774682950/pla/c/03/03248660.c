/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03248660; name: _INIT_1124
 */


void _INIT_1124(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443aca0 & 1) == 0) {
    DAT_0443ac90 = 0;
    DAT_0443ac98 = 0;
    DAT_0444ac08 = &DAT_0443ac80;
    DAT_0443ac80 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ac88 = &DAT_0431cf00;
    DAT_0443aca0 = 1;
  }
  return;
}


