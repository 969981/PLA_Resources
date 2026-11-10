/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f8a00; name: FUN_007f8a00
 */


void FUN_007f8a00(int *param_1,long param_2,byte param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [16];
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  FUN_007fa3fc(param_2,*(undefined8 *)(param_2 + 0x160));
  if (*param_1 != 0) {
    return;
  }
  if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
    FUN_007e5bd8(param_2 + 0x1118);
    *(undefined4 *)(param_2 + 0x1148) = 0;
  }
  if (*(int *)(param_2 + 0x288) == 2) {
    FUN_00807c24(local_58,*(undefined8 *)(param_2 + 0x160),param_2 + 0x1118);
    FUN_007ee660(param_1,local_58);
    if (*param_1 != 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x160);
  }
  else {
    if (*(int *)(param_2 + 0x288) != 1) {
      local_58[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
      FUN_007ee660(param_1,local_58);
      FUN_007e5c2c(param_2 + 0x1118);
      FUN_007ee578(auStack_68,param_1);
      FUN_007e5c40(param_2 + 0x1118,auStack_68);
      goto LAB_007f8b80;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x148);
    uVar2 = FUN_007f0ee4(param_2 + 0xb8);
    if ((uVar2 & 1) == 0) {
LAB_007f8b4c:
      bVar1 = false;
    }
    else {
      uVar2 = FUN_007f0ee4(param_2 + 0x98);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = FUN_007f0f48(param_2 + 0x98,param_2 + 0xb8), (uVar2 & 1) == 0)) goto LAB_007f8b4c;
      bVar1 = *(char *)(param_2 + 0x248) != '\0';
    }
    FUN_008069d0(local_58,uVar3,param_2 + 0x1118,bVar1);
    FUN_007ee660(param_1,local_58);
    if (*param_1 != 0) {
      return;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x148);
  }
  FUN_007e5e70(uVar3,0);
LAB_007f8b80:
  *(undefined4 *)(param_2 + 0x1148) = 6;
  *(byte *)(param_2 + 0x284) = param_3 & 1;
  if (*(char *)(param_2 + 0x1168) != '\0') {
    *(char *)(param_2 + 0x1168) = '\0';
  }
  return;
}


