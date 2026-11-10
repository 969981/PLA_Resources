/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032deb54; name: FUN_032deb54
 */


void FUN_032deb54(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined *puStack_38;
  long *local_30;
  undefined4 *puStack_28;
  
  local_44 = 0x10;
  plVar6 = param_2 + 1;
  iVar3 = (int)*plVar6;
  local_50 = (long)iVar3 << 4;
  if (iVar3 < 0) {
    local_40 = 2;
    puStack_38 = &DAT_0411b3a0;
    puStack_28 = &local_44;
    local_30 = plVar6;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_40);
    iVar3 = (int)*plVar6;
  }
  if (iVar3 == 0) {
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x10))(param_1,local_50,&local_50);
    if (lVar2 != 0) {
      iVar3 = (int)(local_50 >> 4);
      if (0x3ffffffe < iVar3) {
        iVar3 = 0x3fffffff;
      }
      if (0 < (int)*plVar6) {
        lVar4 = 0;
        lVar5 = 0;
        do {
          uVar1 = ((undefined8 *)(*param_2 + lVar4))[1];
          lVar5 = lVar5 + 1;
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*param_2 + lVar4);
          ((undefined8 *)(lVar2 + lVar4))[1] = uVar1;
          lVar4 = lVar4 + 0x10;
        } while (lVar5 < (int)param_2[1]);
      }
      *param_2 = lVar2;
      *(int *)((long)param_2 + 0xc) = iVar3;
    }
  }
  return;
}


