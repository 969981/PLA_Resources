/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a398c; name: FUN_013a398c
 */


void FUN_013a398c(undefined1 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x7c) != '\0') {
    uVar1 = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 4) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x90);
    uVar2 = *(undefined8 *)(param_2 + 0x98);
    uVar4 = *(undefined8 *)(param_2 + 0xa0);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0xa8);
    *(undefined8 *)(param_1 + 0x24) = uVar4;
    *(undefined8 *)(param_1 + 0x1c) = uVar2;
    *(undefined8 *)(param_1 + 0x14) = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0xb8);
    uVar4 = *(undefined8 *)(param_2 + 0xc0);
    uVar3 = *(undefined4 *)(param_2 + 200);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0xb0);
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    *(undefined8 *)(param_1 + 0x44) = uVar4;
    *(undefined8 *)(param_1 + 0x3c) = uVar1;
    *param_1 = 1;
  }
  return;
}


