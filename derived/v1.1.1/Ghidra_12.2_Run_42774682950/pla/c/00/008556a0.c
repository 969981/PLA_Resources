/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008556a0; name: FUN_008556a0
 */


void FUN_008556a0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined1 auStack_90 [16];
  undefined4 local_80 [8];
  int local_60 [8];
  int local_40 [4];
  
  lVar1 = param_2 + 8;
  lVar2 = FUN_00845d68(lVar1,0);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x648) == '\0')) {
    FUN_00845dcc(lVar1);
    piVar4 = local_60;
    local_60[0] = 0x2c09;
  }
  else {
    *(int *)(param_2 + 0x708) = *(int *)(param_2 + 0x708) + 1;
    *(ulong *)(param_2 + 0x710) = *(long *)(param_2 + 0x710) + (ulong)*(uint *)(lVar2 + 0x5f8);
    local_40[0] = 0;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_60);
    FUN_007e3400(local_60);
    FUN_007e3400(local_80);
    uVar3 = FUN_0085838c(param_2,local_60,local_80);
    FUN_007e34a4(local_80);
    FUN_007e34a4(local_60);
    if ((uVar3 & 1) != 0) {
      *(undefined1 *)(lVar2 + 0x648) = 0;
    }
    if (*(long *)(param_2 + 200) == 0) {
      (**(code **)(**(long **)(param_2 + 0x700) + 0x38))(local_60,*(long **)(param_2 + 0x700),lVar2)
      ;
    }
    else {
      FUN_00855f78(local_60,*(long *)(param_2 + 200),lVar2);
    }
    FUN_007ee660(local_40,local_60);
    FUN_007ee578(auStack_90,local_40);
    uVar3 = FUN_007ec26c(auStack_90);
    if (((uVar3 & 1) != 0) && (*(char *)(lVar2 + 0x624) != '\0')) {
      local_60[0] = 0;
      local_80[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_80);
      FUN_007ee660(local_40,local_60);
    }
    if (local_40[0] == 0) {
      piVar4 = local_40;
      FUN_00845e18(lVar1);
      goto LAB_00855818;
    }
    local_60[0] = 0x4c0d;
    piVar4 = local_40;
  }
  local_80[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_80);
LAB_00855818:
  FUN_007ee578(param_1,piVar4);
  return;
}


