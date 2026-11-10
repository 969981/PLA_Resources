/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec79d8; name: FUN_02ec79d8
 */


undefined4 FUN_02ec79d8(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 auStack_70 [24];
  long local_58 [5];
  
  FUN_02ec73c8(auStack_70,*(undefined8 *)(param_2 + 0x88));
  FUN_02ec761c(param_1,*(undefined8 *)(*(long *)(param_2 + 0x88) + 0x18),local_58);
  if (local_58[0] == 0) {
    uVar1 = 2;
  }
  else {
    *(undefined1 **)(param_2 + 0x88) = auStack_70;
    uVar1 = FUN_02ed184c(param_1,param_2);
  }
  FUN_02ec743c(auStack_70);
  return uVar1;
}


