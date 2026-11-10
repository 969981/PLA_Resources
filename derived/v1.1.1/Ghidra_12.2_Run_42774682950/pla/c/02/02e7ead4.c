/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e7ead4; name: FUN_02e7ead4
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02e7ead4(ulong *param_1,ulong param_2,undefined1 *param_3)

{
  int *piVar1;
  int *piVar2;
  MutexType *pMVar3;
  ulong *puVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulong *puVar13;
  undefined4 *puVar14;
  MutexType *pMVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  ushort *puVar18;
  ulong uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  long lVar23;
  ulong *puVar24;
  int *piVar25;
  ulong *puVar26;
  uint uVar27;
  long lVar28;
  int *piVar29;
  int *piVar30;
  ulong *puVar31;
  long *plVar32;
  undefined8 *puVar33;
  undefined8 *puVar34;
  ushort *puVar35;
  long *plVar36;
  uint uVar37;
  undefined8 *local_f8;
  uint local_e4;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  uint local_bc;
  undefined1 uStack_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  uint local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  byte local_9c;
  undefined8 *local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  *param_3 = 0;
  DataMemoryBarrier(2,3);
  if (param_1[1] < *param_1) {
    uVar37 = ((int)param_1[4] - (int)*param_1) + (int)param_1[1];
  }
  else {
    uVar37 = (int)param_1[1] - (int)*param_1;
  }
  if (uVar37 == 0) {
    return 0;
  }
  if ((param_2 & 1) == 0) {
    if (*(int *)((long)param_1 + 0x7c) == 0) {
      return 0;
    }
  }
  else if (uVar37 <= (uint)param_1[4] >> 1) {
    return 0;
  }
  piVar2 = (int *)((long)param_1 + 0x7c);
  local_e4 = 0;
  puVar13 = param_1;
LAB_02e7eb98:
  while( true ) {
    lVar28 = DAT_0440a140;
    pMVar3 = DAT_0440a120;
    puVar35 = (ushort *)*param_1;
    if (*param_1 + 4 <= param_1[3]) break;
    uVar19 = *param_1 + (ulong)((int)param_1[4] + 3U & 0xfffffffc);
    if (uVar19 < param_1[3]) {
LAB_02e7f0a0:
      *param_1 = uVar19;
    }
    else {
      *param_1 = param_1[2];
    }
  }
  if (puVar35[1] == 0xd) {
    local_d8 = *(undefined ***)(puVar35 + 6);
    local_d0 = *(undefined8 **)(puVar35 + 10);
    uVar22 = *(undefined4 *)(puVar35 + 0x16);
    uStack_b8 = (undefined1)uVar22;
    uStack_b7 = (undefined1)((uint)uVar22 >> 8);
    uStack_b6 = (undefined1)((uint)uVar22 >> 0x10);
    uStack_b5 = (undefined1)((uint)uVar22 >> 0x18);
    local_b4 = 0x3ff3f;
    local_c8 = (undefined4)*(undefined8 *)(puVar35 + 0xe);
    uStack_c4 = (undefined4)((ulong)*(undefined8 *)(puVar35 + 0xe) >> 0x20);
    local_c0 = (undefined4)*(undefined8 *)(puVar35 + 0x12);
    local_bc = (uint)((ulong)*(undefined8 *)(puVar35 + 0x12) >> 0x20);
    puVar18 = (ushort *)&local_d8;
    uVar22 = 1;
    uVar16 = *(undefined8 *)(puVar35 + 2);
    uVar20 = 0;
LAB_02e7ebf4:
    puVar13 = (ulong *)FUN_02ef2694(DAT_0440a140,uVar16,puVar18,uVar22,uVar20);
    goto LAB_02e7ebf8;
  }
  bVar10 = false;
  switch(puVar35[1]) {
  case 0:
    if (*piVar2 == 0) {
      return 1;
    }
    do {
      bVar10 = *piVar2 + -1 == 0;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar8) {
        *piVar2 = *piVar2 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    goto switchD_02e7ec58_caseD_4;
  case 1:
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 != 0) {
      uVar5 = 0;
      uVar21 = (uint)*(long *)(puVar35 + 2);
      if (uVar12 != 0) {
        uVar5 = uVar21 / uVar12;
      }
      for (plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                               (ulong)(uVar21 - uVar5 * uVar12) * 8); plVar32 != (long *)0x0;
          plVar32 = (long *)*plVar32) {
        if (plVar32[1] == *(long *)(puVar35 + 2)) {
          *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
          puVar33 = (undefined8 *)plVar32[2];
          goto LAB_02e7edd0;
        }
      }
    }
    puVar33 = (undefined8 *)0x0;
LAB_02e7edd0:
    FUN_02e81050(*(undefined8 *)(puVar35 + 0x14),puVar33);
    if ((puVar33 != (undefined8 *)0x0) &&
       (iVar11 = *(int *)(puVar33 + 10), *(int *)(puVar33 + 10) = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)*puVar33)(puVar33);
      (*DAT_0442d150)(4,puVar33);
    }
    plVar32 = DAT_0440a170;
    uVar12 = *(uint *)(puVar35 + 6);
    pMVar3 = (MutexType *)(DAT_0440a170 + 3);
    nn::os::LockMutex(pMVar3);
    uVar5 = *(uint *)(plVar32 + 1);
    if (uVar5 != 0) {
      uVar21 = 0;
      if (uVar5 != 0) {
        uVar21 = uVar12 / uVar5;
      }
      for (lVar28 = *(long *)(*plVar32 + (ulong)(uVar12 - uVar21 * uVar5) * 8); lVar28 != 0;
          lVar28 = *(long *)(lVar28 + 0x68)) {
        if (*(uint *)(lVar28 + 0x4c) == uVar12) {
          *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + -1;
          FUN_02edcd9c(plVar32,uVar12);
          goto LAB_02e7ee54;
        }
      }
    }
    nn::os::UnlockMutex(pMVar3);
LAB_02e7ee54:
    (**(code **)(**(long **)(puVar35 + 0x14) + 0x18))();
    puVar13 = (ulong *)0x0;
    if (*(long *)(puVar35 + 10) != 0) {
      puVar13 = (ulong *)FUN_02e771a8();
    }
    break;
  case 2:
    local_90 = 0x400000000;
    local_88 = 0;
    lVar28 = *(long *)(puVar35 + 2);
    if (lVar28 == -1) {
      local_d8 = (undefined **)0x0;
      local_c8 = 0;
      local_d0 = (undefined8 *)((ulong)local_d0._4_4_ << 0x20);
      local_c0 = CONCAT31(local_c0._1_3_,0xff);
      uStack_b8 = 0xff;
      uStack_b0 = 0;
      uStack_ac = 0;
      puVar13 = (ulong *)FUN_02ee0d64(*(undefined4 *)(puVar35 + 8),DAT_0440a160,
                                      *(undefined4 *)(puVar35 + 6),&local_d8,&local_90,1,0);
    }
    else {
      uVar12 = *(uint *)(DAT_0440a140 + 0x38);
      if (uVar12 != 0) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = (uint)lVar28 / uVar12;
        }
        for (plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                                 (ulong)((uint)lVar28 - uVar5 * uVar12) * 8); plVar32 != (long *)0x0
            ; plVar32 = (long *)*plVar32) {
          if (plVar32[1] == lVar28) {
            *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
            ppuVar17 = (undefined **)plVar32[2];
            if (ppuVar17 != (undefined **)0x0) {
              local_c0 = CONCAT31(local_c0._1_3_,0xff);
              uStack_b8 = 0xff;
              uStack_b0 = 0;
              uStack_ac = 0;
              local_c8 = 0;
              local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,*(undefined4 *)(puVar35 + 10));
              local_d8 = ppuVar17;
              puVar13 = (ulong *)FUN_02ee0d64(*(undefined4 *)(puVar35 + 8),DAT_0440a160,
                                              *(undefined4 *)(puVar35 + 6),&local_d8,&local_90,1,0);
              iVar11 = *(int *)(ppuVar17 + 10);
              *(int *)(ppuVar17 + 10) = iVar11 + -1;
              if (iVar11 + -1 == 0) {
                (**(code **)*ppuVar17)(ppuVar17);
                puVar13 = (ulong *)(*DAT_0442d150)(4,ppuVar17);
              }
            }
            break;
          }
        }
      }
    }
    break;
  case 3:
    lVar28 = *(long *)(puVar35 + 2);
    if (lVar28 != -1) {
      uVar12 = *(uint *)(DAT_0440a140 + 0x38);
      if (uVar12 != 0) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = (uint)lVar28 / uVar12;
        }
        plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                            (ulong)((uint)lVar28 - uVar5 * uVar12) * 8);
        if (plVar32 != (long *)0x0) {
          do {
            if (plVar32[1] == lVar28) {
              *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
              ppuVar17 = (undefined **)plVar32[2];
              if (ppuVar17 == (undefined **)0x0) goto LAB_02e80980;
              local_c0 = CONCAT31(local_c0._1_3_,0xff);
              uStack_b8 = 0xff;
              uStack_b0 = 0;
              uStack_ac = 0;
              local_c8 = 0;
              local_d0 = (undefined8 *)CONCAT44(local_d0._4_4_,*(undefined4 *)(puVar35 + 10));
              local_d8 = ppuVar17;
              puVar13 = (ulong *)FUN_02ee0d64(*(undefined4 *)(puVar35 + 8),DAT_0440a160,
                                              *(undefined4 *)(puVar35 + 6),&local_d8,puVar35 + 0xc,1
                                              ,0);
              iVar11 = *(int *)(ppuVar17 + 10);
              *(int *)(ppuVar17 + 10) = iVar11 + -1;
              bVar10 = false;
              if (iVar11 + -1 == 0) goto LAB_02e7ef6c;
              break;
            }
            plVar32 = (long *)*plVar32;
            bVar10 = false;
          } while (plVar32 != (long *)0x0);
          goto switchD_02e7ec58_caseD_4;
        }
      }
