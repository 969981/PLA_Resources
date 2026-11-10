/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da40ac; name: FUN_00da40ac
 */


void FUN_00da40ac(long *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[1] - *param_1 >> 4;
  uVar2 = lVar1 * 0x6db6db6db6db6db7;
  if (uVar2 < param_2) {
    FUN_00da4fcc(param_1,param_2 + lVar1 * -0x6db6db6db6db6db7);
    return;
  }
  if (uVar2 == param_2) {
    return;
  }
  FUN_00da5720(param_1,*param_1 + param_2 * 0x70);
  return;
}


