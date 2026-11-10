/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01cd76a8; name: FUN_01cd76a8
 */


undefined8 FUN_01cd76a8(undefined8 *param_1,long param_2)

{
  int *piVar1;
  ulong *puVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 *local_60;
  undefined8 uStack_58;
  ulong *local_50;
  undefined8 uStack_48;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  if (param_2 != 0) {
    puVar10 = (undefined8 *)(param_2 + 8);
    uVar9 = FUN_00ad7820(puVar10);
    if ((uVar9 & 1) != 0) {
      plVar16 = (long *)(param_2 + -0x48);
      param_1 = (undefined8 *)*param_1;
      (**(code **)(*plVar16 + 0x10))(local_40,plVar16);
      local_50 = (ulong *)0x0;
      uStack_48 = 0;
      FUN_01cd6ab8(&local_50,local_40);
      puVar7 = local_40[0];
      if (local_40[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_40[0] + 1);
        do {
          iVar8 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar8 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar8 + -1 == 0) {
          local_40[0][2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_60 = (undefined8 *)*puVar7;
          FUN_02a44274(lVar11 + 0xd8,&local_60);
        }
      }
      uVar9 = 0;
      if (local_50 != (ulong *)0x0) {
        uVar9 = *local_50;
      }
      lVar11 = *(long *)*param_1;
      uVar12 = *(ulong *)(lVar11 + 0x88);
      if (uVar12 != 0) {
        uVar13 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
        uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
        uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar13 < 2) {
          uVar14 = uVar12 - 1 & uVar9;
        }
        else {
          uVar14 = uVar9;
          if (uVar12 <= uVar9) {
            uVar14 = 0;
            if (uVar12 != 0) {
              uVar14 = uVar9 / uVar12;
            }
            uVar14 = uVar9 - uVar14 * uVar12;
          }
        }
        plVar15 = *(long **)(*(long *)(lVar11 + 0x80) + uVar14 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar13 < 2) {
            do {
              if (plVar15[1] == uVar9) {
                if (plVar15[2] == uVar9) goto LAB_01cd79f0;
              }
              else if ((plVar15[1] & uVar12 - 1) != uVar14) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar13 = plVar15[1];
              if (uVar13 == uVar9) {
                if (plVar15[2] == uVar9) goto LAB_01cd79f0;
              }
              else {
                if (uVar12 <= uVar13) {
                  uVar5 = 0;
                  if (uVar12 != 0) {
                    uVar5 = uVar13 / uVar12;
                  }
                  uVar13 = uVar13 - uVar5 * uVar12;
                }
                if (uVar13 != uVar14) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
      if (*(char *)(lVar11 + 0xe8) != '\0') {
        puVar10 = (undefined8 *)(**(code **)*puVar10)(puVar10);
        if (((*PTR_DAT_0437a6b0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_0437a6b0), iVar8 != 0)) {
          uVar17 = FUN_009b19b4();
          *(undefined8 *)PTR_DAT_0437a6b8 = uVar17;
          __cxa_guard_release(PTR_DAT_0437a6b0);
        }
        if (puVar10 != (undefined8 *)0x0) {
          uVar17 = 1;
          while (puVar10 != (undefined8 *)PTR_DAT_0437a6b8) {
            puVar10 = (undefined8 *)*puVar10;
            if (puVar10 == (undefined8 *)0x0) goto LAB_01cd79f4;
          }
          (**(code **)(*plVar16 + 0x10))(local_40,plVar16);
          local_60 = (undefined8 *)0x0;
          uStack_58 = 0;
          FUN_01cd6ab8(&local_60,local_40);
          if (local_40[0] != (undefined8 *)0x0) {
            piVar1 = (int *)(local_40[0] + 1);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              local_40[0][2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_28 = *local_40[0];
              FUN_02a44274(lVar11 + 0xd8,&local_28);
            }
          }
          local_40[0] = (undefined8 *)0x0;
          if (local_60 != (undefined8 *)0x0) {
            local_40[0] = (undefined8 *)*local_60;
          }
          uVar17 = FUN_01cd7bb0(*(long *)*param_1 + 0x80,local_40);
          FUN_00cfa028(uVar17,&local_60);
          puVar10 = local_60;
          *(int *)(*(long *)*param_1 + 0x6c) = *(int *)(*(long *)*param_1 + 0x6c) + 1;
          if (local_60 != (undefined8 *)0x0) {
            piVar1 = (int *)(local_60 + 1);
            do {
              iVar8 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              local_60[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar11 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar11;
              local_40[0] = (undefined8 *)*puVar10;
              FUN_02a44274(lVar11 + 0xd8,local_40);
            }
          }
LAB_01cd79f0:
          uVar17 = 0;
LAB_01cd79f4:
          if (local_50 == (ulong *)0x0) {
            return uVar17;
          }
          goto LAB_01cd79fc;
        }
      }
      uVar17 = 1;
      if (local_50 == (ulong *)0x0) {
        return 1;
      }
LAB_01cd79fc:
      puVar6 = local_50;
      puVar2 = local_50 + 1;
      do {
        iVar8 = (int)*puVar2 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar4) {
          *(int *)puVar2 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 != 0) {
        return uVar17;
      }
      local_50[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_40[0] = (undefined8 *)*puVar6;
      FUN_02a44274(lVar11 + 0xd8,local_40);
      return uVar17;
    }
  }
  return 0;
}


