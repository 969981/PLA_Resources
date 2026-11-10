/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007fad5c; name: FUN_007fad5c
 */


void FUN_007fad5c(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  FUN_007fa3fc(local_58,param_2,*(undefined8 *)(param_2 + 0x138));
  if (local_58[0] == 0) {
    if ((param_3 == 0) || (param_4 == 0)) {
      local_68[0] = 0x10407;
    }
    else {
      lVar1 = param_2 + 0xb8;
      uVar2 = FUN_007f0ee4(lVar1);
      if ((uVar2 & 1) == 0) {
LAB_007fadd8:
        uVar2 = FUN_007f0ee4(lVar1);
        if ((uVar2 & 1) != 0) {
          uVar2 = FUN_007f0ee4(param_2 + 0x98);
          if (((uVar2 & 1) != 0) && (uVar2 = FUN_007f0f48(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
          goto LAB_007faec0;
        }
        if ((*(int *)(param_2 + 0x1148) != 0) && (*(int *)(param_2 + 0x1118) != 1)) {
          FUN_007e5bd8(param_2 + 0x1118);
          *(undefined4 *)(param_2 + 0x1148) = 0;
        }
        FUN_007f51b8(param_2);
        FUN_0080809c(local_68,*(undefined8 *)(param_2 + 0x138),param_2 + 0x1118,param_3,param_4,
                     param_5);
        FUN_007ee660(local_58,local_68);
        if (local_58[0] == 0) {
          FUN_007e5e70(*(undefined8 *)(param_2 + 0x138),0);
          *(undefined4 *)(param_2 + 0x1148) = 1;
        }
        goto LAB_007fad98;
      }
      uVar2 = FUN_007f0ee4(param_2 + 0x98);
      if (((uVar2 & 1) == 0) || (uVar2 = FUN_007f0f48(param_2 + 0x98,lVar1), (uVar2 & 1) == 0))
      goto LAB_007fadd8;
LAB_007faec0:
      local_68[0] = 0x10408;
    }
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
    piVar3 = local_68;
  }
  else {
LAB_007fad98:
    piVar3 = local_58;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


