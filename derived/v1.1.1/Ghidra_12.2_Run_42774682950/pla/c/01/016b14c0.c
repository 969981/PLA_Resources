/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 016b14c0; name: FUN_016b14c0
 */


void FUN_016b14c0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  bool bVar17;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  puVar4 = PTR_DAT_04379678;
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  puVar6 = PTR_DAT_04379688;
  puVar5 = PTR_DAT_04379680;
  lVar10 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar10;
  plVar8 = *(long **)(lVar10 + 0x100);
  if (plVar8 != (long *)0x0) {
    plVar15 = plVar8 + 10;
    do {
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar17) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar15 = (long *)plVar8[0x21];
  if (plVar15 != (long *)0x0) {
    plVar14 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar17) {
        *(int *)plVar14 = (int)*plVar14 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar14 = plVar8 + 10;
  do {
    iVar7 = (int)*plVar14 + -1;
    cVar2 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar14,0x10);
    if (bVar17) {
      *(int *)plVar14 = iVar7;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar8 + 0x10))();
    plVar8 = (long *)*param_2;
    if (plVar8 == (long *)0x0) goto LAB_016b1790;
LAB_016b1568:
    uVar16 = plVar8[0xb];
  }
  else {
    plVar8 = (long *)*param_2;
    if (plVar8 != (long *)0x0) goto LAB_016b1568;
LAB_016b1790:
    uVar16 = *(ulong *)PTR_DAT_04379c88;
  }
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))(plVar8);
  }
  uVar11 = plVar15[0x12];
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar16;
    }
    else if (uVar16 < uVar11) {
      uVar13 = uVar16;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar16 / uVar11;
      }
      uVar13 = uVar16 - uVar13 * uVar11;
    }
    plVar14 = *(long **)(plVar15[0x11] + uVar13 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar14[1] == uVar16) {
            if (plVar14[2] == uVar16) {
              bVar17 = true;
              break;
            }
          }
          else if ((plVar14[1] & uVar11 - 1) != uVar13) goto LAB_016b162c;
          plVar14 = (long *)*plVar14;
          bVar17 = false;
        } while (plVar14 != (long *)0x0);
        goto joined_r0x016b1818;
      }
      do {
        uVar12 = plVar14[1];
        if (uVar12 == uVar16) {
          if (plVar14[2] == uVar16) {
            bVar17 = true;
            goto joined_r0x016b1818;
          }
        }
        else {
          if (uVar11 <= uVar12) {
            uVar3 = 0;
            if (uVar11 != 0) {
              uVar3 = uVar12 / uVar11;
            }
            uVar12 = uVar12 - uVar3 * uVar11;
          }
          if (uVar12 != uVar13) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_016b162c:
  bVar17 = false;
joined_r0x016b1818:
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8);
  }
  if (bVar17) {
    if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379678), iVar7 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar10 = *(long *)puVar5;
    *(long *)puVar6 = lVar10;
    plVar8 = *(long **)(lVar10 + 200);
    if (plVar8 == (long *)0x0) {
      FUN_016b1918(local_70,0,param_2);
    }
    else {
      lVar10 = plVar8[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar17) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      FUN_016b1918(local_70,plVar8,param_2);
      lVar10 = plVar8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar17) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))(plVar8);
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    FUN_016b378c(param_1,local_70);
    if (local_70[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_70[0] + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar17) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_70[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_58 = *local_70[0];
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if (plVar15 != (long *)0x0) {
    plVar8 = plVar15 + 10;
    do {
      iVar7 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar17) {
        *(int *)plVar8 = iVar7;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  return;
}


