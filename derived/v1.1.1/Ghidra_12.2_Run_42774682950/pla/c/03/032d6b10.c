/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d6b10; name: FUN_032d6b10
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_032d6b10(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_a8 [16];
  ulong local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  long local_48;
  
  local_48 = 0;
  lVar8 = *(long *)(param_2 + 8);
  uVar4 = FUN_032e35d8(lVar8);
  if ((lVar8 != 0) && ((uVar4 & 0x1f) == 4)) {
    lVar8 = FUN_032e239c(*(undefined8 *)(param_2 + 8));
    uVar5 = FUN_032e239c(*(undefined8 *)(param_2 + 8));
    iVar3 = FUN_032c4be0(uVar5,0x3a);
    local_58 = lVar8 + (iVar3 + 1);
    local_70 = (undefined8 *)0x0;
    local_68 = -0x8000000000000000;
    local_60 = lVar8;
    FUN_032c4394(param_3,&local_70,0x7c);
    if ((int)local_68 != 0) {
      puVar1 = local_70 + (long)(int)local_68 * 2;
      puVar9 = local_70;
      do {
        local_80 = *puVar9;
        uStack_78 = puVar9[1];
        auVar11 = FUN_032c3fa4(&local_80);
        local_90 = auVar11;
        if (local_60 != local_58) {
          uVar4 = FUN_032c422c(local_90,&local_60);
          if ((uVar4 & 1) != 0) {
            local_90._0_8_ = local_90._0_8_ + (long)((int)local_58 - (int)local_60);
          }
        }
        if (0 < *(int *)(param_2 + 0x10)) {
          uVar4 = 0;
          do {
            uVar6 = FUN_032c4c80(local_90._0_8_,local_90._8_8_ - local_90._0_8_,
                                 *(undefined8 *)(*(long *)(param_2 + 0x18) + uVar4 * 8));
            if ((uVar6 & 1) != 0) {
              FUN_032d6ab8(local_a8,param_2,uVar4 & 0xffffffff);
              uVar6 = local_a8._8_8_;
              if (local_a8._8_8_ == 0) {
LAB_032d6cbc:
                uVar10 = 0;
                lVar8 = 0;
              }
              else {
                uVar7 = FUN_032e35d8(local_a8._8_8_);
                uVar10 = local_98;
                lVar8 = local_a8._0_8_;
                if ((uVar7 & 0x1f) != 4) {
                  uVar6 = 0;
                  goto LAB_032d6cbc;
                }
                if ((local_98 & 1) != 0) {
                  FUN_032e0c28(local_98 & 0xfffffffffffffffe);
                }
              }
              if ((local_98 & 1) != 0) {
                FUN_032e0c40(local_98 & 0xfffffffffffffffe);
              }
              if (lVar8 != 0) {
                local_a8._0_8_ = 0;
                local_a8._8_8_ = local_a8._8_8_ & 0xffffffffffffff00;
                (**(code **)(*(long *)(uVar10 & 0xfffffffffffffffe) + 0x38))
                          ((long *)(uVar10 & 0xfffffffffffffffe),lVar8,uVar6,local_a8);
                local_48 = local_48 + local_a8._0_8_;
              }
              if ((uVar10 & 1) != 0) {
                FUN_032e0c40(uVar10 & 0xfffffffffffffffe);
              }
            }
            uVar4 = uVar4 + 1;
          } while ((long)uVar4 < (long)*(int *)(param_2 + 0x10));
        }
        puVar9 = puVar9 + 2;
      } while (puVar9 != puVar1);
    }
    lVar8 = local_68;
    uVar2 = local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < lVar8) && (local_70 != (undefined8 *)0x0)) {
      FUN_032cf244(PTR_PTR_0434a080,local_70,0x10,uVar2 & 0x3fffffff);
    }
    if (local_48 != 0) {
      local_98 = 0;
      local_a8 = FUN_032e0ab0(&local_48,&DAT_0434b8d0);
      if (local_a8._8_8_ == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_032e3508(local_a8._8_8_);
        if ((uVar4 & 1) != 0) {
          FUN_032e0c28(uVar4 & 0xfffffffffffffffe);
        }
      }
      if ((local_98 & 1) != 0) {
        uVar6 = local_98 & 0xfffffffffffffffe;
        local_98 = uVar4;
        FUN_032e0c40(uVar6);
        uVar4 = local_98;
      }
      local_98 = uVar4;
      FUN_032e6270(param_1,local_a8);
      if ((local_98 & 1) == 0) {
        return;
      }
      FUN_032e0c40(local_98 & 0xfffffffffffffffe);
      return;
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


