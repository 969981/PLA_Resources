/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009d125c; name: FUN_009d125c
 */


bool FUN_009d125c(long param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if (10 < *(uint *)(param_1 + 0xc0)) {
                    /* WARNING: Subroutine does not return */
    FUN_009d1250();
  }
  lVar5 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xc0) * 8 + 0x68);
  uVar2 = *(ulong *)(lVar5 + 0x88);
  if (uVar2 != 0) {
    uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
    uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
    uVar7 = (uVar3 + (uVar3 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    uVar3 = (ulong)param_2;
    if (uVar7 < 2) {
      uVar4 = (ulong)((int)uVar2 - 1U & param_2);
    }
    else {
      uVar4 = uVar3;
      if (uVar2 <= uVar3) {
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar3 / uVar2;
        }
        uVar4 = uVar3 - uVar4 * uVar2;
      }
    }
    plVar6 = *(long **)(*(long *)(lVar5 + 0x80) + uVar4 * 8);
    if ((plVar6 != (long *)0x0) && (plVar6 = (long *)*plVar6, plVar6 != (long *)0x0)) {
      if (uVar7 < 2) {
        do {
          if (plVar6[1] == uVar3) {
            if (*(uint *)(plVar6 + 2) == param_2) goto LAB_009d1374;
          }
          else if ((plVar6[1] & uVar2 - 1) != uVar4) goto LAB_009d137c;
          plVar6 = (long *)*plVar6;
          plVar8 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      else {
        do {
          uVar7 = plVar6[1];
          if (uVar7 == uVar3) {
            if (*(uint *)(plVar6 + 2) == param_2) goto LAB_009d1374;
          }
          else {
            if (uVar2 <= uVar7) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar7 / uVar2;
              }
              uVar7 = uVar7 - uVar1 * uVar2;
            }
            if (uVar7 != uVar4) goto LAB_009d137c;
          }
          plVar6 = (long *)*plVar6;
          plVar8 = (long *)0x0;
        } while (plVar6 != (long *)0x0);
      }
      goto LAB_009d1380;
    }
  }
LAB_009d137c:
  plVar8 = (long *)0x0;
LAB_009d1380:
  return plVar8 != (long *)0x0;
LAB_009d1374:
  plVar8 = plVar6;
  goto LAB_009d1380;
}


