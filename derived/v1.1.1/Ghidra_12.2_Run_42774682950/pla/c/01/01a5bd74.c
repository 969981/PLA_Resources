/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a5bd74; name: FUN_01a5bd74
 */


undefined8 FUN_01a5bd74(long param_1,ulong *param_2,undefined1 param_3)

{
  ulong *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  code *pcVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  ulong *local_b0;
  ulong local_a8;
  ulong *local_a0;
  code *local_98;
  undefined1 *local_90;
  undefined1 *puStack_88;
  ulong *local_80;
  ulong *puStack_78;
  
  uVar11 = *(ulong *)(param_1 + 0x7a0);
  if (uVar11 != 0) {
    uVar8 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar9 = *param_2;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar12 = uVar11 - 1 & uVar9;
    }
    else if (uVar9 < uVar11) {
      uVar12 = uVar9;
    }
    else {
      uVar12 = 0;
      if (uVar11 != 0) {
        uVar12 = uVar9 / uVar11;
      }
      uVar12 = uVar9 - uVar12 * uVar11;
    }
    plVar13 = *(long **)(*(long *)(param_1 + 0x798) + uVar12 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar13[1] == uVar9) {
            if (plVar13[2] == uVar9) goto LAB_01a5be10;
          }
          else if ((plVar13[1] & uVar11 - 1) != uVar12) {
            return 0;
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            return 0;
          }
        } while( true );
      }
      do {
        uVar8 = plVar13[1];
        if (uVar8 == uVar9) {
          if (plVar13[2] == uVar9) {
LAB_01a5be10:
            FUN_01a4fa84(&local_a0);
            FUN_01a4ff90(&local_b0,&local_a0);
            if (local_a0 != (ulong *)0x0) {
              puVar1 = local_a0 + 1;
              do {
                iVar7 = (int)*puVar1 + -1;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                if (bVar4) {
                  *(int *)puVar1 = iVar7;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar7 == 0) {
                local_a0[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar10 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar10;
                local_a8 = *local_a0;
                FUN_02a44274(lVar10 + 0xd8,&local_a8);
              }
            }
            if (local_b0 == (ulong *)0x0) {
              return 0;
            }
            local_a8 = CONCAT71(local_a8._1_7_,param_3) & 0xffffffffffffff01;
            if (local_b0[0x52] == 0) {
              local_a0 = (ulong *)&LAB_028ae508;
              local_98 = FUN_028ae550;
              local_90 = &LAB_028ae554;
              puStack_88 = &LAB_028ae560;
              local_80 = &local_a8;
              FUN_028aafe0(local_b0,local_b0 + 0x23,plVar13 + 3,&local_a0);
              pcVar6 = local_98;
            }
            else {
              puStack_78 = &local_a8;
              local_80 = local_b0;
              local_a0 = (ulong *)&LAB_028ae354;
              local_98 = FUN_028ae4ec;
              local_90 = &LAB_028ae4f0;
              puStack_88 = &LAB_028ae4fc;
              FUN_028aafe0(local_b0,local_b0 + 0x23,plVar13 + 3,&local_a0);
              pcVar6 = local_98;
            }
            local_98 = pcVar6;
            if (pcVar6 != (code *)0x0) {
              puStack_88 = (undefined1 *)0x0;
              local_90 = (undefined1 *)0x0;
              local_a0 = (ulong *)0x0;
              local_98 = (code *)0x0;
              (*pcVar6)(&local_80);
            }
            if (local_b0 != (ulong *)0x0) {
              uVar11 = local_b0[0xb];
              piVar2 = (int *)(uVar11 + 0xc);
              do {
                iVar7 = *piVar2;
                cVar3 = '\x01';
                bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
                if (bVar4) {
                  *piVar2 = iVar7 + -1;
                  cVar3 = ExclusiveMonitorsStatus();
                }
              } while (cVar3 != '\0');
              if (iVar7 + -1 == 0) {
                *(undefined8 *)(uVar11 + 0x18) = 0;
                (**(code **)(*local_b0 + 0x20))();
              }
            }
            return 1;
          }
        }
        else {
          if (uVar11 <= uVar8) {
            uVar5 = 0;
            if (uVar11 != 0) {
              uVar5 = uVar8 / uVar11;
            }
            uVar8 = uVar8 - uVar5 * uVar11;
          }
          if (uVar8 != uVar12) {
            return 0;
          }
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


