/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e536c; name: FUN_017e536c
 */


uint FUN_017e536c(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  long local_58;
  
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar12 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar12;
  if (lVar12 == 0) {
    return 6;
  }
  plVar14 = *(long **)(lVar12 + 0xd0);
  if (plVar14 == (long *)0x0) {
    return 6;
  }
  plVar1 = plVar14 + 10;
  do {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
    plVar14 = (long *)plVar14[0xb];
  }
  else {
    plVar14 = (long *)plVar14[0xb];
  }
  if (plVar14 == (long *)0x0) {
    return 6;
  }
  plVar1 = plVar14 + 10;
  do {
    cVar4 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar6) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379690), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar12 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar12;
  plVar15 = *(long **)(*(long *)(lVar12 + 0x50) + 0x30);
  if (plVar15 != (long *)0x0) {
    lVar12 = plVar15[0xb];
    if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) goto LAB_017e5868;
    if (*(long *)(lVar12 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
      *(undefined8 *)(lVar12 + 0x10) = uVar10;
    }
    piVar2 = (int *)(lVar12 + 0xc);
    do {
      cVar4 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  lVar12 = FUN_01467f18(plVar15[0x99],"ItemChangeView");
  if (lVar12 == 0) {
LAB_017e5868:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  lVar13 = *(long *)(lVar12 + 0x630);
  bVar6 = lVar13 == *(long *)(lVar12 + 0x638);
  if (bVar6) {
    uVar16 = 0;
  }
  else {
    uVar16 = *(uint *)(lVar13 + (ulong)*(uint *)(lVar12 + 0x6fc) * 8);
  }
  lVar12 = plVar15[0xb];
  piVar2 = (int *)(lVar12 + 0xc);
  do {
    iVar9 = *piVar2;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar5) {
      *piVar2 = iVar9 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
  uVar8 = 0;
  if (!bVar6) {
    uVar8 = uVar16;
  }
  puVar3 = param_2 + 4;
  uVar16 = uVar8 - 6;
  if ((int)uVar8 < 6) {
    uVar16 = uVar8;
  }
  uVar7 = FUN_02c58424(plVar14);
  if ((((uVar7 <= uVar16) || (lVar12 = (**(code **)(*plVar14 + 0x58))(plVar14,uVar16), lVar12 == 0))
      || (uVar11 = FUN_02c62900(lVar12,2), (uVar11 & 1) != 0)) ||
     (((code *)*param_2 != (code *)0x0 &&
      (local_58 = lVar12, uVar11 = (*(code *)*param_2)(puVar3,&local_58), (uVar11 & 1) != 0)))) {
    iVar9 = -5;
    if (uVar8 - 4 == 0 || (int)uVar8 < 4) {
      iVar9 = 1;
    }
    uVar16 = iVar9 + uVar8;
    uVar7 = FUN_02c58424(plVar14);
    if (((uVar7 <= uVar16) || (lVar12 = (**(code **)(*plVar14 + 0x58))(plVar14,uVar16), lVar12 == 0)
        ) || ((uVar11 = FUN_02c62900(lVar12,2), (uVar11 & 1) != 0 ||
              (((code *)*param_2 != (code *)0x0 &&
               (local_58 = lVar12, uVar11 = (*(code *)*param_2)(puVar3,&local_58), (uVar11 & 1) != 0
               )))))) {
      uVar16 = uVar8 - 4;
      if ((int)(uVar8 + 2) < 6) {
        uVar16 = uVar8 + 2;
      }
      uVar7 = FUN_02c58424(plVar14);
      if ((((uVar7 <= uVar16) ||
           (lVar12 = (**(code **)(*plVar14 + 0x58))(plVar14,uVar16), lVar12 == 0)) ||
          (uVar11 = FUN_02c62900(lVar12,2), (uVar11 & 1) != 0)) ||
         (((code *)*param_2 != (code *)0x0 &&
          (local_58 = lVar12, uVar11 = (*(code *)*param_2)(puVar3,&local_58), (uVar11 & 1) != 0))))
      {
        uVar16 = uVar8 - 3;
        if ((int)(uVar8 + 3) < 6) {
          uVar16 = uVar8 + 3;
        }
        uVar7 = FUN_02c58424(plVar14);
        if (((uVar7 <= uVar16) ||
            (lVar12 = (**(code **)(*plVar14 + 0x58))(plVar14,uVar16), lVar12 == 0)) ||
           ((uVar11 = FUN_02c62900(lVar12,2), (uVar11 & 1) != 0 ||
            (((code *)*param_2 != (code *)0x0 &&
             (local_58 = lVar12, uVar11 = (*(code *)*param_2)(puVar3,&local_58), (uVar11 & 1) != 0))
            )))) {
          uVar16 = uVar8 - 2;
          if ((int)(uVar8 + 4) < 6) {
            uVar16 = uVar8 + 4;
          }
          uVar7 = FUN_02c58424(plVar14);
          if ((((uVar7 <= uVar16) ||
               (lVar12 = (**(code **)(*plVar14 + 0x58))(plVar14,uVar16), lVar12 == 0)) ||
              (uVar11 = FUN_02c62900(lVar12,2), (uVar11 & 1) != 0)) ||
             (((code *)*param_2 != (code *)0x0 &&
              (local_58 = lVar12, uVar11 = (*(code *)*param_2)(puVar3,&local_58), (uVar11 & 1) != 0)
              ))) {
            iVar9 = 5;
            if (0 < (int)uVar8) {
              iVar9 = -1;
            }
            uVar16 = iVar9 + uVar8;
            uVar8 = FUN_02c58424(plVar14);
            if (((uVar8 <= uVar16) ||
                (lVar12 = (**(code **)(*plVar14 + 0x58))(plVar14,uVar16), lVar12 == 0)) ||
               ((uVar11 = FUN_02c62900(lVar12,2), (uVar11 & 1) != 0 ||
                (((code *)*param_2 != (code *)0x0 &&
                 (local_58 = lVar12, uVar11 = (*(code *)*param_2)(puVar3,&local_58),
                 (uVar11 & 1) != 0)))))) {
              bVar6 = false;
              goto LAB_017e5548;
            }
          }
        }
      }
    }
  }
  (**(code **)(*plVar14 + 0x50))(plVar14,uVar16);
  bVar6 = true;
LAB_017e5548:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar9;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar14 + 0x10))(plVar14);
  }
  if (bVar6) {
    return uVar16;
  }
  return 6;
}


