/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033186ec; name: FUN_033186ec
 */


void FUN_033186ec(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x28) = param_2[1];
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x38) = param_2[3];
  *(undefined1 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  if (*(int *)(param_1 + 8) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    FUN_032c2628(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


