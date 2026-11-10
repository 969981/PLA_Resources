/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00858e44; name: FUN_00858e44
 */


void FUN_00858e44(undefined8 param_1,long *param_2,long param_3,long param_4,undefined4 param_5)

{
  bool bVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  int *piVar5;
  Result *pRVar6;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined4 local_72;
  int local_68 [4];
  int local_58 [4];
  undefined4 local_48 [2];
  
  FUN_00859040(local_58,param_2,param_4,param_5);
  if (local_58[0] != 0) {
LAB_00858e84:
    piVar5 = local_58;
    goto LAB_00858e88;
  }
  plVar2 = (long *)FUN_00847424(param_2);
  if (param_3 == 0) {
    uVar3 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
    FUN_00851594(local_68,uVar3,0);
    if (local_68[0] != 0) goto LAB_00858f10;
    pRVar6 = (Result *)&local_78;
    local_68[0] = 0;
    local_78 = 0;
  }
  else {
    (**(code **)(*plVar2 + 0x80))(local_68,plVar2,param_3);
    FUN_007ee660(local_58,local_68);
    if (local_58[0] != 0) goto LAB_00858e84;
LAB_00858f10:
    if ((char)param_2[0xe] == '\0') {
LAB_00858f40:
      bVar1 = false;
    }
    else {
      FUN_00846d20(local_68,plVar2,param_4,param_5);
      FUN_007ee660(local_58,local_68);
      if (local_58[0] != 0) goto LAB_00858f40;
      param_5 = (undefined4)plVar2[6];
      bVar1 = true;
    }
    local_78 = 0;
    local_74 = 0;
    local_72 = 0;
    local_73 = bVar1;
    if (param_3 == 0) {
      local_68[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = (**(code **)(*plVar2 + 0x70))(plVar2,local_68,param_5,&local_78);
    }
    else {
      local_68[0] = (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = (**(code **)(*plVar2 + 0x68))(plVar2,local_68,param_3,param_5,&local_78);
    }
    if (lVar4 != 0) {
      if (bVar1) {
        param_4 = plVar2[5];
      }
      FUN_0084695c(param_1,plVar2,param_4);
      return;
    }
    local_68[0] = 0x4c0d;
    local_48[0] = 0;
    pRVar6 = (Result *)local_48;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_68 | 4),pRVar6);
  piVar5 = local_68;
LAB_00858e88:
  FUN_007ee578(param_1,piVar5);
  return;
}


