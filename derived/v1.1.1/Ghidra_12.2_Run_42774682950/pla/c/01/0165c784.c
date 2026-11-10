/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0165c784; name: FUN_0165c784
 */


void FUN_0165c784(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 local_68;
  
  lVar9 = nn::os::GetCurrentThread();
  plVar14 = (long *)(param_1 + 0x78);
  do {
    if (*plVar14 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x6c));
        while (*plVar14 == 0) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
          if (bVar4) {
            *plVar14 = lVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0165c7f4;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar4) {
      *plVar14 = lVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0165c7f4:
  uVar10 = *(ulong *)(param_1 + 0x88);
  puVar1 = (undefined8 *)(param_1 + 0x98);
  if (uVar10 < *(ulong *)(param_1 + 0x90)) {
    FUN_0165cfac(puVar1,uVar10,param_2);
    *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 0x40;
  }
  else {
    uVar13 = *(ulong *)(param_1 + 0xa0);
    lVar9 = (long)(uVar10 - *(long *)(param_1 + 0x80)) >> 6;
    uVar10 = lVar9 + 1;
    if (0x7ffffffffffffffe < uVar13) {
      uVar13 = 0x7fffffffffffffff;
    }
    if (uVar13 < uVar10) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar11 = *(ulong *)(param_1 + 0x90) - *(long *)(param_1 + 0x80);
    uVar12 = lVar11 >> 5;
    if (uVar10 <= uVar12) {
      uVar10 = uVar12;
    }
    if ((ulong)(lVar11 >> 6) < uVar13 >> 1) {
      uVar13 = uVar10;
    }
    if (uVar13 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = (**(code **)(*(long *)*puVar1 + 0x10))((long *)*puVar1,uVar13 << 6,8);
      if (lVar11 == 0) {
        (**(code **)(*(long *)*puVar1 + 0xb8))();
      }
    }
    lVar16 = lVar11 + lVar9 * 0x40;
    FUN_0165cfac(puVar1,lVar16,param_2);
    lVar15 = *(long *)(param_1 + 0x80);
    lVar18 = *(long *)(param_1 + 0x88);
    lVar9 = lVar16 + 0x40;
    if (lVar18 == lVar15) {
      lVar18 = lVar15;
    }
    else {
      do {
        lVar16 = lVar16 + -0x40;
        lVar18 = lVar18 + -0x40;
        FUN_0165cfac(puVar1,lVar16,lVar18);
      } while (lVar15 != lVar18);
      lVar15 = *(long *)(param_1 + 0x80);
      lVar18 = *(long *)(param_1 + 0x88);
    }
    lVar19 = *(long *)(param_1 + 0x90);
    *(ulong *)(param_1 + 0x90) = lVar11 + uVar13 * 0x40;
    *(long *)(param_1 + 0x80) = lVar16;
    *(long *)(param_1 + 0x88) = lVar9;
    puVar7 = PTR_LAB_04379590;
    puVar6 = PTR_DAT_043794a8;
    puVar5 = PTR_DAT_04379498;
    if (lVar18 != lVar15) {
      plVar14 = (long *)PTR_DAT_043794a0;
      do {
        puVar17 = *(undefined8 **)(lVar18 + -0x18);
        lVar18 = lVar18 + -0x40;
        if (puVar17 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar17 + 1);
          do {
            iVar8 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 == 0) {
            puVar17[2] = 0;
            if (((*puVar5 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(puVar5), plVar14 = (long *)PTR_DAT_043794a0, iVar8 != 0)
               ) {
              FUN_00100250(puVar7,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar5);
              plVar14 = (long *)PTR_DAT_043794a0;
            }
            lVar9 = *plVar14;
            *(long *)puVar6 = lVar9;
            local_68 = *puVar17;
            FUN_02a44274(lVar9 + 0xd8,&local_68);
          }
        }
      } while (lVar18 != lVar15);
    }
    if (lVar15 != 0) {
      plVar14 = (long *)*puVar1;
      lVar19 = lVar19 - lVar15;
      uVar10 = FUN_02bcc75c(plVar14);
      if ((uVar10 & 1) == 0) {
        (**(code **)(*plVar14 + 0x18))(plVar14,lVar15,lVar19,8);
      }
      else {
        FUN_02bcc824(plVar14,lVar15,lVar19,8);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x6c));
  return;
}