LAB_02e80980:
      bVar10 = false;
      goto switchD_02e7ec58_caseD_4;
    }
    local_d8 = (undefined **)0x0;
    local_c8 = 0;
    local_d0 = (undefined8 *)((ulong)local_d0._4_4_ << 0x20);
    local_c0 = CONCAT31(local_c0._1_3_,0xff);
    uStack_b8 = 0xff;
    uStack_b0 = 0;
    uStack_ac = 0;
    puVar13 = (ulong *)FUN_02ee0d64(*(undefined4 *)(puVar35 + 8),DAT_0440a160,
                                    *(undefined4 *)(puVar35 + 6),&local_d8,puVar35 + 0xc,1,0);
    goto LAB_02e80808;
  default:
    goto switchD_02e7ec58_caseD_4;
  case 5:
    lVar28 = *(long *)(puVar35 + 2);
    if (lVar28 == -1) {
      local_d8 = (undefined **)0x400000000;
      local_d0 = (undefined8 *)((ulong)local_d0._1_7_ << 8);
      uVar22 = *(undefined4 *)(puVar35 + 6);
      puVar18 = (ushort *)&local_d8;
LAB_02e80584:
      puVar13 = (ulong *)FUN_02ee3508(DAT_0440a160,uVar22,0,0,puVar18);
      goto LAB_02e7f218;
    }
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 != 0) {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = (uint)lVar28 / uVar12;
      }
      plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                          (ulong)((uint)lVar28 - uVar5 * uVar12) * 8);
      if (plVar32 != (long *)0x0) {
        do {
          if (plVar32[1] == lVar28) {
            *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
            puVar33 = (undefined8 *)plVar32[2];
            if (puVar33 != (undefined8 *)0x0) {
              local_d8 = (undefined **)0x400000000;
              local_d0 = (undefined8 *)((ulong)local_d0._1_7_ << 8);
              puVar18 = (ushort *)&local_d8;
LAB_02e80130:
              puVar13 = (ulong *)FUN_02ee3508(DAT_0440a160,*(undefined4 *)(puVar35 + 6),puVar33,
                                              *(undefined4 *)(puVar35 + 8),puVar18);
              goto LAB_02e8013c;
            }
            goto LAB_02e80160;
          }
          plVar32 = (long *)*plVar32;
          bVar10 = false;
        } while (plVar32 != (long *)0x0);
        goto switchD_02e7ec58_caseD_4;
      }
    }
    goto LAB_02e80160;
  case 6:
    lVar28 = *(long *)(puVar35 + 2);
    if (lVar28 == -1) {
      uVar22 = *(undefined4 *)(puVar35 + 6);
      puVar18 = puVar35 + 10;
      goto LAB_02e80584;
    }
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 != 0) {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = (uint)lVar28 / uVar12;
      }
      plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                          (ulong)((uint)lVar28 - uVar5 * uVar12) * 8);
      if (plVar32 != (long *)0x0) {
        do {
          if (plVar32[1] == lVar28) {
            *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
            puVar33 = (undefined8 *)plVar32[2];
            if (puVar33 == (undefined8 *)0x0) goto LAB_02e80160;
            puVar18 = puVar35 + 10;
            goto LAB_02e80130;
          }
          plVar32 = (long *)*plVar32;
          bVar10 = false;
        } while (plVar32 != (long *)0x0);
        goto switchD_02e7ec58_caseD_4;
      }
    }
    goto LAB_02e80160;
  case 7:
    puVar13 = (ulong *)FUN_02f06330(DAT_0440a138,*(undefined4 *)(puVar35 + 2),
                                    *(undefined4 *)(puVar35 + 4),puVar35[6] != 0,puVar35[7] != 0);
    break;
  case 8:
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 != 0) {
      uVar5 = 0;
      uVar21 = (uint)*(long *)(puVar35 + 2);
      if (uVar12 != 0) {
        uVar5 = uVar21 / uVar12;
      }
      plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar21 - uVar5 * uVar12) * 8);
      if (plVar32 != (long *)0x0) {
LAB_02e7eea0:
        if (plVar32[1] != *(long *)(puVar35 + 2)) goto code_r0x02e7eeac;
        *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
        puVar24 = DAT_0440a130;
        ppuVar17 = (undefined **)plVar32[2];
        if (ppuVar17 != (undefined **)0x0) {
          uVar22 = *(undefined4 *)(puVar35 + 6);
          uVar20 = *(undefined4 *)(puVar35 + 8);
          *(int *)(DAT_0440a130 + 0x38) = (int)DAT_0440a130[0x38] + 1;
          lVar28 = FUN_02f0c974(puVar24,uVar22);
          if (lVar28 != 0) {
            local_c8 = 0;
            local_d0 = (undefined8 *)((ulong)local_d0 & 0xffffffff00000000);
            local_c0 = CONCAT31(local_c0._1_3_,0xff);
            uStack_b8 = 0xff;
            uStack_b0 = 0;
            uStack_ac = 0;
            local_d8 = ppuVar17;
            puVar14 = (undefined4 *)FUN_02ee1b20(lVar28 + 0x38,&local_d8);
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = uVar20;
            }
            if ((*(int *)(lVar28 + 0x20) == 0) && (uVar12 = *(uint *)(lVar28 + 0x30), uVar12 != 0))
            {
              puVar33 = *(undefined8 **)(lVar28 + 0x28);
              local_f8 = puVar33;
              do {
                if ((*(char *)((long)*local_f8 + 0x14) != '\0') &&
                   (plVar32 = *(long **)*local_f8, plVar32 != (long *)0x0)) {
                  local_c8 = 0;
                  local_d0 = (undefined8 *)((ulong)local_d0 & 0xffffffff00000000);
                  local_c0 = CONCAT31(local_c0._1_3_,0xff);
                  uStack_b8 = 0xff;
                  uStack_b0 = 0;
                  uStack_ac = 0;
                  local_d8 = ppuVar17;
                  (**(code **)(*plVar32 + 0x10))(plVar32,uVar20,&local_d8,0);
                  puVar33 = *(undefined8 **)(lVar28 + 0x28);
                  uVar12 = *(uint *)(lVar28 + 0x30);
                }
                local_f8 = local_f8 + 1;
              } while (local_f8 != puVar33 + uVar12);
            }
          }
          puVar13 = DAT_0440a130;
          iVar11 = (int)DAT_0440a130[0x38] + -1;
          *(int *)(DAT_0440a130 + 0x38) = iVar11;
          if (iVar11 == 0) {
            puVar13 = (ulong *)FUN_02f0cbdc();
          }
          iVar11 = *(int *)(ppuVar17 + 10);
          *(int *)(ppuVar17 + 10) = iVar11 + -1;
          if (iVar11 + -1 == 0) goto LAB_02e7ef6c;
        }
        break;
      }
    }
    break;
  case 10:
    lVar28 = *(long *)(puVar35 + 2);
    if (lVar28 == -1) {
      puVar13 = (ulong *)FUN_02f06f60(DAT_0440a138,*(undefined4 *)(puVar35 + 6),0);
      goto LAB_02e7f218;
    }
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 != 0) {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = (uint)lVar28 / uVar12;
      }
      plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                          (ulong)((uint)lVar28 - uVar5 * uVar12) * 8);
      if (plVar32 != (long *)0x0) {
        do {
          if (plVar32[1] == lVar28) {
            *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
            puVar33 = (undefined8 *)plVar32[2];
            if (puVar33 == (undefined8 *)0x0) goto LAB_02e80160;
            puVar13 = (ulong *)FUN_02f06f60(DAT_0440a138,*(undefined4 *)(puVar35 + 6),puVar33);
            goto LAB_02e8013c;
          }
          plVar32 = (long *)*plVar32;
          bVar10 = false;
        } while (plVar32 != (long *)0x0);
        goto switchD_02e7ec58_caseD_4;
      }
    }
    goto LAB_02e80160;
  case 0xb:
    puVar13 = (ulong *)FUN_02ef2244(DAT_0440a140,*(undefined8 *)(puVar35 + 2),
                                    *(undefined8 *)(puVar35 + 6));
    break;
  case 0xc:
    lVar23 = *(long *)(puVar35 + 2);
    if (lVar23 == -1) {
      puVar13 = (ulong *)FUN_02ef1d88(DAT_0440a140,0);
      break;
    }
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 == 0) break;
    uVar5 = 0;
    if (uVar12 != 0) {
      uVar5 = (uint)lVar23 / uVar12;
    }
    uVar19 = (ulong)((uint)lVar23 - uVar5 * uVar12);
    plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + uVar19 * 8);
    if (plVar32 == (long *)0x0) break;
    if (plVar32[1] == lVar23) {
      ppuVar17 = (undefined **)plVar32[2];
      *(long *)(*(long *)(DAT_0440a140 + 0x30) + uVar19 * 8) = *plVar32;
    }
    else {
      do {
        plVar36 = plVar32;
        plVar32 = (long *)*plVar36;
        if (plVar32 == (long *)0x0) goto LAB_02e7ebf8;
      } while (plVar32[1] != lVar23);
      ppuVar17 = (undefined **)plVar32[2];
      *plVar36 = *plVar32;
    }
    puVar13 = (ulong *)(*DAT_0442d150)(0);
    *(int *)(lVar28 + 0x40) = *(int *)(lVar28 + 0x40) + -1;
    iVar11 = *(int *)(ppuVar17 + 10);
    bVar10 = false;
    *(undefined1 *)((long)ppuVar17 + 0x54) = 0;
    *(int *)(ppuVar17 + 10) = iVar11 + -1;
    if (iVar11 + -1 != 0) goto switchD_02e7ec58_caseD_4;
    (**(code **)*ppuVar17)(ppuVar17);
    uVar16 = 4;
    goto LAB_02e7ef8c;
  case 0xe:
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    uStack_c4 = 0;
    FUN_02e82b60(puVar35 + 6,&local_d8);
    puVar13 = (ulong *)FUN_02ef2914(DAT_0440a140,*(undefined8 *)(puVar35 + 2),&local_d8,
                                    *(undefined4 *)(puVar35 + 6));
    if (local_d0 != (undefined8 *)0x0) {
      local_c8 = 0;
      if (&local_d8 != local_d0) {
        puVar13 = (ulong *)(*DAT_0442d158)(4);
      }
      local_d0 = (undefined8 *)0x0;
      uStack_c4 = 0;
    }
    goto LAB_02e80160;
  case 0x10:
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    uStack_c4 = 0;
    FUN_02e82b60(puVar35 + 2,&local_d8);
    puVar13 = (ulong *)FUN_02ef2d44(DAT_0440a140,&local_d8,*(undefined4 *)(puVar35 + 2));
    if (local_d0 != (undefined8 *)0x0) {
      local_c8 = 0;
      if (&local_d8 != local_d0) {
        puVar13 = (ulong *)(*DAT_0442d158)(4);
      }
      local_d0 = (undefined8 *)0x0;
      uStack_c4 = 0;
    }
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x11:
    puVar13 = (ulong *)FUN_02ef2e40(DAT_0440a140,*(undefined8 *)(puVar35 + 2));
    break;
  case 0x12:
    if (puVar35[0xd] == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = *(undefined8 *)(puVar35 + 6);
    }
    puVar13 = (ulong *)FUN_02e71fc0(*(undefined8 *)(puVar35 + 2),puVar35[0xc] != 0,
                                    *(undefined4 *)(puVar35 + 10),uVar16);
    if (*(long *)(puVar35 + 6) == 0) goto LAB_02e7f808;
    puVar13 = (ulong *)(*DAT_0442d158)(0);
    bVar10 = false;
    puVar35[6] = 0;
    puVar35[7] = 0;
    puVar35[8] = 0;
    puVar35[9] = 0;
    goto switchD_02e7ec58_caseD_4;
  case 0x13:
    puVar13 = (ulong *)FUN_02ef2eec(DAT_0440a140,*(undefined8 *)(puVar35 + 2),puVar35 + 8,
                                    *(undefined4 *)(puVar35 + 6));
    break;
  case 0x14:
    puVar13 = (ulong *)FUN_02ef3020(*(undefined4 *)(puVar35 + 10),DAT_0440a140,
                                    *(undefined8 *)(puVar35 + 2),*(undefined8 *)(puVar35 + 6));
    break;
  case 0x15:
    puVar13 = (ulong *)FUN_02ef319c(*(undefined4 *)(puVar35 + 10),*(undefined4 *)(puVar35 + 0xc),
                                    DAT_0440a140,*(undefined8 *)(puVar35 + 2),
                                    *(undefined8 *)(puVar35 + 6));
    break;
  case 0x16:
    puVar13 = (ulong *)FUN_02ef3240(DAT_0440a140,*(undefined8 *)(puVar35 + 2),
                                    *(undefined8 *)(puVar35 + 6),puVar35 + 0xc,
                                    *(undefined4 *)(puVar35 + 10));
    break;
  case 0x17:
    puVar13 = (ulong *)FUN_02eca254(*(undefined8 *)(puVar35 + 2));
    if (puVar13 == (ulong *)0x0) goto LAB_02e7f808;
    bVar10 = false;
    *(undefined4 *)((long)puVar13 + 0x144) = *(undefined4 *)(puVar35 + 6);
    goto switchD_02e7ec58_caseD_4;
  case 0x18:
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 != 0) {
      uVar5 = 0;
      uVar21 = (uint)*(long *)(puVar35 + 2);
      if (uVar12 != 0) {
        uVar5 = uVar21 / uVar12;
      }
      plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar21 - uVar5 * uVar12) * 8);
      if (plVar32 != (long *)0x0) {
        do {
          if (plVar32[1] == *(long *)(puVar35 + 2)) {
            *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
            puVar33 = (undefined8 *)plVar32[2];
            if (puVar33 == (undefined8 *)0x0) goto LAB_02e80160;
            puVar13 = (ulong *)FUN_02ea9800(*(undefined8 *)(puVar35 + 0x14),puVar33);
            goto LAB_02e8013c;
          }
          plVar32 = (long *)*plVar32;
          bVar10 = false;
        } while (plVar32 != (long *)0x0);
        goto switchD_02e7ec58_caseD_4;
      }
    }
    goto LAB_02e80160;
  case 0x19:
    puVar18 = puVar35 + 2;
    switch(*(undefined4 *)(puVar35 + 6)) {
    case 0:
      FUN_02ea99e8(*(undefined8 *)(puVar35 + 2),*(undefined4 *)(puVar35 + 8),
                   *(undefined4 *)(puVar35 + 10));
      break;
    case 1:
      FUN_02eaa00c(*(undefined8 *)(puVar35 + 2),*(undefined4 *)(puVar35 + 8),
                   *(undefined4 *)(puVar35 + 10));
      break;
    case 2:
      FUN_02eaa0fc(*(undefined8 *)(puVar35 + 2),*(undefined4 *)(puVar35 + 8),
                   *(undefined4 *)(puVar35 + 10));
      break;
    case 3:
      *(undefined1 *)(*(long *)puVar18 + 0x70) = 1;
      plVar32 = DAT_0440a170;
      uVar12 = *(uint *)(*(long *)puVar18 + 0x6c);
      pMVar3 = (MutexType *)(DAT_0440a170 + 3);
      nn::os::LockMutex(pMVar3);
      uVar5 = *(uint *)(plVar32 + 1);
      if (uVar5 != 0) {
        uVar21 = 0;
        if (uVar5 != 0) {
          uVar21 = uVar12 / uVar5;
        }
        for (lVar28 = *(long *)(*plVar32 + (ulong)(uVar12 - uVar21 * uVar5) * 8); lVar28 != 0;
            lVar28 = *(long *)(lVar28 + 0x68)) {
          if (*(uint *)(lVar28 + 0x4c) == uVar12) {
            *(int *)(lVar28 + 0x24) = *(int *)(lVar28 + 0x24) + -1;
            FUN_02edcd9c(plVar32,uVar12);
            goto LAB_02e80b5c;
          }
        }
      }
      nn::os::UnlockMutex(pMVar3);
LAB_02e80b5c:
      (**(code **)(**(long **)puVar18 + 0x18))();
      break;
    case 4:
      FUN_02ea9e50(*(undefined8 *)(puVar35 + 2),*(undefined4 *)(puVar35 + 8),
                   *(undefined4 *)(puVar35 + 10));
      break;
    case 5:
      FUN_02ea9fa0(*(undefined8 *)puVar18);
      break;
    case 6:
      FUN_02eaa380(*(undefined8 *)puVar18);
    }
    puVar13 = (ulong *)(**(code **)(**(long **)puVar18 + 0x18))();
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x1a:
    uVar16 = *(undefined8 *)(puVar35 + 2);
    if (DAT_0440a2f0 != (code *)0x0) {
      (*DAT_0440a2f0)(uVar16);
    }
    FUN_02f116d4(uVar16);
    puVar13 = (ulong *)FUN_02e8e5e0(uVar16,0);
    goto LAB_02e7f35c;
  case 0x1b:
    lVar28 = *(long *)(puVar35 + 2);
    uVar22 = 0x104;
    if (lVar28 != -1) {
      uVar22 = 0x105;
    }
    plVar32 = (long *)FUN_02e88834(uVar22,0);
    puVar13 = (ulong *)0x0;
    if (plVar32 != (long *)0x0) {
      if (lVar28 == -1) {
        local_d8 = &PTR_LAB_042a7278;
        local_bc = 0;
        uStack_b8 = 0;
        uStack_b7 = 0;
        uStack_b6 = 0;
        uStack_b5 = 0;
        local_b4 = 0;
        uStack_b0 = 0;
        uStack_ac = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        local_98 = (undefined8 *)0x0;
        (**(code **)(*plVar32 + 0x40))(plVar32,&local_d8);
        puVar33 = local_98;
joined_r0x02e809dc:
        local_98 = puVar33;
        if (puVar33 == (undefined8 *)0x0) {
LAB_02e809f0:
          local_d8 = &PTR_LAB_042a7278;
          lVar28 = CONCAT17(uStack_b5,
                            CONCAT16(uStack_b6,CONCAT15(uStack_b7,CONCAT14(uStack_b8,local_bc))));
        }
        else {
          local_d8 = &PTR_LAB_042a7278;
          iVar11 = *(int *)(puVar33 + 10);
          *(int *)(puVar33 + 10) = iVar11 + -1;
          if (iVar11 + -1 != 0) goto LAB_02e809f0;
          (**(code **)*puVar33)(puVar33);
          (*DAT_0442d150)(4,puVar33);
          lVar28 = CONCAT17(uStack_b5,
                            CONCAT16(uStack_b6,CONCAT15(uStack_b7,CONCAT14(uStack_b8,local_bc))));
        }
        if (lVar28 != 0) {
          FUN_02e771a8();
        }
      }
      else {
        uVar12 = *(uint *)(DAT_0440a140 + 0x38);
        if (uVar12 != 0) {
          uVar5 = 0;
          if (uVar12 != 0) {
            uVar5 = (uint)lVar28 / uVar12;
          }
          for (plVar36 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                                   (ulong)((uint)lVar28 - uVar5 * uVar12) * 8);
              plVar36 != (long *)0x0; plVar36 = (long *)*plVar36) {
            if (plVar36[1] == lVar28) {
              *(int *)(plVar36[2] + 0x50) = *(int *)(plVar36[2] + 0x50) + 1;
              puVar34 = (undefined8 *)plVar36[2];
              if (puVar34 != (undefined8 *)0x0) {
                local_d8 = &PTR_LAB_042a7278;
                local_bc = 0;
                uStack_b8 = 0;
                uStack_b7 = 0;
                uStack_b6 = 0;
                uStack_b5 = 0;
                local_b4 = 0;
                uStack_b0 = 0;
                uStack_ac = 0;
                uStack_a8 = 0;
                local_a0 = 0;
                *(int *)(puVar34 + 10) = *(int *)(puVar34 + 10) + 1;
                local_98 = puVar34;
                (**(code **)(*plVar32 + 0x40))(plVar32,&local_d8);
                iVar11 = *(int *)(puVar34 + 10);
                *(int *)(puVar34 + 10) = iVar11 + -1;
                puVar33 = local_98;
                if (iVar11 + -1 == 0) {
                  (**(code **)*puVar34)(puVar34);
                  (*DAT_0442d150)(4,puVar34);
                  puVar33 = local_98;
                }
                goto joined_r0x02e809dc;
              }
              break;
            }
          }
        }
      }
      puVar13 = (ulong *)(**(code **)(*plVar32 + 0x18))(plVar32);
    }
    goto LAB_02e80358;
  case 0x1c:
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    uStack_c4 = 0;
    FUN_02e82b60(puVar35 + 2,&local_d8);
    puVar13 = (ulong *)FUN_02eca1b8(puVar35 + 10,&local_d8);
    if (local_d0 != (undefined8 *)0x0) {
      local_c8 = 0;
      if (&local_d8 != local_d0) {
        puVar13 = (ulong *)(*DAT_0442d158)(4);
      }
      local_d0 = (undefined8 *)0x0;
      uStack_c4 = 0;
    }
