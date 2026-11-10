/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007faf70; name: FUN_007faf70
 */


void FUN_007faf70(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_007fa3fc(local_48,param_2,*(undefined8 *)(param_2 + 0x140));
  if (local_48[0] == 0) {
    if (param_3 == 0) {
      local_58[0] = 0x10407;
    }
    else {
      lVar1 = param_2 + 0xb8;
      uVar2 = FUN_007f0ee4(lVar1);
      if ((uVar2 & 1) == 0) {
LAB_007faff4:
        uVar2 = FUN_007f0ee4(lVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_007f0ee4(param_2 + 0x98);
          if (((uVar2 & 1) != 0) && (uVar2 = FUN_007f0f48(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
          goto LAB_007fb09c;
        }
        if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
          FUN_007e5bd8(param_2 + 0x1118);
          *(undefined4 *)(param_2 + 0x1148) = 0;
        }
        FUN_007f51b8(param_2);
        FUN_008030bc(local_58,*(undefined8 *)(param_2 + 0x140),param_2 + 0x1118,param_3);
        FUN_007ee660(local_48,local_58);
        if (local_48[0] == 0) {
          FUN_007e5e70(*(undefined8 *)(param_2 + 0x140),0);
          *(undefined4 *)(param_2 + 0x1148) = 2;
        }
        goto LAB_007fafa0;
      }
      uVar2 = FUN_007f0ee4(param_2 + 0x98);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_007f0f48(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
      goto LAB_007faff4;
LAB_007fb09c:
      local_58[0] = 0x10408;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    piVar3 = local_58;
  }
  else {
LAB_007fafa0:
    piVar3 = local_48;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


