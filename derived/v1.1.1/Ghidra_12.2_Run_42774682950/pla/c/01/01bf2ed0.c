/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf2ed0; name: FUN_01bf2ed0
 */


uint FUN_01bf2ed0(undefined8 param_1)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0 [13];
  undefined8 local_48;
  
  uVar11 = FUN_01a5a7e4();
  if ((uVar11 & 1) != 0) {
    FUN_01a50850(&local_d0,param_1);
    pcVar5 = local_d0;
    puVar7 = PTR_DAT_0437a408;
    puVar6 = PTR_DAT_0437a400;
    uVar9 = 0;
    if (local_d0 == (code *)0x0) goto LAB_01bf3070;
    if (*(int *)(local_d0 + 0xc) != 0) {
      pcVar1 = local_d0 + 0xc;
      iVar10 = *(int *)(local_d0 + 0xc);
      do {
        plVar15 = *(long **)(pcVar5 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar12 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar12;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar15 == (long *)0x0) goto LAB_01bf2f94;
          if (plVar15 == (long *)puVar7) break;
          plVar15 = (long *)*plVar15;
        }
        iVar8 = *(int *)pcVar1;
        if (iVar8 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(int *)pcVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar13 = *(long *)(pcVar5 + 0x18);
            plVar15 = (long *)0x0;
            pcVar5 = local_d0;
            if (lVar13 != 0) {
              plVar15 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x01bf2fb8;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01bf2f94:
    plVar15 = (long *)0x0;
    pcVar5 = local_d0;
joined_r0x01bf2fb8:
    if (pcVar5 != (code *)0x0) {
      pcVar1 = pcVar5 + 8;
      do {
        iVar10 = *(int *)pcVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
        if (bVar4) {
          *(int *)pcVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(pcVar5 + 0x10) = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *(undefined8 *)pcVar5;
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
    if (plVar15 != (long *)0x0) {
      local_d0 = thunk_FUN_01bfbee4;
      local_c8 = FUN_01bfbee0;
      local_c0 = &LAB_01bfbfac;
      puStack_b8 = &LAB_01bfbfb8;
      local_b0[0] = (undefined1 *)&local_d0;
      lVar13 = nn::os::GetCurrentThread();
      plVar14 = plVar15 + 0xf;
      do {
        if (*plVar14 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar15 + 0x6c));
            while (*plVar14 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
              if (bVar4) {
                *plVar14 = lVar13;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01bf30b4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *plVar14 = lVar13;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01bf30b4:
      if ((undefined8 *)plVar15[0x15] == (undefined8 *)plVar15[0x14]) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar14 = *(long **)plVar15[0x14];
      plVar15[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar15 + 0x6c));
      local_48 = (**(code **)(*plVar14 + 0x70))(plVar14);
      uVar9 = (*local_d0)(local_b0,&local_48);
      pcVar5 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (code *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar5)(local_b0);
      }
      lVar13 = plVar15[0xb];
      piVar2 = (int *)(lVar13 + 0xc);
      do {
        iVar10 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      goto LAB_01bf3070;
    }
  }
  uVar9 = 0;
LAB_01bf3070:
  return uVar9 & 1;
}


