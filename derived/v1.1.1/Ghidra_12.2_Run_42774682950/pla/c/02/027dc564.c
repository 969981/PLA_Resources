/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027dc564; name: FUN_027dc564
 */


undefined8 FUN_027dc564(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  uVar3 = FUN_027dc2c8();
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    FUN_027dcb58(param_1 + 0x130,*param_2);
    pcVar5 = *(code **)(param_1 + 0x38);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      (*pcVar5)(param_1 + 0x50);
    }
    if ((code *)param_3[2] != (code *)0x0) {
      (*(code *)param_3[2])(param_3 + 4,param_1 + 0x50);
      uVar4 = *param_3;
      uVar1 = param_3[1];
      uVar2 = param_3[3];
      *(undefined8 *)(param_1 + 0x40) = param_3[2];
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      *(undefined8 *)(param_1 + 0x30) = uVar4;
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
    pcVar5 = *(code **)(param_1 + 0xb8);
    if (pcVar5 != (code *)0x0) {
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
      *(undefined8 *)(param_1 + 0xb8) = 0;
      (*pcVar5)(param_1 + 0xd0);
    }
    if ((code *)param_4[2] != (code *)0x0) {
      (*(code *)param_4[2])(param_4 + 4,param_1 + 0xd0);
      uVar4 = *param_4;
      uVar1 = param_4[1];
      uVar2 = param_4[3];
      *(undefined8 *)(param_1 + 0xc0) = param_4[2];
      *(undefined8 *)(param_1 + 200) = uVar2;
      *(undefined8 *)(param_1 + 0xb0) = uVar4;
      *(undefined8 *)(param_1 + 0xb8) = uVar1;
    }
    uVar4 = 1;
  }
  return uVar4;
}


