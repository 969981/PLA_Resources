/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841c6c; name: FUN_00841c6c
 */


void FUN_00841c6c(undefined8 param_1,long param_2,int param_3,undefined4 param_4,ushort param_5,
                 undefined4 param_6)

{
  long lVar1;
  ulong uVar2;
  int *piVar3;
  long *plVar4;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  lVar1 = FUN_008551bc(*(undefined8 *)PTR_DAT_043773c0);
  plVar4 = *(long **)(lVar1 + 0x10);
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*plVar4 + 0x50))(plVar4);
  }
  if (param_5 < 0x19) {
    *(ushort *)(param_2 + 0x51e) = param_5;
    *(undefined4 *)(param_2 + 0x4c8) = param_6;
    local_58[0] = 0;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    FUN_00841dfc(local_68,param_2 + 0x18,(uint)*(ushort *)(param_2 + 0x51e) * param_3);
    FUN_007ee660(local_58,local_68);
    if (local_58[0] == 0) {
      if (*(short *)(param_2 + 0x51e) != 0) {
        uVar2 = 0;
        lVar1 = param_2 + 0x38;
        do {
          FUN_00841f30(local_68,lVar1,param_4);
          FUN_007ee660(local_58,local_68);
          if (local_58[0] != 0) {
            lVar1 = *(long *)(param_2 + 0x20);
            if (lVar1 != 0) {
              FUN_0081a840(lVar1);
              FUN_0081a800(lVar1);
              *(undefined8 *)(param_2 + 0x20) = 0;
            }
            *(undefined2 *)(param_2 + 0x28) = 0;
            goto LAB_00841d4c;
          }
          uVar2 = uVar2 + 1;
          lVar1 = lVar1 + 0x28;
        } while (uVar2 < *(ushort *)(param_2 + 0x51e));
      }
      local_68[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
      piVar3 = local_68;
    }
    else {
LAB_00841d4c:
      piVar3 = local_58;
    }
  }
  else {
    local_58[0] = 0x10407;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    piVar3 = local_58;
  }
  FUN_007ee578(param_1,piVar3);
  return;
}


