/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147bdc0; name: FUN_0147bdc0
 */


void FUN_0147bdc0(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x660);
  lVar3 = *(long *)(param_1 + 0x628);
  plVar1 = (long *)(lVar3 + (uVar4 / 0x2e) * 8);
  *(undefined4 *)(param_1 + 0x6c0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6a8) = 0;
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  if (*(long *)(param_1 + 0x630) == lVar3) {
    lVar2 = 0;
    goto LAB_0147be80;
  }
  lVar2 = *plVar1 + (uVar4 % 0x2e) * 0x58;
  do {
    uVar4 = *(long *)(param_1 + 0x668) + uVar4;
    if (lVar2 == *(long *)(lVar3 + (uVar4 / 0x2e) * 8) + (uVar4 % 0x2e) * 0x58) {
      return;
    }
    while( true ) {
      *(undefined4 *)(lVar2 + 0x14) = 0;
      lVar2 = lVar2 + 0x58;
      if (lVar2 - *plVar1 == 0xfd0) {
        plVar1 = plVar1 + 1;
        lVar2 = *plVar1;
      }
      uVar4 = *(ulong *)(param_1 + 0x660);
      lVar3 = *(long *)(param_1 + 0x628);
      if (*(long *)(param_1 + 0x630) != lVar3) break;
LAB_0147be80:
      if (lVar2 == 0) {
        return;
      }
    }
  } while( true );
}


