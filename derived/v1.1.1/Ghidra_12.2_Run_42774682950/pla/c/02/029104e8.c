/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029104e8; name: FUN_029104e8
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_029104e8(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  MutexType *pMVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  int *piVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long *plVar19;
  long *plVar20;
  long lVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  long *local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 *local_a0;
  char *pcStack_98;
  long local_90;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  
  lVar17 = *(long *)(param_1 + 0x158);
  *(long **)(param_1 + 0x50) = param_2;
  if (lVar17 == 0) {
    lVar17 = (**(code **)(*param_2 + 0x10))(param_2,0xe8,8);
    if (lVar17 == 0) {
      plVar10 = (long *)0x0;
      uVar14 = 0;
      uVar16 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar6 = PTR_DAT_04379528;
        if (iVar7 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar8 + 0x80)) goto LAB_02911da0;
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_2;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      FUN_02931354(lVar17,param_2);
      uVar16 = 8;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      uVar14 = 0xe8;
      plVar10 = param_2;
    }
    lVar8 = *(long *)(param_1 + 0x158);
    *(long *)(param_1 + 0x158) = lVar17;
    if (lVar8 != 0) {
      FUN_02bcbe58(&local_120,0);
      FUN_02932978(lVar8);
      plVar20 = *(long **)(param_1 + 0x160);
      uVar2 = *(undefined8 *)(param_1 + 0x168);
      uVar18 = *(undefined8 *)(param_1 + 0x170);
      uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar9 & 1) == 0) {
LAB_02910650:
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar8,uVar2,uVar18);
      }
      else {
        lVar17 = tpidr_el0;
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar17 + 0x38d480) < 1) goto LAB_02910650;
        FUN_02bcc824(plVar20,lVar8,uVar2,uVar18);
      }
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar17 + 0x38d480) + -1;
      *(int *)(lVar17 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar17 + 0x38d484) = 0;
      }
      lVar17 = *(long *)(param_1 + 0x158);
    }
    *(long **)(param_1 + 0x160) = plVar10;
    *(undefined8 *)(param_1 + 0x168) = uVar14;
    *(undefined8 *)(param_1 + 0x170) = uVar16;
  }
  uVar9 = FUN_0293490c(lVar17,param_4);
  if ((uVar9 & 1) == 0) {
    return 0;
  }
  plVar10 = *(long **)(*(long *)(param_1 + 0x158) + 0xa0);
  (**(code **)(*plVar10 + 0x30))(plVar10,"English(US)");
  *(undefined4 *)(param_1 + 0x150) = 0xf;
  if (*(long *)(param_1 + 0x178) == 0) {
    puVar15 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x88,8);
    if (puVar15 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      uVar16 = 0;
      uVar14 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar6 = PTR_DAT_04379528;
        if (iVar7 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_02911da0;
      *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = param_2;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = param_2;
      puVar15[3] = 0x155555555555555;
      puVar15[8] = 0x155555555555555;
      puVar15[9] = 0;
      puVar15[4] = 0;
      *(undefined4 *)(puVar15 + 5) = 0;
      *(undefined4 *)(puVar15 + 10) = 0;
      puVar15[0xb] = 0;
      *(undefined4 *)(puVar15 + 0xc) = 0x3f800000;
      puVar15[6] = 0;
      puVar15[7] = param_2;
      nn::os::InitializeMutex((MutexType *)(puVar15 + 0xd),false,0);
      FUN_02914490(puVar15,(long)(4096.0 / *(float *)(puVar15 + 0xc)));
      uVar14 = 8;
      uVar16 = 0x88;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
      plVar10 = param_2;
    }
    lVar17 = *(long *)(param_1 + 0x178);
    *(undefined8 **)(param_1 + 0x178) = puVar15;
    if (lVar17 != 0) {
      FUN_02bcbe58(&local_120,0);
      FUN_02915698(lVar17);
      plVar20 = *(long **)(param_1 + 0x180);
      uVar2 = *(undefined8 *)(param_1 + 0x188);
      uVar18 = *(undefined8 *)(param_1 + 400);
      uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
      if ((uVar9 & 1) == 0) {
LAB_029108c8:
        (**(code **)(*plVar20 + 0x18))(plVar20,lVar17,uVar2,uVar18);
      }
      else {
        lVar8 = tpidr_el0;
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_029108c8;
        FUN_02bcc824(plVar20,lVar17,uVar2,uVar18);
      }
      lVar17 = tpidr_el0;
      if (*(char *)(lVar17 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar17 + 0x38d488) = 1;
        *(undefined8 *)(lVar17 + 0x38d478) = 0;
        *(undefined8 *)(lVar17 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar17 + 0x38d480) + -1;
      *(int *)(lVar17 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar17 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar17 + 0x38d488) = 1;
          *(undefined8 *)(lVar17 + 0x38d478) = 0;
          *(undefined8 *)(lVar17 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar17 + 0x38d484) = 0;
      }
    }
    *(long **)(param_1 + 0x180) = plVar10;
    *(undefined8 *)(param_1 + 0x188) = uVar16;
    *(undefined8 *)(param_1 + 400) = uVar14;
    if (*(long *)(param_1 + 0x198) == 0) goto LAB_0291098c;
LAB_02910748:
    lVar17 = *(long *)(param_1 + 0x1b8);
  }
  else {
    if (*(long *)(param_1 + 0x198) != 0) goto LAB_02910748;
LAB_0291098c:
    puVar15 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x90,8);
    if (puVar15 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      uVar16 = 0;
      uVar14 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar6 = PTR_DAT_04379528;
        if (iVar7 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar17 + 0x80)) goto LAB_02911da0;
      *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = param_2;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
      *puVar15 = param_2;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = param_2;
      *(undefined4 *)(puVar15 + 6) = 0;
      puVar15[4] = 0x1c71c71c71c71c7;
      puVar15[5] = 0;
      *(undefined4 *)(puVar15 + 0xb) = 0;
      puVar15[0xc] = 0;
      puVar15[9] = 0x1c71c71c71c71c7;
      puVar15[10] = 0;
      *(undefined4 *)(puVar15 + 0xd) = 0x3f800000;
      puVar15[7] = 0;
      puVar15[8] = param_2;
      nn::os::InitializeMutex((MutexType *)(puVar15 + 0xe),true,0);
      FUN_029149f0(puVar15 + 1,(long)(1024.0 / *(float *)(puVar15 + 0xd)));
      uVar14 = 8;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
      uVar16 = 0x90;
      plVar10 = param_2;
    }
    lVar17 = *(long *)(param_1 + 0x198);
    *(undefined8 **)(param_1 + 0x198) = puVar15;
    if (lVar17 != 0) {
      FUN_02915944(param_1 + 0x1a0);
    }
    *(long **)(param_1 + 0x1a0) = plVar10;
    *(undefined8 *)(param_1 + 0x1a8) = uVar16;
    *(undefined8 *)(param_1 + 0x1b0) = uVar14;
    lVar17 = *(long *)(param_1 + 0x1b8);
  }
  if (lVar17 == 0) {
    puVar15 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x90,8);
    if (puVar15 == (undefined8 *)0x0) {
      plVar10 = (long *)0x0;
      uVar16 = 0;
      uVar14 = 0;
    }
    else {
      if ((*PTR_DAT_04379520 & 1) == 0) {
        iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
        puVar6 = PTR_DAT_04379528;
        if (iVar7 != 0) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
      }
      lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar17 + 0x80)) {
LAB_02911da0:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = param_2;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = param_2;
      puVar15[3] = 0x199999999999999;
      puVar15[8] = 0x199999999999999;
      puVar15[9] = 0;
      puVar15[4] = 0;
      *(undefined4 *)(puVar15 + 5) = 0;
      *(undefined4 *)(puVar15 + 10) = 0;
      puVar15[0xb] = 0;
      puVar15[0xd] = 0;
      *(undefined4 *)(puVar15 + 0xc) = 0x3f800000;
      puVar15[6] = 0;
      puVar15[7] = param_2;
      nn::os::InitializeMutex((MutexType *)(puVar15 + 0xe),false,0);
      uVar14 = 8;
      *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
      uVar16 = 0x90;
      plVar10 = param_2;
    }
    lVar17 = *(long *)(param_1 + 0x1b8);
    *(undefined8 **)(param_1 + 0x1b8) = puVar15;
    if (lVar17 != 0) {
      FUN_02915e1c(param_1 + 0x1c0);
    }
    *(long **)(param_1 + 0x1c0) = plVar10;
    *(undefined8 *)(param_1 + 0x1c8) = uVar16;
    *(undefined8 *)(param_1 + 0x1d0) = uVar14;
    plVar10 = (long *)*param_3;
  }
  else {
    plVar10 = (long *)*param_3;
  }
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  pcStack_98 = (char *)plVar10[0xc];
  if (*pcStack_98 == '\0') {
    return 0;
  }
  local_90 = plVar10[0xd];
  if (pcStack_98[local_90 + -1] != '/') {
    return 0;
  }
  local_a0 = (undefined8 *)plVar10[0xb];
  (**(code **)(*plVar10 + 0x18))(plVar10);
  local_88 = plVar10;
  FUN_00befc74(&local_120,&local_a0);
  plVar10 = *(long **)(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0xf0) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(long **)(param_1 + 0xf0) = local_120;
  puVar15 = *(undefined8 **)(param_1 + 0x158);
  FUN_00adcc04(&local_120,&local_a0);
  if (local_120 == (long *)0x0) {
    plVar10 = (long *)PTR_PTR_04379d00;
  }
  else {
    plVar10 = local_120 + 0xc;
  }
  iVar7 = (**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,*plVar10);
  if (local_100 != (long *)0x0) {
    (**(code **)(*local_100 + 0x20))();
  }
  if (local_120 != (long *)0x0) {
    (**(code **)(*local_120 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (iVar7 != 1) {
    return 0;
  }
  plVar10 = param_3 + 2;
  puVar15 = (undefined8 *)(param_1 + 200);
  plVar20 = (long *)*plVar10;
  do {
    if ((plVar20 != (long *)0x0) && (pcVar22 = (char *)plVar20[0xc], *pcVar22 != '\0')) {
      local_a0 = (undefined8 *)((ulong)local_a0 & 0xffffffff00000000);
      (**(code **)(*plVar20 + 0x18))(plVar20);
      iVar7 = (**(code **)(*(long *)**(undefined8 **)(param_1 + 0x158) + 0x10))
                        ((long *)**(undefined8 **)(param_1 + 0x158),pcVar22,&local_120);
      if (iVar7 == 1) {
        local_a0 = (undefined8 *)CONCAT44(local_a0._4_4_,local_120._0_4_);
        (**(code **)(*plVar20 + 0x20))(plVar20);
        lVar17 = *(long *)(param_1 + 0xb8);
        if (lVar17 == *(long *)(param_1 + 0xc0)) {
          uVar13 = *(ulong *)(param_1 + 0xd0);
          lVar17 = lVar17 - *(long *)(param_1 + 0xb0) >> 2;
          uVar9 = lVar17 + 1;
          if (0x7ffffffffffffffe < uVar13) {
            uVar13 = 0x7fffffffffffffff;
          }
          if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          lVar8 = *(long *)(param_1 + 0xc0) - *(long *)(param_1 + 0xb0);
          if ((ulong)(lVar8 >> 2) < uVar13 >> 1) {
            uVar12 = lVar8 >> 1;
            uVar13 = uVar9;
            if (uVar9 <= uVar12) {
              uVar13 = uVar12;
            }
          }
          if (uVar13 == 0) {
            lVar8 = 0;
          }
          else {
            lVar8 = (**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,uVar13 << 2,4);
            if (lVar8 == 0) {
              (**(code **)(*(long *)*puVar15 + 0xb8))();
            }
          }
          lVar23 = lVar8 + lVar17 * 4;
          FUN_01665ff4(puVar15,lVar23,&local_a0);
          lVar21 = *(long *)(param_1 + 0xb0);
          lVar24 = *(long *)(param_1 + 0xb8);
          lVar17 = lVar23 + 4;
          if (lVar24 != lVar21) {
            do {
              lVar23 = lVar23 + -4;
              lVar24 = lVar24 + -4;
              FUN_01665cfc(puVar15,lVar23,lVar24);
            } while (lVar21 != lVar24);
            lVar21 = *(long *)(param_1 + 0xb0);
          }
          lVar24 = *(long *)(param_1 + 0xc0);
          *(long *)(param_1 + 0xb0) = lVar23;
          *(long *)(param_1 + 0xb8) = lVar17;
          *(ulong *)(param_1 + 0xc0) = lVar8 + uVar13 * 4;
          if (lVar21 != 0) {
            plVar20 = (long *)*puVar15;
            lVar24 = lVar24 - lVar21;
            uVar9 = (**(code **)(*plVar20 + 0xc0))(plVar20);
            if ((uVar9 & 1) != 0) {
              lVar17 = tpidr_el0;
              if (*(char *)(lVar17 + 0x38d488) == '\0') {
                *(undefined1 *)(lVar17 + 0x38d488) = 1;
                *(undefined8 *)(lVar17 + 0x38d478) = 0;
                *(undefined8 *)(lVar17 + 0x38d480) = 0;
                __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
              }
              if (0 < *(int *)(lVar17 + 0x38d480)) {
                FUN_02bcc824(plVar20,lVar21,lVar24,4);
                goto LAB_02910cb0;
              }
            }
            (**(code **)(*plVar20 + 0x18))(plVar20,lVar21,lVar24,4);
          }
        }
        else {
          FUN_01665ff4(puVar15,lVar17,&local_a0);
          *(long *)(param_1 + 0xb8) = *(long *)(param_1 + 0xb8) + 4;
        }
      }
      else {
        (**(code **)(*plVar20 + 0x20))(plVar20);
      }
    }
LAB_02910cb0:
    plVar10 = plVar10 + 1;
    if (plVar10 == param_3 + 0x22) break;
    plVar20 = (long *)*plVar10;
  } while( true );
  plVar10 = (long *)param_3[1];
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  if (*(char *)plVar10[0xc] == '\0') {
    return 0;
  }
  (**(code **)(*plVar10 + 0x18))(plVar10);
  plVar20 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar10;
  if (plVar20 != (long *)0x0) {
    (**(code **)(*plVar20 + 0x20))();
    plVar10 = *(long **)(param_1 + 0xe8);
  }
  if (plVar10 == (long *)0x0) {
    local_a0 = *(undefined8 **)PTR_DAT_04379c88;
  }
  else {
    local_a0 = (undefined8 *)plVar10[0xb];
    if (plVar10 != (long *)0x0) {
      pcStack_98 = (char *)plVar10[0xc];
      goto joined_r0x02911ca4;
    }
  }
  pcStack_98 = *(char **)PTR_PTR_04379d00;
joined_r0x02911ca4:
  if (plVar10 == (long *)0x0) {
    local_90 = 0;
  }
  else {
    local_90 = plVar10[0xd];
  }
  local_88 = (long *)0x0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))(plVar10);
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (long *)0x0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = (long *)0x0;
  local_118 = (code *)0x0;
  pMVar1 = (MutexType *)(*(long *)(param_1 + 0x198) + 0x70);
  local_88 = plVar10;
  nn::os::LockMutex(pMVar1);
  lVar17 = FUN_029179a0(*(undefined8 *)(param_1 + 0x198),&local_a0,0,&local_120,0);
  iVar7 = *(int *)(lVar17 + 0xc);
  nn::os::UnlockMutex(pMVar1);
  if ((iVar7 < 2) &&
     (plVar10 = *(long **)(*(long *)(param_1 + 0x158) + 0x60),
     iVar7 = (**(code **)(*plVar10 + 0xe0))(plVar10,pcStack_98,lVar17 + 8), iVar7 != 1)) {
    lVar17 = *(long *)(param_1 + 0x198);
    pMVar1 = (MutexType *)(lVar17 + 0x70);
    nn::os::LockMutex(pMVar1);
    FUN_02918d0c(lVar17 + 8,&local_a0);
    nn::os::UnlockMutex(pMVar1);
    bVar4 = false;
    pcVar5 = local_118;
  }
  else {
    bVar4 = true;
    pcVar5 = local_118;
  }
  local_118 = (code *)0x0;
  if (pcVar5 != (code *)0x0) {
    local_110 = 0;
    uStack_108 = 0;
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    (*pcVar5)(&local_100);
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (!bVar4) {
    return 0;
  }
  puVar15 = (undefined8 *)(param_1 + 0x90);
  plVar10 = param_3 + 0x22;
  lVar17 = *plVar10;
  do {
    if ((lVar17 != 0) && (**(char **)(lVar17 + 0x60) != '\0')) {
      lVar17 = *(long *)(param_1 + 0x80);
      if (lVar17 == *(long *)(param_1 + 0x88)) {
        uVar13 = *(ulong *)(param_1 + 0x98);
        lVar17 = lVar17 - *(long *)(param_1 + 0x78) >> 3;
        uVar9 = lVar17 + 1;
        if (0x7ffffffffffffffe < uVar13) {
          uVar13 = 0x7fffffffffffffff;
        }
        if (uVar13 < uVar9) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar8 = *(long *)(param_1 + 0x88) - *(long *)(param_1 + 0x78);
        uVar12 = lVar8 >> 2;
        if (uVar9 <= uVar12) {
          uVar9 = uVar12;
        }
        if ((ulong)(lVar8 >> 3) < uVar13 >> 1) {
          uVar13 = uVar9;
        }
        if (uVar13 == 0) {
          lVar8 = 0;
        }
        else {
          lVar8 = (**(code **)(*(long *)*puVar15 + 0x10))((long *)*puVar15,uVar13 << 3,8);
          if (lVar8 == 0) {
            (**(code **)(*(long *)*puVar15 + 0xb8))();
          }
        }
        lVar23 = lVar8 + lVar17 * 8;
        FUN_00e8dc78(puVar15,lVar23,plVar10);
        plVar20 = *(long **)(param_1 + 0x78);
        plVar19 = *(long **)(param_1 + 0x80);
        lVar17 = lVar23 + 8;
        if (plVar19 == plVar20) {
          plVar19 = plVar20;
        }
        else {
          do {
            lVar23 = lVar23 + -8;
            plVar19 = plVar19 + -1;
            FUN_00e8dc78(puVar15,lVar23,plVar19);
          } while (plVar20 != plVar19);
          plVar20 = *(long **)(param_1 + 0x78);
          plVar19 = *(long **)(param_1 + 0x80);
        }
        lVar21 = *(long *)(param_1 + 0x88);
        *(long *)(param_1 + 0x78) = lVar23;
        *(long *)(param_1 + 0x80) = lVar17;
        *(ulong *)(param_1 + 0x88) = lVar8 + uVar13 * 8;
        while (plVar19 != plVar20) {
          plVar19 = plVar19 + -1;
          if ((long *)*plVar19 != (long *)0x0) {
            (**(code **)(*(long *)*plVar19 + 0x20))();
          }
        }
        if (plVar20 != (long *)0x0) {
          lVar21 = lVar21 - (long)plVar20;
          plVar19 = (long *)*puVar15;
          uVar9 = (**(code **)(*plVar19 + 0xc0))(plVar19);
          if ((uVar9 & 1) != 0) {
            lVar17 = tpidr_el0;
            if (*(char *)(lVar17 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar17 + 0x38d488) = 1;
              *(undefined8 *)(lVar17 + 0x38d478) = 0;
              *(undefined8 *)(lVar17 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar17 + 0x38d480)) {
              FUN_02bcc824(plVar19,plVar20,lVar21,8);
              plVar20 = (long *)*plVar10;
              goto joined_r0x02911370;
            }
          }
          (**(code **)(*plVar19 + 0x18))(plVar19,plVar20,lVar21,8);
          plVar20 = (long *)*plVar10;
          goto joined_r0x02911370;
        }
        plVar20 = (long *)*plVar10;
        if (plVar20 != (long *)0x0) goto LAB_029111ec;
LAB_029110b8:
        local_a0 = *(undefined8 **)PTR_DAT_04379c88;
        if (plVar20 == (long *)0x0) goto LAB_029110c8;
LAB_029111f8:
        pcStack_98 = (char *)plVar20[0xc];
        if (plVar20 != (long *)0x0) goto LAB_02911204;
LAB_029110d8:
        local_90 = 0;
      }
      else {
        FUN_00e8dc78(puVar15,lVar17,plVar10);
        *(long *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + 8;
        plVar20 = (long *)*plVar10;
joined_r0x02911370:
        if (plVar20 == (long *)0x0) goto LAB_029110b8;
LAB_029111ec:
        local_a0 = (undefined8 *)plVar20[0xb];
        if (plVar20 != (long *)0x0) goto LAB_029111f8;
LAB_029110c8:
        pcStack_98 = *(char **)PTR_PTR_04379d00;
        if (plVar20 == (long *)0x0) goto LAB_029110d8;
LAB_02911204:
        local_90 = plVar20[0xd];
        local_88 = (long *)0x0;
        (**(code **)(*plVar20 + 0x18))(plVar20);
      }
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_100 = (long *)0x0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = (long *)0x0;
      local_118 = (code *)0x0;
      pMVar1 = (MutexType *)(*(long *)(param_1 + 0x198) + 0x70);
      local_88 = plVar20;
      nn::os::LockMutex(pMVar1);
      lVar17 = FUN_029179a0(*(undefined8 *)(param_1 + 0x198),&local_a0,0,&local_120,0);
      iVar7 = *(int *)(lVar17 + 0xc);
      nn::os::UnlockMutex(pMVar1);
      if ((iVar7 < 2) &&
         (plVar20 = *(long **)(*(long *)(param_1 + 0x158) + 0x60),
         iVar7 = (**(code **)(*plVar20 + 0xe0))(plVar20,pcStack_98,lVar17 + 8), iVar7 != 1)) {
        lVar17 = *(long *)(param_1 + 0x198);
        pMVar1 = (MutexType *)(lVar17 + 0x70);
        nn::os::LockMutex(pMVar1);
        FUN_02918d0c(lVar17 + 8,&local_a0);
        nn::os::UnlockMutex(pMVar1);
      }
      pcVar5 = local_118;
      if (local_118 != (code *)0x0) {
        local_110 = 0;
        uStack_108 = 0;
        local_120 = (long *)0x0;
        local_118 = (code *)0x0;
        (*pcVar5)(&local_100);
      }
      if (local_88 != (long *)0x0) {
        (**(code **)(*local_88 + 0x20))();
      }
    }
    plVar10 = plVar10 + 1;
    if (plVar10 == param_3 + 0x42) break;
    lVar17 = *plVar10;
  } while( true );
  if (*(long *)(param_1 + 0x68) == 0) {
    plVar10 = (long *)FUN_02914f50(&local_120,param_2);
    if (plVar10 != (long *)0x0) {
      lVar17 = plVar10[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_02911db4;
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar14;
      }
      piVar11 = (int *)(lVar17 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = *piVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar20 = *(long **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (plVar20 == (long *)0x0) {
LAB_02911498:
      *(long **)(param_1 + 0x68) = plVar10;
      if (plVar10 != (long *)0x0) goto LAB_029114a0;
LAB_02911838:
      uVar14 = 0xffffffffffffffff;
    }
    else {
      lVar17 = plVar20[0xb];
      piVar11 = (int *)(lVar17 + 0xc);
      do {
        iVar7 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 != 0) goto LAB_02911498;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar20 + 0x20))();
      *(long **)(param_1 + 0x68) = plVar10;
      if (plVar10 == (long *)0x0) goto LAB_02911838;
LAB_029114a0:
      (**(code **)(*plVar10 + 0x10))(&local_120,plVar10);
      local_a0 = (undefined8 *)0x0;
      pcStack_98 = (char *)0x0;
      FUN_02913eb8(&local_a0,&local_120);
      plVar10 = local_120;
      if (local_120 != (long *)0x0) {
        plVar20 = local_120 + 1;
        do {
          iVar7 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_80 = *plVar10;
          FUN_02a44274(lVar17 + 0xd8,&local_80);
        }
      }
      puVar15 = local_a0;
      if (local_a0 == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        piVar11 = (int *)(local_a0 + 1);
        uVar14 = *local_a0;
        do {
          iVar7 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          local_a0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar17 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar17;
          local_120 = (long *)*puVar15;
          FUN_02a44274(lVar17 + 0xd8,&local_120);
        }
      }
    }
    plVar10 = *(long **)(*(long *)(param_1 + 0x158) + 0x60);
    iVar7 = (**(code **)(*plVar10 + 0x50))(plVar10,uVar14,"SourceGlobal");
    if (iVar7 != 1) {
      return 0;
    }
  }
  if (*(long *)(param_1 + 0x60) == 0) {
    plVar10 = (long *)FUN_02914f50(&local_120,param_2);
    if (plVar10 != (long *)0x0) {
      lVar17 = plVar10[0xb];
      if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_02911db4;
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
        *(undefined8 *)(lVar17 + 0x10) = uVar14;
      }
      piVar11 = (int *)(lVar17 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = *piVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar20 = *(long **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar20 != (long *)0x0) {
      lVar17 = plVar20[0xb];
      piVar11 = (int *)(lVar17 + 0xc);
      do {
        iVar7 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar20 + 0x20))();
      }
    }
    lVar17 = *(long *)(param_1 + 0x158);
    *(long **)(param_1 + 0x60) = plVar10;
    if (plVar10 == (long *)0x0) {
      plVar10 = (long *)0xffffffffffffffff;
    }
    else {
      (**(code **)(*plVar10 + 0x10))(&local_120,plVar10);
      local_a0 = (undefined8 *)0x0;
      pcStack_98 = (char *)0x0;
      FUN_02913eb8(&local_a0,&local_120);
      plVar10 = local_120;
      if (local_120 != (long *)0x0) {
        plVar20 = local_120 + 1;
        do {
          iVar7 = (int)*plVar20 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
          if (bVar4) {
            *(int *)plVar20 = iVar7;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 == 0) {
          local_120[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_80 = *plVar10;
          FUN_02a44274(lVar8 + 0xd8,&local_80);
        }
      }
      puVar15 = local_a0;
      if (local_a0 == (undefined8 *)0x0) {
        plVar10 = (long *)0x0;
      }
      else {
        piVar11 = (int *)(local_a0 + 1);
        plVar10 = (long *)*local_a0;
        do {
          iVar7 = *piVar11;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          local_a0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_120 = (long *)*puVar15;
          FUN_02a44274(lVar8 + 0xd8,&local_120);
        }
      }
    }
    local_120 = plVar10;
    iVar7 = (**(code **)(**(long **)(lVar17 + 0x60) + 0x50))
                      (*(long **)(lVar17 + 0x60),plVar10,"DefaultListener");
    if (((iVar7 != 1) ||
        (iVar7 = (**(code **)(**(long **)(lVar17 + 0x60) + 0x78))
                           (*(long **)(lVar17 + 0x60),&local_120,1), iVar7 != 1)) ||
       (iVar7 = (**(code **)(**(long **)(lVar17 + 0x80) + 0x18))
                          (*(long **)(lVar17 + 0x80),local_120), iVar7 != 1)) {
      return 0;
    }
    local_120 = (long *)0x0;
    local_118 = (code *)0x0;
    pcStack_98 = (char *)_UNK_03888d18;
    local_a0 = _DAT_03888d10;
    uStack_78 = DAT_0388a148;
    local_80 = DAT_0388a140;
    FUN_02912074(param_1,&local_120,&local_a0,&local_80);
    lVar17 = *(long *)(param_1 + 0x70);
  }
  else {
    lVar17 = *(long *)(param_1 + 0x70);
  }
  if (lVar17 == 0) {
    lVar17 = FUN_02914f50(&local_120,param_2);
    if (lVar17 != 0) {
      lVar8 = *(long *)(lVar17 + 0x58);
      if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_02911db4:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar8 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
        *(undefined8 *)(lVar8 + 0x10) = uVar14;
      }
      piVar11 = (int *)(lVar8 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = *piVar11 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    plVar10 = *(long **)(param_1 + 0x70);
    *(undefined8 *)(param_1 + 0x70) = 0;
    if (plVar10 != (long *)0x0) {
      lVar8 = plVar10[0xb];
      piVar11 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar11;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar4) {
          *piVar11 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar10 + 0x20))();
      }
    }
    *(long *)(param_1 + 0x70) = lVar17;
  }
  *(undefined1 *)(param_1 + 0x58) = 1;
  return 1;
}


