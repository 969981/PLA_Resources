/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00bf702c; name: FUN_00bf702c
 */


void FUN_00bf702c(undefined8 *param_1,long param_2,ulong param_3,undefined1 *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong extraout_x1;
  ulong extraout_x8;
  ulong uVar10;
  ulong extraout_x9;
  ulong uVar11;
  ulong uVar12;
  ulong extraout_x10;
  long *plVar13;
  long *extraout_x11;
  ulong uVar14;
  ulong extraout_x12;
  long lVar15;
  
  if ((param_4 == &DAT_cbf29ce484222645) || (param_4 == (undefined1 *)0xae652fb65c121b9b)) {
    *param_1 = 0;
  }
  else {
    uVar10 = *(ulong *)(param_2 + 0x70);
    if (uVar10 == 0) goto LAB_00bf72c4;
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar14 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar11 = param_3 & 0xffffffff;
    if (uVar14 < 2) {
      uVar12 = (int)uVar10 - 1 & uVar11;
    }
    else {
      uVar12 = uVar11;
      if (uVar10 <= uVar11) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar11 / uVar10;
        }
        uVar12 = uVar11 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x68) + uVar12 * 8);
    if (plVar13 == (long *)0x0) goto LAB_00bf72c4;
    plVar13 = (long *)*plVar13;
    if (plVar13 == (long *)0x0) goto LAB_00bf72c4;
    if (uVar14 < 2) {
      do {
        if (plVar13[1] == uVar11) {
          if ((int)plVar13[2] == (int)param_3) goto LAB_00bf711c;
        }
        else if ((plVar13[1] & uVar10 - 1) != uVar12) goto LAB_00bf72c4;
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_00bf72c4;
      } while( true );
    }
    while( true ) {
      uVar14 = plVar13[1];
      if (uVar14 != uVar11) {
        if (uVar10 <= uVar14) goto LAB_00bf72c8;
        goto LAB_00bf72b4;
      }
      if ((int)plVar13[2] == (int)param_3) break;
      while (plVar13 = (long *)*plVar13, plVar13 == (long *)0x0) {
LAB_00bf72c4:
        do {
          FUN_00bf7520();
          param_3 = extraout_x1;
          uVar11 = extraout_x8;
          uVar10 = extraout_x9;
          uVar12 = extraout_x10;
          plVar13 = extraout_x11;
          uVar14 = extraout_x12;
LAB_00bf72c8:
          uVar4 = 0;
          if (uVar10 != 0) {
            uVar4 = uVar14 / uVar10;
          }
          uVar14 = uVar14 - uVar4 * uVar10;
LAB_00bf72b4:
        } while (uVar14 != uVar12);
      }
    }
LAB_00bf711c:
    plVar13 = (long *)plVar13[3];
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar15 + 0x10) == 0) {
        uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        *(undefined8 *)(lVar15 + 0x10) = uVar8;
      }
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar9 = (long *)(**(code **)plVar13[10])(plVar13 + 10);
    if (((*PTR_DAT_0437b000 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b000), puVar6 = PTR_DAT_0437b018, iVar7 != 0)) {
      if (((*PTR_DAT_0437b010 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_0437b010), puVar5 = PTR_DAT_043794d8, iVar7 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
          uVar8 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar8;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar6 = puVar5;
        __cxa_guard_release(PTR_DAT_0437b010);
      }
      *(undefined **)PTR_DAT_0437b008 = puVar6;
      __cxa_guard_release(PTR_DAT_0437b000);
    }
    for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
      if (plVar9 == (long *)PTR_DAT_0437b008) {
        iVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
        if (0 < iVar7) {
          FUN_00bf73a4(param_1,plVar13,param_4);
          goto joined_r0x00bf71bc;
        }
        break;
      }
    }
    *param_1 = 0;
joined_r0x00bf71bc:
    if (plVar13 != (long *)0x0) {
      lVar15 = plVar13[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
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
        *(undefined8 *)(lVar15 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00bf7200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x20))(plVar13);
        return;
      }
    }
  }
  return;
}


