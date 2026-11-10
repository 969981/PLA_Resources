/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea51f8; name: FUN_00ea51f8
 */


uint FUN_00ea51f8(ulong *param_1,undefined8 param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar11 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar11;
  uVar8 = *(ulong *)(lVar11 + 0x60);
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_1;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar10 = uVar7;
    }
    else {
      uVar10 = 0;
      if (uVar8 != 0) {
        uVar10 = uVar7 / uVar8;
      }
      uVar10 = uVar7 - uVar10 * uVar8;
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + uVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_00ea52bc;
          }
          else if ((plVar12[1] & uVar8 - 1) != uVar10) goto LAB_00ea532c;
          plVar12 = (long *)*plVar12;
          uVar5 = 0;
        } while (plVar12 != (long *)0x0);
        goto LAB_00ea52f8;
      }
      do {
        uVar9 = plVar12[1];
        if (uVar9 == uVar7) {
          if (plVar12[2] == uVar7) goto LAB_00ea52bc;
        }
        else {
          if (uVar8 <= uVar9) {
            uVar4 = 0;
            if (uVar8 != 0) {
              uVar4 = uVar9 / uVar8;
            }
            uVar9 = uVar9 - uVar4 * uVar8;
          }
          if (uVar9 != uVar10) break;
        }
        plVar12 = (long *)*plVar12;
      } while (plVar12 != (long *)0x0);
    }
  }
LAB_00ea532c:
  uVar5 = 0;
LAB_00ea52f8:
  return uVar5 & 1;
LAB_00ea52bc:
  plVar12 = (long *)plVar12[3];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = FUN_00d794a4(plVar12,param_2);
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = iVar6;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
    goto LAB_00ea52f8;
  }
  goto LAB_00ea532c;
}


