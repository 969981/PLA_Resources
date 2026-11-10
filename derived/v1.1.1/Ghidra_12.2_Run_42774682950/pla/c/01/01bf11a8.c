/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf11a8; name: FUN_01bf11a8
 */


bool FUN_01bf11a8(long param_1)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_60);
  puVar5 = local_60[0];
  puVar7 = PTR_DAT_0437a408;
  puVar6 = PTR_DAT_0437a400;
  if (local_60[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar9 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar14 = (long *)puVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar7 = uVar10;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_01bf13ac;
          if (plVar14 == (long *)puVar7) break;
          plVar14 = (long *)*plVar14;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar9) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = puVar5[3];
            plVar14 = (long *)0x0;
            puVar5 = local_60[0];
            if (lVar11 != 0) {
              plVar14 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01bf126c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01bf13ac:
    plVar14 = (long *)0x0;
    puVar5 = local_60[0];
joined_r0x01bf126c:
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar14 != (long *)0x0) {
      uVar2 = *(uint *)(param_1 + 0x1274);
      lVar11 = nn::os::GetCurrentThread();
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
                *plVar13 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01bf1318;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar4) {
          *plVar13 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01bf1318:
      if ((ulong)(plVar14[0x15] - plVar14[0x14] >> 5) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar13 = *(long **)(plVar14[0x14] + (ulong)uVar2 * 0x20);
      plVar14[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar14 + 0x6c));
      plVar13 = (long *)(**(code **)(*plVar13 + 0x70))(plVar13);
      plVar13 = (long *)(**(code **)(*plVar13 + 0x18))();
      lVar11 = *plVar13;
      lVar12 = plVar14[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar9 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar14 + 0x20))(plVar14);
        return lVar11 != 0x5f14a3492e9ca818;
      }
      return lVar11 != 0x5f14a3492e9ca818;
    }
  }
  return false;
}


