/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d33564; name: FUN_01d33564
 */


ulong * FUN_01d33564(undefined8 *param_1,ulong *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *local_48 [2];
  long *local_38;
  undefined8 local_28;
  
  if ((undefined1 *)*param_1 != &DAT_cbf29ce484222645) goto LAB_01d33704;
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e654fc(local_48);
  if (local_48[0] == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
  }
  else {
    FUN_01523304(&local_38);
    if (local_48[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48[0] + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_48[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_28 = *local_48[0];
        FUN_02a44274(lVar8 + 0xd8,&local_28);
      }
    }
  }
  if (local_38 == (long *)0x0) goto LAB_01d33704;
  uVar9 = local_38[0x45];
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar9 - 1 & uVar7;
    }
    else if (uVar7 < uVar9) {
      uVar11 = uVar7;
    }
    else {
      uVar11 = 0;
      if (uVar9 != 0) {
        uVar11 = uVar7 / uVar9;
      }
      uVar11 = uVar7 - uVar11 * uVar9;
    }
    plVar12 = *(long **)(local_38[0x44] + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_01d336dc;
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) goto LAB_01d3368c;
          plVar12 = (long *)*plVar12;
          bVar4 = false;
        } while (plVar12 != (long *)0x0);
        goto LAB_01d336e4;
      }
      do {
        uVar10 = plVar12[1];
        if (uVar10 == uVar7) {
          if (plVar12[2] == uVar7) goto LAB_01d336dc;
        }
        else {
          if (uVar9 <= uVar10) {
            uVar5 = 0;
            if (uVar9 != 0) {
              uVar5 = uVar10 / uVar9;
            }
            uVar10 = uVar10 - uVar5 * uVar9;
          }
          if (uVar10 != uVar11) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
LAB_01d3368c:
  bVar4 = false;
  goto LAB_01d336e4;
LAB_01d336dc:
  param_2 = (ulong *)plVar12[3];
  bVar4 = true;
LAB_01d336e4:
  lVar8 = local_38[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar6 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar6 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 + -1 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_38 + 0x20))();
  }
  if (bVar4) {
    return param_2;
  }
LAB_01d33704:
  return (ulong *)*param_1;
}


