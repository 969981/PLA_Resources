/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00983ba4; name: FUN_00983ba4
 */


bool FUN_00983ba4(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xb0) != 0) {
    plVar5 = *(long **)(param_1 + 0xa8);
    plVar1 = (long *)PTR_DAT_04379c88;
    if (*param_2 != 0) {
      plVar1 = (long *)(*param_2 + 0x58);
    }
    lVar6 = *(long *)(param_1 + 0xb0) << 5;
    do {
      plVar4 = (long *)*plVar5;
      plVar2 = (long *)PTR_DAT_04379c88;
      if (*plVar4 != 0) {
        plVar2 = (long *)(*plVar4 + 0x58);
      }
      if (*plVar2 == *plVar1) {
        if ((char)plVar4[7] != '\0') {
          return false;
        }
        lVar6 = plVar4[9];
        if ((lVar6 == 0) && (lVar6 = plVar4[0xf], lVar6 == 0)) {
          if (plVar4[0x15] != 0) {
            return true;
          }
          lVar6 = plVar4[0x1b];
          if ((lVar6 == 0) && (lVar6 = plVar4[0x21], lVar6 == 0)) {
            if (plVar4[0x27] == 0) {
              return true;
            }
            cVar3 = *(char *)(plVar4[0x27] + 0x1e1);
            goto LAB_00983c44;
          }
        }
        cVar3 = *(char *)(lVar6 + 0x1e1);
LAB_00983c44:
        return cVar3 != '\0';
      }
      plVar5 = plVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  return false;
}


