/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00855f78; name: FUN_00855f78
 */


void FUN_00855f78(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_88 [8];
  undefined *local_68 [3];
  undefined2 local_50;
  long local_48;
  
  if (*(int *)(param_2 + 0x6f0) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00855fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_2 + 0x50) + 0x38))(param_1,*(long **)(param_2 + 0x50),param_3);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    local_68[0] = (undefined *)CONCAT44(local_68[0]._4_4_,0x4c0d);
  }
  else {
    lVar3 = FUN_007e9088(param_2 + 0x18);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar3 - *(int *)(param_2 + 0x2c);
    }
    lVar1 = lVar3 + 0x10;
    FUN_007f065c(lVar1);
    *(undefined8 *)(lVar3 + 0x660) = 0;
    FUN_007f0744(lVar1);
    FUN_007e8fa0(param_2,param_2,lVar3);
    FUN_007f0878(param_2 + 0x88,param_3);
    local_48 = 0;
    FUN_007ecf14(&local_48);
    local_68[0] = PTR_DAT_04377418 + 0x10;
    FUN_007e34ac(local_68,0xffffffff);
    local_50 = 0;
    FUN_007e3400(local_88);
    iVar2 = FUN_008560fc(param_2,local_68,local_88);
    plVar4 = (long *)FUN_007ecfa4();
    *(long *)(param_2 + 0x6d8) = local_48 + *plVar4 * (long)iVar2;
    FUN_007e34a4(local_88);
    FUN_007e34a4(local_68);
    FUN_007f0878(lVar1,param_2 + 0x88);
    *(undefined8 *)(lVar3 + 0x660) = *(undefined8 *)(param_2 + 0x6d8);
    local_68[0] = (undefined *)((ulong)local_68[0] & 0xffffffff00000000);
  }
  local_88[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_88);
  FUN_007ee578(param_1,local_68);
  return;
}


