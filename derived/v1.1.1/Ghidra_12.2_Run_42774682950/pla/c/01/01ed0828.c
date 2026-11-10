/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ed0828; name: FUN_01ed0828
 */


void FUN_01ed0828(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  bool bVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  undefined8 local_68;
  
  lVar11 = *param_1;
  puVar21 = (undefined8 *)param_1[1];
  lVar20 = (long)param_2 - lVar11;
  lVar10 = lVar20 >> 4;
  uVar22 = lVar10 * -0x5555555555555555;
  if (puVar21 < (undefined8 *)param_1[2]) {
    if (param_2 == puVar21) {
      FUN_01ece8ec(param_1 + 3,param_2,param_3);
      param_1[1] = param_1[1] + 0x30;
      return;
    }
    puVar27 = puVar21 + -6;
    if (puVar27 < puVar21) {
      puVar23 = puVar27;
      puVar26 = puVar21;
      do {
        lVar20 = param_1[3];
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar9 != 0)) {
          FUN_008a62a4(PTR_DAT_04379528);
          FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar17 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar17 == 0) {
          bVar19 = true;
        }
        else {
          if (0xf < *(ulong *)(lVar17 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(long *)(lVar17 + *(ulong *)(lVar17 + 0x80) * 8) = lVar20;
          bVar19 = false;
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + 1;
        }
        *puVar26 = 0;
        puVar26[1] = 0;
        FUN_01eacf70(puVar26,puVar23);
        uVar2 = puVar23[2];
        uVar3 = puVar23[3];
        uVar14 = puVar23[4];
        *(undefined4 *)(puVar26 + 5) = *(undefined4 *)(puVar23 + 5);
        puVar26[2] = uVar2;
        puVar26[3] = uVar3;
        puVar26[4] = uVar14;
        if (!bVar19) {
          *(long *)(lVar17 + 0x80) = *(long *)(lVar17 + 0x80) + -1;
        }
        puVar23 = puVar23 + 6;
        puVar26 = (undefined8 *)(param_1[1] + 0x30);
        param_1[1] = (long)puVar26;
      } while (puVar23 < puVar21);
    }
    lVar20 = (long)puVar21 + (-0x30 - (long)param_2);
    if (lVar20 != 0) {
      FUN_01eacf70(puVar27,puVar21 + -0xc);
      puVar21[-4] = puVar21[-10];
      *(undefined4 *)(puVar21 + -1) = *(undefined4 *)(puVar21 + -7);
      puVar21[-3] = puVar21[-9];
      puVar21[-2] = puVar21[-8];
      if (puVar21 + -0xc != param_2) {
        FUN_01eacf70(puVar21 + -0xc,puVar21 + -0x12);
        puVar21[-10] = puVar21[-0x10];
        *(undefined4 *)(puVar21 + -7) = *(undefined4 *)(puVar21 + -0xd);
        puVar21[-9] = puVar21[-0xf];
        puVar21[-8] = puVar21[-0xe];
        if (puVar21 + -0x12 != param_2) {
          FUN_01eacf70(puVar21 + -0x12,puVar21 + -0x18);
          puVar21[-0x10] = puVar21[-0x16];
          *(undefined4 *)(puVar21 + -0xd) = *(undefined4 *)(puVar21 + -0x13);
          puVar21[-0xf] = puVar21[-0x15];
          puVar21[-0xe] = puVar21[-0x14];
          if (puVar21 + -0x18 != param_2) {
            FUN_01eacf70(puVar21 + -0x18,puVar21 + -0x1e);
            puVar21[-0x16] = puVar21[-0x1c];
            *(undefined4 *)(puVar21 + -0x13) = *(undefined4 *)(puVar21 + -0x19);
            puVar21[-0x15] = puVar21[-0x1b];
            puVar21[-0x14] = puVar21[-0x1a];
            if (puVar21 + -0x1e != param_2) {
              lVar20 = lVar20 >> 4;
              lVar17 = 0;
              do {
                FUN_01eacf70((long)puVar21 + lVar17 + -0xf0,(long)puVar27 + lVar17 + -0xf0);
                lVar25 = lVar11 + (uVar22 + lVar20 * -0x5555555555555555) * 0x30 + lVar17;
                lVar18 = lVar17 + -0x30;
                *(undefined8 *)((long)puVar21 + lVar17 + -0xe0) = *(undefined8 *)(lVar25 + -0xe0);
                uVar2 = *(undefined8 *)(lVar25 + -0xd8);
                uVar3 = *(undefined8 *)(lVar25 + -0xd0);
                *(undefined4 *)((long)puVar21 + lVar17 + -200) = *(undefined4 *)(lVar25 + -200);
                *(undefined8 *)((long)puVar21 + lVar17 + -0xd8) = uVar2;
                *(undefined8 *)((long)puVar21 + lVar17 + -0xd0) = uVar3;
                lVar17 = lVar18;
              } while (lVar20 * -0x10 + 0xc0 != lVar18);
            }
          }
        }
      }
    }
    if ((param_2 <= param_3) && (param_3 < (undefined8 *)param_1[1])) {
      param_3 = param_3 + 6;
    }
    FUN_01ead384(param_2,param_3);
    uVar14 = param_3[4];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    lVar11 = lVar11 + lVar10 * 0x10;
    *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(param_3 + 5);
    *(undefined8 *)(lVar11 + 0x10) = uVar2;
    *(undefined8 *)(lVar11 + 0x18) = uVar3;
    *(undefined8 *)(lVar11 + 0x20) = uVar14;
    return;
  }
  uVar12 = ((long)puVar21 - lVar11 >> 4) * -0x5555555555555555 + 1;
  uVar13 = param_1[4];
  if (0x7ffffffffffffffe < uVar13) {
    uVar13 = 0x7fffffffffffffff;
  }
  if (uVar13 < uVar12) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  lVar11 = param_1[2] - lVar11 >> 4;
  uVar15 = lVar11 * 0x5555555555555556;
  if (uVar12 <= uVar15) {
    uVar12 = uVar15;
  }
  plVar16 = param_1 + 3;
  if ((ulong)(lVar11 * -0x5555555555555555) < uVar13 >> 1) {
    uVar13 = uVar12;
  }
  if (uVar13 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar13 * 0x30,8);
    if (lVar11 == 0) {
      (**(code **)(*(long *)*plVar16 + 0xb8))();
    }
  }
  lVar17 = lVar11 + lVar10 * 0x10;
  lVar25 = lVar11 + uVar13 * 0x30;
  if (uVar22 == uVar13) {
    if (lVar20 < 1) {
      uVar22 = lVar10 * 0x5555555555555556;
      if (lVar20 == 0) {
        uVar22 = 1;
      }
      lVar25 = (**(code **)(*(long *)*plVar16 + 0x10))((long *)*plVar16,uVar22 * 0x30,8);
      if (lVar25 == 0) {
        (**(code **)(*(long *)*plVar16 + 0xb8))();
      }
      lVar17 = lVar25 + (uVar22 >> 2) * 0x30;
      lVar25 = lVar25 + uVar22 * 0x30;
      if (lVar11 != 0) {
        plVar24 = (long *)*plVar16;
        uVar22 = (**(code **)(*plVar24 + 0xc0))(plVar24);
        if ((uVar22 & 1) != 0) {
          lVar10 = tpidr_el0;
          if (*(char *)(lVar10 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar10 + 0x38d488) = 1;
            *(undefined8 *)(lVar10 + 0x38d478) = 0;
            *(undefined8 *)(lVar10 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar10 + 0x38d480)) {
            FUN_02bcc824(plVar24,lVar11,lVar20,8);
            goto LAB_01ed0900;
          }
        }
        (**(code **)(*plVar24 + 0x18))(plVar24,lVar11,lVar20,8);
      }
    }
    else {
      lVar11 = uVar22 + 2;
      if (-1 < (long)(uVar22 + 1)) {
        lVar11 = uVar22 + 1;
      }
      lVar17 = lVar17 + (lVar11 >> 1) * -0x30;
    }
  }
