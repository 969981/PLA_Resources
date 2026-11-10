/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a79754; name: FUN_02a79754
 */


void FUN_02a79754(long param_1,undefined8 param_2)

{
  int *piVar1;
  ThreadType *pTVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  long *plVar13;
  long *plVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long *plVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  long lVar20;
  int iVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long *plVar24;
  undefined1 *puVar25;
  float fVar26;
  long *local_d8 [4];
  long *local_b8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  long *local_88;
  undefined4 local_80;
  char *local_78 [3];
  
  DAT_043eef70 = *(undefined8 *)(param_1 + 8);
  nn::fs::SetAllocator((_func_void_ptr_ulong *)0x2a790e0,(_func_void_void_ptr_ulong *)&LAB_02a79100)
  ;
  nn::fs::QueryMountRomCacheSize(&local_a8);
  plVar17 = *(long **)(param_1 + 8);
  puVar19 = (undefined1 *)CONCAT44(local_a8._4_4_,(int)local_a8);
  uVar9 = (**(code **)(*plVar17 + 0x10))(plVar17,puVar19,8);
  lVar20 = *(long *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = uVar9;
  if (lVar20 != 0) {
    plVar24 = *(long **)(param_1 + 0x58);
    uVar9 = *(undefined8 *)(param_1 + 0x60);
    uVar22 = *(undefined8 *)(param_1 + 0x68);
    uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar10 & 1) != 0) {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (0 < *(int *)(lVar5 + 0x38d480)) {
        FUN_02bcc824(plVar24,lVar20,uVar9,uVar22);
        goto LAB_02a7984c;
      }
    }
    (**(code **)(*plVar24 + 0x18))(plVar24,lVar20,uVar9,uVar22);
  }
