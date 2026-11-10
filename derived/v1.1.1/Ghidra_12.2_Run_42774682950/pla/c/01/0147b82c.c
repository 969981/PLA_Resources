/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147b82c; name: FUN_0147b82c
 */


void FUN_0147b82c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  if ((*(long *)(param_1 + 0x668) != 0) &&
     (lVar3 = *(long *)(param_1 + 0x628), *(long *)(param_1 + 0x630) != lVar3)) {
    uVar7 = *(ulong *)(param_1 + 0x660);
    uVar1 = uVar7 + *(long *)(param_1 + 0x668);
    lVar5 = *(long *)(lVar3 + (uVar7 / 0x2e) * 8);
    lVar6 = lVar5 + (uVar7 % 0x2e) * 0x58;
    lVar2 = *(long *)(lVar3 + (uVar1 / 0x2e) * 8) + (uVar1 % 0x2e) * 0x58;
    if (lVar2 != lVar6) {
      plVar4 = (long *)(lVar3 + (uVar7 / 0x2e) * 8);
      *(undefined1 *)(lVar5 + (uVar7 % 0x2e) * 0x58 + 0x48) = 1;
      lVar6 = lVar6 + 0x58;
      if (lVar6 - *plVar4 == 0xfd0) {
        plVar4 = plVar4 + 1;
        lVar6 = *plVar4;
      }
      while (lVar2 != lVar6) {
        while( true ) {
          *(undefined1 *)(lVar6 + 0x48) = 1;
          lVar6 = lVar6 + 0x58;
          if (lVar6 - *plVar4 != 0xfd0) break;
          plVar4 = plVar4 + 1;
          lVar6 = *plVar4;
          if (lVar2 == lVar6) {
            return;
          }
        }
      }
    }
  }
  return;
}


