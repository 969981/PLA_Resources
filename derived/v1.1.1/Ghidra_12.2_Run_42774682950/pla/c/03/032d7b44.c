/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d7b44; name: FUN_032d7b44
 */


void FUN_032d7b44(long *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                 long param_6,uint param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 local_1b0;
  long local_1a8;
  ulong local_1a0;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_44;
  
  FUN_032d7d70(param_1,param_2,param_3,param_6,param_7 & 1,param_8);
  iVar4 = (int)((ulong)(param_5 - param_4) >> 4);
  lVar5 = *(long *)(*param_1 + 0x20);
  local_44 = 0;
  if (0 < iVar4) {
    if (param_6 == 0) {
      do {
        puVar1 = (undefined8 *)(param_4 + (long)local_44 * 0x10);
        local_60 = *puVar1;
        uStack_58 = puVar1[1];
        local_1b0 = *(undefined8 *)(lVar5 + (long)local_44 * 8);
        local_1a8 = 0;
        local_1a0 = 0;
        iVar2 = FUN_032e6110(&local_1b0,&local_60);
        if ((local_1a0 & 1) != 0) {
          FUN_032e0c40(local_1a0 & 0xfffffffffffffffe);
        }
        if (iVar2 < 0) goto LAB_032d7c84;
        local_44 = local_44 + 1;
      } while (local_44 < iVar4);
    }
    else {
      do {
        puVar1 = (undefined8 *)(param_4 + (long)local_44 * 0x10);
        local_60 = *puVar1;
        uStack_58 = puVar1[1];
        local_1b0 = *(undefined8 *)(lVar5 + (long)local_44 * 8);
        local_1a8 = param_6;
        local_1a0 = FUN_032e3508(param_6);
        if ((local_1a0 & 1) != 0) {
          FUN_032e0c28(local_1a0 & 0xfffffffffffffffe);
        }
        iVar2 = FUN_032e6110(&local_1b0,&local_60);
        if ((local_1a0 & 1) != 0) {
          FUN_032e0c40(local_1a0 & 0xfffffffffffffffe);
        }
        if (iVar2 < 0) {
LAB_032d7c84:
          if ((1 < DAT_04449fe8) || (uVar3 = FUN_03327170(), (uVar3 & 1) != 0)) {
            uVar3 = FUN_03327170();
            if ((uVar3 & 1) == 0) {
              FUN_03326994(&local_1b0,&DAT_04449f98,2);
              lVar5 = FUN_03326338(&local_1b0,"Invalid value for element {}: \'{}\'",&DAT_0434ab50,
                                   &local_44,&local_60);
              *(char **)(lVar5 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              *(undefined8 *)(lVar5 + 0x40) = 0x1a7;
              FUN_033269dc(&local_1b0);
            }
            else {
              FUN_03326a7c(&local_1b0,&DAT_04449f98,2);
              lVar5 = FUN_03326338(&local_1b0,"Invalid value for element {}: \'{}\'",&DAT_0434ab50,
                                   &local_44,&local_60);
              *(char **)(lVar5 + 0x38) =
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Attributes/hkAttributes.cpp"
              ;
              *(undefined8 *)(lVar5 + 0x40) = 0x1a7;
              FUN_03326adc(&local_1b0);
            }
          }
          FUN_032e6310(param_1,3,1);
          return;
        }
        local_44 = local_44 + 1;
      } while (local_44 < iVar4);
    }
  }
  return;
}


