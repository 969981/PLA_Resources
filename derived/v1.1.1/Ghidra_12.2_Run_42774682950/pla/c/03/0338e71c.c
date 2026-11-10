/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0338e71c; name: FUN_0338e71c
 */


undefined8 FUN_0338e71c(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)*param_1;
  uVar1 = *puVar3 + (((ulong)*(uint *)(param_1[2] + (long)(int)param_1[3] * 0x18 + -0x14) &
                     0x3fffffff) - 8);
  if (puVar3[1] < uVar1) {
    FUN_033216d4();
  }
  else {
    *puVar3 = uVar1;
  }
  uVar2 = 0;
  if (*(char *)(*param_1 + 0x20) != '\0') {
    uVar2 = 0x80040200;
  }
  return uVar2;
}


