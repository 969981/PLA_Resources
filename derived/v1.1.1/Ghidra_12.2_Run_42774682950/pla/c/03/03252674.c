/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03252674; name: FUN_03252674
 */


void FUN_03252674(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong local_68;
  undefined8 local_60;
  undefined *puStack_58;
  long *local_50;
  undefined4 *puStack_48;
  undefined4 local_34;
  
  local_34 = 0x68;
  plVar4 = param_2 + 1;
  iVar2 = (int)*plVar4;
  local_68 = (long)iVar2 * 0x68;
  if (iVar2 < 0) {
    local_60 = 2;
    puStack_58 = &DAT_0411b3a0;
    puStack_48 = &local_34;
    local_50 = plVar4;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_60);
    iVar2 = (int)*plVar4;
  }
  if (iVar2 == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    if (lVar1 != 0) {
      iVar2 = (int)(local_68 / 0x68);
      if (0x3ffffffe < iVar2) {
        iVar2 = 0x3fffffff;
      }
      if (0 < (int)*plVar4) {
        lVar5 = 0;
        lVar6 = 0;
        do {
          lVar3 = *param_2;
          *(undefined4 *)(lVar1 + lVar5) = *(undefined4 *)(lVar3 + lVar5);
          FUN_031ced98((undefined4 *)(lVar1 + lVar5) + 2,(undefined4 *)(lVar3 + lVar5) + 2);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0x68;
        } while (lVar6 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar6 = 0;
          lVar5 = 8;
          do {
            FUN_031cd728(*param_2 + lVar5);
            lVar6 = lVar6 + 1;
            lVar5 = lVar5 + 0x68;
          } while (lVar6 < (int)param_2[1]);
        }
      }
      *param_2 = lVar1;
      *(int *)((long)param_2 + 0xc) = iVar2;
    }
  }
  return;
}


