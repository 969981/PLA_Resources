/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3ae30; name: FUN_02c3ae30
 */


void FUN_02c3ae30(long *param_1)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  bool bVar26;
  long *local_90;
  long local_88 [2];
  long local_78;
  long local_70;
  long local_68;
  
  puVar7 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar7 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar12 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar12 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar13 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar13 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = 0;
    if (*(long *)(lVar13 + 0x80) != 0) {
      lVar16 = *(long *)(lVar13 + *(long *)(lVar13 + 0x80) * 8 + -8);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *param_1 = (long)&PTR_FUN_0428a1d8;
  param_1[1] = lVar16;
  puVar7 = PTR_DAT_0437eda8;
  param_1[9] = (long)&PTR_LAB_0428a210;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = (long)(puVar7 + 0x10);
  param_1[0xe] = 0;
  FUN_02c3b4e4(param_1 + 0x13);
  FUN_02843da4(param_1 + 0x20);
  (*DAT_043ef6c0)(&local_90,&DAT_043ef6e0);
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 10;
    do {
      cVar6 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar26) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  plVar14 = (long *)param_1[0xb];
  param_1[0xb] = (long)local_90;
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar26) {
        *(int *)plVar1 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  if (local_90 != (long *)0x0) {
    plVar14 = local_90 + 10;
    do {
      iVar12 = (int)*plVar14 + -1;
      cVar6 = '\x01';
      bVar26 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar26) {
        *(int *)plVar14 = iVar12;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  lVar13 = (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],0x48,8);
  FUN_0022b558();
  param_1[0xc] = lVar13;
  puVar9 = PTR_DAT_0437e3b8;
  if (((*PTR_DAT_0437e3b8 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_0437e3b8), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04387f18,PTR_DAT_0437e3c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437e3b8);
  }
  puVar11 = PTR_DAT_0437e3c8;
  puVar10 = PTR_DAT_0437e3c0;
  lVar13 = *(long *)PTR_DAT_0437e3c0;
  *(long *)PTR_DAT_0437e3c8 = lVar13;
  puVar8 = PTR_PTR_04379d00;
  puVar21 = *(undefined8 **)(lVar13 + 0x58);
  puVar5 = *(undefined8 **)(lVar13 + 0x60);
  if (puVar21 != puVar5) {
    plVar14 = (long *)*puVar21;
    if (plVar14 != (long *)0x0) goto LAB_02c3afd8;
    do {
      bVar26 = true;
      while( true ) {
        puVar4 = (undefined8 *)puVar8;
        if (plVar14[0xc] != 0) {
          puVar4 = (undefined8 *)(plVar14[0xc] + 0x60);
        }
        FUN_0022bb08(param_1[0xc],*puVar4,plVar14[0xb]);
        if (!bVar26) {
          plVar1 = plVar14 + 10;
          do {
            iVar12 = (int)*plVar1 + -1;
            cVar6 = '\x01';
            bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar26) {
              *(int *)plVar1 = iVar12;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar12 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
        puVar21 = puVar21 + 1;
        if (puVar21 == puVar5) goto LAB_02c3b044;
        plVar14 = (long *)*puVar21;
        if (plVar14 == (long *)0x0) break;
LAB_02c3afd8:
        plVar1 = plVar14 + 10;
        do {
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar26) {
            *(int *)plVar1 = (int)*plVar1 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        bVar26 = false;
      }
    } while( true );
  }
LAB_02c3b044:
  if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437e3b8), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04387f18,PTR_DAT_0437e3c0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437e3b8);
  }
  lVar16 = *(long *)puVar10;
  *(long *)puVar11 = lVar16;
  lVar13 = *(long *)(lVar16 + 0x90);
  lVar16 = *(long *)(lVar16 + 0x98);
  if (lVar13 != lVar16) {
    plVar14 = param_1 + 0x23;
    plVar1 = (long *)(PTR_DAT_04387e40 + 0x10);
    do {
      local_90 = plVar1;
      FUN_00d23df8(local_88,lVar13 + 8);
      local_78 = *(long *)(lVar13 + 0x18);
      if (local_78 != 0) {
        piVar2 = (int *)(local_78 + 0x50);
        do {
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar26) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_70 = *(long *)(lVar13 + 0x20);
      if (local_70 != 0) {
        piVar2 = (int *)(local_70 + 0x50);
        do {
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar26) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_68 = *(long *)(lVar13 + 0x28);
      if (local_68 != 0) {
        lVar20 = *(long *)(local_68 + 0x58);
        if (*(undefined8 **)(lVar20 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar20 + 0x10) == 0) {
          uVar15 = (**(code **)**(undefined8 **)(lVar20 + 0x18))();
          *(undefined8 *)(lVar20 + 0x10) = uVar15;
        }
        piVar2 = (int *)(lVar20 + 0xc);
        do {
          cVar6 = '\x01';
          bVar26 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar26) {
            *piVar2 = *piVar2 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_90 = (long *)(puVar7 + 0x10);
      FUN_0022b74c(param_1[0xc],*(long *)(local_88[0] + 600) + 0x80);
      lVar20 = param_1[0x21];
      if (lVar20 == param_1[0x22]) {
        lVar20 = lVar20 - param_1[0x20] >> 4;
        uVar19 = param_1[0x24];
        if (0x7ffffffffffffffe < uVar19) {
          uVar19 = 0x7fffffffffffffff;
        }
        uVar3 = lVar20 * -0x5555555555555555 + 1;
        if (uVar19 < uVar3) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar17 = param_1[0x22] - param_1[0x20] >> 4;
        uVar18 = lVar17 * 0x5555555555555556;
        if (uVar3 <= uVar18) {
          uVar3 = uVar18;
        }
        if ((ulong)(lVar17 * -0x5555555555555555) < uVar19 >> 1) {
          uVar19 = uVar3;
        }
        if (uVar19 == 0) {
          lVar17 = 0;
        }
        else {
          lVar17 = (**(code **)(*(long *)*plVar14 + 0x10))((long *)*plVar14,uVar19 * 0x30,8);
          if (lVar17 == 0) {
            (**(code **)(*(long *)*plVar14 + 0xb8))();
          }
        }
        lVar24 = lVar17 + lVar20 * 0x10;
        FUN_028440c4(plVar14,lVar24,&local_90);
        lVar23 = param_1[0x20];
        lVar22 = param_1[0x21];
        lVar20 = lVar24 + 0x30;
        if (lVar22 == lVar23) {
          lVar22 = lVar23;
        }
        else {
          do {
            lVar24 = lVar24 + -0x30;
            lVar22 = lVar22 + -0x30;
            FUN_028440c4(plVar14,lVar24,lVar22);
          } while (lVar23 != lVar22);
          lVar23 = param_1[0x20];
          lVar22 = param_1[0x21];
        }
        param_1[0x20] = lVar24;
        param_1[0x21] = lVar20;
        lVar20 = param_1[0x22];
        param_1[0x22] = lVar17 + uVar19 * 0x30;
        while (lVar22 != lVar23) {
          lVar22 = lVar22 + -0x30;
          FUN_00d20548(lVar22);
        }
        if (lVar23 != 0) {
          plVar25 = (long *)*plVar14;
          uVar19 = (**(code **)(*plVar25 + 0xc0))(plVar25);
          if ((uVar19 & 1) != 0) {
            lVar17 = tpidr_el0;
            if (*(char *)(lVar17 + 0x38d488) == '\0') {
              *(undefined1 *)(lVar17 + 0x38d488) = 1;
              *(undefined8 *)(lVar17 + 0x38d478) = 0;
              *(undefined8 *)(lVar17 + 0x38d480) = 0;
              __cxa_thread_atexit(&LAB_02bcbe54,lVar17 + 0x80078,&PTR_LOOP_0411a000);
            }
            if (0 < *(int *)(lVar17 + 0x38d480)) {
              FUN_02bcc824(plVar25,lVar23,lVar20 - lVar23,8);
              goto LAB_02c3b0ac;
            }
          }
          (**(code **)(*plVar25 + 0x18))(plVar25,lVar23,lVar20 - lVar23,8);
        }
      }
      else {
        FUN_028440c4(plVar14,lVar20,&local_90);
        param_1[0x21] = param_1[0x21] + 0x30;
      }
LAB_02c3b0ac:
      FUN_00d20548(&local_90);
      lVar13 = lVar13 + 0x30;
    } while (lVar13 != lVar16);
  }
  return;
}


