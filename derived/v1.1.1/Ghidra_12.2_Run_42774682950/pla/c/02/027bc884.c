/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027bc884; name: FUN_027bc884
 */


void FUN_027bc884(long param_1,byte param_2,byte param_3,uint param_4,undefined8 param_5,
                 undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  code *pcVar5;
  
  FUN_02c2e7d0(*(undefined8 *)(param_1 + 0x30),param_5,*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 8);
  *(byte *)(param_1 + 0x50) = param_2 & 1;
  *(byte *)(param_1 + 0x52) = ~param_3 & 1;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x38),0);
  plVar4 = (long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x5b0) + 0x68);
  (**(code **)(*plVar4 + 8))(plVar4,param_4 & 1);
  FUN_00d67ea8(*(undefined8 *)(param_1 + 0x38),(undefined8 *)(param_1 + 0x40));
  pcVar5 = *(code **)(param_1 + 0xa8);
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (*pcVar5)(param_1 + 0xc0);
  }
  if ((code *)param_6[2] != (code *)0x0) {
    (*(code *)param_6[2])(param_6 + 4,param_1 + 0xc0);
    uVar1 = *param_6;
    uVar2 = param_6[1];
    uVar3 = param_6[3];
    *(undefined8 *)(param_1 + 0xb0) = param_6[2];
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(undefined8 *)(param_1 + 0xa0) = uVar1;
    *(undefined8 *)(param_1 + 0xa8) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x1a0) = 1;
  return;
}


