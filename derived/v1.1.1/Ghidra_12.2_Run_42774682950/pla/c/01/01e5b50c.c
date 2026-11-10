/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e5b50c; name: FUN_01e5b50c
 */


void FUN_01e5b50c(undefined8 *param_1,long param_2,ulong *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined8 local_18;
  
  uVar9 = *(ulong *)(*(long *)(param_2 + 0xd0) + 0x160);
  if (uVar9 != 0) {
    uVar10 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar7 = *param_3;
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
    plVar12 = *(long **)(*(long *)(*(long *)(param_2 + 0xd0) + 0x158) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar7) {
            if (plVar12[2] == uVar7) {
LAB_01e5b5a8:
              local_30 = (undefined8 *)0x0;
              uStack_28 = 0;
              FUN_008802f0(&local_30,plVar12[6] + 0x58);
              *param_1 = 0;
              param_1[1] = 0;
              FUN_0186453c(param_1,&local_30);
              puVar5 = local_30;
              if (local_30 == (undefined8 *)0x0) {
                return;
              }
              piVar1 = (int *)(local_30 + 1);
              do {
                iVar6 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar6 + -1 != 0) {
                return;
              }
              local_30[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar8 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar8;
              local_18 = *puVar5;
              FUN_02a44274(lVar8 + 0xd8,&local_18);
              return;
            }
          }
          else if ((plVar12[1] & uVar9 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar7) {
            if (plVar12[2] == uVar7) goto LAB_01e5b5a8;
          }
          else {
            if (uVar9 <= uVar10) {
              uVar4 = 0;
              if (uVar9 != 0) {
                uVar4 = uVar10 / uVar9;
              }
              uVar10 = uVar10 - uVar4 * uVar9;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


