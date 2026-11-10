/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00840f30; name: FUN_00840f30
 */


void FUN_00840f30(undefined8 param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  short sVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar7 = local_60;
  if (param_2[0xe] == 0) {
    *(undefined2 *)((long)param_2 + 0x5a) = *(undefined2 *)(*(long *)PTR_DAT_043773c0 + 0x50);
    uVar5 = FUN_007e336c();
    lVar6 = FUN_0081a750(0x558,uVar5);
    if (lVar6 != 0) {
      FUN_00841a3c(lVar6);
    }
    param_2[0xe] = lVar6;
    uVar1 = *(undefined2 *)((long)param_2 + 0x5a);
    uVar4 = (**(code **)(*param_2 + 0x18))(param_2);
    FUN_00841c6c(local_50,lVar6,param_3,param_4,uVar1,uVar4);
    puVar3 = PTR_DAT_043773b8;
    if (local_50[0] == 0) {
      param_2[0xc] = 0xfffffff;
      sVar2 = *(short *)((long)param_2 + 0x5a);
      local_60[0] = 0;
      local_38[0] = 0;
      *(short *)(puVar3 + 0x3d2) = sVar2 * (short)param_4;
      *(short *)(puVar3 + 0x3d0) = sVar2 * (short)param_3;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
    }
    else {
      puVar8 = (undefined8 *)param_2[0xe];
      *(undefined2 *)((long)param_2 + 0x5a) = 0;
      param_2[0xc] = 0;
      if (puVar8 != (undefined8 *)0x0) {
        (**(code **)*puVar8)(puVar8);
        FUN_0081a800(puVar8);
        param_2[0xe] = 0;
      }
      piVar7 = local_50;
    }
  }
  else {
    local_50[0] = 0x10402;
    local_60[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
    piVar7 = local_50;
  }
  FUN_007ee578(param_1,piVar7);
  return;
}


