/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a9d20c; name: FUN_02a9d20c
 */


undefined8 FUN_02a9d20c(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long *plVar7;
  long *plVar8;
  
  lVar4 = *(long *)(param_1 + 0x1f0);
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x180) == '\0')) {
    return 1;
  }
  if (*(char *)(param_1 + 0x358) == '\0') {
LAB_02a9d310:
    uVar6 = 0;
  }
  else {
    plVar5 = (long *)(*(long *)(lVar4 + 0x58) + (long)*(int *)(lVar4 + 0x174) * 0x38);
    plVar7 = (long *)*plVar5;
    plVar5 = (long *)plVar5[1];
    if (plVar7 == plVar5) {
      return 1;
    }
    do {
      for (plVar1 = *(long **)(*plVar7 + 0x90); plVar1 != *(long **)(*plVar7 + 0x98);
          plVar1 = plVar1 + 1) {
        plVar8 = *(long **)(*plVar1 + 0x78);
        plVar2 = *(long **)(*plVar1 + 0x80);
        if (plVar8 != plVar2) {
          do {
            plVar3 = *(long **)(*plVar8 + 0xe0);
            do {
              if (plVar3 == *(long **)(*plVar8 + 0xe8)) goto LAB_02a9d278;
              lVar4 = *plVar3;
              plVar3 = plVar3 + 1;
            } while (*(long *)(*(long *)(lVar4 + 0x68) + 0x60) != *(long *)(param_1 + 0x338));
            lVar4 = *(long *)(lVar4 + 0x60);
            if (*(char *)(lVar4 + 0x279) != '\0') {
              lVar4 = *(long *)(lVar4 + 0x210);
              if (lVar4 == 0) {
LAB_02a9d304:
                *(undefined1 *)(param_1 + 0x358) = 0;
                return 0;
              }
              if (*(long *)(lVar4 + 0x28) != *(long *)(lVar4 + 0x18)) {
                if (*(long *)(lVar4 + 0x28) - *(long *)(lVar4 + 0x18) == -1) goto LAB_02a9d304;
                goto LAB_02a9d310;
              }
            }
LAB_02a9d278:
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar2);
        }
      }
      plVar7 = plVar7 + 1;
      uVar6 = 1;
    } while (plVar7 != plVar5);
  }
  return uVar6;
}


