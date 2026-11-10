/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014e9b28; name: FUN_014e9b28
 */


void FUN_014e9b28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  FUN_00d42690(*(undefined8 *)(param_1 + 8),1,1);
  FUN_00d469b4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x68),*(long *)(param_1 + 8),0);
  (**(code **)(**(long **)(param_1 + 8) + 0x90))(*(long **)(param_1 + 8),param_2,param_3);
  pcVar4 = *(code **)(param_1 + 0x98);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = (code *)param_4[2];
  }
  else {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
    (*pcVar4)(param_1 + 0xb0);
    pcVar4 = (code *)param_4[2];
  }
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_4 + 4,param_1 + 0xb0);
    uVar1 = *param_4;
    uVar2 = param_4[1];
    uVar3 = param_4[3];
    *(undefined8 *)(param_1 + 0xa0) = param_4[2];
    *(undefined8 *)(param_1 + 0xa8) = uVar3;
    *(undefined8 *)(param_1 + 0x90) = uVar1;
    *(undefined8 *)(param_1 + 0x98) = uVar2;
  }
  return;
}