LAB_01ed0900:
  FUN_01ece8ec(plVar16,lVar17,param_3);
  puVar21 = (undefined8 *)*param_1;
  lVar11 = lVar17 + 0x30;
  if (puVar21 != param_2) {
    puVar27 = param_2;
    do {
      lVar17 = lVar17 + -0x30;
      puVar27 = puVar27 + -6;
      FUN_01ece8ec(plVar16,lVar17,puVar27);
    } while (puVar21 != puVar27);
  }
  puVar21 = (undefined8 *)param_1[1];
  if (puVar21 != param_2) {
    do {
      FUN_01ece8ec(plVar16,lVar11,param_2);
      param_2 = param_2 + 6;
      lVar11 = lVar11 + 0x30;
    } while (puVar21 != param_2);
    param_2 = (undefined8 *)param_1[1];
  }
  puVar21 = (undefined8 *)*param_1;
  *param_1 = lVar17;
  param_1[1] = lVar11;
  lVar11 = param_1[2];
  param_1[2] = lVar25;
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  while (param_2 != puVar21) {
    param_2 = param_2 + -6;
    puVar27 = (undefined8 *)*param_2;
    if (puVar27 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar27 + 1);
      do {
        iVar9 = *piVar1;
        cVar4 = '\x01';
        bVar19 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar19) {
          *piVar1 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        puVar27[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_68 = *puVar27;
        FUN_02a44274(lVar10 + 0xd8,&local_68);
      }
    }
  }
  if (puVar21 == (undefined8 *)0x0) {
    return;
  }
  plVar16 = (long *)*plVar16;
  uVar22 = (**(code **)(*plVar16 + 0xc0))(plVar16);
  if ((uVar22 & 1) != 0) {
    lVar10 = tpidr_el0;
    if (*(char *)(lVar10 + 0x38d488) == '\0') {
      *(undefined1 *)(lVar10 + 0x38d488) = 1;
      *(undefined8 *)(lVar10 + 0x38d478) = 0;
      *(undefined8 *)(lVar10 + 0x38d480) = 0;
      __cxa_thread_atexit(&LAB_02bcbe54,lVar10 + 0x80078,&PTR_LOOP_0411a000);
    }
    if (0 < *(int *)(lVar10 + 0x38d480)) {
      FUN_02bcc824(plVar16,puVar21,lVar11 - (long)puVar21,8);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01ed0c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar16 + 0x18))(plVar16,puVar21,lVar11 - (long)puVar21,8);
  return;
}


