/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf34a0; name: FUN_01bf34a0
 */


/* WARNING: Type propagation algorithm not settling */

bool FUN_01bf34a0(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *local_58 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_58);
  puVar4 = local_58[0];
  puVar6 = PTR_DAT_0437a408;
  puVar5 = PTR_DAT_0437a400;
  if (local_58[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_58[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_58[0] + 0xc);
      iVar8 = *(int *)((long)local_58[0] + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01bf36d0;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar10 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_58[0];
            if (lVar10 != 0) {
              plVar13 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x01bf3554;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01bf36d0:
    plVar13 = (long *)0x0;
    puVar4 = local_58[0];
joined_r0x01bf3554:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar10 = nn::os::GetCurrentThread();
      plVar12 = plVar13 + 0xf;
      do {
        if (*plVar12 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x6c));
            while (*plVar12 == 0) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar3) {
                *plVar12 = lVar10;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01bf35fc;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *plVar12 = lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01bf35fc:
      if ((undefined8 *)plVar13[0x15] == (undefined8 *)plVar13[0x14]) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar12 = *(long **)plVar13[0x14];
      plVar13[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x6c));
      plVar12 = (long *)(**(code **)(*plVar12 + 0x70))(plVar12);
      plVar12 = (long *)(**(code **)(*plVar12 + 0x38))();
      plVar12 = (long *)(**(code **)(*plVar12 + 0x10))();
      lVar10 = *plVar12;
      plVar12 = (long *)plVar12[3];
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x18))(plVar12);
        (**(code **)(*plVar12 + 0x20))(plVar12);
      }
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      return lVar10 == -0x4fe243c656556de5;
    }
  }
  return false;
}


