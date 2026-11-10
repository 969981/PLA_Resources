/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018b9bdc; name: FUN_018b9bdc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_018b9bdc(long *param_1,long param_2)

{
  int *piVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *extraout_x11;
  long *plVar16;
  undefined8 *local_48 [2];
  long *local_38;
  undefined8 local_28;
  
  FUN_018b39c0(local_48);
  if (local_48[0] == (undefined8 *)0x0) {
    local_38 = (long *)0x0;
    lVar12 = _DAT_00000070;
    puVar7 = local_48[0];
  }
  else {
    FUN_018bacec(&local_38);
    lVar12 = local_38[0xe];
    puVar7 = local_48[0];
    if (local_38 != (long *)0x0) {
      lVar10 = local_38[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar8 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_38 + 0x20))();
        puVar7 = local_48[0];
      }
    }
  }
  if (puVar7 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar7 + 1);
    do {
      iVar8 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar8 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 + -1 == 0) {
      puVar7[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *puVar7;
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  puVar2 = (ulong *)PTR_DAT_04379c88;
  if (*(long *)(param_2 + 0x68) != 0) {
    puVar2 = (ulong *)(*(long *)(param_2 + 0x68) + 0x58);
  }
  uVar11 = *(ulong *)(lVar12 + 0xe0);
  if (uVar11 != 0) {
    uVar13 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar9 = *puVar2;
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar11 - 1 & uVar9;
    }
    else if (uVar9 < uVar11) {
      uVar14 = uVar9;
    }
    else {
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = uVar9 / uVar11;
      }
      uVar14 = uVar9 - uVar14 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar12 + 0xd8) + uVar14 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar13 < 2) {
        do {
          if (plVar15[1] == uVar9) {
            if (plVar15[2] == uVar9) goto LAB_018b9d80;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar14) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar13 = plVar15[1];
          if (uVar13 == uVar9) {
            if (plVar15[2] == uVar9) goto LAB_018b9d80;
          }
          else {
            if (uVar11 <= uVar13) {
              uVar6 = 0;
              if (uVar11 != 0) {
                uVar6 = uVar13 / uVar11;
              }
              uVar13 = uVar13 - uVar6 * uVar11;
            }
            if (uVar13 != uVar14) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  FUN_018bae60();
  plVar15 = extraout_x11;
LAB_018b9d80:
  plVar16 = (long *)plVar15[5];
  plVar15 = (long *)PTR_DAT_04379c88;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    plVar15 = plVar16 + 0xb;
  }
  plVar3 = (long *)PTR_PTR_04379d00;
  if (plVar16 != (long *)0x0) {
    plVar3 = plVar16 + 0xc;
  }
  lVar12 = *plVar3;
  if (plVar16 == (long *)0x0) {
    lVar10 = 0;
  }
  else {
    lVar10 = plVar16[0xd];
  }
  *param_1 = *plVar15;
  param_1[1] = lVar12;
  param_1[2] = lVar10;
  param_1[3] = 0;
  if (plVar16 == (long *)0x0) {
    param_1[3] = 0;
  }
  else {
    (**(code **)(*plVar16 + 0x18))(plVar16);
    param_1[3] = (long)plVar16;
    (**(code **)(*plVar16 + 0x20))(plVar16);
  }
  return;
}


