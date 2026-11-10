/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00827344; name: FUN_00827344
 */


void FUN_00827344(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  int local_88 [8];
  undefined4 local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  local_58[0] = 0;
  local_88[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_88);
  uVar1 = FUN_00828950(param_2,param_3);
  lVar4 = *(long *)(*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18);
  do {
    if (lVar4 == 0) {
      local_88[0] = 0x2c0a;
LAB_008273d0:
      local_68[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
      FUN_007ee578(local_68,local_88);
      FUN_007ee660(local_58,local_68);
      if (local_58[0] == 0) {
        uVar1 = FUN_00828950(param_2,param_3);
        FUN_00828cd8(local_88,*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18,param_3);
        FUN_007ee660(local_58,local_88);
      }
      else {
        local_88[0] = 0x2c0a;
        local_68[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
      }
      uVar1 = FUN_00828950(param_2,param_3);
      FUN_00828a74(local_88,*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18,param_3,param_4);
      FUN_007ee660(local_58,local_88);
      local_68[0] = 0;
      local_88[0] = 0xc10;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
      if (local_58[0] == local_88[0]) {
        FUN_007e3428(local_88,*(undefined8 *)(param_2 + 0x18));
        uVar2 = FUN_00828950(param_2,local_88);
        FUN_00828cd8(local_68,*(long *)(param_2 + 8) + (uVar2 & 0xffffffff) * 0x18,local_88);
        FUN_007ee660(local_58,local_68);
        FUN_00828a74(local_68,*(long *)(param_2 + 8) + (uVar1 & 0xffffffff) * 0x18,param_3,param_4);
        FUN_007ee660(local_58,local_68);
        local_68[0] = 0;
        local_48[0] = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
        FUN_007ee578(param_1,local_68);
        FUN_007e34a4(local_88);
      }
      else {
        if (local_58[0] == 0) {
          local_88[0] = 0;
          local_68[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_68);
          piVar3 = local_88;
        }
        else {
          piVar3 = local_58;
        }
        FUN_007ee578(param_1,piVar3);
      }
      return;
    }
    uVar1 = FUN_007e45a8(lVar4,param_3);
    if ((uVar1 & 1) != 0) {
      local_88[0] = 0;
      goto LAB_008273d0;
    }
    lVar4 = *(long *)(lVar4 + 0x48);
  } while( true );
}


