/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c3de1c; name: FUN_02c3de1c
 */


void FUN_02c3de1c(long param_1,long param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  undefined8 uVar17;
  long *plVar18;
  long *plVar19;
  long *local_68;
  
  puVar5 = PTR_DAT_04379520;
  plVar16 = *(long **)(param_1 + 8);
  if ((*PTR_DAT_04379520 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar6 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  puVar6 = PTR_DAT_04379528;
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar9 + 0x80)) {
LAB_02c3e33c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = plVar16;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
  plVar10 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x68,8);
  if (plVar10 == (long *)0x0) {
    (**(code **)(*plVar16 + 0xb8))(plVar16);
  }
  plVar19 = (long *)*param_3;
  *param_3 = 0;
  puVar7 = PTR_DAT_043796d0;
  plVar10[7] = 0;
  *(undefined4 *)(plVar10 + 8) = 0;
  *plVar10 = (long)(puVar7 + 0x10);
  *(undefined4 *)(plVar10 + 6) = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  if ((*puVar5 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04379520);
    puVar7 = PTR_DAT_04379528;
    if (iVar8 != 0) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
  }
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
  if (lVar11 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = 0;
    if (*(long *)(lVar11 + 0x80) != 0) {
      lVar13 = *(long *)(lVar11 + *(long *)(lVar11 + 0x80) * 8 + -8);
    }
  }
  plVar10[1] = lVar13;
  plVar18 = plVar10 + 10;
  *(int *)plVar18 = 0;
  *plVar10 = (long)&PTR_LAB_0428a330;
  plVar10[9] = (long)&PTR_LAB_0428a368;
  plVar10[0xb] = param_2;
  plVar10[0xc] = (long)plVar19;
  if (plVar19 != (long *)0x0) {
    (**(code **)(*plVar19 + 0x18))(plVar19);
    (**(code **)(*plVar19 + 0x20))(plVar19);
  }
  plVar10[1] = (long)plVar16;
  plVar10[2] = (long)plVar10;
  plVar10[3] = 0x68;
  plVar10[4] = 8;
  *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar4) {
      *(int *)plVar18 = (int)*plVar18 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar12 = *(ulong *)(param_1 + 0x60);
  puVar1 = (undefined8 *)(param_1 + 0x70);
  local_68 = plVar10;
  if (uVar12 < *(ulong *)(param_1 + 0x68)) {
    FUN_02c3f1dc(puVar1,uVar12,&local_68);
    *(long *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + 8;
  }
  else {
    uVar15 = *(ulong *)(param_1 + 0x78);
    lVar9 = (long)(uVar12 - *(long *)(param_1 + 0x58)) >> 3;
    uVar12 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar15) {
      uVar15 = 0x7fffffffffffffff;
    }
    if (uVar15 < uVar12) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(ulong *)(param_1 + 0x68) - *(long *)(param_1 + 0x58);
    if ((ulong)(lVar11 >> 3) < uVar15 >> 1) {
      uVar14 = lVar11 >> 2;
      uVar15 = uVar12;
      if (uVar12 <= uVar14) {
        uVar15 = uVar14;
      }
    }
    if (uVar15 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar15 << 3,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    plVar16 = (long *)(lVar11 + lVar9 * 8);
    FUN_02c3f1dc(puVar1,plVar16,&local_68);
    plVar10 = *(long **)(param_1 + 0x58);
    plVar19 = *(long **)(param_1 + 0x60);
    plVar18 = plVar16;
    if (plVar19 == plVar10) {
      plVar19 = plVar10;
    }
    else {
      do {
        uVar17 = *puVar1;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          FUN_008a62a4(puVar6);
          FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
        if (lVar9 != 0) {
          if (0xf < *(ulong *)(lVar9 + 0x80)) goto LAB_02c3e33c;
          *(undefined8 *)(lVar9 + *(ulong *)(lVar9 + 0x80) * 8) = uVar17;
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + 1;
        }
        plVar19 = plVar19 + -1;
        lVar13 = *plVar19;
        plVar18 = plVar18 + -1;
        *plVar18 = lVar13;
        if (lVar13 != 0) {
          piVar2 = (int *)(lVar13 + 0x50);
          do {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = *piVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x80) = *(long *)(lVar9 + 0x80) + -1;
        }
      } while (plVar19 != plVar10);
      plVar10 = *(long **)(param_1 + 0x58);
      plVar19 = *(long **)(param_1 + 0x60);
    }
    lVar9 = *(long *)(param_1 + 0x68);
    *(long **)(param_1 + 0x58) = plVar18;
    *(long **)(param_1 + 0x60) = plVar16 + 1;
    *(ulong *)(param_1 + 0x68) = lVar11 + uVar15 * 8;
LAB_02c3e108:
    if (plVar19 != plVar10) {
      while( true ) {
        plVar19 = plVar19 + -1;
        plVar16 = (long *)*plVar19;
        if (plVar16 == (long *)0x0) break;
        plVar18 = plVar16 + 10;
        do {
          iVar8 = (int)*plVar18 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar4) {
            *(int *)plVar18 = iVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 != 0) break;
        (**(code **)(*plVar16 + 0x10))();
        if (plVar19 == plVar10) goto LAB_02c3e144;
      }
      goto LAB_02c3e108;
    }
LAB_02c3e144:
    if (plVar10 != (long *)0x0) {
      lVar9 = lVar9 - (long)plVar10;
      plVar16 = (long *)*puVar1;
      uVar12 = (**(code **)(*plVar16 + 0xc0))(plVar16);
      if ((uVar12 & 1) != 0) {
        lVar11 = tpidr_el0;
        if (*(char *)(lVar11 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar11 + 0x38d488) = 1;
          *(undefined8 *)(lVar11 + 0x38d478) = 0;
          *(undefined8 *)(lVar11 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar11 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar11 + 0x38d480)) {
          FUN_02bcc824(plVar16,plVar10,lVar9,8);
          goto joined_r0x02c3e1c8;
        }
      }
      (**(code **)(*plVar16 + 0x18))(plVar16,plVar10,lVar9,8);
    }
  }
joined_r0x02c3e1c8:
  if (local_68 != (long *)0x0) {
    plVar16 = local_68 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  return;
}


