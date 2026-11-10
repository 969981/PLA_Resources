/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce47e4; name: FUN_00ce47e4
 */


void FUN_00ce47e4(long *param_1,long param_2,long *param_3,ulong *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  
  lVar8 = nn::os::GetCurrentThread();
  plVar15 = (long *)(param_2 + 0x78);
  do {
    if (*plVar15 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(param_2 + 0x6c));
        while (*plVar15 == 0) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar3) {
            *plVar15 = lVar8;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') goto LAB_00ce485c;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar3) {
      *plVar15 = lVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_00ce485c:
  puVar5 = PTR_DAT_0437b0f8;
  uVar12 = *(ulong *)(param_2 + 0x88);
  if (uVar12 != 0) {
    uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar10 = *param_4;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar12 - 1 & uVar10;
    }
    else if (uVar10 < uVar12) {
      uVar14 = uVar10;
    }
    else {
      uVar14 = 0;
      if (uVar12 != 0) {
        uVar14 = uVar10 / uVar12;
      }
      uVar14 = uVar10 - uVar14 * uVar12;
    }
    plVar15 = *(long **)(*(long *)(param_2 + 0x80) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_00ce4cd4;
          }
          else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_00ce4cd4;
          }
          else {
            if (uVar12 <= uVar13) {
              uVar4 = 0;
              if (uVar12 != 0) {
                uVar4 = uVar13 / uVar12;
              }
              uVar13 = uVar13 - uVar4 * uVar12;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto LAB_00ce48b8;
LAB_00ce4cd4:
  lVar8 = plVar15[3];
  if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
    piVar1 = (int *)(lVar8 + 0xc);
    iVar6 = *(int *)(lVar8 + 0xc);
    do {
      plVar16 = *(long **)(lVar8 + 0x10);
      if (((*PTR_DAT_0437b0f0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b0f0), iVar7 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar9 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar9;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_0437b0f0);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_00ce4cdc;
        if (plVar16 == (long *)puVar5) break;
        plVar16 = (long *)*plVar16;
      }
      iVar7 = *piVar1;
      if (iVar7 == iVar6) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar11 = *(long *)(lVar8 + 0x18);
          lVar8 = 0;
          if (lVar11 != 0) {
            lVar8 = lVar11 + -0x50;
          }
          *param_1 = lVar8;
          if (lVar11 != 0) {
            *(undefined8 *)(param_2 + 0x78) = 0;
            nn::os::SignalLightEvent((LightEventType *)(param_2 + 0x6c));
            return;
          }
          goto LAB_00ce4ce4;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar6 = iVar7;
    } while (iVar7 != 0);
  }
LAB_00ce4cdc:
  *param_1 = 0;
LAB_00ce4ce4:
  FUN_00ce5f7c((long *)(param_2 + 0x80),plVar15);
LAB_00ce48b8:
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_3;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar8 = (**(code **)(*param_3 + 0x10))(param_3,0xf0,8);
  if (lVar8 == 0) {
    (**(code **)(*param_3 + 0xb8))(param_3);
                    /* WARNING: Subroutine does not return */
    FUN_008a93d8(0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8();
}


