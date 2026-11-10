/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fb2c0; name: FUN_007fb2c0
 */


void FUN_007fb2c0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_007fa3fc(local_48,param_2,*(undefined8 *)(param_2 + 0x158));
  if (local_48[0] == 0) {
    if ((param_3 == 0) || (lVar1 = FUN_007f2a68(param_3), lVar1 == 0)) {
      local_58[0] = 0x10407;
    }
    else {
      lVar1 = param_2 + 0xb8;
      uVar2 = FUN_007f0ee4(lVar1);
      if ((uVar2 & 1) == 0) {
LAB_007fb338:
        uVar2 = FUN_007f0ee4(lVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_007f0ee4(param_2 + 0x98);
          if (((uVar2 & 1) != 0) && (uVar2 = FUN_007f0f48(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
          goto LAB_007fb414;
        }
        if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
          FUN_007e5bd8(param_2 + 0x1118);
          *(undefined4 *)(param_2 + 0x1148) = 0;
        }
        FUN_007f51b8(param_2);
        FUN_00806350(local_58,*(undefined8 *)(param_2 + 0x158),param_2 + 0x1118,param_3);
        FUN_007ee660(local_48,local_58);
        if (local_48[0] == 0) {
          FUN_007e5e70(*(undefined8 *)(param_2 + 0x158),0);
          *(undefined4 *)(param_2 + 0x1148) = 5;
        }
        goto LAB_007fb2f0;
      }
      uVar2 = FUN_007f0ee4(param_2 + 0x98);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_007f0f48(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
      goto LAB_007fb338;
LAB_007fb414:
      local_58[0] = 0x10408;
    }
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    piVar3 = local_58;
  }
  else {
LAB_007fb2f0:
    piVar3 = local_48;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


