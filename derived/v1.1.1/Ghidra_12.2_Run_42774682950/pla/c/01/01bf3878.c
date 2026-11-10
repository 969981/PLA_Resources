/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf3878; name: FUN_01bf3878
 */


uint FUN_01bf3878(void)

{
  code *pcVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  code *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  undefined1 *local_b0 [13];
  undefined8 local_48;
  
  FUN_01a50850(&local_d0);
  pcVar5 = local_d0;
  puVar7 = PTR_DAT_0437a408;
  puVar6 = PTR_DAT_0437a400;
  uVar8 = 0;
  if (local_d0 != (code *)0x0) {
    if (*(int *)(local_d0 + 0xc) != 0) {
      pcVar1 = local_d0 + 0xc;
      iVar10 = *(int *)(local_d0 + 0xc);
      do {
        plVar14 = *(long **)(pcVar5 + 0x10);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          uVar11 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar11;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01bf3aac;
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar9 = *(int *)pcVar1;
        if (iVar9 == iVar10) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
          if (bVar4) {
            *(int *)pcVar1 = iVar10 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar12 = *(long *)(pcVar5 + 0x18);
            plVar14 = (long *)0x0;
            pcVar5 = local_d0;
            if (lVar12 != 0) {
              plVar14 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x01bf392c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_01bf3aac:
    plVar14 = (long *)0x0;
    pcVar5 = local_d0;
joined_r0x01bf392c:
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
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_48 = *(undefined8 *)pcVar5;
        FUN_02a44274(lVar12 + 0xd8,&local_48);
      }
    }
    if (plVar14 == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      local_d0 = FUN_01bfc0b0;
      local_c8 = FUN_01bfc180;
      local_c0 = &LAB_01bfc184;
      puStack_b8 = &LAB_01bfc190;
      local_b0[0] = (undefined1 *)&local_d0;
      lVar12 = nn::os::GetCurrentThread();
      plVar13 = plVar14 + 0xf;
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x6c));
            while (*plVar13 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar4) {
                *plVar13 = lVar12;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01bf3a08;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar12;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01bf3a08:
      if ((undefined8 *)plVar14[0x15] == (undefined8 *)plVar14[0x14]) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar13 = *(long **)plVar14[0x14];
      plVar14[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x6c));
      local_48 = (**(code **)(*plVar13 + 0x70))(plVar13);
      uVar8 = (*local_d0)(local_b0,&local_48);
      pcVar5 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (code *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar5)(local_b0);
      }
      lVar12 = plVar14[0xb];
      piVar2 = (int *)(lVar12 + 0xc);
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
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
      }
    }
  }
  return uVar8 & 1;
}


