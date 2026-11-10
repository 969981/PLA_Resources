/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd97f0; name: FUN_01cd97f0
 */


void FUN_01cd97f0(long *param_1,long *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  if (param_1 == param_2) {
    return;
  }
  lVar18 = *param_1;
joined_r0x01cd9854:
  if ((lVar18 != 0) && (uVar13 = FUN_00ad7820(lVar18 + 8), (uVar13 & 1) != 0)) {
    (**(code **)(*(long *)(lVar18 + -0x48) + 0x10))(local_78);
    local_88 = (ulong *)0x0;
    uStack_80 = 0;
    FUN_01cd6ab8(&local_88,local_78);
    puVar11 = local_78[0];
    if (local_78[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_78[0] + 1);
      do {
        iVar12 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar12 + -1 == 0) {
        local_78[0][2] = 0;
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar6);
        }
        lVar18 = *(long *)puVar7;
        *(long *)puVar8 = lVar18;
        local_68 = *puVar11;
        FUN_02a44274(lVar18 + 0xd8,&local_68);
      }
    }
    puVar10 = local_88;
    if (local_88 == (ulong *)0x0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *local_88;
    }
    lVar18 = *(long *)*param_3;
    uVar14 = *(ulong *)(lVar18 + 0x88);
    if (uVar14 != 0) {
      uVar15 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar14 - 1 & uVar13;
      }
      else {
        uVar16 = uVar13;
        if (uVar14 <= uVar13) {
          uVar16 = 0;
          if (uVar14 != 0) {
            uVar16 = uVar13 / uVar14;
          }
          uVar16 = uVar13 - uVar16 * uVar14;
        }
      }
      plVar17 = *(long **)(*(long *)(lVar18 + 0x80) + uVar16 * 8);
      if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar17[1] == uVar13) {
              if (plVar17[2] == uVar13) goto LAB_01cd99c4;
            }
            else if ((plVar17[1] & uVar14 - 1) != uVar16) break;
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar17[1];
            if (uVar15 == uVar13) {
              if (plVar17[2] == uVar13) goto LAB_01cd99c4;
            }
            else {
              if (uVar14 <= uVar15) {
                uVar5 = 0;
                if (uVar14 != 0) {
                  uVar5 = uVar15 / uVar14;
                }
                uVar15 = uVar15 - uVar5 * uVar14;
              }
              if (uVar15 != uVar16) break;
            }
            plVar17 = (long *)*plVar17;
          } while (plVar17 != (long *)0x0);
        }
      }
    }
    goto LAB_01cd99d0;
  }
  goto LAB_01cd9878;
LAB_01cd99c4:
  *(int *)(lVar18 + 0x6c) = *(int *)(lVar18 + 0x6c) + 1;
LAB_01cd99d0:
  if (local_88 != (ulong *)0x0) {
    puVar2 = local_88 + 1;
    do {
      iVar12 = (int)*puVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar4) {
        *(int *)puVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      local_88[2] = 0;
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
        FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar6);
      }
      lVar18 = *(long *)puVar7;
      *(long *)puVar8 = lVar18;
      local_78[0] = (undefined8 *)*puVar10;
      FUN_02a44274(lVar18 + 0xd8,local_78);
    }
  }
LAB_01cd9878:
  param_1 = param_1 + 1;
  if (param_1 == param_2) {
    return;
  }
  lVar18 = *param_1;
  goto joined_r0x01cd9854;
}


