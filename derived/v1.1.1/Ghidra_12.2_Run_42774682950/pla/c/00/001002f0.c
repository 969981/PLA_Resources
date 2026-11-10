/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001002f0; name: FUN_001002f0
 */


void FUN_001002f0(long param_1,ulong param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong extraout_x1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = ((long)PTR_DAT_043722d0 - (long)PTR_DAT_043722c8) / 0x18;
  if (uVar2 <= param_3) {
    param_3 = uVar2;
  }
  if (param_2 < param_3) {
    plVar3 = (long *)(PTR_DAT_043722c8 + param_3 * 0x18 + -8);
    uVar2 = param_2;
    do {
      uVar1 = DAT_0438e0d8;
      param_3 = param_3 - 1;
      if (*plVar3 == param_1) {
        (*(code *)plVar3[-2])(plVar3[-1],uVar2,DAT_0438e0d8);
      }
      FUN_001002f0(param_1,uVar1,DAT_0438e0d8);
      plVar3 = plVar3 + -3;
      uVar2 = extraout_x1;
    } while (param_2 < param_3);
  }
  return;
}


