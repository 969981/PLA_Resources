/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0107ec80; name: FUN_0107ec80
 */


void FUN_0107ec80(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 local_38;
  
  uVar1 = FUN_0015b200(*param_2,0,param_5);
  *(undefined4 *)(param_2 + 4) = uVar1;
  uVar1 = FUN_0014fef0(*param_2);
  uVar4 = *(uint *)(param_2 + 4);
  if (uVar4 < 2) {
    *param_1 = *param_2;
    uVar2 = 1;
    uVar5 = uVar1;
  }
  else {
    if (*(uint *)(param_2 + 3) < 0xfffffffe) {
      uVar3 = FUN_00150da0(*param_2,uVar1,&local_38);
      lVar6 = param_2[2];
      if (lVar6 == 0) {
        FUN_00151490(0);
      }
      else {
        FUN_00151e00(lVar6,0xfff0b9d8,(long)*(int *)(param_2 + 3));
        if (param_2[2] != lVar6) {
          FUN_0014fe00(param_2[2],lVar6,1);
        }
      }
      FUN_001514f0(*param_2,uVar3,local_38);
      FUN_00152d80(*param_2,1,1,0,0);
    }
    uVar3 = *param_2;
    uVar2 = FUN_0014feb0(uVar3,0xffffffff);
    uVar4 = *(uint *)(param_2 + 4);
    *param_1 = uVar3;
    uVar5 = 1;
  }
  *(undefined4 *)(param_1 + 1) = uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(uint *)((long)param_1 + 0x14) = uVar4;
  return;
}


