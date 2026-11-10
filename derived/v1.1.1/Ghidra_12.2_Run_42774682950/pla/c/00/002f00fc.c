/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f00fc; name: FUN_002f00fc
 */


long FUN_002f00fc(long param_1)

{
  long lVar1;
  double dVar2;
  undefined1 auVar3 [12];
  
  if (*(char *)(param_1 + 0x34) != '\0') {
    return *(long *)(param_1 + 0x38);
  }
  auVar3 = FUN_002eec80(0);
  auVar3 = FUN_002ef280(auVar3._0_8_,auVar3._8_4_,DAT_0438f778,DAT_0438f780);
  dVar2 = (double)auVar3._0_8_ * 1000.0 + (double)auVar3._8_4_ / 1000000.0;
  if (0.0 <= dVar2) {
    if (dVar2 <= 9.223372036854776e+18) {
      lVar1 = (long)dVar2;
    }
    else {
      lVar1 = 0x7fffffffffffffff;
    }
  }
  else {
    lVar1 = 0;
  }
  *(long *)(param_1 + 0x38) = lVar1;
  *(undefined1 *)(param_1 + 0x34) = 1;
  return lVar1;
}


