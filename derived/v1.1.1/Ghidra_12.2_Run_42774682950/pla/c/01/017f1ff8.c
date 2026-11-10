/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017f1ff8; name: FUN_017f1ff8
 */


uint FUN_017f1ff8(long param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 local_60;
  long *local_58;
  undefined8 local_50;
  ulong local_48;
  
  if ((*PTR_DAT_0437a780 & 1) == 0) {
    param_3 = param_3 & 0xffffffff;
    iVar3 = __cxa_guard_acquire(PTR_DAT_0437a780);
    if (iVar3 != 0) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
  }
  lVar6 = *(long *)PTR_DAT_0437a788;
  uVar4 = 0;
  *(long *)PTR_DAT_0437a790 = lVar6;
  if ((param_1 == 0) || (lVar6 == 0)) goto LAB_017f2058;
  if (*(char *)param_2[1] != '\0') {
    uVar7 = *(ulong *)(*(long *)(lVar6 + 0x78) + 0x5e0);
    if (uVar7 != 0) {
      uVar8 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
      uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
      uVar5 = *param_2;
      uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar8 < 2) {
        uVar9 = uVar7 - 1 & uVar5;
      }
      else if (uVar5 < uVar7) {
        uVar9 = uVar5;
      }
      else {
        uVar9 = 0;
        if (uVar7 != 0) {
          uVar9 = uVar5 / uVar7;
        }
        uVar9 = uVar5 - uVar9 * uVar7;
      }
      plVar10 = *(long **)(*(long *)(*(long *)(lVar6 + 0x78) + 0x5d8) + uVar9 * 8);
      if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
        if (uVar8 < 2) {
          do {
            if (plVar10[1] == uVar5) {
              if (plVar10[2] == uVar5) goto LAB_017f21e4;
            }
            else if ((plVar10[1] & uVar7 - 1) != uVar9) goto LAB_017f2054;
            plVar10 = (long *)*plVar10;
            uVar4 = 0;
          } while (plVar10 != (long *)0x0);
        }
        else {
          do {
            uVar8 = plVar10[1];
            if (uVar8 == uVar5) {
              if (plVar10[2] == uVar5) goto LAB_017f21e4;
            }
            else {
              if (uVar7 <= uVar8) {
                uVar2 = 0;
                if (uVar7 != 0) {
                  uVar2 = uVar8 / uVar7;
                }
                uVar8 = uVar8 - uVar2 * uVar7;
              }
              if (uVar8 != uVar9) goto LAB_017f2054;
            }
            plVar10 = (long *)*plVar10;
            uVar4 = 0;
          } while (plVar10 != (long *)0x0);
        }
        goto LAB_017f2058;
      }
    }
  }
LAB_017f2054:
  uVar4 = 0;
LAB_017f2058:
  return uVar4 & 1;
LAB_017f21e4:
  lVar6 = plVar10[6];
  lVar1 = plVar10[7];
  if (lVar6 != lVar1) {
    if ((param_3 & 1) == 0) {
      do {
        local_48 = FUN_028dcc5c(param_1,lVar6);
        if ((local_48 & 0xff) != 0) {
          local_50 = FUN_028dd12c(param_1,&local_48);
          uVar7 = FUN_028edfac(&local_50,param_2);
          if ((uVar7 & 1) != 0) {
            uVar4 = 1;
            break;
          }
        }
        lVar6 = lVar6 + 0x20;
        uVar4 = 0;
      } while (lVar1 != lVar6);
    }
    else {
      do {
        local_48 = FUN_028dcc5c(param_1,lVar6);
        if ((local_48 & 0xff) != 0) {
          local_50 = FUN_028dd12c(param_1,&local_48);
          local_58 = (long *)0x0;
          local_60 = 4;
          local_70 = 0x72a53c09738c6e18;
          puStack_68 = &DAT_038db7ac;
          uVar7 = FUN_028edfac(&local_50,&local_70);
          if (local_58 != (long *)0x0) {
            (**(code **)(*local_58 + 0x20))();
          }
          if ((uVar7 & 1) == 0) {
            uVar4 = FUN_028edfac(&local_50,param_2);
            break;
          }
        }
        lVar6 = lVar6 + 0x20;
        uVar4 = 0;
      } while (lVar1 != lVar6);
    }
    goto LAB_017f2058;
  }
  goto LAB_017f2054;
}


