/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5aa90; name: FUN_01a5aa90
 */


undefined4 FUN_01a5aa90(long param_1)

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
  long *plVar11;
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
      iVar8 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar14 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01a5ab70;
          if (plVar14 == (long *)puVar6) break;
          plVar14 = (long *)*plVar14;
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
            plVar14 = (long *)0x0;
            puVar4 = local_60[0];
            if (lVar10 != 0) {
              plVar14 = (long *)(lVar10 + -0x50);
            }
            goto joined_r0x01a5ab94;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_01a5ab70:
    plVar14 = (long *)0x0;
    puVar4 = local_60[0];
joined_r0x01a5ab94:
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
    if (plVar14 != (long *)0x0) {
      lVar10 = nn::os::GetCurrentThread();
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
                *plVar13 = lVar10;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') goto LAB_01a5ac3c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *plVar13 = lVar10;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
LAB_01a5ac3c:
      if ((undefined8 *)plVar14[0x15] == (undefined8 *)plVar14[0x14]) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar13 = *(long **)plVar14[0x14];
      plVar14[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x6c));
      plVar13 = (long *)(**(code **)(*plVar13 + 0x70))(plVar13);
      lVar10 = *(long *)(param_1 + 0x280);
      iVar8 = (**(code **)(*plVar13 + 0x20))();
      uVar12 = 0;
      if (iVar8 != 0) {
        iVar7 = 0;
        do {
          plVar11 = (long *)(**(code **)(*plVar13 + 0x28))(plVar13,iVar7);
          if (lVar10 == *plVar11) {
            uVar12 = 1;
            goto LAB_01a5accc;
          }
          iVar7 = iVar7 + 1;
        } while (iVar8 != iVar7);
        uVar12 = 0;
      }
LAB_01a5accc:
      lVar10 = plVar14[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
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
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        return uVar12;
      }
      return uVar12;
    }
  }
  return 0;
}


