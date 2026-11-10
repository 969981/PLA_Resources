/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0082679c; name: FUN_0082679c
 */


void FUN_0082679c(undefined8 param_1,long param_2,long *param_3,int param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  if (0x17 < param_4 - 1U) {
    local_58[0] = 0x10407;
    local_68[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_68);
    piVar6 = local_58;
    goto LAB_0082684c;
  }
  FUN_00850d04(local_58);
  if (local_58[0] != 0) goto LAB_00826804;
  if (*(char *)(*(long *)PTR_DAT_043773c0 + 0x38) == '\0') {
    lVar1 = *(long *)PTR_DAT_043773c0 + 0x10;
    puVar4 = (undefined8 *)FUN_008477c4(lVar1,0x70);
    FUN_0084f858();
    iVar2 = FUN_00847840(lVar1,puVar4,0x58000000);
    if (iVar2 == *(int *)PTR_DAT_043779d0) {
      (**(code **)*puVar4)(puVar4);
      FUN_008477a0(lVar1,puVar4);
    }
    *(int *)(param_2 + 0xa4) = iVar2;
    if (iVar2 == 0) goto LAB_00826824;
    uVar5 = FUN_00847ad0(lVar1,iVar2,0x58);
    uVar3 = (**(code **)(*param_3 + 0x28))(param_3);
    FUN_0084f8cc(local_68,uVar5,param_4,uVar3);
    FUN_007ee660(local_58,local_68);
    FUN_00826564(local_68,param_2,param_4);
    FUN_007ee660(local_58,local_68);
    if (local_58[0] != 0) {
LAB_00826804:
      piVar6 = local_58;
      goto LAB_0082684c;
    }
    FUN_00825fa8(local_68,param_2,param_4);
    FUN_007ee660(local_58,local_68);
    if (local_58[0] != 0) goto LAB_00826804;
    local_68[0] = 0;
  }
  else {
    *(undefined4 *)(param_2 + 0xa4) = 0;
LAB_00826824:
    local_68[0] = 0x10408;
  }
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
  piVar6 = local_68;
LAB_0082684c:
  FUN_007ee578(param_1,piVar6);
  return;
}