LAB_02a7984c:
  *(long **)(param_1 + 0x58) = plVar17;
  *(undefined1 **)(param_1 + 0x60) = puVar19;
  *(undefined8 *)(param_1 + 0x68) = 8;
  nn::fs::MountRom("data",*(void **)(param_1 + 0x50),CONCAT44(local_a8._4_4_,(int)local_a8));
  local_d8[0] = (long *)0x39518e5;
  FUN_009f1b84(&local_a8,local_d8);
  plVar17 = (long *)CONCAT44(local_a8._4_4_,(int)local_a8);
  if (plVar17 != (long *)0x0) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
  }
  if (DAT_0427f7a8 != (long *)0x0) {
    lVar20 = *DAT_0427f7a8;
    DAT_0427f7a8 = plVar17;
    (**(code **)(lVar20 + 0x20))();
    plVar17 = DAT_0427f7a8;
  }
  DAT_0427f7a8 = plVar17;
  plVar17 = local_88;
  DAT_0427f7b0 = local_a0;
  PTR_DAT_0427f7b8 = puStack_98;
  DAT_0427f7c0 = local_90;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x18))(local_88);
  }
  plVar24 = DAT_0427f7c8;
  DAT_0427f7c8 = plVar17;
  if (plVar24 != (long *)0x0) {
    (**(code **)(*plVar24 + 0x20))();
  }
  DAT_0427f7d0 = local_80;
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if ((long *)CONCAT44(local_a8._4_4_,(int)local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(local_a8._4_4_,(int)local_a8) + 0x20))();
  }
  plVar17 = *(long **)(param_1 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
    puVar19 = puVar6;
  }
  lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_02a7a600;
  *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar17;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
  pvVar11 = (void *)(**(code **)(*plVar17 + 0x10))(plVar17,0x4e0,0x10);
  if (pvVar11 == (void *)0x0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  FUN_02a8f3c0(pvVar11,param_2);
  *(long **)((long)pvVar11 + 8) = plVar17;
  *(void **)((long)pvVar11 + 0x10) = pvVar11;
  *(undefined8 *)((long)pvVar11 + 0x18) = 0x4e0;
  *(undefined8 *)((long)pvVar11 + 0x20) = 0x10;
  *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  if (pvVar11 != (void *)0x0) {
    lVar20 = *(long *)((long)pvVar11 + 0x58);
    if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar20 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
      *(undefined8 *)(lVar20 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar17 = *(long **)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    piVar1 = (int *)(lVar20 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  *(void **)(param_1 + 0x158) = pvVar11;
  *(undefined1 *)((long)pvVar11 + 0x300) = 0;
  pTVar2 = (ThreadType *)((long)pvVar11 + 0x100);
  *(undefined1 *)((long)pvVar11 + 0x301) = 0;
  *(undefined1 *)((long)pvVar11 + 0x302) = 0;
  nn::os::CreateThread
            (pTVar2,(_func_void_void_ptr *)&LAB_02a4971c,pvVar11,*(void **)((long)pvVar11 + 0x2c0),
             *(ulong *)((long)pvVar11 + 0x2f8),0x10,2);
  nn::os::SetThreadCoreMask(pTVar2,2,4);
  nn::os::SetThreadName(pTVar2,"FileManager");
  nn::os::StartThread(pTVar2);
  local_d8[0] = (long *)0x3977fcc;
  FUN_009f1b84(&local_a8,local_d8);
  iVar7 = FUN_02a8edc4(&local_a8);
  if (iVar7 == 1) {
    plVar17 = *(long **)(param_1 + 8);
    puVar12 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
    if (puVar12 == (undefined8 *)0x0) {
      plVar17 = (long *)0x0;
      puVar19 = (undefined1 *)0x0;
      uVar9 = 0;
    }
    else {
      if (((*PTR_DAT_04379520 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
      if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_02a7a600;
      *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar17;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[2] = 0;
      puVar12[3] = 0;
      uVar9 = 8;
      *puVar12 = &PTR_LAB_0427f130;
      puVar12[1] = 0;
      puVar19 = &DAT_00000030;
      *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
    }
    FUN_00938764(puVar12,0,&local_a8,0,0,0);
    lVar20 = *(long *)(param_1 + 0x1f8);
    *(undefined8 **)(param_1 + 0x1f8) = puVar12;
    if (lVar20 != 0) {
      FUN_02bcbe58(local_d8,0);
      FUN_00936104(lVar20);
      plVar24 = *(long **)(param_1 + 0x200);
      uVar22 = *(undefined8 *)(param_1 + 0x208);
      uVar23 = *(undefined8 *)(param_1 + 0x210);
      uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
      if ((uVar10 & 1) == 0) {
LAB_02a79be0:
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar20,uVar22,uVar23);
      }
      else {
        lVar5 = tpidr_el0;
        if (*(char *)(lVar5 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar5 + 0x38d488) = 1;
          *(undefined8 *)(lVar5 + 0x38d478) = 0;
          *(undefined8 *)(lVar5 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02a79be0;
        FUN_02bcc824(plVar24,lVar20,uVar22,uVar23);
      }
      lVar20 = tpidr_el0;
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      iVar7 = *(int *)(lVar20 + 0x38d480) + -1;
      *(int *)(lVar20 + 0x38d480) = iVar7;
      if (iVar7 == 0) {
        FUN_02bcc320();
        if (*(char *)(lVar20 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar20 + 0x38d488) = 1;
          *(undefined8 *)(lVar20 + 0x38d478) = 0;
          *(undefined8 *)(lVar20 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
        }
        *(undefined4 *)(lVar20 + 0x38d484) = 0;
      }
    }
    *(long **)(param_1 + 0x200) = plVar17;
    *(undefined1 **)(param_1 + 0x208) = puVar19;
    *(undefined8 *)(param_1 + 0x210) = uVar9;
  }
  local_78[0] = "data:/arc/data.trfmd";
  FUN_009f1b84(local_d8,local_78);
  iVar7 = FUN_02a8edc4(local_d8);
  if (iVar7 != 1) goto LAB_02a79e98;
  plVar17 = *(long **)(param_1 + 8);
  puVar12 = (undefined8 *)(**(code **)(*plVar17 + 0x10))(plVar17,0x30,8);
  if (puVar12 == (undefined8 *)0x0) {
    plVar17 = (long *)0x0;
    puVar19 = (undefined1 *)0x0;
    uVar9 = 0;
  }
  else {
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (0xf < *(ulong *)(lVar20 + 0x80)) {
LAB_02a7a600:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(long **)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = plVar17;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
    puVar12[4] = 0;
    puVar12[5] = 0;
    puVar12[2] = 0;
    puVar12[3] = 0;
    uVar9 = 8;
    *puVar12 = &PTR_LAB_0427f150;
    puVar12[1] = 0;
    puVar19 = &DAT_00000030;
    *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
  }
  FUN_00938764(puVar12,0,local_d8,0,0,0);
  lVar20 = *(long *)(param_1 + 0x218);
  *(undefined8 **)(param_1 + 0x218) = puVar12;
  if (lVar20 != 0) {
    FUN_02bcbe58(local_78,0);
    FUN_00936104(lVar20);
    plVar24 = *(long **)(param_1 + 0x220);
    uVar22 = *(undefined8 *)(param_1 + 0x228);
    uVar23 = *(undefined8 *)(param_1 + 0x230);
    uVar10 = (**(code **)(*plVar24 + 0xc0))(plVar24);
    if ((uVar10 & 1) == 0) {
LAB_02a79dec:
      (**(code **)(*plVar24 + 0x18))(plVar24,lVar20,uVar22,uVar23);
    }
    else {
      lVar5 = tpidr_el0;
      if (*(char *)(lVar5 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar5 + 0x38d488) = 1;
        *(undefined8 *)(lVar5 + 0x38d478) = 0;
        *(undefined8 *)(lVar5 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar5 + 0x80078,&PTR_LOOP_0411a000);
      }
      if (*(int *)(lVar5 + 0x38d480) < 1) goto LAB_02a79dec;
      FUN_02bcc824(plVar24,lVar20,uVar22,uVar23);
    }
    lVar20 = tpidr_el0;
    if (*(char *)(lVar20 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar20 + 0x38d488) = 1;
      *(undefined8 *)(lVar20 + 0x38d478) = 0;
      *(undefined8 *)(lVar20 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
    }
    iVar7 = *(int *)(lVar20 + 0x38d480) + -1;
    *(int *)(lVar20 + 0x38d480) = iVar7;
    if (iVar7 == 0) {
      FUN_02bcc320();
      if (*(char *)(lVar20 + 0x38d488) == '\0') {
        *(undefined1 *)(lVar20 + 0x38d488) = 1;
        *(undefined8 *)(lVar20 + 0x38d478) = 0;
        *(undefined8 *)(lVar20 + 0x38d480) = 0;
        __cxa_thread_atexit(&LAB_02bcbe54,lVar20 + 0x80078,&PTR_LOOP_0411a000);
      }
      *(undefined4 *)(lVar20 + 0x38d484) = 0;
    }
  }
  *(long **)(param_1 + 0x220) = plVar17;
  *(undefined1 **)(param_1 + 0x228) = puVar19;
  *(undefined8 *)(param_1 + 0x230) = uVar9;
LAB_02a79e98:
  if (local_b8 != (long *)0x0) {
    (**(code **)(*local_b8 + 0x20))();
  }
  if (local_d8[0] != (long *)0x0) {
    (**(code **)(*local_d8[0] + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if ((long *)CONCAT44(local_a8._4_4_,(int)local_a8) != (long *)0x0) {
    (**(code **)(*(long *)CONCAT44(local_a8._4_4_,(int)local_a8) + 0x20))();
  }
  iVar7 = nn::aoc::CountAddOnContent();
  plVar17 = (long *)(param_1 + 0xd8);
  FUN_02a7d1f8(plVar17,(long)((float)(ulong)(long)iVar7 / *(float *)(param_1 + 0x138)));
  if (0 < iVar7) {
    iVar21 = 0;
    plVar24 = (long *)(param_1 + 0x108);
    do {
      local_a8._0_4_ = 0;
      nn::aoc::ListAddOnContent((int *)&local_a8,iVar21,1);
      puVar18 = (undefined1 *)(long)(int)local_a8;
      puVar25 = *(undefined1 **)(param_1 + 0xe0);
      if (puVar25 == (undefined1 *)0x0) {
LAB_02a7a090:
        plVar14 = (long *)(**(code **)(**(long **)(param_1 + 0x110) + 0x10))
                                    (*(long **)(param_1 + 0x110),0x40,8);
        if (plVar14 == (long *)0x0) {
          (**(code **)(**(long **)(param_1 + 0x110) + 0xb8))();
        }
        uVar9 = *(undefined8 *)(param_1 + 0x110);
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar20 == 0) {
          plVar14[3] = 0;
          plVar14[4] = 0;
          *(int *)(plVar14 + 2) = (int)local_a8;
          plVar14[5] = 0;
          plVar14[6] = 0;
          plVar14[7] = 0;
        }
        else {
          if (0xf < *(ulong *)(lVar20 + 0x80)) goto LAB_02a7a600;
          *(undefined8 *)(lVar20 + *(ulong *)(lVar20 + 0x80) * 8) = uVar9;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + 1;
          *(int *)(plVar14 + 2) = (int)local_a8;
          plVar14[3] = 0;
          plVar14[4] = 0;
          plVar14[5] = 0;
          plVar14[6] = 0;
          plVar14[7] = 0;
          *(long *)(lVar20 + 0x80) = *(long *)(lVar20 + 0x80) + -1;
        }
        *plVar14 = 0;
        plVar14[1] = (long)puVar18;
        fVar26 = (float)(*(long *)(param_1 + 0x130) + 1);
        if ((puVar25 == (undefined1 *)0x0) ||
           (*(float *)(param_1 + 0x138) * (float)puVar25 < fVar26)) {
          uVar10 = (ulong)(puVar25 < (undefined1 *)0x3 ||
                          ((ulong)puVar25 & (ulong)(puVar25 + -1)) != 0) | (long)puVar25 << 1;
          uVar16 = (ulong)(fVar26 / *(float *)(param_1 + 0x138));
          if (uVar16 <= uVar10) {
            uVar16 = uVar10;
          }
          FUN_02a7d1f8(plVar17,uVar16);
          puVar25 = *(undefined1 **)(param_1 + 0xe0);
          if (((ulong)puVar25 & (ulong)(puVar25 + -1)) == 0) {
            puVar19 = (undefined1 *)((ulong)(puVar25 + -1) & (ulong)puVar18);
          }
          else if (puVar18 < puVar25) {
            puVar19 = puVar18;
          }
          else {
            uVar10 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar10 = (ulong)puVar18 / (ulong)puVar25;
            }
            puVar19 = puVar18 + -(uVar10 * (long)puVar25);
          }
        }
        plVar13 = *(long **)(*plVar17 + (long)puVar19 * 8);
        if (plVar13 == (long *)0x0) {
          *plVar14 = *plVar24;
          *plVar24 = (long)plVar14;
          *(long **)(*plVar17 + (long)puVar19 * 8) = plVar24;
          if (*plVar14 != 0) {
            puVar18 = *(undefined1 **)(*plVar14 + 8);
            if (((ulong)puVar25 & (ulong)(puVar25 + -1)) == 0) {
              puVar18 = (undefined1 *)((ulong)puVar18 & (ulong)(puVar25 + -1));
            }
            else if (puVar25 <= puVar18) {
              uVar10 = 0;
              if (puVar25 != (undefined1 *)0x0) {
                uVar10 = (ulong)puVar18 / (ulong)puVar25;
              }
              puVar18 = puVar18 + -(uVar10 * (long)puVar25);
            }
            plVar13 = (long *)(*plVar17 + (long)puVar18 * 8);
            goto LAB_02a79f3c;
          }
        }
        else {
          *plVar14 = *plVar13;
LAB_02a79f3c:
          *plVar13 = (long)plVar14;
        }
        *(long *)(param_1 + 0x130) = *(long *)(param_1 + 0x130) + 1;
      }
      else {
        uVar10 = (long)puVar25 - ((ulong)puVar25 >> 1 & 0x5555555555555555);
        uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
        uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar10 < 2) {
          puVar19 = (undefined1 *)((ulong)(puVar25 + -1) & (ulong)puVar18);
        }
        else {
          puVar19 = puVar18;
          if (puVar25 <= puVar18) {
            uVar16 = 0;
            if (puVar25 != (undefined1 *)0x0) {
              uVar16 = (ulong)puVar18 / (ulong)puVar25;
            }
            puVar19 = puVar18 + -(uVar16 * (long)puVar25);
          }
        }
        plVar14 = *(long **)(*plVar17 + (long)puVar19 * 8);
        if (plVar14 == (long *)0x0) goto LAB_02a7a090;
        if (uVar10 < 2) {
          do {
            plVar14 = (long *)*plVar14;
            if ((plVar14 == (long *)0x0) ||
               ((undefined1 *)plVar14[1] != puVar18 &&
                (undefined1 *)((ulong)plVar14[1] & (ulong)(puVar25 + -1)) != puVar19))
            goto LAB_02a7a090;
          } while (*(int *)(plVar14 + 2) != (int)local_a8);
        }
        else {
          do {
            plVar14 = (long *)*plVar14;
            if (plVar14 == (long *)0x0) goto LAB_02a7a090;
            puVar15 = (undefined1 *)plVar14[1];
            if (puVar15 != puVar18) {
              if (puVar25 <= puVar15) {
                uVar10 = 0;
                if (puVar25 != (undefined1 *)0x0) {
                  uVar10 = (ulong)puVar15 / (ulong)puVar25;
                }
                puVar15 = puVar15 + -(uVar10 * (long)puVar25);
              }
              if (puVar15 != puVar19) goto LAB_02a7a090;
            }
          } while ((int)plVar14[2] != (int)local_a8);
        }
      }
      iVar21 = iVar21 + 1;
    } while (iVar21 != iVar7);
  }
  *(undefined8 *)(param_1 + 0x184) = 0;
  *(undefined8 *)(param_1 + 0x18c) = 0;
  *(undefined8 *)(param_1 + 0x16c) = 0;
  *(undefined8 *)(param_1 + 0x174) = 0;
  *(undefined8 *)(param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x160) = 1;
  return;
}


