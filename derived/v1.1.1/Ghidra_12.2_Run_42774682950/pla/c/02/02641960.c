/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02641960; name: FUN_02641960
 */


void FUN_02641960(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = param_2[2];
  *(undefined8 *)(param_1 + 0x26c) = *param_2;
  *(undefined8 *)(param_1 + 0x274) = uVar1;
  *(undefined8 *)(param_1 + 0x27c) = uVar3;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x284) = param_2[3];
  *(undefined8 *)(param_1 + 0x294) = uVar3;
  *(undefined4 *)(param_1 + 0x29c) = uVar2;
  *(undefined8 *)(param_1 + 0x28c) = uVar1;
  if (*(char *)(param_1 + 0x268) == '\0') {
    *(undefined1 *)(param_1 + 0x268) = 1;
  }
  return;
}


