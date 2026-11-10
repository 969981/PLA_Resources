/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00861514; name: FUN_00861514
 */


void FUN_00861514(undefined8 param_1,long param_2,ulong *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  ulong local_48;
  ulong local_40 [2];
  
  uVar3 = 3;
  uVar4 = 2;
  switch((int)param_3[4]) {
  case 2:
    uVar2 = (**(code **)(**(long **)(param_2 + 0xb0) + 0x3f8))();
    if (((uVar2 & 1) == 0) || ((*(byte *)((long)param_3 + 0x74) & 7) == 0)) {
      uVar3 = 0;
      uVar4 = 1;
      break;
    }
LAB_0086166c:
    local_40[0] = 0;
    FUN_007ecf14(local_40);
    *param_3 = local_40[0];
    *(int *)((long)param_3 + 0x74) = *(int *)((long)param_3 + 0x74) + 1;
    local_40[0] = local_40[0] & 0xffffffff00000000;
    goto LAB_00861694;
  default:
    local_40[0] = CONCAT44(local_40[0]._4_4_,0x10408);
LAB_00861694:
    local_48 = local_48 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)&local_48);
    goto LAB_008616f0;
  case 5:
    fVar6 = *(float *)(param_3 + 0xe);
    lVar1 = FUN_0085a3c0(param_2,param_3,3,2);
    if ((lVar1 == 0) || (fVar5 = *(float *)(lVar1 + 0xc), fVar5 < 0.0)) {
      fVar5 = *(float *)PTR_DAT_043781a8;
    }
    fVar6 = fVar6 + fVar5;
    lVar1 = FUN_0085a3c0();
    if (lVar1 == 0) {
      if (10.0 < fVar6) goto LAB_008615f0;
    }
    else {
      fVar5 = (float)*(int *)(lVar1 + 8);
      if (*(int *)(lVar1 + 8) < 1) {
        fVar5 = 10.0;
      }
      if (fVar5 < fVar6) {
LAB_008615f0:
        lVar1 = FUN_0085a3c0();
        if (lVar1 == 0) {
          fVar6 = 10.0;
        }
        else {
          fVar6 = (float)*(int *)(lVar1 + 8);
          if (*(int *)(lVar1 + 8) < 1) {
            fVar6 = 10.0;
          }
        }
      }
    }
    *(float *)(param_3 + 0xe) = fVar6;
    FUN_00861408(local_40,param_2,param_3,2,2);
    uVar2 = (**(code **)(**(long **)(param_2 + 0xb0) + 0x3f8))();
    if (((uVar2 & 1) != 0) && ((*(byte *)((long)param_3 + 0x74) & 7) != 0)) goto LAB_0086166c;
    uVar4 = 1;
    uVar3 = 1;
    break;
  case 8:
    break;
  case 10:
    uVar3 = 4;
    uVar4 = 2;
  }
  FUN_00861408(local_40,param_2,param_3,uVar3,uVar4);
  if ((int)local_40[0] == 0) {
    local_48 = 0;
    FUN_007ecf14(&local_48);
    *param_3 = local_48;
    *(int *)((long)param_3 + 0x74) = *(int *)((long)param_3 + 0x74) + 1;
  }
LAB_008616f0:
  FUN_007ee578(param_1,local_40);
  return;
}


