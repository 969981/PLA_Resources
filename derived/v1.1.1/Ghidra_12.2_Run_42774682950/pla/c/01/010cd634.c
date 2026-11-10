/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010cd634; name: FUN_010cd634
 */


undefined8 FUN_010cd634(long param_1,long *param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  size_t __n;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  code *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined **ppuVar16;
  uint *__dest;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined **local_150;
  undefined **local_148;
  undefined8 local_140;
  undefined **ppuStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8 [4];
  uint local_f4;
  undefined **local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined **ppuStack_d8;
  long local_d0;
  long lStack_c8;
  undefined1 local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined **local_98;
  undefined8 local_90;
  long lStack_88;
  undefined *local_80;
  undefined **local_78;
  uint local_70;
  uint uStack_6c;
  
  pMVar1 = (MutexType *)(param_1 + 0x80);
  nn::os::LockMutex(pMVar1);
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    uVar11 = (ulong)local_f8 | 4;
    do {
      plVar5 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
      uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,1,plVar5[1]);
      if ((uVar7 & 1) == 0) {
        nn::os::LockMutex(pMVar1);
        FUN_010d48f0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_f0);
        nn::os::UnlockMutex(pMVar1);
        uVar9 = 1;
        goto LAB_010cdd9c;
      }
      plVar5 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
      plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
      uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,4,plVar5[1]);
      if ((uVar7 & 1) == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_f0,4,0);
        uVar7 = uVar7 & 0xffffffff;
      }
      lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
      *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 4;
      uVar4 = (uint)local_f0;
      uVar12 = (ulong)local_f0 & 0xffffffff;
      local_f8[0] = '\0';
      if ((uVar7 & 1) == 0) break;
      local_f8[0] = '\x01';
      local_f4 = (uint)local_f0;
      local_140 = (long)local_f0 << 0x20;
      local_f0 = &PTR_LAB_041f0660;
      local_150 = (undefined **)&DAT_041f0638;
      local_148 = (undefined **)0x0;
      uVar14 = 0;
      if (uVar4 == 0) {
LAB_010cdb58:
      }
      else {
        uVar12 = uVar12 - ((ulong)(uVar4 >> 1) & 0x5555555555555555);
        uVar4 = uVar4 ^ uVar4 << 2;
        uVar7 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar4 = uVar4 ^ uVar4 >> 0xf;
        uVar14 = uVar4 ^ uVar4 << 0xd;
        local_140 = (ulong)uVar14 << 0x20;
        uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar7 == 1) goto LAB_010cdb58;
        uVar14 = uVar14 ^ uVar14 << 2;
        uVar14 = uVar14 ^ uVar14 >> 0xf;
        uVar14 = uVar14 ^ uVar14 << 0xd;
        local_140 = (ulong)uVar14 << 0x20;
        if (uVar7 == 2) goto LAB_010cdb58;
        uVar14 = uVar14 ^ uVar14 << 2;
        uVar14 = uVar14 ^ uVar14 >> 0xf;
        uVar14 = uVar14 ^ uVar14 << 0xd;
        local_140 = (ulong)uVar14 << 0x20;
        if (uVar7 == 3) goto LAB_010cdb58;
        FUN_010d3e10(&local_150);
        for (lVar8 = uVar7 - 4; lVar8 != 0; lVar8 = lVar8 + -1) {
          (*(code *)local_150[2])(&local_150);
        }
        local_140._4_4_ = (uint)((ulong)local_140 >> 0x20);
        uVar14 = local_140._4_4_;
      }
      local_140 = CONCAT44(local_140._4_4_,uVar14);
      local_e0 = param_2[2];
      ppuStack_d8 = &PTR_LAB_041f0510;
      local_d0 = param_2[4];
      lStack_c8 = param_2[5];
      local_c0 = (undefined1)param_2[6];
      local_a8 = param_2[9];
      local_b8 = param_2[7];
      local_b0 = param_2[8];
      local_a0 = &DAT_041f0638;
      local_90 = local_140;
      local_e8 = &PTR_LAB_041f0690;
      local_98 = local_148;
      lStack_88 = local_e0;
      uVar9 = FUN_010d1a4c(&local_f0);
      uVar4 = (uint)uVar9;
      iVar10 = (int)((ulong)uVar9 >> 0x20);
      if ((uVar4 & 0xff) == 5) {
        uVar15 = (uint)((ulong)uVar9 >> 8);
        uVar14 = uVar15 - 8;
        if (((uVar15 & 0xff) == 3) || ((uVar14 & 0xff) < 10)) {
          if ((uVar4 >> 8 & 0xff) == 3) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d1d48(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 8) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d2010(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 9) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d221c(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 10) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d242c(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 0xb) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d263c(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 0xc) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d284c(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 0xd) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d2a58(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 0xe) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d2c68(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 0xf) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d2e78(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if (((uVar4 >> 8 & 0xff) == 0x10) && ((uVar14 & 0xff) < 10)) {
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              auVar18 = FUN_010d3088(&local_f0);
              goto LAB_010cdc70;
            }
          }
          else if ((((uVar4 >> 8 & 0xff) == 0x11) && ((uVar14 & 0xff) < 10)) &&
                  (((uVar4 >> 0x10 & 0xff) == 0 || (iVar10 == 0)))) {
            auVar18 = FUN_010d3298(&local_f0);
LAB_010cdc70:
            ppuVar16 = auVar18._8_8_;
            if ((auVar18._0_8_ & 0xff) != 0) goto LAB_010cd9dc;
          }
        }
LAB_010cdcfc:
        bVar3 = true;
      }
      else {
        uVar14 = uVar4 - 8 & 0xff;
        if (9 < uVar14) {
          if ((uVar4 - 3 & 0xff) < 2) {
            if ((uVar4 & 0xff) == 3) {
              ppuVar16 = (undefined **)0x1;
              goto LAB_010cd9dc;
            }
            if (((uVar4 >> 0x10 & 0xff) == 0) || (iVar10 == 0)) {
              plVar5 = (long *)(*(code *)local_f0[3])(&local_f0);
              plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
              uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,1,plVar5[1]);
              if ((uVar7 & 1) == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_150,1,0);
                uVar7 = uVar7 & 0xffffffff;
              }
              lVar8 = (*(code *)local_f0[2])(&local_f0);
              *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 1;
              if (((uVar7 & 1) != 0) && ((char)local_150 == '\x04')) {
                plVar5 = (long *)(*(code *)local_f0[3])(&local_f0);
                plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
                uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,4,plVar5[1]);
                if ((uVar7 & 1) == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5,&local_150,4,0);
                  uVar4 = uVar4 & 1;
                }
                lVar8 = (*(code *)local_f0[2])(&local_f0);
                *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + 4;
                ppuVar16 = (undefined **)(((ulong)local_150 & 0xffffffff) + 5);
                if (uVar4 != 0) goto LAB_010cd9dc;
              }
            }
          }
          goto LAB_010cdcfc;
        }
        if (uVar14 < 9) {
          ppuVar16 = *(undefined ***)(&DAT_03a78da8 + (long)(char)(uVar4 - 8) * 8);
        }
        else {
          ppuVar16 = (undefined **)0x9;
        }
