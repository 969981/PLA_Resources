/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9b348; name: FUN_02e9b348
 */


ulong FUN_02e9b348(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  long *plVar9;
  undefined8 local_30;
  int local_28 [2];
  
  uVar1 = (**(code **)(*(long *)param_1[8] + 0x30))();
  *(uint *)(param_1 + 6) = uVar1;
  if (uVar1 == 0) {
    uVar5 = 2;
  }
  else {
    uVar6 = *(uint *)((long)param_1 + 0x24);
    if (uVar6 < uVar1) {
      if (param_1[5] != 0) {
        (*DAT_0442d158)(0);
        uVar1 = *(uint *)(param_1 + 6);
      }
      if (uVar1 <= DAT_0440a200) {
        uVar1 = DAT_0440a200;
      }
      *(uint *)((long)param_1 + 0x24) = uVar1;
      lVar4 = (*DAT_0442d140)(0,uVar1 << 1,0x20);
      param_1[5] = lVar4;
      if (lVar4 == 0) {
        return 0x34;
      }
      uVar6 = *(uint *)((long)param_1 + 0x24);
    }
    else {
      lVar4 = param_1[5];
    }
    *param_1 = lVar4;
    param_1[1] = lVar4 + (ulong)uVar6;
    if (param_2 == 0) {
      uVar5 = 1;
    }
    else {
      local_30 = 0;
      uVar5 = (**(code **)(*(long *)param_1[8] + 0x50))((long *)param_1[8],param_2,0,&local_30);
      if ((int)uVar5 == 1) {
        uVar1 = param_2 - (int)local_30;
        if (uVar1 == 0) {
          uVar6 = 0;
          uVar3 = 1;
        }
        else {
          uVar6 = 0;
          uVar7 = uVar1;
          do {
            puVar8 = (uint *)((long)param_1 + (ulong)*(uint *)(param_1 + 4) * 4 + 0x18);
            uVar3 = *puVar8;
            if (uVar3 == 0) {
              if ((long *)param_1[8] == (long *)0x0) {
                uVar3 = 1;
                break;
              }
              iVar2 = (**(code **)(*(long *)param_1[8] + 0x70))();
              if (iVar2 == 4) {
                uVar3 = 0x38;
                break;
              }
              uVar5 = (ulong)((int)param_1[4] == 0);
              if (*(int *)((long)param_1 + uVar5 * 4 + 0x18) == 0) {
                uVar3 = (**(code **)(*(long *)param_1[8] + 0x50))
                                  ((long *)param_1[8],uVar7,1,local_28);
                if (uVar3 != 1) break;
                uVar6 = uVar6 + local_28[0];
                uVar7 = uVar7 - local_28[0];
              }
              else {
                *(uint *)(param_1 + 4) = (uint)((int)param_1[4] == 0);
                param_1[2] = param_1[uVar5];
              }
            }
            else {
              if (uVar7 <= uVar3) {
                uVar3 = uVar7;
              }
              lVar4 = param_1[10];
              uVar6 = uVar3 + uVar6;
              uVar7 = uVar7 - uVar3;
              if (lVar4 == 0) {
                lVar4 = param_1[2];
                plVar9 = param_1 + 2;
              }
              else {
                plVar9 = param_1 + 10;
              }
              *plVar9 = lVar4 + (ulong)uVar3;
              *puVar8 = *puVar8 - uVar3;
            }
            uVar3 = 1;
          } while (uVar6 < uVar1);
        }
        if (uVar6 != uVar1) {
          uVar3 = 2;
        }
        uVar5 = (ulong)uVar3;
      }
    }
  }
  return uVar5;
}


