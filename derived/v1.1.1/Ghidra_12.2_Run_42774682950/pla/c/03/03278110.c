/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03278110; name: _INIT_1449
 */


void _INIT_1449(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_0444ac08;
  if ((DAT_0443ec30 & 1) == 0) {
    DAT_0443ec20 = 0;
    DAT_0443ec28 = 0;
    DAT_0444ac08 = &DAT_0443ec10;
    DAT_0443ec10 = (ulong)puVar1 & 0xfffffffffffffffc;
    DAT_0443ec18 = &DAT_0433a090;
    DAT_0443ec30 = 1;
  }
  return;
}


