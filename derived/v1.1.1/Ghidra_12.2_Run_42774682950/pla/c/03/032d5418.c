/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d5418; name: FUN_032d5418
 */


undefined8 FUN_032d5418(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong local_68;
  undefined8 local_60;
  undefined *puStack_58;
  long *local_50;
  undefined4 *puStack_48;
  undefined4 local_34;
  
  local_34 = 0x38;
  plVar10 = param_2 + 1;
  iVar6 = (int)*plVar10;
  local_68 = (long)iVar6 * 0x38;
  if (iVar6 < 0) {
    local_60 = 2;
    puStack_58 = &DAT_0411b3a0;
    puStack_48 = &local_34;
    local_50 = plVar10;
    FUN_03320b50(0x77a36e5f,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x27,"Array size overflow {}*{}",&local_60);
    iVar6 = (int)*plVar10;
  }
  if (iVar6 == 0) {
    uVar4 = 0;
    *(undefined4 *)((long)param_2 + 0xc) = 0;
    *param_2 = 0;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x10))(param_1,local_68,&local_68);
    if (lVar5 == 0) {
      uVar4 = 0x80040200;
    }
    else {
      iVar6 = (int)(local_68 / 0x38);
      if (0x3ffffffe < iVar6) {
        iVar6 = 0x3fffffff;
      }
      if (0 < (int)*plVar10) {
        lVar7 = 0;
        lVar8 = 0;
        do {
          puVar1 = (undefined8 *)(lVar5 + lVar7);
          lVar8 = lVar8 + 1;
          puVar2 = (undefined8 *)(*param_2 + lVar7);
          lVar7 = lVar7 + 0x38;
          uVar4 = *puVar2;
          uVar9 = puVar2[2];
          puVar1[1] = puVar2[1];
          puVar1[2] = uVar9;
          *puVar1 = uVar4;
          uVar4 = puVar2[3];
          uVar9 = puVar2[4];
          uVar3 = puVar2[6];
          puVar1[5] = puVar2[5];
          puVar1[6] = uVar3;
          puVar1[3] = uVar4;
          puVar1[4] = uVar9;
          *(undefined1 *)(puVar2 + 1) = 0;
          *(undefined4 *)((long)puVar2 + 10) = 0;
          puVar2[2] = 0;
          *puVar2 = &PTR_LAB_0434d568;
        } while (lVar8 < (int)param_2[1]);
        if (0 < (int)param_2[1]) {
          lVar7 = 0;
          lVar8 = 0;
          do {
            (**(code **)(*(long *)(*param_2 + lVar7) + 8))();
            lVar8 = lVar8 + 1;
            lVar7 = lVar7 + 0x38;
          } while (lVar8 < (int)param_2[1]);
        }
      }
      uVar4 = 0;
      *param_2 = lVar5;
      *(int *)((long)param_2 + 0xc) = iVar6;
    }
  }
  return uVar4;
}