LAB_010cd9dc:
        plVar5 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
        plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
        uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,ppuVar16,plVar5[1]);
        if ((uVar7 & 1) == 0) goto LAB_010cdcfc;
        __dest = *(uint **)(param_1 + 8);
        puVar2 = *(uint **)(param_1 + 0x10);
        if ((__dest == puVar2) || (*__dest == local_f4)) {
LAB_010cda50:
          if (puVar2 != __dest) goto LAB_010cde10;
LAB_010cda58:
          local_f0 = ppuVar16;
          nn::os::LockMutex(pMVar1);
          if ((*(long **)(param_1 + 0x60) != (long *)0x0) &&
             (*(long *)(param_1 + 0x10) == *(long *)(param_1 + 0x18))) {
            (**(code **)(**(long **)(param_1 + 0x60) + 0x10))();
          }
          if (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_1 + 0x18)) {
            FUN_010d34a8(*(undefined8 *)(param_1 + 0x20),*(ulong *)(param_1 + 0x10),uVar11,
                         *(undefined8 *)(param_1 + 0x40),&local_f0);
            lVar8 = *(long *)(param_1 + 0x10) + 0x30;
            *(long *)(param_1 + 0x10) = lVar8;
          }
          else {
            FUN_010d3620(param_1 + 8,uVar11,*(undefined8 *)(param_1 + 0x40),&local_f0);
            lVar8 = *(long *)(param_1 + 0x10);
          }
          __dest = (uint *)(lVar8 + -0x30);
          nn::os::UnlockMutex(pMVar1);
          lVar8 = *(long *)(lVar8 + -0x28);
