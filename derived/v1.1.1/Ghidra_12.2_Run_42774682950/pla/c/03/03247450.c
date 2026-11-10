/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03247450; name: _INIT_1084
 */


void _INIT_1084(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443a660 & 1) == 0) {
    DAT_0443a650 = 0;
    DAT_0443a658 = 0;
    DAT_0444ac08 = &DAT_0443a640;
    DAT_0443a640 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443a648 = &DAT_0431a858;
    DAT_0443a660 = 1;
  }
  return;
}


