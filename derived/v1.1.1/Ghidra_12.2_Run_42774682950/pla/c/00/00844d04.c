/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00844d04; name: FUN_00844d04
 */


void FUN_00844d04(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  byte local_a8;
  ushort local_a6;
  uint local_a4;
  char local_98;
  int local_94;
  undefined4 local_68 [2];
  
  if (*(char *)(param_2 + 0x1938) == '\0') {
    uVar9 = 0x10408;
  }
  else {
    if (*(char *)(param_3 + 0x648) != '\0') {
      uVar5 = FUN_007f07d0(param_3);
      if ((uVar5 & 1) == 0) {
        local_c8 = 0;
        local_d0 = 0x20000000;
        FUN_007f0cd0(param_3,&local_d0,0);
        local_d0 = CONCAT44(local_d0._4_4_,0x10407);
        goto LAB_00845170;
      }
      pMVar1 = (MutexType *)(param_2 + 0x1910);
      nn::os::LockMutex(pMVar1);
      FUN_00848470(&local_d0);
      if ((*(uint *)(param_3 + 0x5f8) - 0x1c != (uint)*(byte *)(param_3 + 0x14)) &&
         (*(byte *)(param_3 + 0x14) + 0x1c <= *(uint *)(param_3 + 0x5f8))) {
        uVar11 = 0;
        uVar2 = param_4 & 0xffff;
        do {
          FUN_008484cc(&local_d0,param_3,uVar11);
          uVar8 = local_a4;
          if (local_d0 == 0) {
            if (((param_7 & 1) == 0) && (local_98 != '\0')) {
              iVar12 = 0;
              if (*(byte *)(param_3 + 0x14) + 0x1c <= *(uint *)(param_3 + 0x5f8)) {
                iVar12 = (*(uint *)(param_3 + 0x5f8) - (uint)*(byte *)(param_3 + 0x14)) + 0xffe4;
              }
              param_6 = iVar12 - uVar11;
            }
            break;
          }
          if ((param_7 & 1) == 0) {
            if ((local_a4 >> 0x10 & 0xff) == 0) {
              uVar3 = 0;
            }
            else {
              uVar5 = FUN_0084886c(&local_d0);
              if (0xff < uVar5) {
                local_d8 = 0;
                local_e0 = 1;
                FUN_007f0cd0(param_3,&local_e0,0);
                local_d8 = 0;
                local_e0 = 1;
                FUN_0084890c(&local_d0,&local_e0);
                local_e0 = CONCAT44(local_e0._4_4_,0x10407);
                local_68[0] = 0;
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((ulong)&local_e0 | 4),(Result *)local_68);
                FUN_007ee578(param_1,&local_e0);
                FUN_008484c8(&local_d0);
                nn::os::UnlockMutex(pMVar1);
                return;
              }
              uVar3 = FUN_0084886c(&local_d0);
            }
          }
          else {
            uVar3 = local_a4 >> 0x10;
          }
          iVar12 = 1;
          if ((local_a8 & 1) != 0) {
            iVar12 = 2;
          }
          if ((local_a8 & 2) != 0) {
            iVar12 = iVar12 + 2;
          }
          if ((local_a8 & 4) != 0) {
            iVar12 = iVar12 + 4;
          }
          if ((local_a8 & 8) != 0) {
            iVar12 = iVar12 + 8;
          }
          iVar12 = iVar12 + (uint)local_a6;
          uVar8 = uVar8 & 0xff00ffff | (uVar3 & 0xff) << 0x10;
          iVar4 = FUN_008457e8(param_2,uVar8);
          if ((iVar4 != -1) || (iVar4 = FUN_00845830(param_2,uVar8), iVar4 != -1)) {
            lVar10 = param_2 + (long)iVar4 * 0x30;
            *(uint *)(lVar10 + 4) = *(int *)(lVar10 + 4) + uVar2;
            *(uint *)(lVar10 + 0x20) = *(int *)(lVar10 + 0x20) + uVar2;
            uVar8 = (uint)local_a6;
            *(uint *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + (iVar12 - uVar8) * uVar2;
            *(uint *)(lVar10 + 8) = *(int *)(lVar10 + 8) + iVar12 * uVar2;
            *(ulong *)(lVar10 + 0x28) = *(long *)(lVar10 + 0x28) + (ulong)(iVar12 * uVar2);
            if (local_94 == 2) {
              lVar10 = param_2 + (long)iVar4 * 0x30;
              *(uint *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + uVar2;
              *(uint *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + uVar8 * uVar2;
            }
            else if (local_94 == 1) {
              lVar10 = param_2 + (long)iVar4 * 0x30;
              *(uint *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + uVar2;
              *(uint *)(lVar10 + 0x14) = *(int *)(lVar10 + 0x14) + uVar8 * uVar2;
            }
          }
          uVar11 = iVar12 + uVar11;
          uVar8 = 0;
          if (*(byte *)(param_3 + 0x14) + 0x1c <= *(uint *)(param_3 + 0x5f8)) {
            uVar8 = (*(uint *)(param_3 + 0x5f8) - (uint)*(byte *)(param_3 + 0x14)) - 0x1c;
          }
        } while (uVar11 < uVar8);
      }
      param_4 = param_4 & 0xffff;
      *(uint *)(param_2 + 0x1828) = *(int *)(param_2 + 0x1828) + param_4;
      *(uint *)(param_2 + 0x1900) = *(int *)(param_2 + 0x1900) + param_4;
      iVar12 = *(int *)(param_2 + 0x193c) + *(int *)(param_3 + 0x5f8);
      if ((param_7 & 1) == 0) {
        uVar2 = *(uint *)(param_3 + 0x5fc);
        uVar11 = (uVar2 >> 1 & 0x55555555) + (uVar2 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = (uVar11 >> 4 & 0x7070707) + (uVar11 & 0x7070707);
        uVar11 = (uVar11 >> 8 & 0xf000f) + (uVar11 & 0xf000f);
        if (((uVar11 & 0x1f) + (uVar11 >> 0x10) == 1 && uVar2 != 0) &&
           (uVar11 = (uVar2 & -uVar2) - 1,
           uVar11 = (uVar11 >> 1 & 0x55555555) + (uVar11 & 0x55555555),
           uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333),
           uVar11 = (uVar11 >> 4 & 0x7070707) + (uVar11 & 0x7070707),
           uVar11 = (uVar11 >> 8 & 0xf000f) + (uVar11 & 0xf000f), uVar11 = uVar11 + (uVar11 >> 0x10)
           , bVar7 = (byte)uVar11, (uVar11 & 0xff) < 0x18)) goto LAB_008450dc;
      }
      else {
        iVar12 = (param_6 & 0xffff) + (param_5 & 0xffff) + iVar12;
        plVar6 = (long *)FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
        lVar10 = (**(code **)(*plVar6 + 0x68))(plVar6,param_3 + 0x628);
        if ((lVar10 != 0) && (bVar7 = *(byte *)(lVar10 + 0x28), bVar7 < 0x18)) {
LAB_008450dc:
          lVar10 = param_2 + (ulong)bVar7 * 4;
          *(uint *)(lVar10 + 0x1840) = *(int *)(lVar10 + 0x1840) + param_4;
          *(uint *)(lVar10 + 0x18a0) = *(int *)(lVar10 + 0x18a0) + iVar12 * param_4;
        }
      }
      *(uint *)(param_2 + 0x1830) =
           *(int *)(param_2 + 0x1830) + *(int *)(param_2 + 0x193c) * param_4;
      *(uint *)(param_2 + 0x1834) = *(int *)(param_2 + 0x1834) + param_4 * 0x1c;
      *(uint *)(param_2 + 0x182c) = *(int *)(param_2 + 0x182c) + iVar12 * param_4;
      *(uint *)(param_2 + 0x1838) = *(int *)(param_2 + 0x1838) + param_4 * (param_5 & 0xffff);
      *(uint *)(param_2 + 0x183c) = *(int *)(param_2 + 0x183c) + param_4 * (param_6 & 0xffff);
      *(ulong *)(param_2 + 0x1908) = *(long *)(param_2 + 0x1908) + (ulong)(iVar12 * param_4);
      FUN_008484c8(&local_d0);
      nn::os::UnlockMutex(pMVar1);
      local_d0 = (ulong)local_d0._4_4_ << 0x20;
      goto LAB_00845170;
    }
    uVar9 = 0x10407;
  }
  local_d0 = CONCAT44(local_d0._4_4_,uVar9);
LAB_00845170:
  local_e0 = (ulong)local_e0._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_d0 | 4),(Result *)&local_e0);
  FUN_007ee578(param_1,&local_d0);
  return;
}


