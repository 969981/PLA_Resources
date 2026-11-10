/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03271d20; name: _INIT_1263
 */


void _INIT_1263(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443cf20 & 1) == 0) {
    DAT_0443cf10 = 0;
    DAT_0443cf18 = 0;
    DAT_0444ac08 = &DAT_0443cf00;
    DAT_0443cf00 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443cf08 = &DAT_0432d868;
    DAT_0443cf20 = 1;
  }
  return;
}


