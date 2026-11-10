/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008544d8; name: FUN_008544d8
 */


void FUN_008544d8(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_043773c0;
  if (*(long *)PTR_DAT_043773c0 != 0) {
    FUN_00854534();
    FUN_008475a8(*(long *)puVar1 + 0x10);
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_DAT_04378088;
  lVar2 = *(long *)PTR_DAT_04378088;
  if (lVar2 != 0) {
    FUN_0081a840(lVar2);
    FUN_0081a800(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


