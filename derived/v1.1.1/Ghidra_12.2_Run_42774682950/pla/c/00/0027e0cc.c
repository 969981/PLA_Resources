/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027e0cc; name: FUN_0027e0cc
 */


undefined8
FUN_0027e0cc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
            undefined4 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  long local_48;
  int local_34;
  
  local_48 = 0;
  local_34 = 0;
  FUN_00284370(*(float *)(param_3 + 0x44) - *(float *)(param_3 + 0x4c),*param_1,&local_48,&local_34,
               param_3,*(undefined1 *)(*(long *)(*(long *)(param_3 + 0x238) + 0x10) + 0x751),
               *param_6);
  if (local_34 == 0) {
    uVar2 = 0;
  }
  else {
    if (0 < local_34) {
      if (param_5 == (long *)0x0) {
        lVar6 = 4;
        lVar5 = 0;
        iVar4 = local_34;
        do {
          lVar1 = *(long *)(param_3 + 0xb0) + (long)*(int *)(local_48 + lVar6) * 0x20;
          fVar7 = *(float *)(lVar1 + 0xc);
          if (((*(float *)(param_3 + 0x44) - *(float *)(lVar1 + 8) <= fVar7) &&
              (*(int *)(*(long *)(param_3 + 0xb0) + (long)*(int *)(local_48 + lVar6) * 0x20) != 0))
             && (0.0 < fVar7)) {
            FUN_0087750c(param_2,4,4,0,1);
            iVar4 = local_34;
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar5 < iVar4);
      }
      else {
        lVar5 = 0;
        lVar6 = 4;
        iVar4 = local_34;
        do {
          lVar3 = (long)*(int *)(local_48 + lVar6);
          lVar1 = *(long *)(param_3 + 0xb0) + lVar3 * 0x20;
          fVar7 = *(float *)(lVar1 + 0xc);
          if (((*(float *)(param_3 + 0x44) - *(float *)(lVar1 + 8) <= fVar7) &&
              (*(int *)(*(long *)(param_3 + 0xb0) + lVar3 * 0x20) != 0)) && (0.0 < fVar7)) {
            (**(code **)(*param_5 + 0x60))(param_5,param_2,1,lVar3,*(undefined1 *)(param_3 + 8));
            iVar4 = local_34;
          }
          lVar5 = lVar5 + 1;
          lVar6 = lVar6 + 8;
        } while (lVar5 < iVar4);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