LAB_02e7f35c:
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x1d:
    puVar13 = (ulong *)FUN_02eca0c4(*(undefined8 *)(puVar35 + 2),1);
    break;
  case 0x1e:
    puVar13 = (ulong *)FUN_02eca32c(puVar35 + 2,*(undefined8 *)(puVar35 + 10));
    iVar11 = (int)puVar13;
    goto joined_r0x02e7f458;
  case 0x1f:
    pMVar15 = (MutexType *)FUN_02e7d4b8(DAT_0440a120,1);
    uVar12 = *(uint *)(puVar35 + 2);
    nn::os::LockMutex(pMVar15);
    uVar5 = *(uint *)(pMVar15 + 0x28);
    if (uVar5 != 0) {
      uVar21 = 0;
      if (uVar5 != 0) {
        uVar21 = uVar12 / uVar5;
      }
      for (plVar32 = *(long **)(*(long *)(pMVar15 + 0x20) + (ulong)(uVar12 - uVar21 * uVar5) * 8);
          plVar32 != (long *)0x0; plVar32 = (long *)plVar32[1]) {
        if (*(uint *)(plVar32 + 2) == uVar12) {
          *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar15);
          FUN_02ea4a78(plVar32,*(undefined4 *)(puVar35 + 4));
          puVar13 = (ulong *)(**(code **)(*plVar32 + 0x18))(plVar32);
          goto LAB_02e80090;
        }
      }
    }
    goto LAB_02e7fc38;
  case 0x20:
    FUN_02e82be8(param_1,*(undefined4 *)(puVar35 + 2));
    local_bc = local_bc & 0xffffff00;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_b8 = 0;
    uStack_b6 = 0;
    uStack_b5 = 0;
    local_b4 = local_b4 & 0xffffff00;
    local_c0 = *(undefined4 *)(puVar35 + 6);
    local_d8 = (undefined **)((ulong)local_d8 & 0xffffffff00000000);
    local_d0 = (undefined8 *)0x0;
    local_c8 = *(undefined4 *)(puVar35 + 2);
    uStack_c4 = *(undefined4 *)(puVar35 + 4);
    uStack_b7 = 0;
    puVar13 = (ulong *)FUN_02e9f854(&local_d8);
    break;
  case 0x21:
    puVar18 = puVar35 + 2;
    lVar28 = *(long *)puVar18;
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 == 0) {
      bVar10 = false;
      puVar33 = (undefined8 *)0x0;
    }
    else {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = (uint)lVar28 / uVar12;
      }
      for (plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                               (ulong)((uint)lVar28 - uVar5 * uVar12) * 8); plVar32 != (long *)0x0;
          plVar32 = (long *)*plVar32) {
        if (plVar32[1] == lVar28) {
          *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
          puVar33 = (undefined8 *)plVar32[2];
          if (puVar33 == (undefined8 *)0x0) {
            bVar10 = false;
            goto LAB_02e807c8;
          }
          if ((*(int *)(puVar33 + 8) == 0) || (*(long *)puVar33[7] == 0)) {
            bVar10 = true;
            goto LAB_02e807c8;
          }
          FUN_02e81934(*(undefined8 *)(puVar35 + 6),puVar18,puVar33);
          goto LAB_02e807e4;
        }
      }
      bVar10 = false;
      puVar33 = (undefined8 *)0x0;
