/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003425b0; name: FUN_003425b0
 */


undefined8 FUN_003425b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 extraout_x1;
  
  iVar2 = FUN_0033f438(*(undefined8 *)(param_1 + 0x20),param_1,param_2);
  uVar1 = extraout_x1;
  if (iVar2 != 1) {
    uVar1 = 0;
  }
  return uVar1;
}


