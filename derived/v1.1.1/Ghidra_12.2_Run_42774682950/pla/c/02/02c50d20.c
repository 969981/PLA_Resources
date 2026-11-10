/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c50d20; name: FUN_02c50d20
 */


undefined8 FUN_02c50d20(undefined8 param_1,short param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_30 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  FUN_02c4fb44(auStack_30,param_2);
  uVar1 = FUN_02c4fc60(auStack_30,param_3);
  return uVar1;
}