LAB_02e807c8:
      lVar28 = *(long *)puVar18;
    }
    if (lVar28 == -1) {
      FUN_02e81934(*(undefined8 *)(puVar35 + 6),puVar18,puVar33);
    }
LAB_02e807e0:
    if (bVar10) {
LAB_02e807e4:
      iVar11 = *(int *)(puVar33 + 10);
      *(int *)(puVar33 + 10) = iVar11 + -1;
      if (iVar11 + -1 == 0) {
        (**(code **)*puVar33)(puVar33);
        (*DAT_0442d150)(4,puVar33);
      }
    }
    goto LAB_02e807f4;
  case 0x22:
    puVar18 = puVar35 + 2;
    lVar28 = *(long *)puVar18;
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 == 0) {
      bVar10 = false;
      puVar33 = (undefined8 *)0x0;
      if (lVar28 == -1) goto LAB_02e807ac;
      goto LAB_02e807e0;
    }
    uVar5 = 0;
    if (uVar12 != 0) {
      uVar5 = (uint)lVar28 / uVar12;
    }
    for (plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                             (ulong)((uint)lVar28 - uVar5 * uVar12) * 8); plVar32 != (long *)0x0;
        plVar32 = (long *)*plVar32) {
      if (plVar32[1] == lVar28) {
        *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
        puVar33 = (undefined8 *)plVar32[2];
        if (puVar33 == (undefined8 *)0x0) {
          bVar10 = false;
          goto LAB_02e807a0;
        }
        if ((*(int *)(puVar33 + 8) == 0) || (*(long *)puVar33[7] == 0)) {
          bVar10 = true;
          goto LAB_02e807a0;
        }
        FUN_02e824b4(param_1,*(undefined8 *)(puVar35 + 6),puVar18,puVar33);
        goto LAB_02e807e4;
      }
    }
    bVar10 = false;
    puVar33 = (undefined8 *)0x0;
