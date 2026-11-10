/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bd60e0; name: FUN_02bd60e0
 */


void FUN_02bd60e0(undefined8 *param_1,long param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 local_98 [3];
  ulong local_80;
  undefined8 *local_78 [2];
  long *local_68;
  
  uVar10 = *(ulong *)(param_2 + 0x110);
  local_80 = param_4;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & param_4;
    }
    else {
      uVar12 = param_4;
      if (uVar10 <= param_4) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = param_4 / uVar10;
        }
        uVar12 = param_4 - uVar12 * uVar10;
      }
    }
    plVar13 = *(long **)(*(long *)(param_2 + 0x108) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar13[1] == param_4) {
            if (plVar13[2] == param_4) {
LAB_02bd6494:
              plVar13 = (long *)FUN_02bdfce8(*(undefined8 *)(param_2 + 8),&local_80,param_5,param_6,
                                             param_7);
              local_68 = plVar13;
              if (plVar13 != (long *)0x0) {
                lVar8 = plVar13[0xb];
                if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  nn::diag::detail::AbortImpl("","","",0);
                }
                if (*(long *)(lVar8 + 0x10) == 0) {
                  uVar9 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
                  *(undefined8 *)(lVar8 + 0x10) = uVar9;
                }
                piVar1 = (int *)(lVar8 + 0xc);
                do {
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = *piVar1 + 1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
              }
              FUN_02bdc3c0(param_2 + 0x160,&local_68);
              *(undefined1 *)(param_2 + 0x260) = 1;
              plVar2 = (long *)0x0;
              if (plVar13 != (long *)0x0) {
                plVar2 = plVar13 + 0xd;
              }
              (**(code **)(*plVar2 + 0x20))(local_78,plVar2);
              *param_1 = 0;
              param_1[1] = 0;
              FUN_01800100(param_1,local_78);
              if (local_78[0] != (undefined8 *)0x0) {
                piVar1 = (int *)(local_78[0] + 1);
                do {
                  iVar7 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 + -1 == 0) {
                  local_78[0][2] = 0;
                  if (((*PTR_DAT_04379498 & 1) == 0) &&
                     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                    __cxa_guard_release(PTR_DAT_04379498);
                  }
                  lVar8 = *(long *)PTR_DAT_043794a0;
                  *(long *)PTR_DAT_043794a8 = lVar8;
                  local_98[0] = *local_78[0];
                  FUN_02a44274(lVar8 + 0xd8,local_98);
                }
              }
              param_1[2] = plVar2;
              if (plVar13 != (long *)0x0) {
                lVar8 = plVar13[0xb];
                piVar1 = (int *)(lVar8 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar3 = '\x01';
                  bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar4) {
                    *piVar1 = iVar7 + -1;
                    cVar3 = ExclusiveMonitorsStatus();
                  }
                } while (cVar3 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar8 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))(plVar13);
                }
              }
              return;
            }
          }
          else if ((plVar13[1] & uVar10 - 1) != uVar12) break;
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar13[1];
          if (uVar11 == param_4) {
            if (plVar13[2] == param_4) goto LAB_02bd6494;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar13 = (long *)*plVar13;
        } while (plVar13 != (long *)0x0);
      }
    }
  }
  plVar13 = *(long **)(param_2 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar13;
  *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
  lVar8 = (**(code **)(*plVar13 + 0x10))(plVar13,0xd0,0x10);
  if (lVar8 == 0) {
    (**(code **)(*plVar13 + 0xb8))(plVar13);
  }
                    /* WARNING: Subroutine does not return */
  FUN_008a93d8(lVar8);
}


