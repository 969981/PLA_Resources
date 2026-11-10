/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a5bf68; name: FUN_02a5bf68
 */


void FUN_02a5bf68(long param_1,int param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  undefined4 *puVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long lVar22;
  long *plVar23;
  int local_64;
  
  uVar7 = *(long *)(param_1 + 0x1e8) + (long)param_2;
  plVar2 = (long *)(*(long *)(*(long *)(param_1 + 0x1b0) + (uVar7 >> 2 & 0x3ffffffffffffff8)) +
                   (uVar7 & 0x1f) * 0x80);
  plVar23 = plVar2 + 0xe;
  local_64 = param_2;
  if (*(long *)(*plVar23 + 0x220) == 0) goto LAB_02a5c2ec;
  piVar12 = *(int **)(param_1 + 0x218);
  piVar9 = *(int **)(param_1 + 0x220);
  piVar14 = piVar12;
  if (piVar12 == piVar9) {
LAB_02a5bff8:
    if (piVar14 == piVar9) goto LAB_02a5c018;
    piVar14[1] = (int)plVar2[0xf];
    iVar10 = (int)plVar2[0xf];
  }
  else {
    do {
      if (*piVar14 == param_2) goto LAB_02a5bff8;
      piVar14 = piVar14 + 2;
    } while (piVar9 != piVar14);
LAB_02a5c018:
    plVar17 = plVar2 + 0xf;
    if (piVar9 < *(int **)(param_1 + 0x228)) {
      FUN_02a631a0(*(undefined8 *)(param_1 + 0x230),piVar9,&local_64,plVar17);
      *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 8;
      iVar10 = (int)*plVar17;
    }
    else {
      uVar16 = *(ulong *)(param_1 + 0x238);
      lVar8 = (long)piVar9 - (long)piVar12 >> 3;
      uVar7 = lVar8 + 1;
      if (0x7ffffffffffffffe < uVar16) {
        uVar16 = 0x7fffffffffffffff;
      }
      if (uVar16 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar19 = (long)*(int **)(param_1 + 0x228) - (long)piVar12;
      if ((ulong)(lVar19 >> 3) < uVar16 >> 1) {
        uVar13 = lVar19 >> 2;
        uVar16 = uVar7;
        if (uVar7 <= uVar13) {
          uVar16 = uVar13;
        }
      }
      puVar1 = (undefined8 *)(param_1 + 0x230);
      if (uVar16 == 0) {
        lVar19 = 0;
      }
      else {
        lVar19 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar16 << 3,4);
        if (lVar19 == 0) {
          (**(code **)(*(long *)*puVar1 + 0xb8))();
        }
      }
      lVar20 = lVar19 + lVar8 * 8;
      FUN_02a631a0(*(undefined8 *)(param_1 + 0x230),lVar20,&local_64,plVar17);
      lVar11 = *(long *)(param_1 + 0x218);
      lVar8 = lVar20 + 8;
      lVar22 = *(long *)(param_1 + 0x220);
      if (lVar22 != lVar11) {
        do {
          lVar20 = lVar20 + -8;
          lVar22 = lVar22 + -8;
          FUN_02a62ff0(puVar1,lVar20,lVar22);
        } while (lVar11 != lVar22);
        lVar11 = *(long *)(param_1 + 0x218);
      }
      lVar22 = *(long *)(param_1 + 0x228);
      *(long *)(param_1 + 0x218) = lVar20;
      *(long *)(param_1 + 0x220) = lVar8;
      *(ulong *)(param_1 + 0x228) = lVar19 + uVar16 * 8;
      if (lVar11 != 0) {
        plVar21 = (long *)*puVar1;
        lVar22 = lVar22 - lVar11;
        uVar7 = (**(code **)(*plVar21 + 0xc0))(plVar21);
        if ((uVar7 & 1) != 0) {
          lVar8 = tpidr_el0;
          if (*(char *)(lVar8 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar8 + 0x38d488) = 1;
            *(undefined8 *)(lVar8 + 0x38d478) = 0;
            *(undefined8 *)(lVar8 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (0 < *(int *)(lVar8 + 0x38d480)) {
            FUN_02bcc824(plVar21,lVar11,lVar22,4);
            iVar10 = (int)*plVar17;
            goto joined_r0x02a5c3a4;
          }
        }
        (**(code **)(*plVar21 + 0x18))(plVar21,lVar11,lVar22,4);
      }
      iVar10 = (int)*plVar17;
    }
  }
joined_r0x02a5c3a4:
  if (iVar10 < 0) {
LAB_02a5c2ec:
    iVar10 = *(int *)(*plVar23 + 0x32c);
    if ((int *)*plVar2 != (int *)plVar2[1]) {
      piVar14 = (int *)*plVar2;
      iVar15 = -1;
      do {
        piVar9 = piVar14 + 1;
        uVar7 = *(long *)(param_1 + 0x1e8) + (long)*piVar14;
        iVar4 = *(int *)(*(long *)(*(long *)(param_1 + 0x1b0) + (uVar7 >> 2 & 0x3ffffffffffffff8)) +
                         (uVar7 & 0x1f) * 0x80 + 0x78);
        if (iVar4 <= iVar15) {
          iVar4 = iVar15;
        }
        piVar14 = piVar9;
        iVar15 = iVar4;
      } while ((int *)plVar2[1] != piVar9);
      if (iVar10 <= iVar4 + 1) {
        iVar10 = iVar4 + 1;
      }
    }
    puVar18 = (undefined4 *)plVar2[7];
    puVar3 = (undefined4 *)plVar2[8];
    *(int *)(plVar2 + 0xf) = iVar10;
    for (; puVar18 != puVar3; puVar18 = puVar18 + 1) {
      FUN_02a5bf68(param_1,*puVar18);
    }
    return;
  }
  lVar19 = *(long *)(*plVar23 + 0x220);
  lVar8 = nn::os::GetCurrentThread();
  plVar17 = (long *)(lVar19 + 0x208);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar19 + 0x1fc));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02a5c214;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a5c214:
  lVar20 = *(long *)(*plVar23 + 0x228);
  lVar8 = nn::os::GetCurrentThread();
  plVar17 = (long *)(lVar20 + 0x208);
  do {
    if (*plVar17 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar20 + 0x1fc));
        while (*plVar17 == 0) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar6) {
            *plVar17 = lVar8;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') goto LAB_02a5c264;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar17,0x10);
    if (bVar6) {
      *plVar17 = lVar8;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
LAB_02a5c264:
  lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x68) + 0x420) + (long)(int)plVar2[0xf] * 8);
  lVar8 = lVar11;
  if (*(long *)(lVar11 + 0x1d0) != 0) {
    lVar8 = *(long *)(lVar11 + 0x1d0);
  }
  if (*(long *)(lVar11 + 0x1d8) != 0) {
    lVar11 = *(long *)(lVar11 + 0x1d8);
  }
  if (lVar8 != lVar11) {
    FUN_02a706b4(lVar19);
    lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 0x70) + 0x420) + (long)(int)plVar2[0xf] * 8);
    lVar8 = lVar11;
    if (*(long *)(lVar11 + 0x1d0) != 0) {
      lVar8 = *(long *)(lVar11 + 0x1d0);
    }
    if (*(long *)(lVar11 + 0x1d8) != 0) {
      lVar11 = *(long *)(lVar11 + 0x1d8);
    }
    if (lVar8 != lVar11) {
      FUN_02a706b4(lVar20);
      *(undefined8 *)(lVar20 + 0x208) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar20 + 0x1fc));
      *(undefined8 *)(lVar19 + 0x208) = 0;
      nn::os::SignalLightEvent((LightEventType *)(lVar19 + 0x1fc));
      goto LAB_02a5c2ec;
    }
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


