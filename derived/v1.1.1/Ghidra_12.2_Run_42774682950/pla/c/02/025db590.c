/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025db590; name: FUN_025db590
 */


void FUN_025db590(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  long *local_38;
  undefined4 local_30;
  long *local_28;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379558), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar7 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar7;
  plVar12 = *(long **)(lVar7 + 0x228);
  if (plVar12 == (long *)0x0) {
    return;
  }
  lVar7 = plVar12[0xb];
  if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar7 + 0x10) == 0) {
    uVar6 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
    *(undefined8 *)(lVar7 + 0x10) = uVar6;
  }
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = *piVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar8 = ((long *)plVar12[0x3b])[1];
  if (uVar8 != 0) {
    uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      uVar10 = uVar8 - 1 & 0xa7fe86f2385f9860;
    }
    else {
      uVar10 = 0xa7fe86f2385f9860;
      if (uVar8 < 0xa7fe86f2385f9861) {
        uVar10 = 0;
        if (uVar8 != 0) {
          uVar10 = 0xa7fe86f2385f9860 / uVar8;
        }
        uVar10 = 0xa7fe86f2385f9860 - uVar10 * uVar8;
      }
    }
    plVar11 = *(long **)(*(long *)plVar12[0x3b] + uVar10 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if (plVar11[1] == 0xa7fe86f2385f9860) {
            if (plVar11[2] == -0x5801790dc7a067a0) goto LAB_025db6a4;
          }
          else if ((plVar11[1] & uVar8 - 1) != uVar10) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar9 = plVar11[1];
          if (uVar9 == 0xa7fe86f2385f9860) {
            if (plVar11[2] == -0x5801790dc7a067a0) goto LAB_025db6a4;
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
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
LAB_025db760:
  lVar7 = plVar12[0xb];
  piVar1 = (int *)(lVar7 + 0xc);
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 + -1 == 0) {
    *(undefined8 *)(lVar7 + 0x18) = 0;
    (**(code **)(*plVar12 + 0x20))(plVar12);
  }
  return;
LAB_025db6a4:
  if ((int)plVar11[3] != 0) {
    local_50 = 0x385f9860;
    uStack_4c = 0xa7fe86f2;
    uStack_48 = 0x3928abf;
    uStack_44 = 0;
    local_40 = 0x17;
    local_38 = (long *)0x0;
    FUN_010f4ab0(plVar12,&local_50,0);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x20))();
    }
    if (((*PTR_DAT_04379690 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04379690), iVar5 != 0)) {
      FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379690);
    }
    lVar7 = *(long *)PTR_DAT_04379698;
    *(long *)PTR_DAT_043796a0 = lVar7;
    if ((lVar7 != 0) && (FUN_0286b878(&local_28), local_28 != (long *)0x0)) {
      uStack_4c = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_38 = (long *)0x0;
      local_30 = 0;
      local_50 = CONCAT31(local_50._1_3_,9);
      FUN_01468dd0(local_28,&local_50);
      if (local_28 != (long *)0x0) {
        lVar7 = local_28[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar5 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar5 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_28 + 0x20))();
        }
      }
    }
  }
  goto LAB_025db760;
}


