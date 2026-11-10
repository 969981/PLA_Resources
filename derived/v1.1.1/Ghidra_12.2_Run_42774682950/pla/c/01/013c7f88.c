/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013c7f88; name: FUN_013c7f88
 */


void FUN_013c7f88(undefined1 *param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = 0;
  if (*(char *)(param_2 + 0x618) != '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0x61c);
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0x624);
    *(undefined8 *)(param_1 + 4) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x62c);
    uVar4 = *(undefined8 *)(param_2 + 0x634);
    uVar2 = *(undefined8 *)(param_2 + 0x63c);
    *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x644);
    *(undefined8 *)(param_1 + 0x24) = uVar2;
    *(undefined8 *)(param_1 + 0x1c) = uVar4;
    *(undefined8 *)(param_1 + 0x14) = uVar3;
    uVar2 = *(undefined8 *)(param_2 + 0x654);
    uVar3 = *(undefined8 *)(param_2 + 0x65c);
    uVar1 = *(undefined4 *)(param_2 + 0x664);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x64c);
    *(undefined4 *)(param_1 + 0x4c) = uVar1;
    *(undefined8 *)(param_1 + 0x44) = uVar3;
    *(undefined8 *)(param_1 + 0x3c) = uVar2;
    *param_1 = 1;
  }
  return;
}


