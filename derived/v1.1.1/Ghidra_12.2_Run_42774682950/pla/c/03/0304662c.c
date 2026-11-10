/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0304662c; name: FUN_0304662c
 */


undefined4 * FUN_0304662c(long *param_1,uint param_2,undefined4 *param_3,uint param_4,uint *param_5)

{
  ulong *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_88;
  uint local_7c;
  undefined8 local_78;
  undefined *local_70;
  uint *puStack_68;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar10 = *param_5;
  uVar4 = (uVar10 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar4) {
    uVar4 = 0x3fffffff;
  }
  local_7c = param_2;
  if ((int)param_2 <= (int)uVar4) {
    local_7c = uVar4;
  }
  uVar4 = uVar10 & 0x3fffffff;
  local_88 = (ulong)local_7c << 4;
  if ((int)local_7c < (int)uVar4 || 0x3fffffff < (int)local_7c) {
    local_78 = 1;
    puStack_68 = &local_7c;
    local_70 = &DAT_0411b3b8;
    FUN_03320b50(0x65816502,
                 "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Container/Array/hkArrayUtil.cpp"
                 ,0x5a,"Invalid requestedCapacity {}",&local_78);
    uVar10 = *param_5;
    uVar4 = uVar10 & 0x3fffffff;
  }
  puVar3 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,local_88,&local_88);
  if (0 < (int)param_4) {
    *puVar3 = *param_3;
    *(undefined8 *)(puVar3 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)(param_3 + 2) = 0;
    if (param_4 != 1) {
      puVar3[4] = param_3[4];
      *(undefined8 *)(puVar3 + 6) = *(undefined8 *)(param_3 + 6);
      *(undefined8 *)(param_3 + 6) = 0;
      if (param_4 != 2) {
        puVar3[8] = param_3[8];
        *(undefined8 *)(puVar3 + 10) = *(undefined8 *)(param_3 + 10);
        *(undefined8 *)(param_3 + 10) = 0;
        if (param_4 != 3) {
          puVar3[0xc] = param_3[0xc];
          *(undefined8 *)(puVar3 + 0xe) = *(undefined8 *)(param_3 + 0xe);
          *(undefined8 *)(param_3 + 0xe) = 0;
          if (param_4 != 4) {
            puVar3[0x10] = param_3[0x10];
            *(undefined8 *)(puVar3 + 0x12) = *(undefined8 *)(param_3 + 0x12);
            *(undefined8 *)(param_3 + 0x12) = 0;
            if (param_4 != 5) {
              puVar3[0x14] = param_3[0x14];
              *(undefined8 *)(puVar3 + 0x16) = *(undefined8 *)(param_3 + 0x16);
              *(undefined8 *)(param_3 + 0x16) = 0;
              if (param_4 != 6) {
                lVar5 = (ulong)param_4 - 6;
                puVar7 = (undefined8 *)(param_3 + 0x1a);
                puVar8 = (undefined8 *)(puVar3 + 0x1a);
                do {
                  *(undefined4 *)(puVar8 + -1) = *(undefined4 *)(puVar7 + -1);
                  lVar5 = lVar5 + -1;
                  *puVar8 = *puVar7;
                  *puVar7 = 0;
                  puVar7 = puVar7 + 2;
                  puVar8 = puVar8 + 2;
                } while (lVar5 != 0);
              }
            }
          }
        }
      }
    }
    uVar9 = 0;
    do {
      if (DAT_0444b3c8 != '\0') {
        puVar1 = (ulong *)(param_3 + uVar9 * 4 + 2);
        plVar6 = (long *)(*puVar1 & 0xfffffffffffffffc);
        if (plVar6 != (long *)0x0) {
          if ((*puVar1 & 3) == 0) {
            *puVar1 = (ulong)plVar6 | 1;
            do {
              lVar5 = *plVar6;
              plVar6 = (long *)(plVar6[1] & 0xfffffffffffffffc);
              (**(code **)(lVar5 + 8))();
            } while (plVar6 != (long *)0x0);
            *puVar1 = 0;
          }
          else {
            do {
              plVar2 = (long *)(plVar6[1] & 0xfffffffffffffffc);
              plVar6[1] = (ulong)plVar2 | 1;
              plVar6 = plVar2;
            } while (plVar2 != (long *)0x0);
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4);
  }
  if (-1 < (int)uVar10) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,(ulong)uVar4 << 4);
  }
  if (local_88 < 0x3fffffff0) {
    uVar10 = (uint)(local_88 >> 4);
  }
  else {
    uVar10 = 0x3fffffff;
  }
  *param_5 = uVar10;
  return puVar3;
}


