/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026a6ac0; name: FUN_026a6ac0
 */


bool FUN_026a6ac0(long param_1,uint param_2)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  
  if (1 < *(uint *)(param_1 + 0x78)) {
    FUN_026a6c00();
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x26a6bf8);
    (*pcVar2)();
  }
  lVar6 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x78) * 8 + 0x68);
  uVar3 = *(ulong *)(lVar6 + 0x88);
  if (uVar3 != 0) {
    uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
    uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
    uVar8 = (uVar4 + (uVar4 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar4 = (ulong)param_2;
    if (uVar8 < 2) {
      uVar5 = (ulong)((int)uVar3 - 1U & param_2);
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    plVar7 = *(long **)(*(long *)(lVar6 + 0x80) + uVar5 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar7[1] == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_2) goto LAB_026a6be0;
          }
          else if ((plVar7[1] & uVar3 - 1) != uVar5) goto LAB_026a6bd8;
          plVar7 = (long *)*plVar7;
          plVar9 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar7[1];
          if (uVar8 == uVar4) {
            if (*(uint *)(plVar7 + 2) == param_2) goto LAB_026a6be0;
          }
          else {
            if (uVar3 <= uVar8) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar8 / uVar3;
              }
              uVar8 = uVar8 - uVar1 * uVar3;
            }
            if (uVar8 != uVar5) goto LAB_026a6bd8;
          }
          plVar7 = (long *)*plVar7;
          plVar9 = (long *)0x0;
        } while (plVar7 != (long *)0x0);
      }
      goto LAB_026a6be4;
    }
  }
LAB_026a6bd8:
  plVar9 = (long *)0x0;
LAB_026a6be4:
  return plVar9 != (long *)0x0;
LAB_026a6be0:
  plVar9 = plVar7;
  goto LAB_026a6be4;
}


