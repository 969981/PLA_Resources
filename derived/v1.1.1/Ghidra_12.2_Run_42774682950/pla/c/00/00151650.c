/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151650; name: FUN_00151650
 */


undefined8 FUN_00151650(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_f0 [128];
  
  uVar1 = FUN_00162b30(param_1,param_2,auStack_f0 + 0x80);
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0015dc70(param_1);
  }
  return uVar1;
}


