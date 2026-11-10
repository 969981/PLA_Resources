/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056a648; name: FUN_0056a648
 */


undefined1  [16] FUN_0056a648(long *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  uVar3 = param_1[1];
  uVar1 = uVar3;
  if (param_2 <= uVar3) {
    uVar1 = param_2;
  }
  uVar2 = uVar3 - uVar1;
  if (param_3 <= uVar3 - uVar1) {
    uVar2 = param_3;
  }
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = *param_1 + uVar1;
  return auVar4;
}


