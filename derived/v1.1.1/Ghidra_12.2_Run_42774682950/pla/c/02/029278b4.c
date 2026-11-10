/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029278b4; name: FUN_029278b4
 */


void FUN_029278b4(long *param_1,long param_2,ulong *param_3)

{
  long *plVar1;
  ulong uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  uVar6 = *(ulong *)(param_2 + 0x70);
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar5 = *param_3;
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & uVar5;
    }
    else {
      uVar9 = uVar5;
      if (uVar6 <= uVar5) {
        uVar9 = 0;
        if (uVar6 != 0) {
          uVar9 = uVar5 / uVar6;
        }
        uVar9 = uVar5 - uVar9 * uVar6;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x68) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == uVar5) {
            if (plVar11[2] == uVar5) {
LAB_029279f0:
              *param_1 = (long)(plVar11 + 3);
              plVar12 = (long *)plVar11[3];
              plVar11 = (long *)PTR_DAT_04379c88;
              if (plVar12 != (long *)0x0) {
                plVar11 = plVar12 + 0xb;
              }
              plVar1 = (long *)PTR_PTR_04379d00;
              if (plVar12 != (long *)0x0) {
                plVar1 = plVar12 + 0xc;
              }
              lVar7 = *plVar1;
              if (plVar12 == (long *)0x0) {
                lVar10 = 0;
              }
              else {
                lVar10 = plVar12[0xd];
              }
              param_1[1] = *plVar11;
              param_1[2] = lVar7;
              param_1[3] = lVar10;
              param_1[4] = 0;
              if (plVar12 != (long *)0x0) {
                (**(code **)(*plVar12 + 0x18))(plVar12);
              }
              param_1[4] = (long)plVar12;
              return;
            }
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == uVar5) {
            if (plVar11[2] == uVar5) goto LAB_029279f0;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar2 = 0;
              if (uVar6 != 0) {
                uVar2 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar2 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  *param_1 = 0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar3 = PTR_DAT_0437a0d8;
  lVar7 = *(long *)(PTR_DAT_0437a0d8 + 8);
  param_1[1] = *(long *)PTR_DAT_0437a0d8;
  param_1[2] = lVar7;
  plVar11 = *(long **)(puVar3 + 0x18);
  param_1[3] = *(long *)(puVar3 + 0x10);
  param_1[4] = (long)plVar11;
  if (plVar11 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02927a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar11 + 0x18))();
  return;
}


