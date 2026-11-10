/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b36c1c; name: FUN_02b36c1c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b36c1c(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long *plVar18;
  long lVar19;
  long *plVar20;
  long *local_58;
  
  param_1[7] = 0;
  puVar7 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar5 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar14 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04284728;
  param_1[1] = lVar14;
  param_1[9] = (long)&PTR_LAB_04284760;
  param_1[0xb] = *param_2;
  param_1[0xc] = param_2[1];
  param_1[0xd] = param_2[2];
  plVar10 = (long *)param_2[3];
  param_1[0xe] = (long)plVar10;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x18))();
    lVar14 = param_1[1];
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = lVar14;
  param_1[0x13] = 0x1fffffffffffffff;
  param_1[0x14] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = lVar14;
  param_1[0x1a] = 0x1fffffffffffffff;
  param_1[0x1b] = 0;
  lVar9 = *(long *)PTR_DAT_0437a120;
  lVar19 = *(long *)(PTR_DAT_0437a120 + 8);
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar9;
  puVar6 = PTR_DAT_04379570;
  plVar10 = (long *)param_1[1];
  param_1[0x1f] = lVar19;
  lVar9 = *(long *)puVar6;
  lVar19 = *(long *)(puVar6 + 8);
  param_1[0x41] = lVar14;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x3c] = 0;
  param_1[0x42] = 0x1fffffffffffffff;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x20] = lVar9;
  param_1[0x21] = lVar19;
  param_1[0x2c] = lVar14;
  param_1[0x2d] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x28] = lVar14;
  param_1[0x29] = 0x38e38e38e38e38e;
  param_1[0x2e] = 0x400000010;
  param_1[0x45] = -0xfefefeff;
  *(undefined4 *)(param_1 + 0x2f) = 0x7f;
  param_1[0x30] = (long)&DAT_cbf29ce484222645;
  param_1[0x31] = (long)&DAT_03996322;
  param_1[0x34] = (long)&DAT_cbf29ce484222645;
  param_1[0x35] = (long)&DAT_03996322;
  lVar14 = _UNK_0388a228;
  lVar9 = ram0x0388a220;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x39] = lVar14;
  param_1[0x38] = lVar9;
  param_1[0x3b] = lVar14;
  param_1[0x3a] = lVar9;
  if (((*puVar4 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar10;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x68,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar10 + 0xb8))(plVar10);
  }
  *plVar11 = (long)(puVar7 + 0x10);
  plVar11[7] = 0;
  *(undefined4 *)(plVar11 + 8) = 0;
  *(undefined4 *)(plVar11 + 6) = 0;
  plVar11[2] = 0;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = 0;
  if (((*puVar4 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  nn::os::GetTlsValue(*(undefined4 *)puVar5);
  plVar20 = plVar11 + 10;
  *(int *)plVar20 = 0;
  plVar11[9] = (long)&PTR_LAB_04284818;
  *plVar11 = (long)&PTR_LAB_04284790;
  plVar11[1] = (long)plVar10;
  plVar11[2] = (long)plVar11;
  plVar11[3] = 0x68;
  plVar11[0xb] = (long)&PTR_LAB_04284848;
  plVar11[0xc] = (long)param_1;
  plVar11[4] = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar3) {
      *(int *)plVar20 = (int)*plVar20 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  (**(code **)(*plVar11 + 0x28))(plVar11,param_1 + 0xb);
  if (param_1[0x16] != param_1[0x17]) {
    (**(code **)(*plVar11 + 0x30))(plVar11,param_1[0x17] + -8);
  }
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
    if (bVar3) {
      *(int *)plVar20 = (int)*plVar20 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar12 = param_1[0x17];
  plVar10 = param_1 + 0x19;
  local_58 = plVar11;
  if (uVar12 < (ulong)param_1[0x18]) {
    FUN_02ada37c(plVar10,uVar12,&local_58);
    param_1[0x17] = param_1[0x17] + 8;
  }
  else {
    uVar16 = param_1[0x1a];
    lVar9 = (long)(uVar12 - param_1[0x16]) >> 3;
    uVar12 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar14 = param_1[0x18] - param_1[0x16];
    uVar15 = lVar14 >> 2;
    if (uVar12 <= uVar15) {
      uVar12 = uVar15;
    }
    if ((ulong)(lVar14 >> 3) < uVar16 >> 1) {
      uVar16 = uVar12;
    }
    if (uVar16 == 0) {
      lVar14 = 0;
    }
    else {
      lVar14 = (**(code **)(*(long *)*plVar10 + 0x10))((long *)*plVar10,uVar16 << 3,8);
      if (lVar14 == 0) {
        (**(code **)(*(long *)*plVar10 + 0xb8))();
      }
    }
    lVar19 = lVar14 + lVar9 * 8;
    FUN_02ada37c(plVar10,lVar19,&local_58);
    plVar18 = (long *)param_1[0x16];
    plVar17 = (long *)param_1[0x17];
    lVar9 = lVar19 + 8;
    if (plVar17 == plVar18) {
      plVar17 = plVar18;
    }
    else {
      do {
        lVar19 = lVar19 + -8;
        plVar17 = plVar17 + -1;
        FUN_02ada45c(plVar10,lVar19,plVar17);
      } while (plVar18 != plVar17);
      plVar18 = (long *)param_1[0x16];
      plVar17 = (long *)param_1[0x17];
    }
    param_1[0x16] = lVar19;
    param_1[0x17] = lVar9;
    lVar9 = param_1[0x18];
    param_1[0x18] = lVar14 + uVar16 * 8;
    while (plVar17 != plVar18) {
      plVar17 = plVar17 + -1;
      plVar13 = (long *)*plVar17;
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 10;
        do {
          iVar8 = (int)*plVar1 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = iVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar8 == 0) {
          (**(code **)(*plVar13 + 0x10))();
        }
      }
    }
    if (plVar18 != (long *)0x0) {
      plVar10 = (long *)*plVar10;
      uVar12 = (**(code **)(*plVar10 + 0xc0))(plVar10);
      if ((uVar12 & 1) != 0) {
        lVar14 = tpidr_el0;
        if (*(char *)(lVar14 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar14 + 0x38d488) = 1;
          *(undefined8 *)(lVar14 + 0x38d478) = 0;
          *(undefined8 *)(lVar14 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar14 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar14 + 0x38d480)) {
          FUN_02bcc824(plVar10,plVar18,lVar9 - (long)plVar18,8);
          goto joined_r0x02b3716c;
        }
      }
      (**(code **)(*plVar10 + 0x18))(plVar10,plVar18,lVar9 - (long)plVar18,8);
    }
  }
joined_r0x02b3716c:
  if (local_58 != (long *)0x0) {
    plVar10 = local_58 + 10;
    do {
      iVar8 = (int)*plVar10 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *(int *)plVar10 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (plVar11 != (long *)0x0) {
    do {
      iVar8 = (int)*plVar20 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar3) {
        *(int *)plVar20 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  lVar14 = _UNK_03888fc8;
  lVar9 = _DAT_03888fc0;
  *(undefined1 *)((long)param_1 + 0x22b) = 1;
  param_1[0x1f] = lVar14;
  param_1[0x1e] = lVar9;
  return;
}