LAB_02e807a0:
    if (*(long *)puVar18 != -1) goto LAB_02e807e0;
LAB_02e807ac:
    FUN_02e824b4(param_1,*(undefined8 *)(puVar35 + 6),puVar18,puVar33);
    if (bVar10) goto LAB_02e807e4;
LAB_02e807f4:
    puVar13 = (ulong *)(**(code **)(**(long **)(puVar35 + 6) + 0x18))();
LAB_02e80808:
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x23:
    puVar18 = puVar35 + 2;
    lVar28 = *(long *)puVar18;
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 == 0) {
      bVar10 = false;
      puVar33 = (undefined8 *)0x0;
    }
    else {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = (uint)lVar28 / uVar12;
      }
      for (plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                               (ulong)((uint)lVar28 - uVar5 * uVar12) * 8); plVar32 != (long *)0x0;
          plVar32 = (long *)*plVar32) {
        if (plVar32[1] == lVar28) {
          *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
          puVar33 = (undefined8 *)plVar32[2];
          if (puVar33 == (undefined8 *)0x0) {
            bVar10 = false;
            goto LAB_02e80778;
          }
          if ((*(int *)(puVar33 + 8) == 0) || (*(long *)puVar33[7] == 0)) {
            bVar10 = true;
            goto LAB_02e80778;
          }
          FUN_02e82630(param_1,*(undefined8 *)(puVar35 + 6),puVar18,puVar33);
          goto LAB_02e7ff68;
        }
      }
      bVar10 = false;
      puVar33 = (undefined8 *)0x0;
LAB_02e80778:
      lVar28 = *(long *)puVar18;
    }
    if (lVar28 == -1) {
      FUN_02e82630(param_1,*(undefined8 *)(puVar35 + 6),puVar18,puVar33);
    }
    if (bVar10) {
LAB_02e7ff68:
      iVar11 = *(int *)(puVar33 + 10);
      *(int *)(puVar33 + 10) = iVar11 + -1;
      if (iVar11 + -1 != 0) goto LAB_02e7ff78;
      (**(code **)*puVar33)(puVar33);
      (*DAT_0442d150)(4,puVar33);
      plVar32 = *(long **)(puVar35 + 6);
      if (plVar32 != (long *)0x0) goto LAB_02e7ff80;
      puVar13 = (ulong *)0x0;
    }
    else {
LAB_02e7ff78:
      plVar32 = *(long **)(puVar35 + 6);
      puVar13 = (ulong *)0x0;
      if (plVar32 != (long *)0x0) {
LAB_02e7ff80:
        puVar13 = (ulong *)(**(code **)(*plVar32 + 0x18))();
      }
    }
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x24:
    lVar28 = *(long *)(puVar35 + 2);
    if (lVar28 == -1) {
      puVar33 = (undefined8 *)0x0;
LAB_02e80240:
      if (puVar35[0xd] == 0) {
        FUN_02f075e0(*(undefined8 *)(puVar35 + 6),puVar33);
      }
      else {
        FUN_02f07010(*(undefined8 *)(puVar35 + 6),puVar33,(char)puVar35[0xc],
                     *(undefined1 *)((long)puVar35 + 0x19));
      }
      puVar13 = (ulong *)(**(code **)(**(long **)(puVar35 + 6) + 0x18))();
      if (puVar33 != (undefined8 *)0x0) {
LAB_02e8013c:
        iVar11 = *(int *)(puVar33 + 10);
        *(int *)(puVar33 + 10) = iVar11 + -1;
        if (iVar11 + -1 == 0) {
          (**(code **)*puVar33)(puVar33);
          puVar13 = (ulong *)(*DAT_0442d150)(4,puVar33);
        }
      }
    }
    else {
      uVar12 = *(uint *)(DAT_0440a140 + 0x38);
      if (uVar12 != 0) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = (uint)lVar28 / uVar12;
        }
        plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                            (ulong)((uint)lVar28 - uVar5 * uVar12) * 8);
        if (plVar32 != (long *)0x0) {
          do {
            if (plVar32[1] == lVar28) {
              *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
              puVar33 = (undefined8 *)plVar32[2];
              if (puVar33 == (undefined8 *)0x0) goto LAB_02e80160;
              goto LAB_02e80240;
            }
            plVar32 = (long *)*plVar32;
            bVar10 = false;
          } while (plVar32 != (long *)0x0);
          goto switchD_02e7ec58_caseD_4;
        }
      }
    }
LAB_02e80160:
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x25:
    puVar13 = (ulong *)FUN_02ef310c(*(undefined4 *)(puVar35 + 6),DAT_0440a140,
                                    *(undefined8 *)(puVar35 + 2));
    break;
  case 0x26:
    puVar18 = puVar35 + 10;
    uVar16 = *(undefined8 *)(puVar35 + 2);
    uVar22 = *(undefined4 *)(puVar35 + 6);
    uVar20 = *(undefined4 *)(puVar35 + 8);
    goto LAB_02e7ebf4;
  case 0x27:
    lVar28 = *(long *)(puVar35 + 2);
    uVar12 = *(uint *)(DAT_0440a140 + 0x38);
    if (uVar12 == 0) {
      bVar10 = false;
      puVar33 = (undefined8 *)0x0;
    }
    else {
      uVar5 = 0;
      if (uVar12 != 0) {
        uVar5 = (uint)lVar28 / uVar12;
      }
      for (plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) +
                               (ulong)((uint)lVar28 - uVar5 * uVar12) * 8); plVar32 != (long *)0x0;
          plVar32 = (long *)*plVar32) {
        if (plVar32[1] == lVar28) {
          *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
          puVar33 = (undefined8 *)plVar32[2];
          if (puVar33 == (undefined8 *)0x0) {
            bVar10 = false;
            goto LAB_02e80620;
          }
          if (*(int *)(puVar33 + 8) == 0) {
            bVar10 = true;
            goto LAB_02e80620;
          }
          bVar10 = true;
          if (*(long *)puVar33[7] != 0) goto LAB_02e8062c;
          goto LAB_02e80620;
        }
      }
      bVar10 = false;
      puVar33 = (undefined8 *)0x0;
