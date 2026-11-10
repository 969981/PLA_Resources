/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00417ca0; name: FUN_00417ca0
 */


undefined8 FUN_00417ca0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar1 = FUN_00405620(&LAB_00417ce0,&LAB_00417d10);
      *(long *)(param_1 + 0x10) = lVar1;
      if (lVar1 == 0) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


