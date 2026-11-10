/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c1d074; name: FUN_02c1d074
 */


void FUN_02c1d074(long *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  ulong uVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  ulong local_70;
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar3 = PTR_DAT_04379528;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar13 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04288d00;
  param_1[1] = lVar13;
  param_1[9] = (long)&PTR_LAB_04288d38;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar13 = DAT_043f1798;
  lVar7 = tpidr_el0;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar7 + 0x20), *(long *)(lVar7 + 0x20) == 0)) {
    *(long *)(lVar7 + 0x20) = DAT_043f1798;
    lVar8 = lVar13;
  }
  param_1[0x12] = 0;
  param_1[0xe] = lVar8;
  param_1[0xf] = 0x1fffffffffffffff;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
  lVar13 = DAT_043f1798;
  if ((((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) ||
      (lVar8 = *(long *)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8), lVar8 == 0)) &&
     (lVar8 = *(long *)(lVar7 + 0x20), *(long *)(lVar7 + 0x20) == 0)) {
    *(long *)(lVar7 + 0x20) = DAT_043f1798;
    lVar8 = lVar13;
  }
  uVar23 = (ulong)(uint)(param_2 * param_2);
  param_1[0x15] = lVar8;
  param_1[0x16] = 0x7ffffffffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = (long)&DAT_cbf29ce484222645;
  *(int *)(param_1 + 0x1f) = param_2;
  *(undefined4 *)((long)param_1 + 0xfc) = 0x3f800000;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1b] = (long)&DAT_03996322;
  param_1[0x1c] = 0;
  lVar8 = param_1[0xb];
  plVar11 = (long *)param_1[0xc];
  uVar20 = (long)plVar11 - lVar8 >> 3;
  lVar13 = uVar20 - uVar23;
  if (uVar20 < uVar23) {
    plVar17 = param_1 + 0xe;
    if ((ulong)(param_1[0xd] - (long)plVar11 >> 3) < uVar23 - uVar20) {
      uVar15 = param_1[0xf];
      if (0x7ffffffffffffffe < uVar15) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < uVar23) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = param_1[0xd] - lVar8;
      if ((((ulong)(lVar8 >> 3) < uVar15 >> 1) &&
          (uVar15 = lVar8 >> 2, local_70 = uVar23, uVar15 < uVar23)) ||
         (local_70 = uVar15, local_70 != 0)) {
        lVar8 = (**(code **)(*(long *)*plVar17 + 0x10))((long *)*plVar17,local_70 << 3,8);
        if (lVar8 == 0) {
          (**(code **)(*(long *)*plVar17 + 0xb8))();
        }
      }
      else {
        local_70 = 0;
        lVar8 = 0;
      }
      plVar9 = (long *)(lVar8 + uVar20 * 8);
      plVar11 = plVar9;
      do {
        FUN_02c1e170(plVar17,plVar11);
        plVar11 = plVar11 + 1;
        bVar5 = lVar13 != -1;
        lVar13 = lVar13 + 1;
      } while (bVar5);
      plVar19 = (long *)param_1[0xb];
      plVar21 = (long *)param_1[0xc];
      if (plVar21 == plVar19) {
        plVar21 = plVar19;
      }
      else {
        do {
          lVar13 = *plVar17;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
            FUN_008a62a4(puVar3);
            FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (lVar10 != 0) {
            if (0xf < *(ulong *)(lVar10 + 0x80)) goto LAB_02c1d980;
            *(long *)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = lVar13;
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
          }
          plVar21 = plVar21 + -1;
          lVar13 = *plVar21;
          plVar9 = plVar9 + -1;
          *plVar9 = lVar13;
          if (lVar13 != 0) {
            piVar1 = (int *)(lVar13 + 0x50);
            do {
              cVar2 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar5) {
                *piVar1 = *piVar1 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
          }
          if (lVar10 != 0) {
            *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
          }
        } while (plVar21 != plVar19);
        plVar19 = (long *)param_1[0xc];
        plVar21 = (long *)param_1[0xb];
      }
      lVar13 = param_1[0xd];
      param_1[0xb] = (long)plVar9;
      param_1[0xc] = (long)plVar11;
      param_1[0xd] = lVar8 + local_70 * 8;
LAB_02c1d448:
      if (plVar19 != plVar21) {
        while( true ) {
          plVar19 = plVar19 + -1;
          plVar11 = (long *)*plVar19;
          if (plVar11 == (long *)0x0) break;
          plVar9 = plVar11 + 10;
          do {
            iVar6 = (int)*plVar9 + -1;
            cVar2 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar5) {
              *(int *)plVar9 = iVar6;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar6 != 0) break;
          (**(code **)(*plVar11 + 0x10))();
          if (plVar19 == plVar21) goto LAB_02c1d484;
        }
        goto LAB_02c1d448;
      }
LAB_02c1d484:
      if (plVar21 != (long *)0x0) {
        plVar17 = (long *)*plVar17;
        uVar20 = (**(code **)(*plVar17 + 0xc0))(plVar17);
        if ((uVar20 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar17,plVar21,lVar13 - (long)plVar21,8);
            goto LAB_02c1d504;
          }
        }
        (**(code **)(*plVar17 + 0x18))(plVar17,plVar21,lVar13 - (long)plVar21,8);
      }
    }
    else {
      do {
        FUN_02c1e170(plVar17,plVar11);
        plVar11 = (long *)(param_1[0xc] + 8);
        bVar5 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        param_1[0xc] = (long)plVar11;
      } while (bVar5);
    }
  }
  else if (lVar13 != 0) {
    plVar17 = (long *)(lVar8 + uVar23 * 8);
    while (plVar17 != plVar11) {
      plVar11 = plVar11 + -1;
      plVar9 = (long *)*plVar11;
      if (plVar9 != (long *)0x0) {
        plVar19 = plVar9 + 10;
        do {
          iVar6 = (int)*plVar19 + -1;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
          if (bVar5) {
            *(int *)plVar19 = iVar6;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
      }
    }
    param_1[0xc] = (long)plVar17;
  }
LAB_02c1d504:
  lVar8 = param_1[0x12];
  uVar20 = param_1[0x13] - lVar8 >> 5;
  lVar13 = uVar20 - uVar23;
  if (uVar20 < uVar23) {
    plVar11 = param_1 + 0x15;
    if ((ulong)(param_1[0x14] - param_1[0x13] >> 5) < uVar23 - uVar20) {
      uVar15 = param_1[0x16];
      if (0x7ffffffffffffffe < uVar15) {
        uVar15 = 0x7fffffffffffffff;
      }
      if (uVar15 < uVar23) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar8 = param_1[0x14] - lVar8;
      if ((((ulong)(lVar8 >> 5) < uVar15 >> 1) && (uVar15 = lVar8 >> 4, uVar15 < uVar23)) ||
         (uVar23 = uVar15, uVar15 != 0)) {
        lVar8 = (**(code **)(*(long *)*plVar11 + 0x10))((long *)*plVar11,uVar23 << 5,0x10);
        uVar15 = uVar23;
        if (lVar8 == 0) {
          (**(code **)(*(long *)*plVar11 + 0xb8))();
        }
      }
      else {
        lVar8 = 0;
      }
      lVar22 = lVar8 + uVar20 * 0x20;
      lVar10 = lVar22;
      do {
        FUN_02c1e23c(plVar11,lVar10);
        lVar10 = lVar10 + 0x20;
        bVar5 = lVar13 != -1;
        lVar13 = lVar13 + 1;
      } while (bVar5);
      lVar13 = param_1[0x12];
      lVar18 = param_1[0x13];
      if (lVar18 != lVar13) {
        do {
          lVar16 = *plVar11;
          if (((*PTR_DAT_04379520 & 1) == 0) &&
             (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), iVar6 != 0)) {
            FUN_008a62a4(puVar3);
            FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
          lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar3);
          if (lVar12 == 0) {
            uVar14 = *(undefined8 *)(lVar18 + -8);
            *(undefined8 *)(lVar22 + -0x18) = *(undefined8 *)(lVar18 + -0x18);
            *(undefined8 *)(lVar22 + -8) = uVar14;
            uVar14 = *(undefined8 *)(lVar18 + -0x20);
            *(undefined8 *)(lVar22 + -0x10) = *(undefined8 *)(lVar18 + -0x10);
            *(undefined8 *)(lVar22 + -0x20) = uVar14;
          }
          else {
            if (0xf < *(ulong *)(lVar12 + 0x80)) {
LAB_02c1d980:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = lVar16;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
            uVar14 = *(undefined8 *)(lVar18 + -8);
            *(undefined8 *)(lVar22 + -0x18) = *(undefined8 *)(lVar18 + -0x18);
            *(undefined8 *)(lVar22 + -8) = uVar14;
            uVar14 = *(undefined8 *)(lVar18 + -0x20);
            *(undefined8 *)(lVar22 + -0x10) = *(undefined8 *)(lVar18 + -0x10);
            *(undefined8 *)(lVar22 + -0x20) = uVar14;
            *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
          }
          lVar18 = lVar18 + -0x20;
          lVar22 = lVar22 + -0x20;
        } while (lVar13 != lVar18);
        lVar13 = param_1[0x12];
      }
      lVar18 = param_1[0x14];
      param_1[0x14] = lVar8 + uVar15 * 0x20;
      param_1[0x12] = lVar22;
      param_1[0x13] = lVar10;
      if (lVar13 != 0) {
        plVar11 = (long *)*plVar11;
        uVar23 = (**(code **)(*plVar11 + 0xc0))(plVar11);
        if ((uVar23 & 1) != 0) {
          if (*(char *)(lVar7 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar7 + 0x38d488) = 1;
            *(undefined8 *)(lVar7 + 0x38d478) = 0;
            *(undefined8 *)(lVar7 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar7 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar7 + 0x38d480)) {
            FUN_02bcc824(plVar11,lVar13,lVar18 - lVar13,0x10);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02c1d794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x18))(plVar11,lVar13,lVar18 - lVar13,0x10);
        return;
      }
    }
    else {
      do {
        FUN_02c1e23c(plVar11);
        bVar5 = lVar13 != -1;
        lVar13 = lVar13 + 1;
        param_1[0x13] = param_1[0x13] + 0x20;
      } while (bVar5);
    }
  }
  else if (lVar13 != 0) {
    param_1[0x13] = lVar8 + uVar23 * 0x20;
  }
  return;
}


