/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a58c48; name: FUN_01a58c48
 */


undefined * FUN_01a58c48(undefined8 param_1,long param_2)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  FUN_01a50850(local_60);
  puVar5 = local_60[0];
  puVar6 = PTR_DAT_0437a408;
  puVar9 = PTR_DAT_0437a400;
  if (local_60[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar7 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar13 = (long *)puVar5[2];
        if (((*puVar9 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar9), iVar8 != 0)) {
          uVar10 = FUN_009cdcc0();
          *(undefined8 *)puVar6 = uVar10;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_01a58e98;
          if (plVar13 == (long *)puVar6) break;
          plVar13 = (long *)*plVar13;
        }
        iVar8 = *piVar1;
        if (iVar8 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = puVar5[3];
            plVar13 = (long *)0x0;
            puVar5 = local_60[0];
            if (lVar11 != 0) {
              plVar13 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x01a58d60;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar8;
      } while (iVar8 != 0);
    }
LAB_01a58e98:
    plVar13 = (long *)0x0;
    puVar5 = local_60[0];
joined_r0x01a58d60:
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar5;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
    if (plVar13 != (long *)0x0) {
      uVar2 = *(uint *)(param_2 + 4);
      lVar11 = nn::os::GetCurrentThread();
      plVar12 = plVar13 + 0xf;
      do {
        if (*plVar12 != 0) {
          ClearExclusiveLocal();
          do {
            nn::os::WaitLightEvent((LightEventType *)((long)plVar13 + 0x6c));
            while (*plVar12 == 0) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
              if (bVar4) {
                *plVar12 = lVar11;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') goto LAB_01a58e0c;
            }
            ClearExclusiveLocal();
          } while( true );
        }
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar4) {
          *plVar12 = lVar11;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
LAB_01a58e0c:
      if ((ulong)(plVar13[0x15] - plVar13[0x14] >> 5) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      plVar12 = *(long **)(plVar13[0x14] + (ulong)uVar2 * 0x20);
      plVar13[0xf] = 0;
      nn::os::SignalLightEvent((LightEventType *)((long)plVar13 + 0x6c));
      plVar12 = (long *)(**(code **)(*plVar12 + 0x70))(plVar12);
      puVar9 = (undefined *)(**(code **)(*plVar12 + 0x18))();
      lVar11 = plVar13[0xb];
      piVar1 = (int *)(lVar11 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar11 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
        return puVar9;
      }
      return puVar9;
    }
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), puVar9 = PTR_DAT_0437a0d8, iVar7 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  else {
    puVar9 = PTR_DAT_0437a0d8;
  }
  return puVar9;
}