LAB_010cdab0:
          *(undefined1 *)(__dest + 10) = 1;
          plVar5 = (long *)(**(code **)(*param_2 + 0x18))(param_2);
          if (lVar8 != 0) {
            plVar6 = (long *)(**(code **)(*plVar5 + 0x28))();
            uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,ppuVar16,plVar5[1]);
            if ((uVar7 & 1) != 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,lVar8,ppuVar16,0);
            }
          }
          lVar8 = (**(code **)(*param_2 + 0x10))(param_2);
          *(long *)(lVar8 + 8) = *(long *)(lVar8 + 8) + (long)ppuVar16;
          plVar5 = *(long **)(param_1 + 0x60);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x48))(plVar5,__dest);
          }
          bVar3 = false;
        }
        else {
          do {
            __dest = __dest + 0xc;
            if (puVar2 == __dest) {
              __dest = puVar2;
              goto LAB_010cda50;
            }
          } while (*__dest != local_f4);
          if (puVar2 == __dest) goto LAB_010cda58;
LAB_010cde10:
          uVar9 = *(undefined8 *)(__dest + 8);
          uVar17 = *(undefined8 *)(__dest + 2);
          local_150 = &PTR_LAB_041f05c8;
          local_e0._4_4_ = *__dest;
          local_f0 = (undefined **)&DAT_041f0638;
          local_e8 = (undefined **)0x0;
          if (local_e0._4_4_ == 0) {
LAB_010ce13c:
            uVar4 = local_e0._4_4_;
          }
          else {
            uVar7 = (ulong)local_e0._4_4_ - ((ulong)(local_e0._4_4_ >> 1) & 0x5555555555555555);
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2;
            uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 0xd;
            uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if ((uVar7 == 1) ||
               (local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2,
               local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf,
               local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 0xd, uVar7 == 2))
            goto LAB_010ce13c;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ << 2;
            local_e0._4_4_ = local_e0._4_4_ ^ local_e0._4_4_ >> 0xf;
            uVar4 = local_e0._4_4_ ^ local_e0._4_4_ << 0xd;
            local_e0 = (ulong)uVar4 << 0x20;
            if (uVar7 != 3) {
              FUN_010d3e10(&local_f0);
              for (lVar8 = uVar7 - 4; lVar8 != 0; lVar8 = lVar8 + -1) {
                (*(code *)local_f0[2])(&local_f0);
              }
              local_e0._4_4_ = (uint)((ulong)local_e0 >> 0x20);
              uVar4 = local_e0._4_4_;
            }
          }
          local_e0 = CONCAT44(local_e0._4_4_,uVar4);
          local_140 = 0;
          ppuStack_138 = &PTR_LAB_041f0510;
          local_120 = 0;
          local_118 = &DAT_041f0638;
          local_108 = local_e0;
          uStack_100 = 0;
          local_148 = &PTR_LAB_041f05f8;
          local_130 = uVar17;
          uStack_128 = uVar9;
          uStack_110 = local_e8;
          uVar9 = FUN_010d1a4c(&local_150);
          local_f0 = &PTR_LAB_041f0660;
          local_70 = 0;
          uStack_6c = local_f4;
          local_80 = &DAT_041f0638;
          local_78 = (undefined **)0x0;
          if (local_f4 != 0) {
            uVar7 = (ulong)local_f4 - ((ulong)(local_f4 >> 1) & 0x5555555555555555);
            uStack_6c = local_f4 ^ local_f4 << 2;
            uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
            uStack_6c = uStack_6c ^ uStack_6c >> 0xf;
            uStack_6c = uStack_6c ^ uStack_6c << 0xd;
            uVar7 = (uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if ((uVar7 != 1) &&
               (uStack_6c = uStack_6c ^ uStack_6c << 2, uStack_6c = uStack_6c ^ uStack_6c >> 0xf,
               uStack_6c = uStack_6c ^ uStack_6c << 0xd, uVar7 != 2)) {
              FUN_010d3e10(&local_80);
              for (lVar8 = uVar7 - 3; lVar8 != 0; lVar8 = lVar8 + -1) {
                (**(code **)(local_80 + 0x10))(&local_80);
              }
            }
          }
          local_e0 = param_2[2];
          ppuStack_d8 = &PTR_LAB_041f0510;
          local_d0 = param_2[4];
          lStack_c8 = param_2[5];
          local_c0 = (undefined1)param_2[6];
          local_a8 = param_2[9];
          local_b8 = param_2[7];
          local_b0 = param_2[8];
          local_a0 = &DAT_041f0638;
          local_90 = CONCAT44(uStack_6c,uStack_6c);
          local_e8 = &PTR_LAB_041f0690;
          local_98 = local_78;
          lStack_88 = local_e0;
          local_70 = uStack_6c;
          uVar17 = FUN_010d1a4c(&local_f0);
          uVar4 = (uint)uVar9;
          if ((uVar4 & 0xff) == ((uint)uVar17 & 0xff)) {
            if ((uVar4 & 0xff) == 5) {
              uVar4 = (uint)((ulong)uVar9 >> 8);
              if (((uVar4 & 0xff) == 3) || ((uVar4 - 8 & 0xff) < 10)) {
                uVar14 = (uint)((ulong)uVar17 >> 8);
                uVar15 = uVar14 & 0xff;
                if ((uVar15 == (uVar4 & 0xff)) && (uVar15 == 3 || (uVar14 - 8 & 0xff) < 10))
                goto LAB_010ce124;
              }
              goto LAB_010ce048;
            }
            if ((9 < (uVar4 - 8 & 0xff)) && (1 < (uVar4 - 3 & 0xff))) goto LAB_010ce048;
            if ((uVar4 & 0xff) == 4) {
LAB_010ce124:
              if (((((uint)((ulong)uVar17 >> 0x10) | (uint)((ulong)uVar9 >> 0x10)) & 0xff) != 0) &&
                 ((int)((ulong)uVar9 >> 0x20) != (int)((ulong)uVar17 >> 0x20))) goto LAB_010ce048;
            }
          }
          else {
LAB_010ce048:
            plVar5 = *(long **)(param_1 + 0x60);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x58))(plVar5,uVar11);
            }
          }
          if (*(undefined ***)(__dest + 8) == ppuVar16) {
            lVar8 = *(long *)(__dest + 2);
          }
          else {
            nn::os::LockMutex(pMVar1);
            plVar5 = *(long **)(param_1 + 0x60);
            if (plVar5 != (long *)0x0) {
              if (*(undefined ***)(__dest + 6) < ppuVar16) {
                pcVar13 = *(code **)(*plVar5 + 0x18);
              }
              else {
                pcVar13 = *(code **)(*plVar5 + 0x20);
              }
              (*pcVar13)(plVar5,__dest);
            }
            FUN_010d4780(__dest,*(undefined8 *)(param_1 + 0x40),ppuVar16);
            nn::os::UnlockMutex(pMVar1);
            lVar8 = *(long *)(__dest + 2);
          }
          if ((lVar8 != 0) && (*(long *)(__dest + 4) != 0)) goto LAB_010cdab0;
          __n = *(long *)(param_1 + 0x10) - (long)(__dest + 0xc);
          if (__n != 0) {
            memmove(__dest,__dest + 0xc,__n);
          }
          *(uint **)(param_1 + 0x10) = __dest + ((long)__n >> 4) * 4;
          bVar3 = true;
        }
      }
      if (local_f8[0] != '\0') {
        local_f8[0] = '\0';
      }
    } while (!bVar3);
  }
  else if (*(long **)(param_1 + 0x60) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x60) + 0x60))();
  }
  uVar9 = 0;
LAB_010cdd9c:
  nn::os::UnlockMutex(pMVar1);
  return uVar9;
}