LAB_02e80620:
      lVar28 = *(long *)(puVar35 + 2);
    }
    if (lVar28 == -1) {
LAB_02e8062c:
      for (lVar28 = *(long *)(*(long *)(puVar35 + 6) + 0x18); lVar28 != 0;
          lVar28 = *(long *)(lVar28 + 0x18)) {
        while (pMVar3 = DAT_0440a120, *(short *)(lVar28 + 0x34) == 0x403) {
          uVar12 = *(uint *)(lVar28 + 0x30);
          nn::os::LockMutex(DAT_0440a120);
          uVar5 = *(uint *)(pMVar3 + 0x28);
          if (uVar5 != 0) {
            uVar21 = 0;
            if (uVar5 != 0) {
              uVar21 = uVar12 / uVar5;
            }
            for (plVar32 = *(long **)(*(long *)(pMVar3 + 0x20) +
                                     (ulong)(uVar12 - uVar21 * uVar5) * 8); plVar32 != (long *)0x0;
                plVar32 = (long *)plVar32[1]) {
              if (*(uint *)(plVar32 + 2) == uVar12) {
                *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
                nn::os::UnlockMutex(pMVar3);
                local_bc = local_bc & 0xffffff00;
                uStack_b0 = 0;
                uStack_ac = 0;
                uStack_a8 = 0;
                uStack_a4 = 0;
                local_b4 = local_b4 & 0xffffff00;
                uStack_b8 = 0;
                uStack_b6 = 0;
                uStack_b5 = 0;
                uStack_c4 = 0;
                local_c0 = 4;
                local_c8 = *(undefined4 *)(puVar35 + 0xe);
                uStack_b7 = 0;
                local_9c = ((byte)puVar35[0x11] & 1) << 1 |
                           local_9c & 0xfc | (byte)puVar35[0x10] & 1;
                local_a0 = *(undefined4 *)(puVar35 + 0xc);
                local_d8 = (undefined **)CONCAT44(local_d8._4_4_,4);
                local_d0 = puVar33;
                (**(code **)(*plVar32 + 0x98))(plVar32,&local_d8);
                (**(code **)(*plVar32 + 0x18))(plVar32);
                goto LAB_02e806d8;
              }
            }
          }
          nn::os::UnlockMutex(pMVar3);
          lVar28 = *(long *)(lVar28 + 0x18);
          if (lVar28 == 0) goto LAB_02e80740;
        }
LAB_02e806d8:
      }
    }
LAB_02e80740:
    if ((bVar10) &&
       (iVar11 = *(int *)(puVar33 + 10), *(int *)(puVar33 + 10) = iVar11 + -1, iVar11 + -1 == 0)) {
      (**(code **)*puVar33)(puVar33);
      (*DAT_0442d150)(4,puVar33);
    }
    plVar32 = *(long **)(puVar35 + 6);
    lVar28 = *plVar32;
LAB_02e80764:
    puVar13 = (ulong *)(**(code **)(lVar28 + 0x18))(plVar32);
    goto LAB_02e7f218;
  case 0x28:
    uVar12 = (*(int *)(puVar35 + 0x16) << 4 | 2U) + *(int *)(puVar35 + 0x14) * 0x10000;
    uVar5 = uVar12 | 0x80000000;
    if (*(int *)(puVar35 + 0x18) == 1) {
      nn::os::LockMutex(DAT_0440a120);
      uVar12 = *(uint *)(pMVar3 + 0x28);
      if (uVar12 != 0) {
        uVar21 = 0;
        if (uVar12 != 0) {
          uVar21 = uVar5 / uVar12;
        }
        for (plVar32 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(uVar5 - uVar21 * uVar12) * 8);
            plVar32 != (long *)0x0; plVar32 = (long *)plVar32[1]) {
          if (*(uint *)(plVar32 + 2) == uVar5) {
            *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
            nn::os::UnlockMutex(pMVar3);
            local_c0 = 4;
            local_bc = local_bc & 0xffffff00;
            uStack_b0 = 0;
            uStack_ac = 0;
            uStack_b8 = 0;
            uStack_b6 = 0;
            uStack_b5 = 0;
            local_b4 = local_b4 & 0xffffff00;
            local_d0 = (undefined8 *)0x0;
            local_c8 = *(undefined4 *)(puVar35 + 6);
            uStack_c4 = 0;
            uStack_b7 = 0;
            local_d8 = (undefined **)((ulong)local_d8 & 0xffffffff00000000);
            (**(code **)(*plVar32 + 0x98))(plVar32,&local_d8);
            lVar28 = *plVar32;
            goto LAB_02e80764;
          }
        }
      }
      puVar13 = (ulong *)nn::os::UnlockMutex(pMVar3);
    }
    else if ((*(int *)(puVar35 + 0x18) == 0) &&
            (uVar21 = *(uint *)(DAT_0440a140 + 0x38), uVar21 != 0)) {
      uVar9 = 0;
      uVar27 = (uint)*(long *)(puVar35 + 2);
      if (uVar21 != 0) {
        uVar9 = uVar27 / uVar21;
      }
      plVar32 = *(long **)(*(long *)(DAT_0440a140 + 0x30) + (ulong)(uVar27 - uVar9 * uVar21) * 8);
      if (plVar32 != (long *)0x0) {
        uVar22 = *(undefined4 *)(puVar35 + 6);
        do {
          if (plVar32[1] == *(long *)(puVar35 + 2)) {
            *(int *)(plVar32[2] + 0x50) = *(int *)(plVar32[2] + 0x50) + 1;
            pMVar3 = DAT_0440a120;
            ppuVar17 = (undefined **)plVar32[2];
            if (ppuVar17 == (undefined **)0x0) goto LAB_02e80358;
            pMVar15 = DAT_0440a120 + 0x268;
            nn::os::LockMutex(pMVar15);
            uVar21 = *(uint *)(pMVar3 + 0x290);
            if (uVar21 == 0) goto LAB_02e808e0;
            uVar9 = 0;
            if (uVar21 != 0) {
              uVar9 = uVar5 / uVar21;
            }
            plVar32 = *(long **)(*(long *)(pMVar3 + 0x288) + (ulong)(uVar5 - uVar9 * uVar21) * 8);
            goto joined_r0x02e808c8;
          }
          plVar32 = (long *)*plVar32;
          bVar10 = false;
        } while (plVar32 != (long *)0x0);
        goto switchD_02e7ec58_caseD_4;
      }
    }
    goto LAB_02e80358;
  case 0x29:
    if (*(long *)(puVar35 + 2) != 0) {
      FUN_02eca81c();
      goto LAB_02e7f978;
    }
    puVar13 = (ulong *)FUN_02eca95c();
    goto LAB_02e7f808;
  case 0x2a:
    FUN_02eca9a8(*(undefined8 *)(puVar35 + 2));
    ppuVar17 = *(undefined ***)(puVar35 + 2);
    goto LAB_02e7f980;
  case 0x2b:
    uVar12 = *(uint *)(puVar35 + 2);
    if (*(int *)(puVar35 + 8) == 0) {
      nn::os::LockMutex(DAT_0440a120);
      uVar5 = *(uint *)(pMVar3 + 0x28);
      if (uVar5 == 0) {
        plVar32 = (long *)0x0;
      }
      else {
        uVar21 = 0;
        if (uVar5 != 0) {
          uVar21 = uVar12 / uVar5;
        }
        for (plVar32 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(uVar12 - uVar21 * uVar5) * 8);
            plVar32 != (long *)0x0; plVar32 = (long *)plVar32[1]) {
          if (*(uint *)(plVar32 + 2) == uVar12) {
            *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
            break;
          }
        }
      }
      puVar13 = (ulong *)nn::os::UnlockMutex(pMVar3);
    }
    else {
      pMVar15 = DAT_0440a120 + 0x38;
      nn::os::LockMutex(pMVar15);
      uVar5 = *(uint *)(pMVar3 + 0x60);
      if (uVar5 == 0) {
        plVar32 = (long *)0x0;
      }
      else {
        uVar21 = 0;
        if (uVar5 != 0) {
          uVar21 = uVar12 / uVar5;
        }
        for (plVar32 = *(long **)(*(long *)(pMVar3 + 0x58) + (ulong)(uVar12 - uVar21 * uVar5) * 8);
            plVar32 != (long *)0x0; plVar32 = (long *)plVar32[1]) {
          if (*(uint *)(plVar32 + 2) == uVar12) {
            *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
            break;
          }
        }
      }
      puVar13 = (ulong *)nn::os::UnlockMutex(pMVar15);
    }
    if (plVar32 != (long *)0x0) {
      uVar12 = (**(code **)(*plVar32 + 0x88))(plVar32);
      if (uVar12 < 0xb) {
        FUN_02ed6164(plVar32,*(undefined4 *)(puVar35 + 4),*(undefined4 *)(puVar35 + 6),1,2);
      }
LAB_02e80338:
      puVar13 = (ulong *)(**(code **)(*plVar32 + 0x18))(plVar32);
    }
    goto LAB_02e80358;
  case 0x2c:
    uVar12 = *(uint *)(puVar35 + 2);
    if (*(int *)(puVar35 + 8) == 0) {
      nn::os::LockMutex(DAT_0440a120);
      uVar5 = *(uint *)(pMVar3 + 0x28);
      if (uVar5 == 0) {
        plVar32 = (long *)0x0;
      }
      else {
        uVar21 = 0;
        if (uVar5 != 0) {
          uVar21 = uVar12 / uVar5;
        }
        for (plVar32 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(uVar12 - uVar21 * uVar5) * 8);
            plVar32 != (long *)0x0; plVar32 = (long *)plVar32[1]) {
          if (*(uint *)(plVar32 + 2) == uVar12) {
            *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
            break;
          }
        }
      }
      puVar13 = (ulong *)nn::os::UnlockMutex(pMVar3);
    }
    else {
      pMVar15 = DAT_0440a120 + 0x38;
      nn::os::LockMutex(pMVar15);
      uVar5 = *(uint *)(pMVar3 + 0x60);
      if (uVar5 == 0) {
        plVar32 = (long *)0x0;
      }
      else {
        uVar21 = 0;
        if (uVar5 != 0) {
          uVar21 = uVar12 / uVar5;
        }
        for (plVar32 = *(long **)(*(long *)(pMVar3 + 0x58) + (ulong)(uVar12 - uVar21 * uVar5) * 8);
            plVar32 != (long *)0x0; plVar32 = (long *)plVar32[1]) {
          if (*(uint *)(plVar32 + 2) == uVar12) {
            *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
            break;
          }
        }
      }
      puVar13 = (ulong *)nn::os::UnlockMutex(pMVar15);
    }
    if (plVar32 != (long *)0x0) {
      iVar11 = (**(code **)(*plVar32 + 0x88))(plVar32);
      if ((iVar11 == 10) || (iVar11 == 0)) {
        (**(code **)(*plVar32 + 0x1c0))(plVar32,*(undefined4 *)(puVar35 + 6),1,2);
      }
      goto LAB_02e80338;
    }
