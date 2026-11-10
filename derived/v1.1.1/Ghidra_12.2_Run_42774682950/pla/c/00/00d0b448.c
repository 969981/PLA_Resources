/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d0b448; name: FUN_00d0b448
 */


int FUN_00d0b448(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  
  plVar1 = *(long **)(param_1 + 0xb0);
  if (plVar1 != (long *)0x0) {
    do {
      while ((*(int *)(plVar1[3] + 0x70) < 1 &&
             ((lVar3 = *(long *)(plVar1[3] + 0x68), *(char *)(lVar3 + 0xe0) == '\0' ||
              ((((*(byte *)(lVar3 + 0xe1) & 1) != 0 && (*(long *)(lVar3 + 0x70) != 0)) &&
               (*(char *)(*(long *)(lVar3 + 0x70) + 0x1e1) != '\0'))))))) {
        plVar1 = (long *)FUN_00d0cc9c(param_1 + 0x80);
        *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + -1;
        if (plVar1 == (long *)0x0) goto LAB_00d0b474;
      }
      plVar1 = (long *)*plVar1;
    } while (plVar1 != (long *)0x0);
LAB_00d0b474:
    plVar1 = *(long **)(param_1 + 0xb0);
    if (plVar1 != (long *)0x0) {
      iVar2 = 0;
      do {
        while( true ) {
          lVar3 = *(long *)(plVar1[3] + 0x68);
          if (*(char *)(lVar3 + 0xe0) == '\0') break;
          iVar2 = iVar2 + 1;
          plVar1 = (long *)*plVar1;
          if (plVar1 == (long *)0x0) {
            return iVar2;
          }
        }
        if ((0 < *(int *)(plVar1[3] + 0x70)) &&
           ((*(int *)(param_1 + 0x78) == -1 || (*(int *)(param_1 + 0xe8) < *(int *)(param_1 + 0x78))
            ))) {
          FUN_00d09400(lVar3);
          *(int *)(param_1 + 0xe8) = *(int *)(param_1 + 0xe8) + 1;
          iVar2 = iVar2 + 1;
        }
        plVar1 = (long *)*plVar1;
      } while (plVar1 != (long *)0x0);
      return iVar2;
    }
  }
  return 0;
}


