/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fd4b8; name: FUN_001fd4b8
 */


undefined8 * FUN_001fd4b8(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  puVar2 = (undefined8 *)PTR_PTR_04372790;
  ppuVar3 = &PTR_DAT_0411d4e8;
  do {
    iVar1 = FUN_001f8b48(*puVar2,param_1);
    if (iVar1 != 0) {
      return puVar2;
    }
    puVar2 = (undefined8 *)*ppuVar3;
    ppuVar3 = ppuVar3 + 1;
  } while (puVar2 != (undefined8 *)0x0);
  return (undefined8 *)0x0;
}


