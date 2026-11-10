/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03034144; name: FUN_03034144
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03034144(long param_1,ulong *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  MutexType *pMVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int *piVar22;
  uint *puVar23;
  ulong uVar24;
  long lVar25;
  byte *pbVar26;
  long lVar27;
  uint *puVar28;
  long *plVar29;
  ulong *puVar30;
  ulong *puVar31;
  uint uVar32;
  ulong *puVar33;
  ulong uVar34;
  long lVar35;
  ulong uVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulong local_8e0;
  undefined8 uStack_8d8;
  undefined2 local_8d0;
  undefined4 local_8cc;
  undefined8 local_8c8;
  undefined3 local_8c0;
  undefined8 local_8b0;
  ulong uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 *local_890;
  undefined8 uStack_888;
  undefined8 local_880 [258];
  ulong *local_68;
  
  uVar34 = (ulong)param_3;
  lVar12 = tpidr_el0;
  if (*(long *)(lVar12 + 0x38d490) == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
    lVar19 = *(long *)(lVar19 + 0x10);
  }
  else {
    lVar19 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
  }
  if (lVar19 != 0) {
    puVar5 = *(undefined8 **)(lVar19 + 8);
    uVar24 = (long)puVar5 + 0x1fU & 0xfffffffffffffff8;
    if ((uVar24 <= *(ulong *)(lVar19 + 0x10)) &&
       (*(ulong *)(lVar19 + 8) = uVar24, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = "LtRemoveBodies";
      puVar5[2] = "StSetup";
      uVar15 = nn::os::GetSystemTick();
      puVar5[1] = uVar15;
    }
  }
  if (0 < (int)param_3) {
    uVar24 = (ulong)(param_3 - 1);
    plVar10 = *(long **)(param_1 + 0x7f0);
    if (plVar10 != (long *)0x0) {
      puVar31 = param_2;
      while( true ) {
        uVar34 = uVar34 - 1;
        uStack_888 = *puVar31;
        local_890 = (undefined8 *)CONCAT26(local_890._6_2_,0x302000020);
        local_880[0] = CONCAT71(CONCAT61(local_880[0]._2_6_,uVar24 == 0),(char)param_4);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_890);
        }
        if (uVar34 == 0) break;
        plVar10 = *(long **)(param_1 + 0x7f0);
        uVar24 = uVar24 - 1;
        puVar31 = puVar31 + 1;
      }
    }
  }
  if (param_3 == 0) {
    puVar13 = (undefined4 *)0x0;
    local_68 = (ulong *)0x0;
    puVar14 = (undefined4 *)0x0;
    goto LAB_0303480c;
  }
  lVar19 = *(long *)(lVar12 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
  }
  lVar11 = *(long *)(lVar19 + 8);
  uVar34 = (ulong)(int)(param_3 * 8 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar11 + 0x10) < uVar34) {
LAB_03034a84:
    local_68 = (ulong *)FUN_032ce670();
    lVar19 = *(long *)(lVar12 + 0x38d490);
  }
  else {
    local_68 = *(ulong **)(lVar11 + 0x18);
    uVar34 = (long)local_68 + uVar34;
    if (*(ulong *)(lVar11 + 0x20) < uVar34) goto LAB_03034a84;
    *(ulong *)(lVar11 + 0x18) = uVar34;
  }
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
  }
  lVar11 = *(long *)(lVar19 + 8);
  uVar34 = (ulong)(int)(param_3 * 4 + 0x7f & 0xffffff80);
  if (*(ulong *)(lVar11 + 0x10) < uVar34) {
LAB_03034ad4:
    puVar13 = (undefined4 *)FUN_032ce670(lVar11,uVar34);
    lVar19 = *(long *)(lVar12 + 0x38d490);
  }
  else {
    puVar13 = *(undefined4 **)(lVar11 + 0x18);
    if (*(ulong *)(lVar11 + 0x20) < (long)puVar13 + uVar34) goto LAB_03034ad4;
    *(ulong *)(lVar11 + 0x18) = (long)puVar13 + uVar34;
  }
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
  }
  lVar19 = *(long *)(lVar19 + 8);
  if (*(ulong *)(lVar19 + 0x10) < uVar34) {
LAB_03034b28:
    puVar14 = (undefined4 *)FUN_032ce670(lVar19,uVar34);
  }
  else {
    puVar14 = *(undefined4 **)(lVar19 + 0x18);
    if (*(ulong *)(lVar19 + 0x20) < (long)puVar14 + uVar34) goto LAB_03034b28;
    *(ulong *)(lVar19 + 0x18) = (long)puVar14 + uVar34;
  }
  if (0 < (int)param_3) {
    uVar34 = *param_2;
    if ((long)uVar34 < 0) {
      uVar34 = uVar34 & 0xffffffff;
    }
    else {
      uVar34 = FUN_032c0fa4(param_1 + 0x948,uVar34,&local_890);
      if ((uVar34 & 1) == 0) {
        uVar34 = 0xffffff;
      }
      else {
        uVar34 = (ulong)local_890 & 0xffffffff;
      }
    }
    lVar19 = *(long *)(param_1 + 0x38);
    pbVar26 = (byte *)(lVar19 + (uVar34 & 0xffffff) * 0xc0 + 0x88);
    if ((*pbVar26 & 1) == 0) {
      uVar1 = 0;
      uVar9 = 0;
      uVar2 = 0;
    }
    else {
      *puVar13 = (int)uVar34;
      *local_68 = *param_2;
      uVar2 = *(uint *)(lVar19 + (uVar34 & 0xffffff) * 0xc0 + 0x54) & 1;
      bVar4 = (*pbVar26 >> 2 & 1) != 0;
      if (bVar4) {
        *puVar14 = (int)uVar34;
      }
      uVar1 = (uint)bVar4;
      uVar9 = 1;
    }
    uVar32 = uVar9;
    if (param_3 != 1) {
      uVar34 = (ulong)uVar2;
      lVar19 = (ulong)param_3 - 1;
      do {
        param_2 = param_2 + 1;
        uVar24 = *param_2;
        if ((long)uVar24 < 0) {
          uVar24 = uVar24 & 0xffffffff;
        }
        else {
          uVar36 = FUN_032c0fa4(param_1 + 0x948,uVar24,&local_890);
          uVar24 = (ulong)local_890 & 0xffffffff;
          if ((uVar36 & 1) == 0) {
            uVar24 = 0xffffff;
          }
        }
        lVar11 = *(long *)(param_1 + 0x38);
        pbVar26 = (byte *)(lVar11 + (uVar24 & 0xffffff) * 0xc0 + 0x88);
        if ((*pbVar26 & 1) != 0) {
          puVar13[(int)uVar32] = (int)uVar24;
          uVar2 = uVar32 + 1;
          local_68[(int)uVar9] = *param_2;
          uVar9 = uVar9 + 1;
          if ((*(byte *)(lVar11 + (uVar24 & 0xffffff) * 0xc0 + 0x54) & 1) == 0) {
            bVar7 = *pbVar26;
          }
          else {
            uVar36 = -(uVar34 >> 0x1f) & 0xfffffffc00000000 | uVar34 << 2;
            uVar34 = (ulong)((int)uVar34 + 1);
            uVar6 = *(undefined4 *)((long)puVar13 + uVar36);
            *(undefined4 *)((long)puVar13 + uVar36) = puVar13[(int)uVar32];
            puVar13[(int)uVar32] = uVar6;
            bVar7 = *pbVar26;
          }
          uVar32 = uVar2;
          if ((bVar7 >> 2 & 1) != 0) {
            puVar14[(int)uVar1] = (int)uVar24;
            uVar1 = uVar1 + 1;
          }
        }
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    if (uVar32 != 0) {
      if (3 < *(ulong *)(param_1 + 0x6d8)) {
        lVar19 = *(long *)(lVar12 + 0x38d490);
        if (lVar19 == 0) {
          lVar19 = FUN_0333d16c(0,1);
          *(long *)(lVar12 + 0x38d490) = lVar19;
        }
        lVar19 = *(long *)(lVar19 + 0x10);
        puVar31 = (ulong *)(param_1 + 0x6d8);
        if (lVar19 != 0) {
          puVar5 = *(undefined8 **)(lVar19 + 8);
          uVar34 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
          if ((uVar34 <= *(ulong *)(lVar19 + 0x10)) &&
             (*(ulong *)(lVar19 + 8) = uVar34, puVar5 != (undefined8 *)0x0)) {
            *puVar5 = "StFireCallbacks";
            uVar15 = nn::os::GetSystemTick();
            puVar5[1] = uVar15;
          }
        }
        plVar10 = (long *)(*puVar31 & 0xfffffffffffffffc);
        *puVar31 = (ulong)plVar10 | 1;
        if (plVar10 == (long *)0x0) {
          uVar34 = 0;
        }
        else {
          puVar30 = puVar31;
          do {
            while( true ) {
              puVar33 = (ulong *)(plVar10 + 1);
              uVar34 = *puVar33;
              plVar29 = (long *)(uVar34 & 0xfffffffffffffffc);
              if ((uVar34 & 3) == 0) break;
              (**(code **)(*plVar10 + 8))();
              *puVar30 = *puVar30 & 3 | (ulong)plVar29;
              plVar10 = plVar29;
              if (plVar29 == (long *)0x0) goto LAB_03034e78;
            }
            (**(code **)(*plVar10 + 0x20))(plVar10,param_1,local_68,uVar32);
            plVar10 = plVar29;
            puVar30 = puVar33;
          } while (plVar29 != (long *)0x0);
LAB_03034e78:
          uVar34 = *puVar31 & 0xfffffffffffffffc;
        }
        *puVar31 = uVar34;
      }
      if ((int)uVar32 < 1) {
        bVar4 = false;
      }
      else {
        auVar37._8_8_ = _UNK_0388a1f8;
        auVar37._0_8_ = _DAT_0388a1f0;
        uVar34 = 0;
        auVar38._8_4_ = (int)_UNK_0388a388;
        auVar38._0_8_ = _DAT_0388a380;
        auVar38._12_4_ = (int)((ulong)_UNK_0388a388 >> 0x20);
        auVar38 = a64_TBL(ZEXT816(0),auVar38,auVar37);
        do {
          uVar2 = puVar13[uVar34];
          uVar36 = (ulong)uVar2;
          uVar24 = uVar36 & 0xffffff;
          lVar19 = *(long *)(param_1 + 0x38);
          lVar11 = lVar19 + uVar24 * 0xc0;
          if ((*(byte *)(lVar11 + 0x88) & 1) != 0) {
            puVar28 = (uint *)(lVar19 + uVar24 * 0xc0 + 0x54);
            uVar9 = *puVar28;
            if ((uVar9 & 1) == 0) {
              if ((uVar9 & 9) == 0) {
                FUN_03058c80(*(undefined8 *)(param_1 + 0x698),uVar36,param_4);
                uVar9 = *puVar28;
              }
              if ((uVar9 >> 3 & 1) != 0) {
                lVar20 = lVar19 + uVar24 * 0xc0;
                if (*(int *)(lVar20 + 0x84) == *(int *)(lVar20 + 0x50)) {
                  FUN_03001d40(param_1 + 0x28,uVar36);
                }
                else {
                  pMVar16 = *(MutexType **)(param_1 + 0x128);
                  lVar20 = *(long *)(param_1 + 0x38);
                  nn::os::LockMutex(pMVar16);
                  uVar36 = (long)*(int *)(param_1 + 0xf0) - 1;
                  iVar8 = *(int *)(*(long *)(param_1 + 0x108) + uVar24 * 4);
                  if (iVar8 < (int)uVar36) {
                    puVar5 = (undefined8 *)(*(long *)(param_1 + 0xe8) + uVar36 * 0x10);
                    uVar15 = *puVar5;
                    uVar2 = *(uint *)(puVar5 + 1);
                    *(int *)(*(long *)(param_1 + 0x108) + ((ulong)uVar2 & 0xffffff) * 4) = iVar8;
                    puVar5 = (undefined8 *)(*(long *)(param_1 + 0xe8) + (long)iVar8 * 0x10);
                    *puVar5 = uVar15;
                    *(uint *)(puVar5 + 1) = uVar2;
                    uVar36 = (ulong)(*(int *)(param_1 + 0xf0) - 1);
                  }
                  *(int *)(param_1 + 0xf0) = (int)uVar36;
                  nn::os::UnlockMutex(pMVar16);
                  *(undefined1 *)(*(long *)(param_1 + 0xf8) + uVar24) = 0xff;
                  lVar20 = lVar20 + uVar24 * 0xc0;
                  *(uint *)(lVar20 + 0x54) = *(uint *)(lVar20 + 0x54) & 0xfffffff7;
                  *(ushort *)(lVar20 + 0x58) = *(ushort *)(lVar20 + 0x58) | 0x228;
                  *(undefined4 *)(*(long *)(param_1 + 0x108) + uVar24 * 4) = 0xffffffff;
                }
                lVar20 = lVar19 + uVar24 * 0xc0;
                *(ushort *)(lVar20 + 0x58) = *(ushort *)(lVar20 + 0x58) | 0x800;
              }
            }
            else {
              local_890 = local_880;
              local_8cc = 0;
              uStack_888 = 0x8000020000000000;
              local_8d0 = 0xffff;
              lVar20 = lVar19 + uVar24 * 0xc0;
              local_8c8 = 0;
              local_8e0 = 0;
              uStack_8d8 = 0;
              auVar37 = *(undefined1 (*) [16])(lVar20 + 0x60);
              local_8b0 = *(undefined8 *)(lVar20 + 0x70);
              uStack_8a8 = (ulong)auVar37._12_4_;
              uStack_898 = auVar37._8_8_;
              local_8a0 = auVar37._0_8_;
              local_8c0 = 0x20801;
              (**(code **)(**(long **)(param_1 + 0x4c0) + 0x78))
                        (*(long **)(param_1 + 0x4c0),&local_8e0,&local_890);
              uVar9 = FUN_03035378(param_1,uVar36,local_890,uStack_888 & 0xffffffff);
              if (0 < (int)uVar9) {
                uVar36 = 0;
                do {
                  uVar21 = 0;
                  uVar18 = *(uint *)((long)local_890 + uVar36 * 4);
                  uVar17 = (ulong)uVar18;
                  do {
                    if (puVar13[uVar21] == uVar18) {
                      if ((int)uVar21 != -1) goto LAB_03034668;
                      break;
                    }
                    uVar21 = uVar21 + 1;
                  } while (uVar32 != uVar21);
                  uVar21 = uVar17 & 0xffffff;
                  uVar18 = *(uint *)(*(long *)(param_1 + 0x38) + uVar21 * 0xc0 + 0x54) & 9;
                  if (param_4 == 0) {
                    if (uVar18 == 0) {
                      plVar10 = *(long **)(param_1 + 0x698);
                      lVar20 = *plVar10;
                      if (*(int *)(plVar10[0x71] +
                                   (long)*(int *)(*(long *)(lVar20 + 0x38) + uVar21 * 0xc0 + 0x80) *
                                   0x20 + 0x10) == -1) {
                        uVar21 = *(ulong *)(*(long *)(lVar20 + 0x38) + uVar21 * 0xc0 + 0xb0);
                        if ((long)uVar21 < 0) {
                          uVar21 = uVar21 & 0xffffffff;
                        }
                        else {
                          uVar21 = FUN_032c0fa4(lVar20 + 0x948,uVar21,&local_8e0);
                          if ((uVar21 & 1) == 0) {
                            uVar21 = 0xffffff;
                          }
                          else {
                            uVar21 = local_8e0 & 0xffffffff;
                          }
                        }
                        FUN_03030748(lVar20,uVar21,0);
                      }
                      else {
                        FUN_03051388(plVar10,uVar17,1);
                      }
                    }
                  }
                  else if (uVar18 == 0) {
                    FUN_03051388(*(undefined8 *)(param_1 + 0x698),uVar17,0);
                  }
LAB_03034668:
                  uVar36 = uVar36 + 1;
                } while (uVar36 != uVar9);
              }
              if (param_4 == 0) {
                lVar27 = *(long *)(param_1 + 0x488);
                lVar35 = *(long *)(lVar19 + uVar24 * 0xc0 + 0xb0);
                lVar20 = *(long *)(lVar27 + 8);
                uVar36 = FUN_032c0fa4(lVar27 + 0x90,lVar35,&local_8e0);
                if ((uVar36 & 1) != 0) {
                  uVar9 = (uint)local_8e0 & 0xffffff;
                  do {
                    if ((*(long *)(lVar20 + (ulong)uVar9 * 0x68) == lVar35) ||
                       (*(long *)(lVar20 + (ulong)uVar9 * 0x68 + 0x10) == lVar35)) {
                      do {
                        uVar18 = *(uint *)(lVar20 + (ulong)uVar9 * 0x68 + 8);
                        if (uVar18 == uVar2) {
                          uVar18 = *(uint *)(lVar20 + (ulong)uVar9 * 0x68 + 0x18);
                        }
                        uVar3 = uVar18 & 0xffffff;
                        if (((((uVar3 != 0xffffff) && (uVar3 < *(uint *)(param_1 + 0x40))) &&
                             (lVar25 = *(long *)(param_1 + 0x38),
                             (*(byte *)(lVar25 + (ulong)uVar3 * 0xc0 + 0x54) & 3) != 0)) &&
                            ((*(uint *)(lVar25 + (ulong)uVar3 * 0xc0 + 0x50) == uVar18 &&
                             (uVar36 = (ulong)uVar18 & 0xffffff,
                             (*(byte *)(lVar25 + uVar36 * 0xc0 + 0x54) & 9) == 0)))) &&
                           ((*(byte *)(lVar25 + uVar36 * 0xc0 + 0x88) & 1) != 0)) {
                          plVar10 = *(long **)(param_1 + 0x698);
                          lVar25 = *plVar10;
                          if (*(int *)(plVar10[0x71] +
                                       (long)*(int *)(*(long *)(lVar25 + 0x38) + uVar36 * 0xc0 +
                                                     0x80) * 0x20 + 0x10) == -1) {
                            uVar36 = *(ulong *)(*(long *)(lVar25 + 0x38) + uVar36 * 0xc0 + 0xb0);
                            if ((long)uVar36 < 0) {
                              uVar36 = uVar36 & 0xffffffff;
                            }
                            else {
                              uVar36 = FUN_032c0fa4(lVar25 + 0x948,uVar36,&local_8e0);
                              if ((uVar36 & 1) == 0) {
                                uVar36 = 0xffffff;
                              }
                              else {
                                uVar36 = local_8e0 & 0xffffffff;
                              }
                            }
                            FUN_03030748(lVar25,uVar36,0);
                          }
                          else {
                            FUN_03051388(plVar10,(ulong)uVar18,1);
                          }
                        }
                        puVar23 = (uint *)(*(long *)(lVar27 + 0xa8) + (long)(int)uVar9 * 8);
                        if (*(long *)(lVar20 + (long)(int)uVar9 * 0x68) != lVar35) {
                          puVar23 = puVar23 + 1;
                        }
                        while( true ) {
                          uVar9 = *puVar23;
                          if (uVar9 == 0x7fffffff) goto LAB_030345dc;
                          if ((*(long *)(lVar20 + (ulong)uVar9 * 0x68) == lVar35) ||
                             (*(long *)(lVar20 + (ulong)uVar9 * 0x68 + 0x10) == lVar35)) break;
                          puVar23 = (uint *)(*(long *)(lVar27 + 0xa8) + (long)(int)uVar9 * 8);
                          if (*(long *)(lVar20 + (long)(int)uVar9 * 0x68) != lVar35) {
                            puVar23 = puVar23 + 1;
                          }
                        }
                      } while( true );
                    }
                    puVar23 = (uint *)(*(long *)(lVar27 + 0xa8) + (long)(int)uVar9 * 8);
                    if (*(long *)(lVar20 + (long)(int)uVar9 * 0x68) != lVar35) {
                      puVar23 = puVar23 + 1;
                    }
                    uVar9 = *puVar23;
                  } while (uVar9 != 0x7fffffff);
                }
              }
LAB_030345dc:
              uVar36 = uStack_888;
              uVar2 = uStack_888._4_4_;
              uStack_888 = (ulong)uStack_888._4_4_ << 0x20;
              if ((-1 < (long)uVar36) && (local_890 != (undefined8 *)0x0)) {
                (**(code **)(*(long *)PTR_PTR_0434a080 + 0x18))
                          (PTR_PTR_0434a080,local_890,uVar2 << 2);
              }
            }
            local_880[0] = 0x7f7fffee7f7fffee;
            local_890 = (undefined8 *)0xff7fffeeff7fffee;
            uStack_888 = CONCAT44(auVar38._12_4_,0xff7fffee);
            FUN_03103fe8(*(undefined8 *)(param_1 + 0x498),lVar11,lVar19 + uVar24 * 0xc0 + 0x60,
                         &local_890);
            if ((*(byte *)puVar28 >> 4 & 1) != 0) {
              FUN_03035580(param_1 + 0x7b0,param_1,
                           *(undefined4 *)
                            (*(long *)(*(long *)(lVar19 + uVar24 * 0xc0 + 0x78) + 0x50) + 0x158));
            }
          }
          if (param_4 == 0) {
            lVar19 = lVar19 + uVar24 * 0xc0;
            *(ushort *)(lVar19 + 0x58) = *(ushort *)(lVar19 + 0x58) | 0x800;
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar32);
        bVar4 = true;
      }
      if (*(long *)(lVar12 + 0x38d490) == 0) {
        lVar19 = FUN_0333d16c(0,1);
        *(long *)(lVar12 + 0x38d490) = lVar19;
        lVar19 = *(long *)(lVar19 + 0x10);
      }
      else {
        lVar19 = *(long *)(*(long *)(lVar12 + 0x38d490) + 0x10);
      }
      if (lVar19 != 0) {
        puVar5 = *(undefined8 **)(lVar19 + 8);
        uVar34 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
        if ((uVar34 <= *(ulong *)(lVar19 + 0x10)) &&
           (*(ulong *)(lVar19 + 8) = uVar34, puVar5 != (undefined8 *)0x0)) {
          *puVar5 = "StRemoveFromBroadPhase";
          uVar15 = nn::os::GetSystemTick();
          puVar5[1] = uVar15;
        }
      }
      (**(code **)(**(long **)(param_1 + 0x4c0) + 0x38))(*(long **)(param_1 + 0x4c0),puVar14,uVar1);
      if (bVar4) {
        uVar34 = 0;
        do {
          uVar2 = puVar13[uVar34];
          lVar11 = *(long *)(param_1 + 0x38);
          lVar19 = lVar11 + ((ulong)uVar2 & 0xffffff) * 0xc0;
          *(byte *)(lVar19 + 0x88) = *(byte *)(lVar19 + 0x88) & 0xfa;
          *(ushort *)(lVar19 + 0x58) = *(ushort *)(lVar19 + 0x58) | 1;
          iVar8 = *(int *)(lVar19 + 0x80);
          if ((iVar8 != 0) && (*(long *)(param_1 + 0x698) != 0)) {
            lVar20 = *(long *)(param_1 + 0x150) + (long)iVar8 * 0x80;
            uVar9 = *(uint *)(lVar20 + 0x48);
            do {
              if ((*(byte *)(*(long *)(param_1 + 0x38) + (ulong)(uVar9 & 0xffffff) * 0xc0 + 0x88) &
                  1) != 0) goto LAB_030347d0;
              uVar9 = *(uint *)(*(long *)(param_1 + 0x38) + (ulong)(uVar9 & 0xffffff) * 0xc0 + 0x84)
              ;
            } while (uVar9 != *(uint *)(lVar20 + 0x48));
            puVar28 = (uint *)(lVar20 + 0x4c);
            if (*puVar28 == 0x7fffffff) {
              *(undefined4 *)
               (*(long *)(*(long *)(param_1 + 0x698) + 0x388) + (long)iVar8 * 0x20 + 0x10) =
                   0xffffffff;
            }
            else {
              uVar24 = (ulong)*(byte *)(lVar20 + 0x5e);
              pMVar16 = *(MutexType **)(param_1 + 0x480);
              nn::os::LockMutex(pMVar16);
              uVar9 = *puVar28;
              piVar22 = (int *)(param_1 + uVar24 * 0x18 + 0x188);
              if (uVar9 < (uint)((long)*piVar22 + -1)) {
                lVar27 = param_1 + uVar24 * 0x18;
                iVar8 = *(int *)(*(long *)(lVar27 + 0x180) + ((long)*piVar22 + -1) * 4);
                *(uint *)(*(long *)(param_1 + 0x150) + (long)iVar8 * 0x80 + 0x4c) = uVar9;
                *(int *)(*(long *)(lVar27 + 0x180) + (long)(int)uVar9 * 4) = iVar8;
              }
              *(byte *)(lVar20 + 0x5e) = 0xff;
              *puVar28 = 0x7fffffff;
              *piVar22 = *piVar22 + -1;
              nn::os::UnlockMutex(pMVar16);
            }
          }
LAB_030347d0:
          lVar11 = (**(code **)(DAT_0442d3b0 +
                                (ulong)*(byte *)(*(long *)(lVar11 + ((ulong)uVar2 & 0xffffff) * 0xc0
                                                          + 0x78) + 0x18) * 0x200 + 0x48))();
          if (lVar11 != 0) {
            FUN_0303fc78(*(undefined8 *)(param_1 + 0x8b0),lVar19);
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar32);
      }
    }
  }
LAB_0303480c:
  lVar19 = *(long *)(lVar12 + 0x38d490);
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
    lVar11 = *(long *)(lVar19 + 0x10);
  }
  else {
    lVar11 = *(long *)(lVar19 + 0x10);
  }
  if (lVar11 != 0) {
    puVar5 = *(undefined8 **)(lVar11 + 8);
    uVar34 = (long)puVar5 + 0x17U & 0xfffffffffffffff8;
    if ((uVar34 <= *(ulong *)(lVar11 + 0x10)) &&
       (*(ulong *)(lVar11 + 8) = uVar34, puVar5 != (undefined8 *)0x0)) {
      *puVar5 = &DAT_03922da5;
      uVar15 = nn::os::GetSystemTick();
      puVar5[1] = uVar15;
      lVar19 = *(long *)(lVar12 + 0x38d490);
    }
  }
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
  }
  lVar11 = *(long *)(lVar19 + 8);
  uVar34 = (ulong)(int)(param_3 * 4 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar11 + 0x10) < uVar34) || (*(long *)(lVar11 + 0x18) != (long)puVar14 + uVar34))
     || (*(undefined4 **)(lVar11 + 0x28) == puVar14)) {
    if (puVar14 != (undefined4 *)0x0) {
      if (*(ulong *)(lVar11 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar11 + 8) + 0x20) = *(int *)(*(long *)(lVar11 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))(*(long **)(lVar11 + 0x40),puVar14,uVar34);
      }
      else if (*(long *)(lVar11 + 0x18) == (long)puVar14 + uVar34) {
        *(undefined4 **)(lVar11 + 0x18) = puVar14;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar11,puVar14,uVar34);
      }
    }
    lVar19 = *(long *)(lVar12 + 0x38d490);
  }
  else {
    *(undefined4 **)(lVar11 + 0x18) = puVar14;
  }
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
  }
  lVar11 = *(long *)(lVar19 + 8);
  if (((*(ulong *)(lVar11 + 0x10) < uVar34) || (*(long *)(lVar11 + 0x18) != (long)puVar13 + uVar34))
     || (*(undefined4 **)(lVar11 + 0x28) == puVar13)) {
    if (puVar13 != (undefined4 *)0x0) {
      if (*(ulong *)(lVar11 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar11 + 8) + 0x20) = *(int *)(*(long *)(lVar11 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar11 + 0x40) + 0x18))(*(long **)(lVar11 + 0x40),puVar13,uVar34);
      }
      else if (*(long *)(lVar11 + 0x18) == (long)puVar13 + uVar34) {
        *(undefined4 **)(lVar11 + 0x18) = puVar13;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0(lVar11,puVar13,uVar34);
      }
    }
    lVar19 = *(long *)(lVar12 + 0x38d490);
  }
  else {
    *(undefined4 **)(lVar11 + 0x18) = puVar13;
  }
  if (lVar19 == 0) {
    lVar19 = FUN_0333d16c(0,1);
    *(long *)(lVar12 + 0x38d490) = lVar19;
  }
  lVar12 = *(long *)(lVar19 + 8);
  uVar34 = (ulong)(int)(param_3 * 8 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar12 + 0x10) < uVar34) || (*(long *)(lVar12 + 0x18) != (long)local_68 + uVar34)
      ) || (*(ulong **)(lVar12 + 0x28) == local_68)) {
    if (local_68 != (ulong *)0x0) {
      if (*(ulong *)(lVar12 + 0x10) < uVar34) {
        *(int *)(*(long *)(lVar12 + 8) + 0x20) = *(int *)(*(long *)(lVar12 + 8) + 0x20) + -1;
        (**(code **)(**(long **)(lVar12 + 0x40) + 0x18))(*(long **)(lVar12 + 0x40),local_68);
      }
      else if (*(long *)(lVar12 + 0x18) == (long)local_68 + uVar34) {
        *(ulong **)(lVar12 + 0x18) = local_68;
        FUN_032ce944();
      }
      else {
        FUN_032ceaf0();
      }
    }
  }
  else {
    *(ulong **)(lVar12 + 0x18) = local_68;
  }
  return;
}


