/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c9178; name: FUN_008c9178
 */


void FUN_008c9178(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_40 = 0x8000000000000000;
  local_38 = 0x8000000000000000;
  local_30 = 0x8000000000000000;
  local_28 = 0x8000000000000000;
  bVar3 = *(byte *)(param_2 + 4);
  if (((((ulong)bVar3 != 0) && (local_40 = *param_2, bVar3 != 1)) &&
      (local_38 = param_2[1], bVar3 != 2)) &&
     ((local_30 = param_2[2], bVar3 != 3 && (local_28 = param_2[3], bVar3 != 4)))) {
    lVar6 = (ulong)bVar3 - 4;
    puVar7 = (undefined4 *)((long)param_2 + 0x24);
    puVar8 = (undefined4 *)((long)register0x00000008 + -0x1c);
    do {
      puVar8[-1] = puVar7[-1];
      lVar6 = lVar6 + -1;
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 2;
      puVar8 = puVar8 + 2;
    } while (lVar6 != 0);
  }
  FUN_008d2870(&local_40,(long)register0x00000008 + -0x20);
  local_60 = 0x8000000000000000;
  local_58 = 0x8000000000000000;
  local_50 = 0x8000000000000000;
  local_48 = 0x8000000000000000;
  if ((int)local_40 != 0) {
    local_60 = local_40;
    if ((int)local_38 != 0) {
      if (local_38._4_4_ == local_40._4_4_) {
        uVar9 = 2;
        local_58 = CONCAT44(local_40._4_4_,(int)local_38);
        if ((int)local_30 == 0) goto LAB_008c92d4;
LAB_008c924c:
        if (local_30._4_4_ == local_40._4_4_) {
          lVar6 = uVar9 * 8;
          piVar1 = (int *)(&local_60 + uVar9);
          uVar9 = (ulong)((int)uVar9 + 1);
          *piVar1 = (int)local_30;
          *(int *)((long)&local_60 + lVar6 + 4) = local_40._4_4_;
        }
        if (((int)local_28 == 0) || (local_28._4_4_ != local_40._4_4_)) goto LAB_008c92d4;
        lVar6 = uVar9 * 8;
        piVar1 = (int *)(&local_60 + uVar9);
        uVar9 = (ulong)((int)uVar9 + 1);
        *piVar1 = (int)local_28;
        *(int *)((long)&local_60 + lVar6 + 4) = local_40._4_4_;
      }
      else {
        uVar9 = 1;
        if ((int)local_30 != 0) goto LAB_008c924c;
LAB_008c92d4:
        if ((uint)uVar9 < 2) goto LAB_008c92dc;
      }
      FUN_008c5a38(param_1);
      uVar5 = FUN_00923bf0();
      iVar4 = FUN_009273d4(uVar5,uVar9);
      lVar6 = (long)iVar4;
      goto LAB_008c92a4;
    }
  }
LAB_008c92dc:
  lVar6 = 0;
LAB_008c92a4:
  uVar2 = *(undefined4 *)((long)&local_60 + lVar6 * 8 + 4);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(&local_60 + lVar6);
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  return;
}


