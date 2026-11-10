/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151fe0; name: FUN_00151fe0
 */


void FUN_00151fe0(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  
  uVar1 = FUN_00171cf0();
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  *puVar2 = uVar1;
  *(undefined4 *)(puVar2 + 1) = 0x45;
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if ((param_2 < 1) && (param_3 < 1)) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  else {
    FUN_00171860(param_1,uVar1,param_2,param_3);
    lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 0x18);
  }
  if (lVar3 < 1) {
    return;
  }
  FUN_0015dc70(param_1);
  return;
}


