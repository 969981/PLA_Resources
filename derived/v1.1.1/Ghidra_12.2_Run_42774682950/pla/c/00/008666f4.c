/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008666f4; name: FUN_008666f4
 */


void FUN_008666f4(long param_1)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  void *__dest;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  void *pvVar21;
  byte *pbVar22;
  byte *pbVar23;
  ulong uVar24;
  int iVar25;
  long *plVar26;
  void *pvVar27;
  undefined8 *puVar28;
  undefined8 local_128;
  long *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  byte local_110;
  undefined7 uStack_10f;
  ulong local_100;
  long *plStack_f8;
  byte local_f0;
  undefined7 uStack_ef;
  undefined8 local_e0;
  long *plStack_d8;
  byte local_c0;
  undefined7 uStack_bf;
  undefined8 local_b0;
  long *plStack_a8;
  undefined1 auStack_a0 [32];
  ulong local_80;
  ulong local_78;
  void *local_70;
  long *plStack_68;
  
  lVar20 = *(long *)PTR_DAT_04377458;
  nn::os::LockMutex((MutexType *)(lVar20 + 0x68));
  nn::os::LockMutex((MutexType *)(param_1 + 0x18));
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_118);
    uVar15 = local_100;
    puVar28 = (undefined8 *)PTR_DAT_043780f8;
    lVar11 = thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
    uVar1 = *(uint *)(lVar11 + 0x13cc);
    FUN_0066e7b0(&local_118,CONCAT71(uStack_10f,local_110));
    if (uVar1 < uVar15) {
      plVar26 = *(long **)(param_1 + 8);
      local_118 = 0x10408;
    }
    else {
      (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_118);
      uVar15 = local_100;
      uVar3 = *(ushort *)(*(long *)PTR_DAT_04377550 + 8);
      FUN_0066e7b0(&local_118,CONCAT71(uStack_10f,local_110));
      if (uVar15 <= uVar3) {
        *(undefined1 *)(param_1 + 0x48) = 0;
        iVar8 = FUN_0086644c(param_1);
        iVar2 = *(int *)(param_1 + 0x40);
        uVar12 = thunk_FUN_007f3f6c(*puVar28);
        uVar7 = 1;
        if (iVar2 != iVar8) {
          uVar7 = 2;
        }
        FUN_007f59c0(uVar12,uVar7);
        lVar11 = thunk_FUN_007f3f6c(*puVar28);
        nn::os::LockMutex((MutexType *)(lVar11 + 0x1f8));
        lVar13 = thunk_FUN_007f3f6c(*puVar28);
        nn::os::LockMutex((MutexType *)(lVar13 + 0x250));
        lVar14 = thunk_FUN_007f3f6c(*puVar28);
        nn::os::LockMutex((MutexType *)(lVar14 + 0x1378));
        (**(code **)(**(long **)(param_1 + 8) + 0x48))(&local_118);
        pbVar6 = (byte *)CONCAT44(uStack_114,local_118);
        if (pbVar6 != &local_110) {
          iVar25 = 0;
          pvVar21 = (void *)((ulong)&local_80 | 1);
          pbVar22 = pbVar6 + 0x40;
          uVar15 = FUN_00675dec(pbVar22);
          do {
            if ((uVar15 & 1) != 0) {
              uVar7 = FUN_00675e10(pbVar22);
              iVar9 = FUN_00675e18(pbVar22);
              uVar10 = FUN_00675e08(pbVar22);
              puVar16 = (ulong *)FUN_00675de4(pbVar22);
              plVar26 = (long *)FUN_00612290();
              local_80 = 0;
              local_78 = 0;
              local_70 = (void *)0x0;
              plStack_68 = plVar26;
              if ((*puVar16 & 1) == 0) {
                local_80 = *puVar16;
                local_78 = puVar16[1];
                local_70 = (void *)puVar16[2];
              }
              else {
                uVar15 = puVar16[1];
                if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                pvVar27 = (void *)puVar16[2];
                if (uVar15 < 0x17) {
                  local_80 = (ulong)(byte)((int)uVar15 << 1);
                  __dest = pvVar21;
                  if (uVar15 != 0) goto LAB_008669c4;
                }
                else {
                  uVar24 = uVar15 + 0x10 & 0xfffffffffffffff0;
                  __dest = (void *)(**(code **)(*plVar26 + 0x10))(plVar26,uVar24,1);
                  local_80 = uVar24 | 1;
                  local_78 = uVar15;
                  local_70 = __dest;
LAB_008669c4:
                  plVar26 = memcpy(__dest,pvVar27,uVar15);
                }
                *(undefined1 *)((long)__dest + uVar15) = 0;
                puVar28 = (undefined8 *)PTR_DAT_043780f8;
              }
              pvVar27 = pvVar21;
              if ((local_80 & 1) != 0) {
                pvVar27 = local_70;
              }
              FUN_00866d90(plVar26,iVar9,uVar7,uVar10,iVar9 == iVar8,
                           iVar9 == *(int *)(param_1 + 0x40),pvVar27);
              if (iVar9 == iVar8) {
                lVar17 = thunk_FUN_007f3f6c(*puVar28);
                uVar12 = thunk_FUN_007f3f6c(*puVar28);
                FUN_0085c5b0(auStack_a0,uVar12,iVar9);
                uVar15 = FUN_007f0f48(lVar17 + 0xb8,auStack_a0);
                if ((uVar15 & 1) == 0) {
                  FUN_007f0f88(lVar17 + 0xb8,auStack_a0);
                }
              }
              iVar25 = iVar25 + 1;
              if ((local_80 & 1) != 0) {
                (**(code **)(*plStack_68 + 0x18))
                          (plStack_68,local_70,local_80 & 0xfffffffffffffffe,1);
              }
            }
            pbVar22 = *(byte **)(pbVar6 + 8);
            if (*(byte **)(pbVar6 + 8) == (byte *)0x0) {
              pbVar22 = pbVar6 + 0x10;
              pbVar23 = *(byte **)pbVar22;
              if (*(byte **)pbVar23 != pbVar6) {
                do {
                  lVar17 = *(long *)pbVar22;
                  pbVar22 = (byte *)(lVar17 + 0x10);
                  pbVar23 = *(byte **)pbVar22;
                } while (*(long *)pbVar23 != lVar17);
              }
            }
            else {
              do {
                pbVar23 = pbVar22;
                pbVar22 = *(byte **)pbVar23;
              } while (*(byte **)pbVar23 != (byte *)0x0);
            }
            if (pbVar23 == &local_110) goto LAB_00866adc;
            pbVar22 = pbVar23 + 0x40;
            uVar15 = FUN_00675dec(pbVar22);
            pbVar6 = pbVar23;
          } while( true );
        }
        iVar25 = 0;
LAB_00866adc:
        FUN_0066e7b0(&local_118,CONCAT71(uStack_10f,local_110));
        if (iVar2 == iVar8) {
          uVar12 = thunk_FUN_007f3f6c(*puVar28);
          thunk_FUN_007f3f6c(*puVar28);
          uVar7 = FUN_008473a0();
          FUN_00847410(uVar12,uVar7);
        }
        lVar17 = thunk_FUN_007f3f6c(*puVar28);
        if (*(int *)(lVar17 + 0x288) == 1) {
          lVar17 = thunk_FUN_007f3f6c(*puVar28);
          lVar18 = thunk_FUN_007f3f6c(*puVar28);
          uVar15 = FUN_007f0f48(lVar17 + 0xb8,lVar18 + 0x98);
          if ((uVar15 & 1) == 0) {
            FUN_007f0f88(lVar17 + 0xb8,lVar18 + 0x98);
          }
          uVar12 = thunk_FUN_007f3f6c(*puVar28);
          thunk_FUN_007f3f6c(*puVar28);
          uVar7 = FUN_008473a0();
          FUN_00847410(uVar12,uVar7);
          uVar12 = thunk_FUN_007f3f6c(*puVar28);
          thunk_FUN_007f3f6c(*puVar28);
          uVar19 = FUN_00847388();
          FUN_008473fc(uVar12,uVar19);
          uVar12 = thunk_FUN_007f3f6c(*puVar28);
          FUN_007f59ac(uVar12,1);
        }
        lVar17 = thunk_FUN_007f3f6c(*puVar28);
        uVar12 = *(undefined8 *)(lVar17 + 0x218);
        FUN_007f24d4(uVar12,iVar25);
        lVar17 = thunk_FUN_007f3f6c(*puVar28);
        *(undefined1 *)(lVar17 + 0x24b) = 1;
        if (iVar2 == iVar8) {
          FUN_00821b80(&local_118);
          uVar19 = FUN_00821c88(&local_118);
          FUN_007f24c4(uVar12,uVar19);
        }
        lVar17 = thunk_FUN_007f3f6c(*puVar28);
        if (*(char *)(lVar17 + 0x1168) != '\x01') {
          *(char *)(lVar17 + 0x1168) = '\x01';
        }
        thunk_FUN_007f3f6c(*puVar28);
        FUN_007f6f40();
        nn::os::UnlockMutex((MutexType *)(lVar14 + 0x1378));
        nn::os::UnlockMutex((MutexType *)(lVar13 + 0x250));
        nn::os::UnlockMutex((MutexType *)(lVar11 + 0x1f8));
        plVar26 = *(long **)(param_1 + 8);
        uVar12 = (**(code **)(*plVar26 + 0x18))(plVar26);
        (**(code **)(*plVar26 + 0x58))(&local_118,plVar26,uVar12);
        *(undefined1 *)(param_1 + 0x4a) = 1;
        local_128 = *(undefined8 *)(param_1 + 8);
        uVar12 = *puVar28;
        local_120 = *(long **)(param_1 + 0x10);
        if (local_120 != (long *)0x0) {
          plVar26 = local_120 + 1;
          do {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar5) {
              *plVar26 = *plVar26 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
        }
        FUN_00865ec4(&local_80,uVar12,iVar2 == iVar8,&local_128);
        if (local_120 != (long *)0x0) {
          plVar26 = local_120 + 1;
          do {
            lVar11 = *plVar26;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar26,0x10);
            if (bVar5) {
              *plVar26 = lVar11 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar11 == 0) {
            (**(code **)(*local_120 + 0x10))(local_120);
            std::__shared_weak_count::__release_weak();
          }
        }
        if ((local_c0 & 1) != 0) {
          (**(code **)(*plStack_a8 + 0x18))
                    (plStack_a8,local_b0,CONCAT71(uStack_bf,local_c0) & 0xfffffffffffffffe,1);
        }
        if ((local_f0 & 1) != 0) {
          (**(code **)(*plStack_d8 + 0x18))
                    (plStack_d8,local_e0,CONCAT71(uStack_ef,local_f0) & 0xfffffffffffffffe,1);
        }
        if ((local_110 & 1) != 0) {
          (**(code **)(*plStack_f8 + 0x18))
                    (plStack_f8,local_100,CONCAT71(uStack_10f,local_110) & 0xfffffffffffffffe,1);
        }
        goto LAB_00866808;
      }
      plVar26 = *(long **)(param_1 + 8);
      local_118 = 0x6c3d;
    }
    local_80 = local_80 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_118 | 4),(Result *)&local_80);
    uVar7 = FUN_007f00c8(&local_118);
    (**(code **)(*plVar26 + 0x38))(plVar26,uVar7);
  }
LAB_00866808:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x18));
  nn::os::UnlockMutex((MutexType *)(lVar20 + 0x68));
  return;
}


