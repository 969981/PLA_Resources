/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00829460; name: FUN_00829460
 */


void FUN_00829460(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04377550;
  if (*(long **)PTR_DAT_04377550 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04377550 + 8))();
    *(undefined8 *)puVar1 = 0;
  }
  puVar1 = PTR_DAT_04377cd8;
  lVar2 = *(long *)PTR_DAT_04377cd8;
  if (lVar2 != 0) {
    FUN_0081a840(lVar2);
    FUN_0081a800(lVar2);
    *(undefined8 *)puVar1 = 0;
  }
  return;
}


