/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032f4fa8; name: FUN_032f4fa8
 */


void FUN_032f4fa8(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong *puVar12;
  long *plVar13;
  long lVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  undefined8 uVar19;
  long local_148;
  long local_140;
  long local_128;
  long local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  long local_c8;
  long lStack_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long *local_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x30));
  puVar4 = PTR_PTR_0434a080;
  uVar10 = *(uint *)(param_1 + 0x28);
  if (0 < (int)uVar10) {
    lVar7 = *(long *)(param_1 + 0x20);
    lVar14 = 0;
    uVar16 = 0;
    do {
      if (*(long *)(lVar7 + uVar16 * 8) == param_2) {
        iVar15 = (int)uVar16;
        if (-1 < iVar15) {
          local_78 = 0;
          local_70 = -0x8000000000000000;
          local_88 = 0;
          local_80 = -0x8000000000000000;
          local_98 = (long *)0x0;
          local_90._0_4_ = 0;
          local_90._4_4_ = 0x80000000;
          puVar12 = *(ulong **)(lVar7 + (lVar14 >> 0x1d));
          if (puVar12 == (ulong *)0x0) {
            iVar11 = 0;
            plVar13 = (long *)0x0;
            local_108 = 0;
            uVar18 = 0;
            uVar17 = 0;
            local_148 = 0;
          }
          else {
            uVar18 = 0;
            local_148 = 0;
            local_140 = 0;
            local_128 = 0;
            local_108 = 0;
            plVar13 = (long *)0x0;
            uVar17 = 0;
            uVar10 = 0;
            while( true ) {
              uVar6 = local_90._4_4_;
              uVar16 = puVar12[1];
              uVar2 = uVar10 + 1;
              if (uVar10 < (local_90._4_4_ & 0x3fffffff)) {
                local_90._0_4_ = uVar10;
              }
              else {
                if (0x3ffffffe < uVar10) {
                  FUN_032bd0a8(uVar2);
                }
                uVar6 = (uVar6 & 0x3fffffff) << 1;
                if (0x3ffffffe < uVar6) {
                  uVar6 = 0x3fffffff;
                }
                uVar5 = uVar2;
                if ((int)uVar2 <= (int)uVar6) {
                  uVar5 = uVar6;
                }
                plVar13 = (long *)FUN_032bd1d4(puVar4,uVar5,8,plVar13,uVar10,(long)&local_90 + 4);
                local_98 = plVar13;
              }
              plVar13[(int)(uint)local_90] = uVar16;
              local_90._0_4_ = uVar2;
              if (((byte)*puVar12 >> 1 & 1) == 0) {
                uVar5 = local_80._4_4_;
                uVar16 = puVar12[1];
                uVar6 = uVar18 + 1;
                if ((int)uVar18 < (int)(local_80._4_4_ & 0x3fffffff)) {
                }
                else {
                  if (0x3ffffffe < (int)uVar18) {
                    FUN_032bd0a8(uVar6);
                  }
                  uVar5 = (uVar5 & 0x3fffffff) << 1;
                  if (0x3ffffffe < uVar5) {
                    uVar5 = 0x3fffffff;
                  }
                  uVar3 = uVar6;
                  if ((int)uVar6 <= (int)uVar5) {
                    uVar3 = uVar5;
                  }
                  local_108 = FUN_032bd1d4(puVar4,uVar3,8,local_108,uVar18,(long)&local_80 + 4);
                  uVar18 = (uint)local_80;
                  local_88 = local_108;
                }
                *(ulong *)(local_108 + (long)(int)uVar18 * 8) = uVar16;
                local_80 = CONCAT44(local_80._4_4_,uVar6);
                uVar5 = FUN_032c3460((long *)(param_1 + 0x80),puVar12[1]);
                uVar18 = uVar6;
                if (*(int *)(param_1 + 0x8c) < (int)uVar5) {
                }
                else {
                  uVar3 = local_70._4_4_;
                  uVar6 = uVar17 + 1;
                  uVar19 = *(undefined8 *)
                            (*(long *)(param_1 + 0x80) + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8)
                  ;
                  if ((int)uVar17 < (int)(local_70._4_4_ & 0x3fffffff)) {
                  }
                  else {
                    if (0x3ffffffe < (int)uVar17) {
                      FUN_032bd0a8(uVar6);
                    }
                    uVar5 = (uVar3 & 0x3fffffff) << 1;
                    if (0x3ffffffe < uVar5) {
                      uVar5 = 0x3fffffff;
                    }
                    uVar3 = uVar6;
                    if ((int)uVar6 <= (int)uVar5) {
                      uVar3 = uVar5;
                    }
                    local_128 = FUN_032bd1d4(puVar4,uVar3,8,local_140,uVar17,(long)&local_70 + 4);
                    uVar17 = (uint)local_70;
                    local_148 = local_128;
                    local_140 = local_128;
                    local_78 = local_128;
                  }
                  *(undefined8 *)(local_128 + (long)(int)uVar17 * 8) = uVar19;
                  local_70 = CONCAT44(local_70._4_4_,uVar6);
                  uVar17 = uVar6;
                }
              }
              puVar12 = (ulong *)(*puVar12 & 0xfffffffffffffffc);
              if (puVar12 == (ulong *)0x0) break;
              uVar10 = uVar2;
            }
            iVar11 = uVar10 + 1;
            uVar10 = *(uint *)(param_1 + 0x28);
            lVar7 = *(long *)(param_1 + 0x20);
          }
          *(uint *)(param_1 + 0x28) = uVar10 - 1;
          if ((uVar10 - 1 != iVar15) && (iVar9 = (uVar10 - 1) - iVar15, 0 < iVar9)) {
            puVar8 = (undefined8 *)(lVar7 + (lVar14 >> 0x20) * 8);
            *puVar8 = puVar8[1];
            if ((1 < iVar9) && (puVar8[1] = puVar8[2], 2 < iVar9)) {
              lVar14 = 0x10;
              puVar8 = (undefined8 *)(lVar7 + (long)iVar15 * 8 + 0x18);
              do {
                lVar14 = (lVar14 << 0x20) + 0x800000000 >> 0x20;
                puVar8[-1] = *puVar8;
                puVar8 = puVar8 + 1;
              } while (lVar14 < (long)iVar9 * 8);
            }
          }
          lStack_c0 = local_148 + (long)(int)uVar17 * 8;
          local_a8 = 0;
          uStack_a0 = 0;
          lStack_b0 = local_108 + (long)(int)uVar18 * 8;
          local_b8 = local_108;
          local_c8 = local_148;
          FUN_032f29ec(param_1,&local_c8);
          if (iVar11 != 0) {
            plVar1 = plVar13 + iVar11;
            do {
              puVar12 = (ulong *)*plVar13;
              while( true ) {
                uVar10 = (uint)*puVar12;
                if ((uVar10 >> 0xd & 1) != 0) break;
                if (((*puVar12 & 1) != 0) ||
                   (puVar12 = (ulong *)puVar12[1], puVar12 == (ulong *)0x0)) goto LAB_032f5338;
              }
              if (puVar12 != (ulong *)0x0) {
                uVar10 = (uVar10 & 0x1fff) - (uVar10 >> 1 & 0x555);
                uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
                puVar12[(ulong)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2] = 0;
              }
LAB_032f5338:
              plVar13 = plVar13 + 1;
            } while (plVar13 != plVar1);
          }
          FUN_032f47a0(param_1);
          local_d8 = 0;
          uStack_d0 = 0;
          local_e8 = 0;
          uStack_e0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          FUN_032f29ec(param_1,&local_f8);
          uVar10 = local_90._4_4_;
          puVar4 = PTR_PTR_0434a080;
          uVar16 = (ulong)local_90._4_4_;
          local_90 = (ulong)local_90._4_4_ << 0x20;
          if ((-1 < (int)uVar10) && (local_98 != (long *)0x0)) {
            (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                      (PTR_PTR_0434a080,local_98,(uVar16 & 0x3fffffff) << 3);
          }
          lVar14 = local_80;
          uVar16 = (ulong)local_80._4_4_;
          local_80 = (ulong)local_80._4_4_ << 0x20;
          if ((-1 < lVar14) && (local_88 != 0)) {
            (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_88,(uVar16 & 0x3fffffff) << 3);
          }
          lVar14 = local_70;
          uVar16 = (ulong)local_70._4_4_;
          local_70 = (ulong)local_70._4_4_ << 0x20;
          if ((-1 < lVar14) && (local_78 != 0)) {
            (**(code **)(*(long *)puVar4 + 0x18))(puVar4,local_78,(uVar16 & 0x3fffffff) << 3);
          }
        }
        break;
      }
      uVar16 = uVar16 + 1;
      lVar14 = lVar14 + 0x100000000;
    } while (uVar10 != uVar16);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x30));
  return;
}


