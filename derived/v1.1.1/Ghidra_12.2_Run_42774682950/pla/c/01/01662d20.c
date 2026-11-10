/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01662d20; name: FUN_01662d20
 */


void FUN_01662d20(long param_1)

{
  char cVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  ulong *puVar21;
  long *plVar22;
  int *piVar23;
  uint uVar24;
  ulong uVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  ulong uVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ulong uVar34;
  long *plVar35;
  undefined8 local_140;
  long *local_130;
  uint local_11c;
  undefined8 local_118;
  uint *local_110;
  uint *local_108;
  long *plStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  long *local_c8;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  long *local_a8;
  long *local_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80 [2];
  long *local_70 [2];
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    return;
  }
  uVar15 = FUN_01663d80();
  if ((uVar15 & 1) == 0) {
    return;
  }
  FUN_01662920(param_1);
  local_a0 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148b80(&local_a8);
  plVar16 = (long *)FUN_00e9439c(&local_e0,local_a0,&local_a0);
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 10;
    do {
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
  }
  puVar9 = PTR_DAT_04379528;
  local_b0 = 0;
  local_e0 = 0;
  local_d8 = 0;
  uVar26 = 0;
  plVar2 = plVar16 + 10;
  local_c0 = 0x1fffffffffffffff;
  uStack_b8 = 0;
  local_d0 = 0;
  local_c8 = local_a0;
  local_118 = (uint *)((ulong)local_118._4_4_ << 0x20);
  do {
    uVar15 = 0;
    local_80[0] = (undefined8 *)((ulong)local_80[0] & 0xffffffff00000000);
    do {
      if (plVar16 != (long *)0x0) {
        do {
          cVar12 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        do {
          cVar12 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = (int)*plVar2 + 1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
      }
      if (uVar26 < 0x20) {
        (**(code **)(*plVar16 + 0x28))
                  (plVar16,local_a8 + (ulong)uVar26 * 0x546 + uVar15 * 0x2d + 0xd);
      }
      if (plVar16 != (long *)0x0) {
        do {
          iVar13 = (int)*plVar2 + -1;
          cVar12 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar7) {
            *(int *)plVar2 = iVar13;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      iVar13 = FUN_02c6849c(plVar16[0x13]);
      if (iVar13 == 0) {
        bVar11 = 0;
      }
      else {
        bVar11 = FUN_02c6cf3c(plVar16[0x13]);
        bVar11 = (*(byte *)(*(long *)(plVar16[0x13] + 0x10) + 4) & 4) == 0 & (bVar11 ^ 0xff);
      }
      do {
        iVar13 = (int)*plVar2 + -1;
        cVar12 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar7) {
          *(int *)plVar2 = iVar13;
          cVar12 = ExclusiveMonitorsStatus();
        }
      } while (cVar12 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
      uVar15 = local_d0;
      if (bVar11 != 0) {
        iVar13 = FUN_02c6849c(plVar16[0x13]);
        uVar15 = local_d0;
        if (iVar13 != 0) {
          if (local_d8 < local_d0) {
            FUN_01665c10(local_c8,local_d8,&local_118,local_80);
            local_d8 = local_d8 + 8;
            uVar15 = local_d0;
          }
          else {
            lVar20 = (long)(local_d8 - local_e0) >> 3;
            uVar15 = lVar20 + 1;
            uVar34 = local_c0;
            if (0x7ffffffffffffffe < local_c0) {
              uVar34 = 0x7fffffffffffffff;
            }
            if (uVar34 < uVar15) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            if ((ulong)((long)(local_d0 - local_e0) >> 3) < uVar34 >> 1) {
              uVar27 = (long)(local_d0 - local_e0) >> 2;
              uVar34 = uVar15;
              if (uVar15 <= uVar27) {
                uVar34 = uVar27;
              }
            }
            if (uVar34 == 0) {
              lVar17 = 0;
            }
            else {
              lVar17 = (**(code **)(*local_c8 + 0x10))(local_c8,uVar34 << 3,4);
              if (lVar17 == 0) {
                (**(code **)(*local_c8 + 0xb8))();
              }
            }
            uVar15 = lVar17 + lVar20 * 8;
            FUN_01665c10(local_c8,uVar15,&local_118,local_80);
            uVar27 = local_e0;
            uVar28 = local_d8;
            uVar30 = uVar15;
            if (local_d8 != local_e0) {
              do {
                plVar22 = local_c8;
                if (((*PTR_DAT_04379520 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04379520), iVar13 != 0)) {
                  FUN_008a62a4(puVar9);
                  FUN_00100250(PTR_LAB_04379530,puVar9,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379520);
                }
                lVar20 = nn::os::GetTlsValue(*(undefined4 *)puVar9);
                if (lVar20 == 0) {
                  *(undefined8 *)(uVar30 - 8) = *(undefined8 *)(uVar28 - 8);
                }
                else {
                  if (0xf < *(ulong *)(lVar20 + 0x80)) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar22;
                  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
                  *(undefined8 *)(uVar30 - 8) = *(undefined8 *)(uVar28 - 8);
                  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
                }
                uVar28 = uVar28 - 8;
                uVar30 = uVar30 - 8;
              } while (uVar27 != uVar28);
              uVar27 = local_e0;
            }
            plVar22 = local_c8;
            local_d8 = uVar15 + 8;
            uVar15 = lVar17 + uVar34 * 8;
            local_e0 = uVar30;
            if (uVar27 != 0) {
              lVar20 = local_d0 - uVar27;
              local_d0 = uVar15;
              uVar15 = (**(code **)(*local_c8 + 0xc0))(local_c8);
              if ((uVar15 & 1) != 0) {
                lVar17 = tpidr_el0;
                if (*(char *)(lVar17 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar17 + 0x38d488) = 1;
                  *(undefined8 *)(lVar17 + 0x38d478) = 0;
                  *(undefined8 *)(lVar17 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar17 + 0x38d480)) {
                  FUN_02bcc824(plVar22,uVar27,lVar20,4);
                  uVar15 = local_d0;
                  goto LAB_01662f04;
                }
              }
              (**(code **)(*plVar22 + 0x18))(plVar22,uVar27,lVar20,4);
              uVar15 = local_d0;
            }
          }
        }
      }
LAB_01662f04:
      local_d0 = uVar15;
      uVar32 = (int)local_80[0] + 1;
      uVar15 = (ulong)uVar32;
      local_80[0] = (undefined8 *)CONCAT44(local_80[0]._4_4_,uVar32);
      uVar26 = (uint)local_118;
    } while (uVar32 < 0x1e);
    uVar26 = (uint)local_118 + 1;
    local_118 = (uint *)CONCAT44(local_118._4_4_,uVar26);
  } while (uVar26 < 0x20);
  local_e8 = 0;
  local_118 = (uint *)0x0;
  local_110 = (uint *)0x0;
  local_108 = (uint *)0x0;
  plStack_100 = local_a0;
  uVar32 = (uint)(local_d8 - local_e0 >> 3);
  local_f8 = 0x3fffffffffffffff;
  uStack_f0 = 0;
  uVar26 = uVar32;
  if (5 < uVar32) {
    uVar26 = 6;
  }
  FUN_01663fa8(&local_118,uVar26);
  if (0 < (int)uVar26) {
    lVar20 = 0x1f;
    if ((0x7fffffffU >> (ulong)((uint)LZCOUNT(uVar32) & 0x1f) & uVar32) != 0) {
      lVar20 = 0x20;
    }
    uVar34 = lVar20 - LZCOUNT(uVar32);
    uVar15 = uVar34 >> 6;
    uVar33 = 0;
    if ((uVar34 & 0x3f) != 0) {
      uVar15 = uVar15 + 1;
    }
LAB_016631d8:
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04379678), iVar13 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar20 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar20;
    puVar21 = *(ulong **)(lVar20 + 0xd8);
    puVar29 = local_118;
    if (uVar32 == 0) {
      uVar27 = *puVar21;
      local_11c = (int)puVar21[1] + (int)uVar27;
      uVar28 = puVar21[1] ^ uVar27;
      *puVar21 = uVar28 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar28 << 0x10;
      puVar21[1] = uVar28 >> 0x1b | uVar28 << 0x25;
    }
    else if (uVar32 == 1) {
      local_11c = 0;
    }
    else {
      if (uVar34 < uVar15) {
        uVar24 = 0;
      }
      else {
        uVar27 = 0;
        if (uVar15 != 0) {
          uVar27 = uVar34 / uVar15;
        }
        uVar24 = (uint)(0xffffffffffffffff >> (-uVar27 & 0x3f));
      }
      uVar27 = *puVar21;
      uVar28 = puVar21[1];
      do {
        uVar30 = uVar27 ^ uVar28;
        iVar13 = (int)uVar28;
        uVar28 = uVar30 >> 0x1b | uVar30 << 0x25;
        local_11c = (int)uVar27 + iVar13 & uVar24;
        uVar27 = uVar30 ^ (uVar27 >> 0x28 | uVar27 << 0x18) ^ uVar30 << 0x10;
      } while (uVar32 <= local_11c);
      *puVar21 = uVar27;
      puVar21[1] = uVar28;
    }
    do {
      if (puVar29 == local_110) {
        if (local_110 == local_108) {
          FUN_01665dd4(&local_118,&local_11c);
        }
        else {
          FUN_01665ff4(&plStack_100,local_110,&local_11c);
          local_110 = local_110 + 1;
        }
        uVar33 = uVar33 + 1;
        puVar3 = (undefined4 *)(local_e0 + (ulong)local_11c * 8);
        uVar5 = *puVar3;
        uVar6 = puVar3[1];
        FUN_0165a7a0(local_80);
        puVar10 = local_80[0];
        if (local_80[0] != (undefined8 *)0x0) {
          if (*(int *)((long)local_80[0] + 0xc) == 0) goto LAB_016639cc;
          piVar23 = (int *)((long)local_80[0] + 0xc);
          iVar13 = *(int *)((long)local_80[0] + 0xc);
          goto LAB_0166343c;
        }
        break;
      }
      uVar24 = *puVar29;
      puVar29 = puVar29 + 1;
    } while (uVar24 != local_11c);
    goto joined_r0x01663574;
  }
LAB_01663578:
  plVar22 = plStack_100;
  puVar29 = local_118;
  if (local_118 != (uint *)0x0) {
    local_110 = local_118;
    lVar20 = (long)local_108 - (long)local_118;
    uVar15 = (**(code **)(*plStack_100 + 0xc0))(plStack_100);
    if ((uVar15 & 1) != 0) {
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar17 + 0x38d480)) {
        FUN_02bcc824(plVar22,puVar29,lVar20,4);
        goto LAB_01663600;
      }
    }
    (**(code **)(*plVar22 + 0x18))(plVar22,puVar29,lVar20,4);
  }
LAB_01663600:
  FUN_01665440(&local_e0);
  if (plVar16 != (long *)0x0) {
    do {
      iVar13 = (int)*plVar2 + -1;
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar13;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  if (local_a8 != (long *)0x0) {
    lVar20 = local_a8[0xb];
    piVar23 = (int *)(lVar20 + 0xc);
    do {
      iVar13 = *piVar23;
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar7) {
        *piVar23 = iVar13 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  return;
LAB_0166343c:
  do {
    plVar22 = (long *)puVar10[2];
    if (((*PTR_DAT_043796e0 & 1) == 0) &&
       (iVar14 = __cxa_guard_acquire(PTR_DAT_043796e0), iVar14 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar14 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar14 != 0)) {
        uVar19 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar19;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)PTR_DAT_043796e8 = PTR_DAT_043794d8;
      __cxa_guard_release(PTR_DAT_043796e0);
    }
    while( true ) {
      if (plVar22 == (long *)0x0) goto LAB_016639cc;
      if (plVar22 == (long *)PTR_DAT_043796e8) break;
      plVar22 = (long *)*plVar22;
    }
    iVar14 = *piVar23;
    if (iVar14 == iVar13) {
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar7) {
        *piVar23 = iVar13 + 1;
        cVar12 = ExclusiveMonitorsStatus();
      }
      if (cVar12 == '\0') {
        lVar20 = puVar10[3];
        local_130 = (long *)0x0;
        if (lVar20 != 0) {
          local_130 = (long *)(lVar20 + -0x50);
        }
        goto LAB_016634ac;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar13 = iVar14;
  } while (iVar14 != 0);
LAB_016639cc:
  local_130 = (long *)0x0;
LAB_016634ac:
  puVar10 = local_80[0];
  if (local_80[0] != (undefined8 *)0x0) {
    piVar23 = (int *)(local_80[0] + 1);
    do {
      iVar13 = *piVar23;
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar7) {
        *piVar23 = iVar13 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar13 + -1 == 0) {
      local_80[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar20 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar20;
      local_70[0] = (long *)*puVar10;
      FUN_02a44274(lVar20 + 0xd8,local_70);
    }
  }
  if (local_130 != (long *)0x0) {
    FUN_0199c4cc(local_80,local_130);
    if (local_80[0] == (undefined8 *)0x0) {
      local_88 = (long *)0x0;
    }
    else {
      FUN_0161aee4(&local_88);
      puVar10 = local_80[0];
      if (local_80[0] != (undefined8 *)0x0) {
        piVar23 = (int *)(local_80[0] + 1);
        do {
          iVar13 = *piVar23;
          cVar12 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar23,0x10);
          if (bVar7) {
            *piVar23 = iVar13 + -1;
            cVar12 = ExclusiveMonitorsStatus();
          }
        } while (cVar12 != '\0');
        if (iVar13 + -1 == 0) {
          local_80[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar20 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar20;
          local_70[0] = (long *)*puVar10;
          FUN_02a44274(lVar20 + 0xd8,local_70);
        }
      }
      if (local_88 != (long *)0x0) {
        local_80[0] = *(undefined8 **)(param_1 + 8);
        if (((*PTR_DAT_04379558 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
        FUN_01148b80(local_70);
        local_90 = (long *)FUN_00e9439c(&local_98,local_80[0],local_80);
        if (local_90 == (long *)0x0) {
          local_98 = (long *)0x0;
        }
        else {
          plVar22 = local_90 + 10;
          do {
            cVar12 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar7) {
              *(int *)plVar22 = (int)*plVar22 + 1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          local_98 = local_90;
          if (local_90 != (long *)0x0) {
            plVar22 = local_90 + 10;
            do {
              cVar12 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
              if (bVar7) {
                *(int *)plVar22 = (int)*plVar22 + 1;
                cVar12 = ExclusiveMonitorsStatus();
              }
            } while (cVar12 != '\0');
          }
        }
        FUN_010e0448(local_70[0],&local_98,uVar5,uVar6);
        if (local_98 != (long *)0x0) {
          plVar22 = local_98 + 10;
          do {
            iVar13 = (int)*plVar22 + -1;
            cVar12 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar7) {
              *(int *)plVar22 = iVar13;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*local_98 + 0x10))();
          }
        }
        cVar12 = FUN_010a02d0(&local_90);
        puVar29 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
        uVar27 = (ulong)*puVar29;
        piVar23 = (int *)((long)puVar29 + uVar27);
        if ((4 < *(ushort *)((long)piVar23 - (long)*piVar23)) &&
           (uVar28 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[2], uVar28 != 0)) {
          uVar30 = (ulong)*(uint *)((long)piVar23 + uVar28);
          puVar4 = (uint *)((long)((long)piVar23 + uVar28) + uVar30);
          if ((puVar4 != (uint *)0x0) && (uVar24 = *puVar4, uVar24 != 0)) {
            uVar25 = *(ulong *)(param_1 + 0x80);
            if (uVar25 != 0) {
              uVar27 = uVar25 - (uVar25 >> 1 & 0x5555555555555555);
              uVar27 = (uVar27 & 0x3333333333333333) + (uVar27 >> 2 & 0x3333333333333333);
              uVar28 = (uVar27 + (uVar27 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              uVar27 = 0;
LAB_016638ec:
              piVar23 = (int *)((long)(puVar4 + uVar27 + 1) + (ulong)puVar4[uVar27 + 1]);
              if (*(ushort *)((long)piVar23 - (long)*piVar23) < 5) {
                uVar30 = 0;
                if (1 < uVar28) goto LAB_01663920;
LAB_016639e0:
                uVar31 = uVar30 & uVar25 - 1;
                plVar22 = *(long **)(*(long *)(param_1 + 0x78) + uVar31 * 8);
                if (plVar22 == (long *)0x0) goto LAB_01663aec;
LAB_0166393c:
                plVar22 = (long *)*plVar22;
                if (plVar22 == (long *)0x0) goto LAB_01663aec;
                if (1 < uVar28) {
                  do {
                    uVar18 = plVar22[1];
                    if (uVar18 == uVar30) {
                      if (plVar22[2] == uVar30) goto LAB_01663964;
                    }
                    else {
                      if (uVar25 <= uVar18) {
                        uVar8 = 0;
                        if (uVar25 != 0) {
                          uVar8 = uVar18 / uVar25;
                        }
                        uVar18 = uVar18 - uVar8 * uVar25;
                      }
                      if (uVar18 != uVar31) break;
                    }
                    plVar22 = (long *)*plVar22;
                  } while (plVar22 != (long *)0x0);
                  goto LAB_01663aec;
                }
                do {
                  if (plVar22[1] == uVar30) {
                    if (plVar22[2] == uVar30) goto LAB_01663964;
                  }
                  else if ((plVar22[1] & uVar25 - 1) != uVar31) goto LAB_01663aec;
                  plVar22 = (long *)*plVar22;
                  plVar35 = (long *)0x0;
                } while (plVar22 != (long *)0x0);
                goto LAB_01663968;
              }
              uVar31 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[2];
              uVar30 = 0;
              if (uVar31 != 0) {
                uVar30 = *(ulong *)((long)piVar23 + uVar31);
              }
              if (uVar28 < 2) goto LAB_016639e0;
LAB_01663920:
              uVar31 = uVar30;
              if (uVar25 <= uVar30) {
                uVar31 = 0;
                if (uVar25 != 0) {
                  uVar31 = uVar30 / uVar25;
                }
                uVar31 = uVar30 - uVar31 * uVar25;
              }
              plVar22 = *(long **)(*(long *)(param_1 + 0x78) + uVar31 * 8);
              if (plVar22 != (long *)0x0) goto LAB_0166393c;
LAB_01663aec:
              plVar35 = (long *)0x0;
              cVar1 = DAT_0000001a;
              goto joined_r0x0166396c;
            }
            lVar20 = 0;
LAB_01663a88:
            if (DAT_0000001a != '\0') goto LAB_01663aa4;
            if (DAT_00000019 == -1) {
              plVar35 = (long *)0x0;
              plVar22 = (long *)&DAT_00000010;
              piVar23 = (int *)((long)puVar29 +
                               lVar20 + (ulong)*(uint *)((long)puVar29 +
                                                        lVar20 + uVar27 + uVar30 + uVar28 + 4) +
                                        uVar28 + uVar27 + uVar30 + 4);
LAB_01663bd4:
              *(char *)((long)plVar22 + 9) = cVar12;
            }
            else {
              if (DAT_00000019 != cVar12) goto LAB_01663aa4;
              plVar35 = (long *)0x0;
              plVar22 = (long *)&DAT_00000010;
              piVar23 = (int *)((long)puVar29 +
                               lVar20 + (ulong)*(uint *)((long)puVar29 +
                                                        lVar20 + uVar27 + uVar30 + uVar28 + 4) +
                                        uVar28 + uVar27 + uVar30 + 4);
            }
LAB_01663bd8:
            puVar29 = (uint *)((long)piVar23 +
                              (ulong)*(ushort *)((long)piVar23 + (6 - (long)*piVar23)));
            puVar29 = (uint *)((long)puVar29 +
                              (ulong)*(byte *)(plVar35 + 3) * 4 + (ulong)*puVar29 + 4);
            piVar23 = (int *)((long)puVar29 + (ulong)*puVar29);
            if ((*(ushort *)((long)piVar23 - (long)*piVar23) < 5) ||
               (uVar27 = (ulong)((ushort *)((long)piVar23 - (long)*piVar23))[2], uVar27 == 0)) {
              local_140 = 0;
            }
            else {
              local_140 = *(undefined8 *)((long)piVar23 + uVar27);
            }
            iVar13 = FUN_02c6849c(local_90[0x13]);
            if (iVar13 == 0x1a5) {
              FUN_02c62fcc(local_90,1,0);
            }
            FUN_01f79164(local_88,local_140,&local_90);
            cVar1 = (char)plVar35[3] + '\x01';
            *(char *)(plVar35 + 3) = cVar1;
            if ((&DAT_039c72e0)[cVar12] == cVar1) {
              *(undefined1 *)((long)plVar22 + 10) = 1;
            }
          }
        }
LAB_01663c74:
        if (local_90 != (long *)0x0) {
          plVar22 = local_90 + 10;
          do {
            iVar13 = (int)*plVar22 + -1;
            cVar12 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar7) {
              *(int *)plVar22 = iVar13;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (iVar13 == 0) {
            (**(code **)(*local_90 + 0x10))();
          }
        }
        if (local_70[0] != (long *)0x0) {
          lVar20 = local_70[0][0xb];
          piVar23 = (int *)(lVar20 + 0xc);
          do {
            iVar13 = *piVar23;
            cVar12 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar7) {
              *piVar23 = iVar13 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        if (local_88 != (long *)0x0) {
          lVar20 = local_88[0xb];
          piVar23 = (int *)(lVar20 + 0xc);
          do {
            iVar13 = *piVar23;
            cVar12 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar23,0x10);
            if (bVar7) {
              *piVar23 = iVar13 + -1;
              cVar12 = ExclusiveMonitorsStatus();
            }
          } while (cVar12 != '\0');
          if (iVar13 + -1 == 0) {
            *(undefined8 *)(lVar20 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
    }
    lVar20 = local_130[0xb];
    piVar23 = (int *)(lVar20 + 0xc);
    do {
      iVar13 = *piVar23;
      cVar12 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar23,0x10);
      if (bVar7) {
        *piVar23 = iVar13 + -1;
        cVar12 = ExclusiveMonitorsStatus();
      }
    } while (cVar12 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*local_130 + 0x20))();
    }
  }
joined_r0x01663574:
  if ((int)uVar26 <= (int)(uVar33 & 0xff)) goto LAB_01663578;
  goto LAB_016631d8;
LAB_01663964:
  plVar35 = plVar22;
LAB_01663968:
  cVar1 = *(char *)((long)plVar35 + 0x1a);
joined_r0x0166396c:
  if (cVar1 == '\0') {
    plVar22 = plVar35 + 2;
    if (*(char *)((long)plVar35 + 0x19) == -1) goto LAB_01663bd4;
    if (*(char *)((long)plVar35 + 0x19) == cVar12) goto LAB_01663bd8;
  }
  uVar27 = uVar27 + 1;
  if (uVar27 == uVar24) goto LAB_01663c74;
  goto LAB_016638ec;
LAB_01663aa4:
  lVar20 = lVar20 + 4;
  if ((ulong)uVar24 * 4 == lVar20) goto LAB_01663c74;
  goto LAB_01663a88;
}


