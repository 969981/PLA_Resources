/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010fac34; name: FUN_010fac34
 */


void FUN_010fac34(long param_1,void *param_2,size_t param_3,ulong param_4,int param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long local_48;
  void *local_40;
  undefined4 local_38 [2];
  
  local_40 = param_2;
  local_38[0] = param_6;
  memset(param_2,0,param_3);
  uVar3 = *(ulong *)(param_1 + 0x5660);
  if (uVar3 != 0) {
    uVar6 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar3 - 1 & param_4;
    }
    else {
      uVar7 = param_4;
      if (uVar3 <= param_4) {
        uVar7 = 0;
        if (uVar3 != 0) {
          uVar7 = param_4 / uVar3;
        }
        uVar7 = param_4 - uVar7 * uVar3;
      }
    }
    plVar8 = *(long **)(*(long *)(param_1 + 0x5658) + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == param_4) {
            if (plVar8[2] == param_4) goto LAB_010fad60;
          }
          else if ((plVar8[1] & uVar3 - 1) != uVar7) break;
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == param_4) {
            if (plVar8[2] == param_4) {
LAB_010fad60:
              plVar4 = (long *)plVar8[3] + 1;
              plVar8 = *(long **)plVar8[3];
              if (plVar8 != plVar4) {
                lVar5 = 0;
                do {
                  *(long *)((long)param_2 + lVar5 * 8) = plVar8[4];
                  lVar5 = lVar5 + 1;
                  plVar9 = (long *)plVar8[1];
                  if ((long *)plVar8[1] == (long *)0x0) {
                    plVar9 = plVar8 + 2;
                    plVar10 = (long *)*plVar9;
                    if ((long *)*plVar10 != plVar8) {
                      do {
                        lVar11 = *plVar9;
                        plVar9 = (long *)(lVar11 + 0x10);
                        plVar10 = (long *)*plVar9;
                      } while (*plVar10 != lVar11);
                    }
                  }
                  else {
                    do {
                      plVar10 = plVar9;
                      plVar9 = (long *)*plVar10;
                    } while ((long *)*plVar10 != (long *)0x0);
                  }
                } while ((lVar5 < param_5) && (plVar8 = plVar10, plVar10 != plVar4));
              }
              if (((*PTR_DAT_04379558 & 1) == 0) &&
                 (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0)) {
                FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379558);
              }
              lVar5 = *(long *)PTR_DAT_04379560;
              *(long *)PTR_DAT_04379568 = lVar5;
              local_48 = (long)param_5;
              FUN_010fc284(*(undefined8 *)(lVar5 + 0x100),local_38,&local_40,&local_48);
              return;
            }
          }
          else {
            if (uVar3 <= uVar6) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar6 / uVar3;
              }
              uVar6 = uVar6 - uVar1 * uVar3;
            }
            if (uVar6 != uVar7) break;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_010ff3c0();
}


