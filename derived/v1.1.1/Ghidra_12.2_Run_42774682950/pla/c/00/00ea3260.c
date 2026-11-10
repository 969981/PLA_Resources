/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea3260; name: FUN_00ea3260
 */


undefined1 * FUN_00ea3260(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined1 *puVar14;
  
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar14 = &DAT_cbf29ce484222645;
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar8 = *(ulong *)(lVar10 + 0x60);
  if (uVar8 == 0) {
    return puVar14;
  }
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar7 = *param_1;
  uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  if (uVar9 < 2) {
    uVar12 = uVar8 - 1 & uVar7;
  }
  else if (uVar7 < uVar8) {
    uVar12 = uVar7;
  }
  else {
    uVar12 = 0;
    if (uVar8 != 0) {
      uVar12 = uVar7 / uVar8;
    }
    uVar12 = uVar7 - uVar12 * uVar8;
  }
  plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar12 * 8);
  if (plVar11 == (long *)0x0) {
    return puVar14;
  }
  plVar11 = (long *)*plVar11;
  if (plVar11 == (long *)0x0) {
    return puVar14;
  }
  if (uVar9 < 2) {
    do {
      if (plVar11[1] == uVar7) {
        if (plVar11[2] == uVar7) goto LAB_00ea332c;
      }
      else if ((plVar11[1] & uVar8 - 1) != uVar12) {
        return puVar14;
      }
      plVar11 = (long *)*plVar11;
      if (plVar11 == (long *)0x0) {
        return puVar14;
      }
    } while( true );
  }
  do {
    uVar9 = plVar11[1];
    if (uVar9 == uVar7) {
      if (plVar11[2] == uVar7) goto LAB_00ea332c;
    }
    else {
      if (uVar8 <= uVar9) {
        uVar5 = 0;
        if (uVar8 != 0) {
          uVar5 = uVar9 / uVar8;
        }
        uVar9 = uVar9 - uVar5 * uVar8;
      }
      if (uVar9 != uVar12) {
        return puVar14;
      }
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      return puVar14;
    }
  } while( true );
LAB_00ea3460:
  puVar2 = (undefined8 *)PTR_DAT_04379c88;
  if (plVar13[6] != 0) {
    puVar2 = (undefined8 *)(plVar13[6] + 0x58);
  }
  puVar14 = (undefined1 *)*puVar2;
  goto LAB_00ea347c;
LAB_00ea332c:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) {
    return puVar14;
  }
  plVar1 = plVar11 + 10;
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar8 = plVar11[0x48];
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar7 = *param_2;
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar12 = uVar8 - 1 & uVar7;
    }
    else if (uVar7 < uVar8) {
      uVar12 = uVar7;
    }
    else {
      uVar12 = 0;
      if (uVar8 != 0) {
        uVar12 = uVar7 / uVar8;
      }
      uVar12 = uVar7 - uVar12 * uVar8;
    }
    plVar13 = *(long **)(plVar11[0x47] + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar13[1] == uVar7) {
            if (plVar13[2] == uVar7) goto LAB_00ea3460;
          }
          else if ((plVar13[1] & uVar8 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar13[1];
          if (uVar9 == uVar7) {
            if (plVar13[2] == uVar7) goto LAB_00ea3460;
          }
          else {
            if (uVar8 <= uVar9) {
              uVar5 = 0;
              if (uVar8 != 0) {
                uVar5 = uVar9 / uVar8;
              }
              uVar9 = uVar9 - uVar5 * uVar8;
            }
            if (uVar9 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_00ea347c:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar6;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
  return puVar14;
}


