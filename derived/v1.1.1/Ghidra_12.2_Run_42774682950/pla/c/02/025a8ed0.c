/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a8ed0; name: FUN_025a8ed0
 */


void FUN_025a8ed0(long param_1,uint param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  
  uVar11 = *(ulong *)(param_1 + 0x140);
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar15 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar12 = (ulong)param_2;
    if (uVar15 < 2) {
      uVar13 = (ulong)((int)uVar11 - 1U & param_2);
    }
    else {
      uVar13 = uVar12;
      if (uVar11 <= uVar12) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar12 / uVar11;
        }
        uVar13 = uVar12 - uVar13 * uVar11;
      }
    }
    plVar14 = *(long **)(*(long *)(param_1 + 0x138) + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar15 < 2) {
        do {
          if (plVar14[1] == uVar12) {
            if (*(uint *)(plVar14 + 2) == param_2) goto LAB_025a8fa0;
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar15 = plVar14[1];
          if (uVar15 == uVar12) {
            if (*(uint *)(plVar14 + 2) == param_2) goto LAB_025a8fa0;
          }
          else {
            if (uVar11 <= uVar15) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar15 / uVar11;
              }
              uVar15 = uVar15 - uVar4 * uVar11;
            }
            if (uVar15 != uVar13) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
  FUN_025ab7f0();
LAB_025a912c:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_025a8fa0:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_025a912c;
    if (*(long *)(lVar16 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
      *(undefined8 *)(lVar16 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar9 = (undefined8 *)(**(code **)plVar14[10])(plVar14 + 10);
  if (((*PTR_DAT_04381ae8 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04381ae8), puVar6 = PTR_DAT_0437ef00, iVar7 != 0)) {
    if (((*PTR_DAT_0437eef8 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_0437eef8), puVar5 = PTR_DAT_043794d8, iVar7 != 0)) {
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar7 != 0)) {
        uVar8 = FUN_0087f8f0();
        *(undefined8 *)puVar5 = uVar8;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      *(undefined **)puVar6 = puVar5;
      __cxa_guard_release(PTR_DAT_0437eef8);
    }
    *(undefined **)PTR_DAT_04381af0 = puVar6;
    __cxa_guard_release(PTR_DAT_04381ae8);
  }
  if (puVar9 == (undefined8 *)0x0) {
    plVar10 = (long *)0x0;
  }
  else {
    do {
      if (puVar9 == (undefined8 *)PTR_DAT_04381af0) {
        plVar10 = plVar14;
        break;
      }
      puVar9 = (undefined8 *)*puVar9;
      plVar10 = (long *)0x0;
    } while (puVar9 != (undefined8 *)0x0);
  }
  FUN_025aafcc(plVar10,param_3);
  if (plVar14 != (long *)0x0) {
    lVar16 = plVar14[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
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
      *(undefined8 *)(lVar16 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x025a907c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar14 + 0x20))(plVar14);
      return;
    }
  }
  return;
}


