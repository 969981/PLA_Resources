/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea86a4; name: FUN_02ea86a4
 */


undefined8
FUN_02ea86a4(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 param_5,undefined1 *param_6)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  long local_40;
  ulong local_38;
  undefined8 local_30;
  uint local_28;
  
  local_28 = 0;
  local_38 = 0;
  local_30 = 0;
  local_40 = 0;
  FUN_02ea8874(param_1,*(undefined8 *)(param_1 + 8),param_2,param_3,&local_40,param_4);
  uVar2 = local_38 & 0xffffffff;
  if ((uint)local_38 == 0) {
    *param_6 = 4;
    uVar8 = 0;
  }
  else {
    if ((uint)local_30 == 0) {
      DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
      uVar3 = (uint)((ulong)DAT_0440a190 >> 0x21);
      if ((uint)local_38 < local_30._4_4_ || (uint)local_38 - local_30._4_4_ == 0) {
        uVar7 = 0;
        if (local_30._4_4_ != 0) {
          uVar7 = uVar3 / local_30._4_4_;
        }
        lVar4 = 0;
        iVar6 = uVar3 - uVar7 * local_30._4_4_;
        do {
          if (*(short *)(*(long *)(local_40 + lVar4) + 8) == 0) {
            if (iVar6 == 0) {
              uVar5 = 3;
              uVar3 = local_30._4_4_;
LAB_02ea8754:
              *param_6 = uVar5;
              *(uint *)(param_6 + 4) = uVar3;
              *(uint *)(param_6 + 8) = (uint)local_38;
              uVar8 = *(undefined8 *)(local_40 + lVar4);
              goto joined_r0x02ea8864;
            }
            iVar6 = iVar6 + -1;
          }
          lVar4 = lVar4 + 8;
        } while (uVar2 * 8 != lVar4);
      }
      else {
        uVar7 = 0;
        if (local_28 != 0) {
          uVar7 = uVar3 / local_28;
        }
        lVar4 = 0;
        uVar3 = uVar3 - uVar7 * local_28;
        do {
          uVar7 = (uint)*(ushort *)(*(long *)(local_40 + lVar4) + 8);
          bVar1 = uVar3 < uVar7;
          uVar3 = uVar3 - uVar7;
          if (bVar1) {
            *param_6 = 2;
            *(uint *)(param_6 + 4) = (uint)local_38 - local_30._4_4_;
            *(uint *)(param_6 + 8) = (uint)local_38;
            uVar8 = *(undefined8 *)(local_40 + lVar4);
            goto joined_r0x02ea8864;
          }
          lVar4 = lVar4 + 8;
        } while (uVar2 * 8 != lVar4);
      }
    }
    else {
      DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
      uVar3 = 0;
      uVar7 = (uint)((ulong)DAT_0440a190 >> 0x21);
      if ((uint)local_30 != 0) {
        uVar3 = uVar7 / (uint)local_30;
      }
      lVar4 = 0;
      iVar6 = uVar7 - uVar3 * (uint)local_30;
      do {
        if (*(short *)(*(long *)(local_40 + lVar4) + 8) == 100) {
          if (iVar6 == 0) {
            uVar5 = 1;
            uVar3 = (uint)local_30;
            goto LAB_02ea8754;
          }
          iVar6 = iVar6 + -1;
        }
        lVar4 = lVar4 + 8;
      } while (uVar2 * 8 != lVar4);
    }
    uVar8 = 0;
  }
joined_r0x02ea8864:
  if (local_40 != 0) {
    local_38 = local_38 & 0xffffffff00000000;
    FUN_02f59e60(0);
  }
  return uVar8;
}