LAB_02e80358:
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x2d:
    uVar12 = *(uint *)(puVar35 + 2);
    pMVar15 = DAT_0440a120 + 0x38;
    nn::os::LockMutex(pMVar15);
    uVar5 = *(uint *)(pMVar3 + 0x60);
    if (uVar5 != 0) {
      uVar21 = 0;
      if (uVar5 != 0) {
        uVar21 = uVar12 / uVar5;
      }
      for (plVar32 = *(long **)(*(long *)(pMVar3 + 0x58) + (ulong)(uVar12 - uVar21 * uVar5) * 8);
          plVar32 != (long *)0x0; plVar32 = (long *)plVar32[1]) {
        if (*(uint *)(plVar32 + 2) == uVar12) {
          *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
          nn::os::UnlockMutex(pMVar15);
          uVar22 = *(undefined4 *)(puVar35 + 4);
          uVar19 = FUN_02e9fe04(plVar32);
          if ((uVar19 & 1) == 0) {
            FUN_02ea2a18(plVar32,uVar22);
          }
          puVar13 = (ulong *)(**(code **)(*plVar32 + 0x18))(plVar32);
          goto LAB_02e80090;
        }
      }
    }
LAB_02e7fc38:
    puVar13 = (ulong *)nn::os::UnlockMutex(pMVar15);
LAB_02e80090:
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x2e:
    puVar13 = (ulong *)FUN_02eb3368(*(undefined8 *)(puVar35 + 2),*(undefined4 *)(puVar35 + 6));
    break;
  case 0x2f:
    lVar28 = FUN_02eca254(*(undefined8 *)(puVar35 + 10));
    if (lVar28 != 0) {
      FUN_02ec8534(*(undefined4 *)(puVar35 + 8),lVar28,*(undefined8 *)(puVar35 + 2),
                   *(undefined4 *)(puVar35 + 6));
    }
LAB_02e7f978:
    ppuVar17 = *(undefined ***)(puVar35 + 2);
LAB_02e7f980:
    uVar16 = 0;
    goto LAB_02e7ef8c;
  case 0x32:
    puVar13 = (ulong *)FUN_02e74de0(*(undefined4 *)(puVar35 + 2));
    break;
  case 0x33:
    if (puVar35[2] == 0) {
      puVar13 = (ulong *)FUN_02ea48b4(puVar13);
    }
    else {
      puVar13 = (ulong *)FUN_02ea47e4();
    }
LAB_02e7f808:
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x34:
    puVar13 = (ulong *)FUN_02ea8058(*(undefined4 *)(puVar35 + 2),*(undefined8 *)(puVar35 + 4),
                                    *(undefined4 *)(puVar35 + 8),*(undefined4 *)(puVar35 + 10),
                                    *(undefined4 *)(puVar35 + 0xc),*(undefined8 *)(puVar35 + 0xe),
                                    *(undefined4 *)(puVar35 + 0x12),1);
    break;
  case 0x35:
    puVar13 = (ulong *)FUN_02ecaa1c(puVar35[4] != 0,puVar35[5] != 0,*(undefined4 *)(puVar35 + 2));
    if ((int)puVar13 != 1) goto LAB_02e7f808;
    goto LAB_02e7f464;
  case 0x36:
    puVar13 = (ulong *)FUN_02ec9dbc(puVar35 + 2);
    iVar11 = (int)puVar13;
joined_r0x02e7f458:
    if (iVar11 == 1) {
      puVar13 = (ulong *)nn::os::GetSystemTick();
      param_1[0x11] = (ulong)puVar13;
    }
