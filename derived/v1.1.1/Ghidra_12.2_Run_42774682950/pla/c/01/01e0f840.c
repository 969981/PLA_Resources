/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e0f840; name: FUN_01e0f840
 */


void FUN_01e0f840(undefined8 *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *extraout_x10;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  uVar7 = *(ulong *)(param_2 + 0x70);
  if (uVar7 != 0) {
    uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar7 - 1 & param_3;
    }
    else {
      uVar9 = param_3;
      if (uVar7 <= param_3) {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = param_3 / uVar7;
        }
        uVar9 = param_3 - uVar9 * uVar7;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x68) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == param_3) {
            if (plVar11[2] == param_3) goto LAB_01e0f948;
          }
          else if ((plVar11[1] & uVar7 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == param_3) {
            if (plVar11[2] == param_3) goto LAB_01e0f948;
          }
          else {
            if (uVar7 <= uVar8) {
              uVar5 = 0;
              if (uVar7 != 0) {
                uVar5 = uVar8 / uVar7;
              }
              uVar8 = uVar8 - uVar5 * uVar7;
            }
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  FUN_01e10130();
  plVar11 = extraout_x10;
LAB_01e0f948:
  plVar2 = (long *)0x0;
  if (plVar11[3] != 0) {
    plVar2 = (long *)(plVar11[3] + 0x68);
  }
  (**(code **)(*plVar2 + 0x20))(local_38,plVar2);
  *param_1 = 0;
  param_1[1] = 0;
  FUN_01800100(param_1,local_38);
  if (local_38[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_38[0] + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_38[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar10;
      local_28 = *local_38[0];
      FUN_02a44274(lVar10 + 0xd8,&local_28);
    }
  }
  param_1[2] = plVar2;
  return;
}


