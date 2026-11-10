/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029e5830; name: FUN_029e5830
 */


void FUN_029e5830(long param_1,undefined1 *param_2,byte *param_3)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_50;
  undefined8 local_48;
  
  local_48 = 0;
  *param_2 = 0;
  local_50 = 0;
  uVar6 = (ulong)*(uint *)(param_3 + 4);
  if ((int)*(uint *)(param_3 + 4) < 5) {
    if (*(int *)(&DAT_03a80680 + uVar6 * 4) == 2) {
      uVar10 = 1;
      local_50 = (ulong)param_3[0xc];
    }
    else if (*(int *)(&DAT_03a80680 + uVar6 * 4) == 1) {
      bVar2 = *param_3;
      local_50 = CONCAT44(*(uint *)(param_3 + 8),
                          (*(uint *)(param_3 + 8) >> 0x10 & 0xf) +
                          *(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x1c8) + 8)) &
                 0xffffffffffff;
      lVar8 = *(long *)(*(long *)(param_1 + 0x10) + 8);
      if (bVar2 < 6) {
        uVar6 = 0;
      }
      else if (bVar2 < 0xc) {
        uVar6 = 2;
      }
      else if (bVar2 < 0x12) {
        uVar6 = 1;
      }
      else {
        uVar4 = 3;
        if (0x17 < bVar2) {
          uVar4 = (uint)(bVar2 < 0x1e) << 2;
        }
        uVar6 = (ulong)uVar4;
      }
      uVar4 = (uint)*(byte *)(lVar8 + uVar6 * 0x38 + 0x38);
      if (uVar4 != 0) {
        uVar5 = 0;
        do {
          if (*(byte *)(*(long *)(lVar8 + uVar6 * 0x38 + (ulong)(uVar5 & 0xff) * 8 + 8) + 0x7d) ==
              bVar2) {
            uVar4 = FUN_0294753c(*(undefined8 *)(param_1 + 8));
            if ((uVar4 & 0xff) != 6) goto LAB_029e5980;
            break;
          }
          uVar5 = uVar5 + 1;
        } while (uVar4 != uVar5);
      }
      uVar4 = 6;
LAB_029e5980:
      local_48 = CONCAT44(local_48._4_4_,uVar4) & 0xffffffff000000ff;
      uVar6 = (ulong)*(uint *)(param_3 + 4);
      uVar10 = 3;
    }
    else {
      uVar10 = 0;
    }
    uVar7 = (ulong)param_3[1];
    if ((uVar7 < 6) && ((int)uVar6 < 5)) {
      lVar8 = *(long *)(param_1 + 0x20);
      lVar9 = *(long *)(*(long *)(*(long *)(lVar8 + 0x10) + 0x68) + uVar7 * 0xa0 + uVar6 * 0x20 + 8)
      ;
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) == '\0')) {
        uVar1 = *(undefined4 *)(param_3 + 8);
        *(undefined1 *)(lVar9 + 0x10) = 1;
        *(undefined4 *)(lVar9 + 0x14) = uVar1;
        FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x43,uVar6,uVar7,*(undefined4 *)(param_3 + 8));
        *param_2 = 1;
        lVar8 = *(long *)(param_1 + 0x20);
        bVar2 = *param_3;
        uVar1 = *(undefined4 *)(param_3 + 4);
        bVar3 = param_3[1];
        FUN_029654d0(*(undefined8 *)(*(long *)(lVar8 + 0x20) + 0x18),uVar1,bVar3,bVar2,&local_50,
                     uVar10);
        FUN_02a3e6b8(*(undefined8 *)(lVar8 + 0x18),0x5f,uVar1,bVar3,bVar2,uVar10,
                     local_50 & 0xffffffff,local_50._4_4_,(undefined4)local_48,local_48._4_4_);
        return;
      }
    }
  }
  *param_2 = 0;
  return;
}


