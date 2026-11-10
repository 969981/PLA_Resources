/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a7e5c; name: FUN_027a7e5c
 */


void FUN_027a7e5c(long param_1,byte param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    *(byte *)(param_1 + 0x6c) = param_2 & 1;
    pcVar4 = *(code **)(param_1 + 0x268);
    if (pcVar4 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x270) = 0;
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined8 *)(param_1 + 0x260) = 0;
      *(undefined8 *)(param_1 + 0x268) = 0;
      (*pcVar4)(param_1 + 0x280);
    }
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,param_1 + 0x280);
      uVar1 = *param_3;
      uVar2 = param_3[1];
      uVar3 = param_3[3];
      *(undefined8 *)(param_1 + 0x270) = param_3[2];
      *(undefined8 *)(param_1 + 0x278) = uVar3;
      *(undefined8 *)(param_1 + 0x260) = uVar1;
      *(undefined8 *)(param_1 + 0x268) = uVar2;
    }
    *(undefined4 *)(param_1 + 0x68) = 3;
  }
  return;
}


