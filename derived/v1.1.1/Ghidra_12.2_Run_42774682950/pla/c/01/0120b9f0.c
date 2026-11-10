/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0120b9f0; name: FUN_0120b9f0
 */


void FUN_0120b9f0(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_01220ce0(*(undefined8 *)(param_1 + 0x90));
  if (iVar1 == 0) {
    FUN_012152b8(*(undefined8 *)(param_1 + 0x90),1);
  }
  else {
    FUN_0121fb5c();
  }
  FUN_00d42438(*(undefined8 *)(param_1 + 0x90),1,1);
  FUN_00d4ba88(*(undefined8 *)(param_1 + 0x90),2,1);
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x90),0);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}


