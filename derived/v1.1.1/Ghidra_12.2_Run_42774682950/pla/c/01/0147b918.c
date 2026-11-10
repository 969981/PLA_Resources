/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147b918; name: FUN_0147b918
 */


void FUN_0147b918(long param_1,char *param_2)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  char *pcVar7;
  long *plVar8;
  
  if (*param_2 == '\0') {
    return;
  }
  if (*param_2 != '\x0e') {
    lVar3 = *(long *)(param_1 + 0x5b8);
    if (*(long *)(param_1 + 0x5c0) != lVar3) {
      uVar4 = *(ulong *)(param_1 + 0x5f0);
      pcVar6 = (char *)(*(long *)(lVar3 + (uVar4 / 0x2e) * 8) + (uVar4 % 0x2e) * 0x58);
      uVar1 = *(long *)(param_1 + 0x5f8) + uVar4;
      pcVar7 = (char *)(*(long *)(lVar3 + (uVar1 / 0x2e) * 8) + (uVar1 % 0x2e) * 0x58);
      if (pcVar7 != pcVar6) {
        plVar8 = (long *)(lVar3 + (uVar4 / 0x2e) * 8);
        do {
          while( true ) {
            cVar2 = *pcVar6;
            plVar5 = *(long **)(pcVar6 + 0x38);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x18))(plVar5);
              (**(code **)(*plVar5 + 0x20))(plVar5);
            }
            if (cVar2 == '\x0e') {
              return;
            }
            pcVar6 = pcVar6 + 0x58;
            if ((long)pcVar6 - *plVar8 == 0xfd0) break;
            if (pcVar7 == pcVar6) goto LAB_0147ba24;
          }
          plVar8 = plVar8 + 1;
          pcVar6 = (char *)*plVar8;
        } while (pcVar7 != pcVar6);
      }
    }
LAB_0147ba24:
    lVar3 = *(long *)(param_1 + 0x628);
    if (*(long *)(param_1 + 0x630) != lVar3) {
      uVar4 = *(ulong *)(param_1 + 0x660);
      pcVar6 = (char *)(*(long *)(lVar3 + (uVar4 / 0x2e) * 8) + (uVar4 % 0x2e) * 0x58);
      uVar1 = *(long *)(param_1 + 0x668) + uVar4;
      pcVar7 = (char *)(*(long *)(lVar3 + (uVar1 / 0x2e) * 8) + (uVar1 % 0x2e) * 0x58);
      if (pcVar7 != pcVar6) {
        plVar8 = (long *)(lVar3 + (uVar4 / 0x2e) * 8);
        do {
          while( true ) {
            cVar2 = *pcVar6;
            plVar5 = *(long **)(pcVar6 + 0x38);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x18))(plVar5);
              (**(code **)(*plVar5 + 0x20))(plVar5);
            }
            if (cVar2 == '\x0e') {
              return;
            }
            pcVar6 = pcVar6 + 0x58;
            if ((long)pcVar6 - *plVar8 == 0xfd0) break;
            if (pcVar7 == pcVar6) goto LAB_0147baf0;
          }
          plVar8 = plVar8 + 1;
          pcVar6 = (char *)*plVar8;
        } while (pcVar7 != pcVar6);
      }
    }
  }
LAB_0147baf0:
  FUN_0147bb28(param_1,param_2);
  return;
}


