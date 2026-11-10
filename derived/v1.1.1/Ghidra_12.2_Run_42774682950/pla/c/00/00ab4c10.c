/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab4c10; name: FUN_00ab4c10
 */


long * FUN_00ab4c10(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (param_1 != param_2) {
    lVar1 = *param_1;
    if (lVar1 != 0) goto LAB_00ab4c48;
    do {
      do {
        param_1 = param_1 + 1;
        if (param_2 == param_1) {
          return param_2;
        }
        lVar1 = *param_1;
      } while (lVar1 == 0);
LAB_00ab4c48:
      (*(code *)**(undefined8 **)(lVar1 + 8))();
      uVar2 = FUN_00ab47d0();
    } while ((uVar2 & 1) == 0);
  }
  return param_1;
}


