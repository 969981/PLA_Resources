/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0324d8a4; name: FUN_0324d8a4
 */


void FUN_0324d8a4(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined *puStack_38;
  long *local_30;
  undefined4 *puStack_28;
  
  local_44 = 8;
  plVar5 = param_2 + 1;
  iVar2 = (int)*plVar5;
  local_50 = (long)iVar2 << 3;
  if (iVar2 < 0) {
    local_40 = 2;
    puStack_38 = &DAT_0411b3a0;
    puStack_28 = &local_44;
    local_30 = plVar5;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_40);
    iVar2 = (int)*plVar5;
  }
  if (iVar2 == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_50,&local_50);
    if (lVar1 != 0) {
      iVar2 = (int)(local_50 >> 3);
      if (0x3ffffffe < iVar2) {
        iVar2 = 0x3fffffff;
      }
      if (0 < (int)*plVar5) {
        lVar3 = 0;
        do {
          lVar4 = lVar3 * 8;
          lVar3 = lVar3 + 1;
          *(undefined8 *)(lVar1 + lVar4) = *(undefined8 *)(*param_2 + lVar4);
        } while (lVar3 < (int)param_2[1]);
      }
      *param_2 = lVar1;
      *(int *)((long)param_2 + 0xc) = iVar2;
    }
  }
  return;
}


