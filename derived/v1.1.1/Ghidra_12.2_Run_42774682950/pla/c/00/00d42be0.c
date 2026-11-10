/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d42be0; name: FUN_00d42be0
 */


void FUN_00d42be0(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  long **pplVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  long *plVar21;
  undefined8 *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 uStack_80;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  if (param_2 == (long *)0x0) {
    return;
  }
  FUN_00d4356c(param_2[0xb0]);
  (**(code **)(*param_2 + 0x10))(&local_78,param_2);
  local_88 = (long *)0x0;
  uStack_80 = 0;
  FUN_00d442e8(&local_88,&local_78);
  plVar18 = local_78;
  if (local_78 != (long *)0x0) {
    plVar21 = local_78 + 1;
    do {
      iVar7 = (int)*plVar21 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *(int *)plVar21 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_98 = (undefined8 *)*plVar18;
      FUN_02a44274(lVar12 + 0xd8,&local_98);
    }
  }
  uVar9 = *(ulong *)(param_1 + 0x30);
  puVar17 = (undefined8 *)(param_1 + 0x40);
  if (uVar9 < *(ulong *)(param_1 + 0x38)) {
    FUN_00d44d00(puVar17,uVar9,&local_88);
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + 0x10;
    plVar18 = local_88;
  }
  else {
    uVar16 = *(ulong *)(param_1 + 0x48);
    lVar12 = (long)(uVar9 - *(long *)(param_1 + 0x28)) >> 4;
    uVar9 = lVar12 + 1;
    if (0x7ffffffffffffffe < uVar16) {
      uVar16 = 0x7fffffffffffffff;
    }
    if (uVar16 < uVar9) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar13 = *(ulong *)(param_1 + 0x38) - *(long *)(param_1 + 0x28);
    if ((ulong)(lVar13 >> 4) < uVar16 >> 1) {
      uVar14 = lVar13 >> 3;
      uVar16 = uVar9;
      if (uVar9 <= uVar14) {
        uVar16 = uVar14;
      }
    }
    if (uVar16 == 0) {
      lVar13 = 0;
    }
    else {
      lVar13 = (**(code **)(*(long *)*puVar17 + 0x10))((long *)*puVar17,uVar16 << 4,8);
      if (lVar13 == 0) {
        (**(code **)(*(long *)*puVar17 + 0xb8))();
      }
    }
    puVar8 = (undefined8 *)(lVar13 + lVar12 * 0x10);
    FUN_00d44d00(puVar17,puVar8,&local_88);
    puVar20 = *(undefined8 **)(param_1 + 0x28);
    puVar19 = *(undefined8 **)(param_1 + 0x30);
    puVar4 = puVar8;
    if (puVar19 == puVar20) {
      puVar15 = puVar8;
      puVar19 = puVar20;
    }
    else {
      do {
        puVar15 = puVar4 + -2;
        uVar10 = *puVar17;
        puVar19 = puVar19 + -2;
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar5 = PTR_DAT_04379528;
          if (iVar7 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (lVar12 == 0) {
          *puVar15 = 0;
          puVar4[-1] = 0;
          FUN_00d45370(puVar15,puVar19);
        }
        else {
          if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar10;
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
          *puVar15 = 0;
          puVar4[-1] = 0;
          FUN_00d45370(puVar15,puVar19);
          *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
        }
        puVar4 = puVar15;
      } while (puVar20 != puVar19);
      puVar20 = *(undefined8 **)(param_1 + 0x28);
      puVar19 = *(undefined8 **)(param_1 + 0x30);
    }
    lVar12 = *(long *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x28) = puVar15;
    *(undefined8 **)(param_1 + 0x30) = puVar8 + 2;
    *(ulong *)(param_1 + 0x38) = lVar13 + uVar16 * 0x10;
    if (puVar19 != puVar20) {
      puVar19 = puVar19 + -2;
      puVar8 = (undefined8 *)*puVar19;
      if (puVar8 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar8 + 1);
        do {
          iVar7 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 + -1 == 0) {
          puVar8[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_78 = (long *)*puVar8;
          FUN_02a44274(lVar13 + 0xd8,&local_78);
        }
      }
      puVar6 = PTR_LAB_04379590;
      puVar5 = PTR_DAT_04379498;
      if (puVar19 != puVar20) {
        plVar18 = (long *)PTR_DAT_043794a0;
        plVar21 = (long *)PTR_DAT_043794a8;
        do {
          puVar19 = puVar19 + -2;
          puVar8 = (undefined8 *)*puVar19;
          if (puVar8 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar8 + 1);
            do {
              iVar7 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar7 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (iVar7 + -1 == 0) {
              puVar8[2] = 0;
              if ((*puVar5 & 1) == 0) {
                iVar7 = __cxa_guard_acquire(puVar5);
                plVar18 = (long *)PTR_DAT_043794a0;
                plVar21 = (long *)PTR_DAT_043794a8;
                if (iVar7 != 0) {
                  FUN_00100250(puVar6,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(puVar5);
                  plVar18 = (long *)PTR_DAT_043794a0;
                  plVar21 = (long *)PTR_DAT_043794a8;
                }
              }
              lVar13 = *plVar18;
              *plVar21 = lVar13;
              local_78 = (long *)*puVar8;
              FUN_02a44274(lVar13 + 0xd8,&local_78);
            }
          }
        } while (puVar19 != puVar20);
      }
    }
    plVar18 = local_88;
    if (puVar20 != (undefined8 *)0x0) {
      plVar18 = (long *)*puVar17;
      lVar12 = lVar12 - (long)puVar20;
      uVar9 = (**(code **)(*plVar18 + 0xc0))(plVar18);
      if ((uVar9 & 1) != 0) {
        lVar13 = tpidr_el0;
        if (*(char *)(lVar13 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar13 + 0x38d488) = 1;
          *(undefined8 *)(lVar13 + 0x38d478) = 0;
          *(undefined8 *)(lVar13 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar13 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar13 + 0x38d480)) {
          FUN_02bcc824(plVar18,puVar20,lVar12,8);
          plVar18 = local_88;
          goto joined_r0x00d431fc;
        }
      }
      (**(code **)(*plVar18 + 0x18))(plVar18,puVar20,lVar12,8);
      plVar18 = local_88;
    }
  }
joined_r0x00d431fc:
  local_88 = plVar18;
  if (plVar18 != (long *)0x0) {
    plVar21 = plVar18 + 1;
    do {
      iVar7 = (int)*plVar21 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *(int *)plVar21 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      plVar18[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_78 = (long *)*plVar18;
      FUN_02a44274(lVar12 + 0xd8,&local_78);
    }
  }
  lVar12 = param_2[0xb0];
  local_98 = (undefined8 *)0x0;
  uStack_90 = 0;
  FUN_00d45370(&local_98,param_1 + 8);
  if ((local_98 != (undefined8 *)0x0) &&
     (puVar17 = (undefined8 *)local_98[3], puVar17 != (undefined8 *)0x0)) {
    puVar8 = (undefined8 *)(**(code **)*puVar17)(puVar17);
    puVar5 = PTR_DAT_0437b330;
    if ((*PTR_DAT_0437b328 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(PTR_DAT_0437b328);
      puVar6 = PTR_DAT_043794d8;
      if (iVar7 != 0) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar10 = FUN_0087f8f0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = puVar6;
        __cxa_guard_release(PTR_DAT_0437b328);
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
LAB_00d42d74:
      if (puVar8 != (undefined8 *)puVar5) goto code_r0x00d42d7c;
      (**(code **)(puVar17[-10] + 0x10))(&local_78,puVar17 + -10);
      local_88 = (long *)0x0;
      uStack_80 = 0;
      FUN_00d442e8(&local_88,&local_78);
      plVar18 = local_78;
      if (local_78 != (long *)0x0) {
        plVar21 = local_78 + 1;
        do {
          iVar7 = (int)*plVar21 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar3) {
            *(int *)plVar21 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          local_78[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *plVar18;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      FUN_00d44df4(lVar12 + 0x18,&local_88);
      plVar18 = local_88;
      if (local_88 == (long *)0x0) goto LAB_00d42ee4;
      plVar21 = local_88 + 1;
      do {
        iVar7 = (int)*plVar21 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar3) {
          *(int *)plVar21 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 != 0) goto LAB_00d42ee4;
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_78 = (long *)*plVar18;
      pplVar11 = &local_78;
      goto LAB_00d42ee0;
    }
  }
LAB_00d42d84:
  local_78 = (long *)0x0;
  uStack_70 = 0;
  FUN_00d44df4(lVar12 + 0x18,&local_78);
  plVar18 = local_78;
  if (local_78 != (long *)0x0) {
    plVar21 = local_78 + 1;
    do {
      iVar7 = (int)*plVar21 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar3) {
        *(int *)plVar21 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_88 = (long *)*plVar18;
      pplVar11 = &local_88;
LAB_00d42ee0:
      FUN_02a44274(lVar12 + 0xd8,pplVar11);
    }
  }
LAB_00d42ee4:
  puVar17 = local_98;
  if (local_98 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_98 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_98[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_78 = (long *)*puVar17;
      FUN_02a44274(lVar12 + 0xd8,&local_78);
    }
  }
  return;
code_r0x00d42d7c:
  puVar8 = (undefined8 *)*puVar8;
  if (puVar8 == (undefined8 *)0x0) goto LAB_00d42d84;
  goto LAB_00d42d74;
}