LAB_02e7f464:
    bVar10 = false;
    *param_3 = 1;
    goto switchD_02e7ec58_caseD_4;
  case 0x37:
    piVar25 = (int *)param_1[0x15];
    uVar12 = (uint)param_1[0x16];
    if ((uVar12 == 0) || (*piVar25 == *(int *)(puVar35 + 2))) {
      piVar29 = piVar25;
    }
    else {
      lVar28 = (ulong)uVar12 * 0x18;
      piVar30 = piVar25;
      do {
        lVar28 = lVar28 + -0x18;
        if (lVar28 == 0) goto LAB_02e7ebf8;
        piVar29 = piVar30 + 6;
        piVar1 = piVar30 + 6;
        piVar30 = piVar29;
      } while (*piVar1 != *(int *)(puVar35 + 2));
    }
    if (piVar29 != piVar25 + (ulong)uVar12 * 6) {
      puVar13 = (ulong *)(**(code **)(piVar29 + 2))(puVar35 + 4,*puVar35 - 4);
    }
    break;
  case 0x38:
    local_d0 = (undefined8 *)0x0;
    uStack_c4 = 0;
    local_c0 = 4;
    local_bc = local_bc & 0xffffff00;
    uStack_b0 = 0;
    uStack_ac = 0;
    uStack_b8 = 0;
    uStack_b7 = 0;
    uStack_b6 = 0;
    uStack_b5 = 0;
    local_b4 = local_b4 & 0xffffff00;
    if (*(int *)(puVar35 + 2) == 1) {
      local_d8 = (undefined **)CONCAT44(local_d8._4_4_,1);
      iVar11 = *(int *)(puVar35 + 4);
      puVar13 = param_1 + 5;
      for (puVar24 = (ulong *)param_1[10]; puVar24 != (ulong *)0x0; puVar24 = (ulong *)*puVar24) {
        uVar19 = puVar24[2];
        if ((*(int *)(uVar19 + 0x30) == iVar11) && (_DAT_00000034 != 0x1820)) {
          *(int *)(uVar19 + 0x34) = *(int *)(uVar19 + 0x34) + 1;
        }
      }
      puVar24 = (ulong *)*puVar13;
      if (puVar24 != (ulong *)0x0) {
        uVar19 = puVar24[2];
        if ((*(int *)(uVar19 + 0x30) != iVar11) ||
           (*(short *)(*(long *)(uVar19 + 8) + 0x34) == 0x1820)) {
          puVar31 = (ulong *)*puVar24;
          goto joined_r0x02e7f1c0;
        }
        FUN_02e8425c(param_1,*(undefined4 *)(*(long *)(uVar19 + 8) + 0x30),uVar19,0);
        puVar31 = (ulong *)*puVar24;
        puVar4 = puVar13;
        if ((ulong *)param_1[5] != puVar24) {
          puVar4 = (ulong *)0x0;
        }
        *puVar4 = (ulong)puVar31;
        if ((ulong *)param_1[6] == puVar24) {
          param_1[6] = 0;
        }
        *puVar24 = param_1[7];
        param_1[7] = (ulong)puVar24;
        puVar24 = (ulong *)0x0;
        *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + -1;
        while (puVar31 != (ulong *)0x0) {
          while ((uVar19 = puVar31[2], *(int *)(uVar19 + 0x30) != iVar11 ||
                 (*(short *)(*(long *)(uVar19 + 8) + 0x34) == 0x1820))) {
            puVar24 = puVar31;
            puVar31 = (ulong *)*puVar31;
joined_r0x02e7f1c0:
            if (puVar31 == (ulong *)0x0) goto switchD_02e7f28c_caseD_1;
          }
          FUN_02e8425c(param_1,*(undefined4 *)(*(long *)(uVar19 + 8) + 0x30),uVar19,0);
          puVar26 = (ulong *)*puVar31;
          puVar4 = puVar13;
          if ((ulong *)param_1[5] != puVar31) {
            puVar4 = puVar24;
          }
          *puVar4 = (ulong)puVar26;
          if ((ulong *)param_1[6] == puVar31) {
            param_1[6] = (ulong)puVar24;
          }
          *puVar31 = param_1[7];
          param_1[7] = (ulong)puVar31;
          *(int *)((long)param_1 + 0x4c) = *(int *)((long)param_1 + 0x4c) + -1;
          puVar31 = puVar26;
        }
      }
      goto switchD_02e7f28c_caseD_1;
    }
    switch(*(int *)(puVar35 + 2)) {
    case 0:
      local_d8 = (undefined **)((ulong)local_d8._4_4_ << 0x20);
      goto LAB_02e7f558;
    case 2:
      local_d8 = (undefined **)CONCAT44(local_d8._4_4_,2);
      puVar13 = (ulong *)param_1[10];
      if (puVar13 != (ulong *)0x0) {
        iVar11 = *(int *)(puVar35 + 4);
        puVar24 = (ulong *)0x0;
        do {
          uVar19 = puVar13[2];
          if (*(int *)(uVar19 + 0x30) == iVar11) {
            if (*(int *)(uVar19 + 0x34) != 0) {
              *(int *)(uVar19 + 0x34) = *(int *)(uVar19 + 0x34) + -1;
              goto LAB_02e7f2cc;
            }
            FUN_02e84578(param_1);
            puVar31 = (ulong *)*puVar13;
            puVar4 = param_1 + 10;
            if ((ulong *)param_1[10] != puVar13) {
              puVar4 = puVar24;
            }
            *puVar4 = (ulong)puVar31;
            if ((ulong *)param_1[0xb] == puVar13) {
              param_1[0xb] = (ulong)puVar24;
            }
            *puVar13 = param_1[0xc];
            param_1[0xc] = (ulong)puVar13;
            *(int *)((long)param_1 + 0x74) = *(int *)((long)param_1 + 0x74) + -1;
          }
          else {
LAB_02e7f2cc:
            puVar31 = (ulong *)*puVar13;
            puVar24 = puVar13;
          }
          puVar13 = puVar31;
        } while (puVar31 != (ulong *)0x0);
      }
      break;
    case 3:
      local_d8 = (undefined **)CONCAT44(local_d8._4_4_,3);
LAB_02e7f558:
      FUN_02e82be8(param_1,*(undefined4 *)(puVar35 + 4));
      break;
    case 4:
      local_d8 = (undefined **)CONCAT44(local_d8._4_4_,5);
    }
switchD_02e7f28c_caseD_1:
    uStack_b8 = 0;
    uStack_b6 = 0;
    local_c0 = *(undefined4 *)(puVar35 + 8);
    local_d0 = (undefined8 *)0x0;
    local_c8 = *(undefined4 *)(puVar35 + 4);
    uStack_c4 = *(undefined4 *)(puVar35 + 6);
    uStack_b7 = 0;
    puVar13 = (ulong *)FUN_02e9f854(&local_d8);
LAB_02e7f218:
    bVar10 = false;
    goto switchD_02e7ec58_caseD_4;
  case 0x39:
    puVar18 = puVar35 + 2;
    FUN_02eaa228(*(undefined8 *)puVar18,puVar18);
    puVar13 = (ulong *)(**(code **)(**(long **)puVar18 + 0x18))();
    break;
  case 0x3a:
    uVar19 = *param_1 + (ulong)((int)param_1[4] + 3U & 0xfffffffc);
    if (uVar19 < param_1[3]) goto LAB_02e7f0a0;
    *param_1 = param_1[2];
    goto LAB_02e7eb98;
  }
LAB_02e7ebf8:
  bVar10 = false;
switchD_02e7ec58_caseD_4:
  uVar6 = *puVar35;
  uVar19 = *param_1 + ((ulong)(uVar6 + 3) & 0x1fffc);
  if (uVar19 < param_1[3]) {
    *param_1 = uVar19;
  }
  else {
    *param_1 = param_1[2];
  }
  if ((param_2 & 1) == 0) {
    DAT_0440a468 = DAT_0440a468 + 1;
    if (bVar10) {
      return 1;
    }
  }
  else {
    local_e4 = local_e4 + uVar6;
    DAT_0440a468 = DAT_0440a468 + 1;
    puVar13 = (ulong *)0x1;
    if (bVar10 || uVar37 >> 1 <= local_e4) {
      return 1;
    }
  }
  goto LAB_02e7eb98;
joined_r0x02e808c8:
  if (plVar32 == (long *)0x0) goto LAB_02e808e0;
  if (*(uint *)(plVar32 + 2) == uVar5) {
    *(int *)((long)plVar32 + 0x14) = *(int *)((long)plVar32 + 0x14) + 1;
    nn::os::UnlockMutex(pMVar15);
    (**(code **)(*plVar32 + 0x18))(plVar32);
    goto LAB_02e80a4c;
  }
  plVar32 = (long *)plVar32[1];
  goto joined_r0x02e808c8;
LAB_02e808e0:
  nn::os::UnlockMutex(pMVar15);
  plVar32 = (long *)FUN_02eaec3c(uVar5);
  if (plVar32 != (long *)0x0) {
    FUN_02eae59c(plVar32,uVar12,0,0);
  }
LAB_02e80a4c:
  pMVar3 = DAT_0440a120;
  nn::os::LockMutex(DAT_0440a120);
  uVar12 = *(uint *)(pMVar3 + 0x28);
  if (uVar12 == 0) {
    plVar36 = (long *)0x0;
  }
  else {
    uVar21 = 0;
    if (uVar12 != 0) {
      uVar21 = uVar5 / uVar12;
    }
    for (plVar36 = *(long **)(*(long *)(pMVar3 + 0x20) + (ulong)(uVar5 - uVar21 * uVar12) * 8);
        plVar36 != (long *)0x0; plVar36 = (long *)plVar36[1]) {
      if (*(uint *)(plVar36 + 2) == uVar5) {
        *(int *)((long)plVar36 + 0x14) = *(int *)((long)plVar36 + 0x14) + 1;
        break;
      }
    }
  }
  nn::os::UnlockMutex(pMVar3);
  if ((plVar32 == (long *)0x0) || (plVar36 != (long *)0x0)) {
    (**(code **)(*plVar36 + 0x18))(plVar36);
  }
  else {
    lVar28 = FUN_02ef5288(uVar5);
    if (lVar28 != 0) {
      FUN_02ef65c8(lVar28 + 200,(int)plVar32[2]);
    }
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  uStack_6c = uVar22;
  puVar13 = (ulong *)FUN_02e8289c(uVar5,ppuVar17,&local_80);
  iVar11 = *(int *)(ppuVar17 + 10);
  *(int *)(ppuVar17 + 10) = iVar11 + -1;
  bVar10 = false;
  if (iVar11 + -1 != 0) goto switchD_02e7ec58_caseD_4;
LAB_02e7ef6c:
  (**(code **)*ppuVar17)(ppuVar17);
  uVar16 = 4;
LAB_02e7ef8c:
  puVar13 = (ulong *)(*DAT_0442d150)(uVar16,ppuVar17);
  goto LAB_02e7ebf8;
code_r0x02e7eeac:
  plVar32 = (long *)*plVar32;
  bVar10 = false;
  if (plVar32 == (long *)0x0) goto switchD_02e7ec58_caseD_4;
  goto LAB_02e7eea0;
}


