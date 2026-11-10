/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e77d3c; name: FUN_01e77d3c
 */


void FUN_01e77d3c(long param_1,long param_2,long *param_3,byte param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  long local_a0;
  long *local_98;
  long local_90;
  long local_88;
  long local_80;
  long *local_78;
  undefined4 local_70;
  byte local_68;
  
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  lVar12 = *(long *)PTR_DAT_0437a788;
  *(long *)PTR_DAT_0437a790 = lVar12;
  plVar18 = *(long **)(lVar12 + 0x78);
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e7837c;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (((param_4 & 1) == 0) || ((char)plVar18[0xdc] == '\0')) {
    uVar10 = FUN_00938764(param_2,1,param_3,0,*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x268),0);
    if (((uVar10 & 1) != 0) && (plVar19 = *(long **)(param_2 + 0x28), plVar19 != (long *)0x0)) {
      lVar12 = plVar19[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_01e7837c;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar12 = plVar19[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      goto LAB_01e78288;
    }
  }
  else {
    uVar10 = FUN_00938764(param_2,1,param_3,0,*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x268),
                          plVar18 + 0xdd);
    if (((uVar10 & 1) != 0) && (plVar19 = *(long **)(param_2 + 0x28), plVar19 != (long *)0x0)) {
      lVar12 = plVar19[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_01e7837c:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = *piVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar12 = plVar19[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar8 = *piVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar6) {
          *piVar1 = iVar8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
LAB_01e78288:
      if (iVar8 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
  }
  if (plVar18 != (long *)0x0) {
    lVar12 = plVar18[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar18 + 0x20))(plVar18);
    }
  }
  local_98 = (long *)*param_3;
  param_4 = param_4 & 1;
  local_a0 = param_2;
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x18))();
  }
  local_90 = param_3[1];
  local_88 = param_3[2];
  local_80 = param_3[3];
  local_78 = (long *)param_3[4];
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x18))();
  }
  local_70 = (undefined4)param_3[5];
  uVar10 = *(ulong *)(param_1 + 0x78);
  puVar2 = (undefined8 *)(param_1 + 0x88);
  local_68 = param_4;
  if (uVar10 < *(ulong *)(param_1 + 0x80)) {
    FUN_01e786c8(puVar2,uVar10,&local_a0);
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 0x40;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0x90);
    lVar12 = (long)(uVar10 - *(long *)(param_1 + 0x70)) >> 6;
    uVar10 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = *(ulong *)(param_1 + 0x80) - *(long *)(param_1 + 0x70);
    if ((ulong)(lVar13 >> 6) < uVar16 >> 1) {
      uVar14 = lVar13 >> 5;
      uVar16 = uVar10;
      if (uVar10 <= uVar14) {
        uVar16 = uVar14;
      }
    }
    if (uVar16 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar16 << 6,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    lVar12 = lVar13 + lVar12 * 0x40;
    FUN_01e786c8(puVar2,lVar12,&local_a0);
    puVar7 = PTR_DAT_04379528;
    lVar17 = *(long *)(param_1 + 0x70);
    lVar15 = *(long *)(param_1 + 0x78);
    if (lVar15 == lVar17) {
      lVar15 = lVar12;
      lVar20 = lVar17;
    }
    else {
      lVar20 = 0;
      do {
        uVar9 = *puVar2;
        if (((*PTR_DAT_04379520 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), iVar8 != 0)) {
          FUN_008a62a4(puVar7);
          FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379520);
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        if (lVar11 != 0) {
          if (0xf < *(ulong *)(lVar11 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar11 + *(ulong *)(lVar11 + 0x80) * 8) = uVar9;
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + 1;
        }
        lVar3 = lVar15 + lVar20;
        lVar4 = lVar12 + lVar20;
        *(undefined8 *)(lVar4 + -0x40) = *(undefined8 *)(lVar3 + -0x40);
        plVar18 = *(long **)(lVar3 + -0x38);
        *(long **)(lVar4 + -0x38) = plVar18;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x18))();
        }
        *(undefined8 *)(lVar4 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
        *(undefined8 *)(lVar4 + -0x28) = *(undefined8 *)(lVar3 + -0x28);
        *(undefined8 *)(lVar4 + -0x20) = *(undefined8 *)(lVar3 + -0x20);
        plVar18 = *(long **)(lVar3 + -0x18);
        *(long **)(lVar4 + -0x18) = plVar18;
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x18))();
        }
        *(undefined4 *)(lVar4 + -0x10) = *(undefined4 *)(lVar3 + -0x10);
        *(undefined1 *)(lVar4 + -8) = *(undefined1 *)(lVar3 + -8);
        if (lVar11 != 0) {
          *(long *)(lVar11 + 0x80) = *(long *)(lVar11 + 0x80) + -1;
        }
        lVar20 = lVar20 + -0x40;
      } while (lVar17 - lVar15 != lVar20);
      lVar17 = *(long *)(param_1 + 0x78);
      lVar15 = lVar12 + lVar20;
      lVar20 = *(long *)(param_1 + 0x70);
    }
    lVar11 = *(long *)(param_1 + 0x80);
    *(long *)(param_1 + 0x70) = lVar15;
    *(long *)(param_1 + 0x78) = lVar12 + 0x40;
    *(ulong *)(param_1 + 0x80) = lVar13 + uVar16 * 0x40;
    while (lVar17 != lVar20) {
      if (*(long **)(lVar17 + -0x18) != (long *)0x0) {
        (**(code **)(**(long **)(lVar17 + -0x18) + 0x20))();
      }
      plVar18 = (long *)(lVar17 + -0x38);
      lVar17 = lVar17 + -0x40;
      if ((long *)*plVar18 != (long *)0x0) {
        (**(code **)(*(long *)*plVar18 + 0x20))();
      }
    }
    if (lVar20 != 0) {
      plVar18 = (long *)*puVar2;
      lVar11 = lVar11 - lVar20;
      uVar10 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar10 & 1) != 0) {
        lVar12 = tpidr_el0;
        if (*(char *)(lVar12 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar12 + 0x38d488) = 1;
          *(undefined8 *)(lVar12 + 0x38d478) = 0;
          *(undefined8 *)(lVar12 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar12 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar12 + 0x38d480)) {
          FUN_02bcc824(plVar18,lVar20,lVar11,8);
          goto joined_r0x01e78200;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,lVar20,lVar11,8);
    }
  }
joined_r0x01e78200:
  if (local_78 != (long *)0x0) {
    (**(code **)(*local_78 + 0x20))();
  }
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  return;
}


