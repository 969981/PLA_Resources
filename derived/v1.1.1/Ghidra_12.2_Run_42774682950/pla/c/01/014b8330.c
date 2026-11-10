/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014b8330; name: FUN_014b8330
 */


void FUN_014b8330(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_014c6634(*(undefined8 *)(param_1 + 0x90),1);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  uVar2 = FUN_0142f990(*(undefined8 *)(param_1 + 0x98));
  FUN_014c7264(uVar1,uVar2);
  FUN_014c1460(*(undefined8 *)(param_1 + 0x90));
  FUN_014c0fcc(*(undefined8 *)(param_1 + 0x90));
  *(undefined4 *)(param_1 + 0xa0) = 0;
  return;
}


