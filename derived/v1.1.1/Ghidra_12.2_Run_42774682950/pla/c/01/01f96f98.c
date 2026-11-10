/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f96f98; name: FUN_01f96f98
 */


void FUN_01f96f98(undefined8 *param_1,long param_2,uint param_3,undefined1 *param_4)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  
  if ((param_4 == &DAT_cbf29ce484222645) || (param_4 == (undefined1 *)0xae652fb65c121b9b)) {
    *param_1 = 0;
    return;
  }
  uVar10 = *(ulong *)(param_2 + 0x70);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar14 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar11 = (ulong)param_3;
    if (uVar14 < 2) {
      uVar12 = (ulong)((int)uVar10 - 1U & param_3);
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
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar14 < 2) {
        do {
          if (plVar13[1] == uVar11) {
            if (*(uint *)(plVar13 + 2) == param_3) goto LAB_01f970bc;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar14 = plVar13[1];
          if (uVar14 == uVar11) {
            if (*(uint *)(plVar13 + 2) == param_3) goto LAB_01f970bc;
          }
          else {
            if (uVar10 <= uVar14) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar14 / uVar10;
              }
              uVar14 = uVar14 - uVar4 * uVar10;
            }
            if (uVar14 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  FUN_01f9a210();
LAB_01f97250:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_01f970bc:
  plVar13 = (long *)plVar13[3];
  if (plVar13 != (long *)0x0) {
    lVar15 = plVar13[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_01f97250;
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
  if (((*PTR_DAT_04381c48 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04381c48), puVar6 = PTR_DAT_0437b018, iVar7 != 0)) {
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
    *(undefined **)PTR_DAT_04381c50 = puVar6;
    __cxa_guard_release(PTR_DAT_04381c48);
  }
  do {
    if (plVar9 == (long *)0x0) {
LAB_01f971ac:
      *param_1 = 0;
joined_r0x01f9715c:
      if (plVar13 == (long *)0x0) {
        return;
      }
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
                    /* WARNING: Could not recover jumptable at 0x01f971a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar13 + 0x20))(plVar13);
        return;
      }
      return;
    }
    if (plVar9 == (long *)PTR_DAT_04381c50) {
      iVar7 = (**(code **)(*plVar13 + 0x48))(plVar13);
      if (0 < iVar7) {
        FUN_01f9a21c(param_1,plVar13,param_4);
        goto joined_r0x01f9715c;
      }
      goto LAB_01f971ac;
    }
    plVar9 = (long *)*plVar9;
  } while( true );
}


