/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5a538; name: FUN_01a5a538
 */


undefined4 FUN_01a5a538(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_60);
  puVar4 = local_60[0];
  puVar6 = PTR_DAT_0437a408;
  puVar5 = PTR_DAT_0437a400;
  if (local_60[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar7 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar14 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01a5a770;
          if (plVar14 == (long *)puVar6) break;
          plVar14 = (long *)*plVar14;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar4[3];
            plVar14 = (long *)0x0;
            puVar4 = local_60[0];
            if (lVar11 != 0) {
              plVar14 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01a5a5fc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a5a770:
    plVar14 = (long *)0x0;
    puVar4 = local_60[0];
joined_r0x01a5a5fc:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar14 != (long *)0x0) {
      lVar11 = nn::os::GetCurrentThread();
      plVar13 = plVar14 + 0xf;
      do {
        if (*plVar13 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar14 + 0x6c));
            while (*plVar13 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar3) {
                *plVar13 = lVar11;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01a5a6a4;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01a5a6a4:
      if ((undefined8 *)plVar14[0x15] == (undefined8 *)plVar14[0x14]) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar13 = *(long **)plVar14[0x14];
      plVar14[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x6c));
      plVar13 = (long *)(**(code **)(*plVar13 + 0x70))(plVar13);
      lVar11 = *(long *)(param_1 + 0x650);
      iVar7 = (**(code **)(*plVar13 + 0x20))();
      uVar12 = 0;
      if (iVar7 != 0) {
        iVar8 = 0;
        do {
          plVar9 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar8);
          if (lVar11 == *plVar9) {
            uVar12 = 1;
            goto LAB_01a5a734;
          }
          iVar8 = iVar8 + 1;
        } while (iVar7 != iVar8);
        uVar12 = 0;
      }
LAB_01a5a734:
      lVar11 = plVar14[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
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
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        return uVar12;
      }
      return uVar12;
    }
  }
  return 0;
}


