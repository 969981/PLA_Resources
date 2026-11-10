/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5c658; name: FUN_01a5c658
 */


byte FUN_01a5c658(long param_1)

{
  long *plVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  ulong uVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  undefined8 *local_60 [2];
  long *local_50;
  undefined8 local_48;
  
  uVar11 = *(ulong *)(param_1 + 0x7a0);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & 0x55f25a9984884243;
    }
    else if (uVar11 < 0x55f25a9984884244) {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = 0x55f25a9984884243 / uVar11;
      }
      uVar13 = 0x55f25a9984884243 - uVar13 * uVar11;
    }
    else {
      uVar13 = 0x55f25a9984884243;
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x798) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == 0x55f25a9984884243) {
            if (plVar14[2] == 0x55f25a9984884243) goto LAB_01a5c780;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) goto LAB_01a5c72c;
          plVar14 = (long *)*plVar14;
          bVar10 = 0;
          bVar7 = false;
        } while (plVar14 != (long *)0x0);
        goto LAB_01a5c85c;
      }
      do {
        uVar12 = plVar14[1];
        if (uVar12 == 0x55f25a9984884243) {
          if (plVar14[2] == 0x55f25a9984884243) goto LAB_01a5c780;
        }
        else {
          if (uVar11 <= uVar12) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar12 / uVar11;
            }
            uVar12 = uVar12 - uVar5 * uVar11;
          }
          if (uVar12 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
  goto LAB_01a5c72c;
LAB_01a5c780:
  FUN_01a55fe8(local_60);
  if (local_60[0] == (undefined8 *)0x0) {
    local_50 = (long *)0x0;
    plVar6 = local_50;
  }
  else {
    FUN_00bbaa24(&local_50);
    plVar6 = local_50;
    if (local_60[0] != (undefined8 *)0x0) {
      piVar2 = (int *)(local_60[0] + 1);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar7) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_48 = *local_60[0];
        FUN_02a44274(lVar9 + 0xd8,&local_48);
        plVar6 = local_50;
      }
    }
  }
  if (plVar6 != (long *)0x0) {
    local_50 = plVar6;
    lVar9 = nn::os::GetCurrentThread();
    plVar1 = plVar6 + 0x6c;
    do {
      if (*plVar1 != 0) {
        ClearExclusiveLocal();
        do {
          nn::os::WaitLightEvent((LightEventType *)((long)plVar6 + 0x354));
          while (*plVar1 == 0) {
            cVar4 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar7) {
              *plVar1 = lVar9;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') goto LAB_01a5c7e8;
          }
          ClearExclusiveLocal();
        } while( true );
      }
      cVar4 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *plVar1 = lVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
LAB_01a5c7e8:
    if ((ulong)((plVar6[0x1d] - plVar6[0x1c] >> 4) * -0x5555555555555555) <=
        (ulong)*(uint *)((long)plVar14 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    bVar7 = *(char *)(plVar6[0x1c] + (ulong)*(uint *)((long)plVar14 + 0x1c) * 0x30 + 0x28) != '\0';
    plVar6[0x6c] = 0;
    nn::os::SignalLightEvent((LightEventType *)((long)plVar6 + 0x354));
    if (local_50 != (long *)0x0) {
      lVar9 = local_50[0xb];
      piVar2 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar2;
        cVar4 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar3) {
          *piVar2 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    bVar10 = 1;
    goto LAB_01a5c85c;
  }
LAB_01a5c72c:
  bVar10 = 0;
  bVar7 = false;
LAB_01a5c85c:
  return bVar10 & bVar7;
}


