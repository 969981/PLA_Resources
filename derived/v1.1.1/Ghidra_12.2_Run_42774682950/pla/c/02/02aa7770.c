/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02aa7770; name: FUN_02aa7770
 */


void FUN_02aa7770(long *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  
  param_1[7] = 0;
  puVar7 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar9 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar9 + 0x80) != 0) {
      lVar13 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04280b00;
  param_1[1] = lVar13;
  param_1[9] = (long)&PTR_LAB_04280b38;
  param_1[0xb] = (long)&DAT_cbf29ce484222645;
  param_1[0xc] = (long)&DAT_03996322;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  lVar9 = *param_2;
  param_1[0x12] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x10] = lVar9;
  param_1[0x11] = 0;
  *(undefined1 *)((long)param_1 + 0x99) = *(undefined1 *)((long)param_2 + 9);
  uVar4 = *(undefined1 *)((long)param_2 + 10);
  plVar22 = param_1 + 0x16;
  *plVar22 = 0;
  param_1[0x15] = 0;
  *(undefined1 *)((long)param_1 + 0x9a) = uVar4;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0xffffffffffffffff;
  param_1[0x19] = 0;
  if ((code *)param_2[4] != (code *)0x0) {
    (*(code *)param_2[4])(param_2 + 6,param_1 + 0x1a);
    lVar9 = param_2[2];
    lVar13 = param_2[3];
    lVar10 = param_2[5];
    param_1[0x18] = param_2[4];
    param_1[0x19] = lVar10;
    *plVar22 = lVar9;
    param_1[0x17] = lVar13;
  }
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar13 = DAT_043f1798;
  lVar9 = tpidr_el0;
  if ((((lVar10 == 0) || (*(long *)(lVar10 + 0x80) == 0)) ||
      (lVar10 = *(long *)(lVar10 + *(long *)(lVar10 + 0x80) * 8 + -8), lVar10 == 0)) &&
     (lVar10 = *(long *)(lVar9 + 0x20), *(long *)(lVar9 + 0x20) == 0)) {
    *(long *)(lVar9 + 0x20) = DAT_043f1798;
    lVar10 = lVar13;
  }
  param_1[0x29] = lVar10;
  param_1[0x2a] = 0x1ffffffffffffff;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = param_2[0x12];
  param_1[0x2e] = param_2[0x13];
  lVar13 = param_2[0x14];
  param_1[0x2f] = lVar13;
  if (lVar13 != 0) {
    piVar1 = (int *)(lVar13 + 0x50);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(char *)(param_1 + 0x13) = (char)param_2[1];
  if (param_1[0x16] != 0) {
    uVar12 = param_1[0x27];
    plVar21 = param_1 + 0x29;
    if (uVar12 < (ulong)param_1[0x28]) {
      FUN_02aa9e8c(plVar21,uVar12,plVar22);
      param_1[0x27] = param_1[0x27] + 0x80;
    }
    else {
      uVar19 = param_1[0x2a];
      lVar13 = (long)(uVar12 - param_1[0x26]) >> 7;
      uVar12 = lVar13 + 1;
      if (0x7ffffffffffffffe < uVar19) {
        uVar19 = 0x7fffffffffffffff;
      }
      if (uVar19 < uVar12) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar10 = param_1[0x28] - param_1[0x26];
      if ((ulong)(lVar10 >> 7) < uVar19 >> 1) {
        uVar14 = lVar10 >> 6;
        uVar19 = uVar12;
        if (uVar12 <= uVar14) {
          uVar19 = uVar14;
        }
      }
      if (uVar19 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = (**(code **)(*(long *)*plVar21 + 0x10))((long *)*plVar21,uVar19 << 7,0x10);
        if (lVar10 == 0) {
          (**(code **)(*(long *)*plVar21 + 0xb8))();
        }
      }
      lVar13 = lVar10 + lVar13 * 0x80;
      FUN_02aa9e8c(plVar21,lVar13,plVar22);
      lVar17 = param_1[0x26];
      lVar18 = param_1[0x27];
      if (lVar18 == lVar17) {
        lVar18 = lVar13;
        lVar23 = lVar17;
      }
      else {
        lVar23 = 0;
        do {
          lVar24 = *plVar21;
          if ((*PTR_DAT_04379520 & 1) == 0) {
            iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
            puVar7 = PTR_DAT_04379528;
            if (iVar8 != 0) {
              FUN_008a62a4(PTR_DAT_04379528);
              FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379520);
            }
          }
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
          if (lVar11 != 0) {
            if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
            *(long *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = lVar24;
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
          }
          lVar24 = lVar13 + lVar23;
          lVar2 = lVar18 + lVar23;
          *(undefined8 *)(lVar24 + -0x80) = 0;
          *(undefined8 *)(lVar24 + -0x70) = 0;
          *(undefined8 *)(lVar24 + -0x68) = 0;
          *(undefined8 *)(lVar24 + -0x78) = 0;
          if (*(code **)(lVar2 + -0x68) != (code *)0x0) {
            (**(code **)(lVar2 + -0x68))(lVar2 + -0x60,lVar24 + -0x60);
            uVar15 = *(undefined8 *)(lVar2 + -0x80);
            uVar20 = *(undefined8 *)(lVar2 + -0x68);
            uVar3 = *(undefined8 *)(lVar2 + -0x78);
            *(undefined8 *)(lVar24 + -0x70) = *(undefined8 *)(lVar2 + -0x70);
            *(undefined8 *)(lVar24 + -0x68) = uVar20;
            *(undefined8 *)(lVar24 + -0x80) = uVar15;
            *(undefined8 *)(lVar24 + -0x78) = uVar3;
            pcVar16 = *(code **)(lVar2 + -0x78);
            if (pcVar16 != (code *)0x0) {
              *(undefined8 *)(lVar2 + -0x70) = 0;
              *(undefined8 *)(lVar2 + -0x68) = 0;
              *(undefined8 *)(lVar2 + -0x80) = 0;
              *(undefined8 *)(lVar2 + -0x78) = 0;
              (*pcVar16)(lVar2 + -0x60);
            }
          }
          if (lVar11 != 0) {
            *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
          }
          lVar23 = lVar23 + -0x80;
        } while (lVar17 - lVar18 != lVar23);
        lVar17 = param_1[0x27];
        lVar18 = lVar13 + lVar23;
        lVar23 = param_1[0x26];
      }
      lVar24 = param_1[0x28];
      param_1[0x26] = lVar18;
      param_1[0x27] = lVar13 + 0x80;
      param_1[0x28] = lVar10 + uVar19 * 0x80;
      while (lVar13 = lVar17, lVar13 != lVar23) {
        pcVar16 = *(code **)(lVar13 + -0x78);
        lVar17 = lVar13 + -0x80;
        if (pcVar16 != (code *)0x0) {
          *(undefined8 *)(lVar13 + -0x70) = 0;
          *(undefined8 *)(lVar13 + -0x68) = 0;
          *(undefined8 *)(lVar13 + -0x80) = 0;
          *(undefined8 *)(lVar13 + -0x78) = 0;
          (*pcVar16)(lVar13 + -0x60);
        }
      }
      if (lVar23 != 0) {
        plVar21 = (long *)*plVar21;
        uVar12 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar12 & 1) != 0) {
          if (*(char *)(lVar9 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar9 + 0x38d488) = 1;
            *(undefined8 *)(lVar9 + 0x38d478) = 0;
            *(undefined8 *)(lVar9 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar9 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar9 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar23,lVar24 - lVar23,0x10);
            return;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x02aa7bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar23,lVar24 - lVar23,0x10);
        return;
      }
    }
  }
  return;
}


