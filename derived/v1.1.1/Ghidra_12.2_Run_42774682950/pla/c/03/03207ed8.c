/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03207ed8; name: FUN_03207ed8
 */


void FUN_03207ed8(long *param_1,long *param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint local_4c;
  ulong local_48;
  undefined *local_40;
  uint *puStack_38;
  
  local_4c = param_4;
  if (0x3fffffff < (int)param_4) {
    local_48 = 1;
    puStack_38 = &local_4c;
    local_40 = &DAT_0411b3b8;
    FUN_03320b50(0x159079fc,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x80,"Invalid requestedCapacity {}",&local_48);
  }
  if ((param_3 == 0) || ((int)param_4 <= (int)param_2[1])) {
    local_48 = -(ulong)(param_4 >> 0x1f) & 0xfffffff000000000 | (ulong)param_4 << 4;
    if ((int)*(uint *)((long)param_2 + 0xc) <= (int)param_4) {
      param_4 = *(uint *)((long)param_2 + 0xc);
    }
    lVar3 = (**(code **)(*param_1 + 0x10))(param_1,local_48,&local_48);
    if (0 < (int)param_4) {
      lVar4 = 0;
      lVar5 = 0;
      do {
        puVar1 = (undefined4 *)(*param_2 + lVar4);
        puVar2 = (undefined4 *)(lVar3 + lVar4);
        lVar4 = lVar4 + 0x10;
        *puVar2 = *puVar1;
        lVar5 = lVar5 + 1;
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(puVar1 + 2) = 0;
      } while (lVar5 < (int)param_4);
    }
    (**(code **)(*param_1 + 0x18))(param_1,*param_2,(long)*(int *)((long)param_2 + 0xc) << 4);
    *param_2 = lVar3;
    param_4 = (uint)(local_48 >> 4);
    if (0x3ffffffe < (int)param_4) {
      param_4 = 0x3fffffff;
    }
  }
  else {
    if (0 < (int)param_2[1]) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        puVar1 = (undefined4 *)(*param_2 + lVar3);
        puVar2 = (undefined4 *)(param_3 + lVar3);
        lVar3 = lVar3 + 0x10;
        *puVar2 = *puVar1;
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
        *(undefined8 *)(puVar1 + 2) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_2[1]);
    }
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulong)*(uint *)((long)param_2 + 0xc) & 0x3fffffff) << 4);
    *param_2 = param_3;
    param_4 = param_4 | 0x80000000;
  }
  *(uint *)((long)param_2 + 0xc) = param_4;
  return;
}


