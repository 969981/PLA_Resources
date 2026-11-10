/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00841088; name: FUN_00841088
 */


void FUN_00841088(undefined8 param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined8 uVar5;
  int local_90 [4];
  int local_80 [4];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar4 = local_90;
  local_70 = *param_3;
  uStack_68 = param_3[1];
  local_60 = param_3[2];
  uStack_58 = param_3[3];
  FUN_00847298(local_50,param_2,&local_70);
  if (local_50[0] == 0) {
    if (*(long **)(param_2 + 0x70) == (long *)0x0) {
      local_80[0] = 0x1040c;
      local_90[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_90);
      piVar4 = local_80;
    }
    else {
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(undefined4 *)(param_2 + 100) = 0;
      (**(code **)(**(long **)(param_2 + 0x70) + 0x18))(local_80);
      uVar5 = *(undefined8 *)(param_2 + 0x70);
      uVar1 = FUN_00847424(param_2);
      uVar2 = FUN_00847434(param_2);
      uVar3 = FUN_00847388(param_2);
      FUN_0084b2e8(uVar5,uVar1,uVar2,uVar3,*(undefined1 *)param_3);
      local_90[0] = 0;
      local_38[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_90 | 4),(Result *)local_38);
    }
  }
  else {
    piVar4 = local_50;
  }
  FUN_007ee578(param_1,piVar4);
  return;
}


