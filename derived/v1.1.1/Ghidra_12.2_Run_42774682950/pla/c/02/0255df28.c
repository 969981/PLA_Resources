/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0255df28; name: FUN_0255df28
 */


void FUN_0255df28(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long local_38;
  undefined8 *local_30;
  
  uVar5 = param_1[1];
  if (uVar5 != 0) {
    uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
    uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
    uVar4 = *param_2;
    uVar6 = (uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar6 < 2) {
      uVar7 = uVar5 - 1 & uVar4;
    }
    else if (uVar4 < uVar5) {
      uVar7 = uVar4;
    }
    else {
      uVar7 = 0;
      if (uVar5 != 0) {
        uVar7 = uVar4 / uVar5;
      }
      uVar7 = uVar4 - uVar7 * uVar5;
    }
    plVar8 = *(long **)(*param_1 + uVar7 * 8);
    if ((plVar8 != (long *)0x0) && (plVar8 = (long *)*plVar8, plVar8 != (long *)0x0)) {
      if (uVar6 < 2) {
        do {
          if (plVar8[1] == uVar4) {
            if (plVar8[2] == uVar4) {
LAB_0255e028:
              FUN_0255e160(&local_38);
              lVar3 = local_38;
              local_38 = 0;
              if (lVar3 == 0) {
                return;
              }
              plVar8 = (long *)*local_30;
              uVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8);
              if ((uVar5 & 1) != 0) {
                lVar2 = tpidr_el0;
                if (*(char *)(lVar2 + 0x38d488) == '\0') {
                  *(undefined1 *)(lVar2 + 0x38d488) = 1;
                  *(undefined8 *)(lVar2 + 0x38d478) = 0;
                  *(undefined8 *)(lVar2 + 0x38d480) = 0;
                  __cxa_thread_atexit(&LAB_02bcbe54,lVar2 + 0x80078,&PTR_LOOP_0411a000);
                }
                if (0 < *(int *)(lVar2 + 0x38d480)) {
                  FUN_02bcc824(plVar8,lVar3,0x28,8);
                  return;
                }
              }
                    /* WARNING: Could not recover jumptable at 0x0255e0e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar8 + 0x18))(plVar8,lVar3,0x28,8);
              return;
            }
          }
          else if ((plVar8[1] & uVar5 - 1) != uVar7) {
            return;
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
      else {
        do {
          uVar6 = plVar8[1];
          if (uVar6 == uVar4) {
            if (plVar8[2] == uVar4) goto LAB_0255e028;
          }
          else {
            if (uVar5 <= uVar6) {
              uVar1 = 0;
              if (uVar5 != 0) {
                uVar1 = uVar6 / uVar5;
              }
              uVar6 = uVar6 - uVar1 * uVar5;
            }
            if (uVar6 != uVar7) {
              return;
            }
          }
          plVar8 = (long *)*plVar8;
        } while (plVar8 != (long *)0x0);
      }
    }
  }
  return;
}


