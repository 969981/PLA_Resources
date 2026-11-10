/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00824fa8; name: FUN_00824fa8
 */


void FUN_00824fa8(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)PTR_DAT_04377c90;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)PTR_DAT_04377c90 = 0;
    (**(code **)*puVar2)();
    puVar1 = PTR_DAT_043773f8;
    puVar2 = *(undefined8 **)PTR_DAT_043773f8;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2);
      FUN_0081a800(puVar2);
    }
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


