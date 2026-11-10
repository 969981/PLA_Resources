/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a53194; name: FUN_02a53194
 */


void FUN_02a53194(long param_1,long *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  char cVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  FUN_02a558d0(&local_78,param_1 + 0x288);
  cVar11 = (char)local_70;
  puVar10 = local_78;
  (**(code **)(*param_2 + 0x10))(&local_78,param_2);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  FUN_0087f944(&local_88,&local_78);
  if (local_78 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_78 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      local_78[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *local_78;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  local_78 = (undefined8 *)0x0;
  local_70 = 0;
  FUN_02a555d0(&local_78,&local_88);
  uVar13 = *(ulong *)(param_1 + 0x2a8);
  puVar2 = (undefined8 *)(param_1 + 0x2b8);
  if (uVar13 < *(ulong *)(param_1 + 0x2b0)) {
    FUN_02a57008(puVar2,uVar13,&local_78);
    *(long *)(param_1 + 0x2a8) = *(long *)(param_1 + 0x2a8) + 0x10;
    puVar21 = local_78;
  }
  else {
    uVar18 = *(ulong *)(param_1 + 0x2c0);
    lVar14 = (long)(uVar13 - *(long *)(param_1 + 0x2a0)) >> 4;
    uVar13 = lVar14 + 1;
    if (0x7ffffffffffffffe < uVar18) {
      uVar18 = 0x7fffffffffffffff;
    }
    if (uVar18 < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar15 = *(ulong *)(param_1 + 0x2b0) - *(long *)(param_1 + 0x2a0);
    if ((ulong)(lVar15 >> 4) < uVar18 >> 1) {
      uVar16 = lVar15 >> 3;
      uVar18 = uVar13;
      if (uVar13 <= uVar16) {
        uVar18 = uVar16;
      }
    }
    if (uVar18 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = (**(code **)(*(long *)*puVar2 + 0x10))((long *)*puVar2,uVar18 << 4,8);
      if (lVar15 == 0) {
        (**(code **)(*(long *)*puVar2 + 0xb8))();
      }
    }
    puVar21 = (undefined8 *)(lVar15 + lVar14 * 0x10);
    FUN_02a57008(puVar2,puVar21,&local_78);
    puVar7 = PTR_DAT_04379528;
    puVar6 = PTR_DAT_04379520;
    plVar22 = *(long **)(param_1 + 0x2a0);
    plVar19 = *(long **)(param_1 + 0x2a8);
    puVar5 = puVar21;
    if (plVar19 == plVar22) {
      puVar17 = puVar21;
      plVar19 = plVar22;
    }
    else {
      do {
        puVar17 = puVar5 + -2;
        uVar20 = *puVar2;
        plVar19 = plVar19 + -2;
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          FUN_008a62a4(puVar7);
          FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)puVar7);
        if (lVar14 == 0) {
          *puVar17 = 0;
          puVar5[-1] = 0;
          FUN_008802f0(puVar17,plVar19);
        }
        else {
          if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          *(undefined8 *)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = uVar20;
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
          *puVar17 = 0;
          puVar5[-1] = 0;
          FUN_008802f0(puVar17,plVar19);
          *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
        }
        puVar5 = puVar17;
      } while (plVar22 != plVar19);
      plVar22 = *(long **)(param_1 + 0x2a0);
      plVar19 = *(long **)(param_1 + 0x2a8);
    }
    lVar14 = *(long *)(param_1 + 0x2b0);
    *(undefined8 **)(param_1 + 0x2a0) = puVar17;
    *(undefined8 **)(param_1 + 0x2a8) = puVar21 + 2;
    *(ulong *)(param_1 + 0x2b0) = lVar15 + uVar18 * 0x10;
    puVar9 = PTR_LAB_04379590;
    puVar8 = PTR_DAT_043794a8;
    puVar7 = PTR_DAT_043794a0;
    puVar6 = PTR_DAT_04379498;
    if (plVar19 != plVar22) {
      plVar19 = plVar19 + -2;
      puVar21 = (undefined8 *)*plVar19;
      while( true ) {
        if (puVar21 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar21 + 1);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            puVar21[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar15 = *(long *)puVar7;
            *(long *)puVar8 = lVar15;
            local_68 = *puVar21;
            FUN_02a44274(lVar15 + 0xd8,&local_68);
          }
        }
        if (plVar19 == plVar22) break;
        plVar19 = plVar19 + -2;
        puVar21 = (undefined8 *)*plVar19;
      }
    }
    puVar21 = local_78;
    if (plVar22 != (long *)0x0) {
      plVar19 = (long *)*puVar2;
      lVar14 = lVar14 - (long)plVar22;
      uVar13 = (**(code **)(*plVar19 + 0xc0))(plVar19);
      if ((uVar13 & 1) != 0) {
        lVar15 = tpidr_el0;
        if (*(char *)(lVar15 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar15 + 0x38d488) = 1;
          *(undefined8 *)(lVar15 + 0x38d478) = 0;
          *(undefined8 *)(lVar15 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar15 + 0x80078,&PTR_LOOP_0411a000);
        }
        if (0 < *(int *)(lVar15 + 0x38d480)) {
          FUN_02bcc824(plVar19,plVar22,lVar14,8);
          puVar21 = local_78;
          goto joined_r0x02a5358c;
        }
      }
      (**(code **)(*plVar19 + 0x18))(plVar19,plVar22,lVar14,8);
      puVar21 = local_78;
    }
  }
joined_r0x02a5358c:
  local_78 = puVar21;
  if (puVar21 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar21 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      puVar21[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar21;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  puVar2 = local_88;
  if (local_88 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_88 + 1);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      local_88[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar2;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if (cVar11 != '\0') {
    puVar10[2] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)puVar10 + 4));
  }
  return;
}


