/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f8658; name: FUN_001f8658
 */


long FUN_001f8658(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  if (param_1 != (undefined8 *)0x0) {
    lVar2 = 0;
    do {
      lVar1 = FUN_001f85e4(lVar2,*param_1);
      if (lVar1 == 0) {
        FUN_001f86a8(lVar2);
        return 0;
      }
      param_1 = (undefined8 *)param_1[1];
      lVar2 = lVar1;
    } while (param_1 != (undefined8 *)0x0);
  }
  return lVar1;
}


