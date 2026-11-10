/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c411c; name: FUN_025c411c
 */


void FUN_025c411c(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined5 uStack_70;
  undefined3 local_6b;
  undefined5 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  undefined8 local_38;
  
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_025c5e60(&local_90);
  plVar5 = local_90;
  if (local_90 == (long *)0x0) {
    return;
  }
  uVar8 = 0;
  if (*(ulong **)(param_2 + 8) != (ulong *)0x0) {
    uVar8 = **(ulong **)(param_2 + 8);
  }
  uVar10 = *(ulong *)(param_1 + 0x1268);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & uVar8;
    }
    else {
      uVar12 = uVar8;
      if (uVar10 <= uVar8) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = uVar8 / uVar10;
        }
        uVar12 = uVar8 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x1260) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_025c422c;
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == uVar8) {
            if (plVar13[2] == uVar8) goto LAB_025c422c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar4 = 0;
              if (uVar10 != 0) {
                uVar4 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar4 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
LAB_025c41cc:
  lVar9 = plVar5[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
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
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
LAB_025c422c:
  local_78 = plVar13[9];
  local_88 = plVar13[7];
  local_90 = (long *)plVar13[6];
  local_80 = plVar13[8];
  uStack_68 = (undefined5)((ulong)*(undefined8 *)((long)plVar13 + 0x55) >> 0x18);
  uStack_70 = (undefined5)plVar13[10];
  local_6b = (undefined3)((ulong)plVar13[10] >> 0x28);
  local_60 = (undefined8 *)0x0;
  uStack_58 = 0;
  FUN_01ead384(&local_60,plVar13 + 0xc);
  local_48 = plVar13[0xf];
  local_50 = plVar13[0xe];
  local_38 = 0;
  if (*(undefined8 **)(param_2 + 8) != (undefined8 *)0x0) {
    local_38 = **(undefined8 **)(param_2 + 8);
  }
  FUN_025c60c0((long *)(param_1 + 0x1260),&local_38);
  puVar6 = local_60;
  if (local_60 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_60 + 1);
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
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_38 = *puVar6;
      FUN_02a44274(lVar9 + 0xd8,&local_38);
    }
  }
  goto LAB_025c41cc;
}


