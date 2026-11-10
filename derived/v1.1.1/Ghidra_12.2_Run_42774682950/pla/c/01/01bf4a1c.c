/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf4a1c; name: FUN_01bf4a1c
 */


void FUN_01bf4a1c(long param_1)

{
  code *pcVar1;
  int *piVar2;
  bool bVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0 [12];
  undefined8 local_48;
  
  FUN_01a50850(&local_d0);
  pcVar4 = local_d0;
  puVar6 = PTR_DAT_0437a408;
  puVar5 = PTR_DAT_0437a400;
  if (local_d0 == (code *)0x0) {
    return;
  }
  if (*(int *)(local_d0 + 0xc) != 0) {
    pcVar1 = local_d0 + 0xc;
    iVar9 = *(int *)(local_d0 + 0xc);
    do {
      plVar14 = *(long **)(pcVar4 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
        uVar10 = FUN_009cdcc0();
        *(undefined8 *)puVar6 = uVar10;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_01bf4af4;
        if (plVar14 == (long *)puVar6) break;
        plVar14 = (long *)*plVar14;
      }
      iVar8 = *(int *)pcVar1;
      if (iVar8 == iVar9) {
        cVar7 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar3) {
          *(int *)pcVar1 = iVar9 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 == '\0') {
          lVar12 = *(long *)(pcVar4 + 0x18);
          plVar14 = (long *)0x0;
          pcVar4 = local_d0;
          if (lVar12 != 0) {
            plVar14 = (long *)(lVar12 + -0x50);
          }
          goto joined_r0x01bf4b18;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar9 = iVar8;
    } while (iVar8 != 0);
  }
LAB_01bf4af4:
  plVar14 = (long *)0x0;
  pcVar4 = local_d0;
joined_r0x01bf4b18:
  if (pcVar4 != (code *)0x0) {
    pcVar1 = pcVar4 + 8;
    do {
      iVar9 = *(int *)pcVar1;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar3) {
        *(int *)pcVar1 = iVar9 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(pcVar4 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_48 = *(undefined8 *)pcVar4;
      FUN_02a44274(lVar12 + 0xd8,&local_48);
    }
  }
  if (plVar14 == (long *)0x0) {
    return;
  }
  local_d0 = (code *)0x81ae8d593ebeebdf;
  local_c8 = (code *)0x391f591;
  local_c0 = (undefined1 *)0x9;
  puStack_b8 = (undefined1 *)0x0;
  uVar11 = FUN_028dcc5c(plVar14,&local_d0);
  local_d0 = FUN_01bfc564;
  local_c8 = FUN_01bfc600;
  uVar11 = uVar11 >> 0x20;
  local_c0 = &LAB_01bfc604;
  puStack_b8 = &LAB_01bfc610;
  if (*(int *)(param_1 + 0xe9c) == 2) {
    local_b0[0] = (undefined1 *)&local_d0;
    lVar12 = nn::os::GetCurrentThread();
    plVar13 = plVar14 + 0xf;
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x6c));
          while (*plVar13 == 0) {
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01bf4cf0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01bf4cf0:
    if ((ulong)(plVar14[0x15] - plVar14[0x14] >> 5) <= uVar11) {
LAB_01bf4dec:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    plVar13 = *(long **)(plVar14[0x14] + uVar11 * 0x20);
    plVar14[0xf] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x6c));
    local_48 = (**(code **)(*plVar13 + 0x70))(plVar13);
    uVar11 = (*local_d0)(local_b0,&local_48);
    pcVar4 = local_c8;
    if ((uVar11 & 1) != 0) goto joined_r0x01bf4d50;
  }
  else {
    pcVar4 = local_c8;
    local_b0[0] = (undefined1 *)&local_d0;
    if (*(int *)(param_1 + 0xe9c) != 1) goto joined_r0x01bf4d50;
    local_b0[0] = (undefined1 *)&local_d0;
    lVar12 = nn::os::GetCurrentThread();
    plVar13 = plVar14 + 0xf;
    do {
      if (*plVar13 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x6c));
          while (*plVar13 == 0) {
            cVar7 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
            if (bVar3) {
              *plVar13 = lVar12;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_01bf4c5c;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar3) {
        *plVar13 = lVar12;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
LAB_01bf4c5c:
    if ((ulong)(plVar14[0x15] - plVar14[0x14] >> 5) <= uVar11) goto LAB_01bf4dec;
    plVar13 = *(long **)(plVar14[0x14] + uVar11 * 0x20);
    plVar14[0xf] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x6c));
    local_48 = (**(code **)(*plVar13 + 0x70))(plVar13);
    uVar11 = (*local_d0)(local_b0,&local_48);
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0xe9c) = 2;
      pcVar4 = local_c8;
      goto joined_r0x01bf4d50;
    }
    cVar7 = FUN_01a50dc8(param_1,param_1 + 0xe80);
    pcVar4 = local_c8;
    if (cVar7 != '\0') goto joined_r0x01bf4d50;
  }
  *(undefined4 *)(param_1 + 0xe9c) = 0;
  pcVar4 = local_c8;
joined_r0x01bf4d50:
  local_c8 = pcVar4;
  if (pcVar4 != (code *)0x0) {
    local_c0 = (undefined1 *)0x0;
    puStack_b8 = (undefined1 *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    (*pcVar4)(local_b0);
  }
  lVar12 = plVar14[0xb];
  piVar2 = (int *)(lVar12 + 0xc);
  do {
    iVar9 = *piVar2;
    cVar7 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar3) {
      *piVar2 = iVar9 + -1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar14 + 0x20))(plVar14);
  }
  return;
}


