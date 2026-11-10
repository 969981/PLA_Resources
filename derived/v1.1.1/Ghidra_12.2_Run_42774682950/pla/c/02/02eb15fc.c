/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb15fc; name: FUN_02eb15fc
 */


long FUN_02eb15fc(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar4 = *param_2;
  if ((((uVar4 != 0) || (param_2[2] != 0)) || ((char)param_2[4] != -1)) ||
     (((char)param_2[6] != -1 || (*(long *)(param_2 + 8) != 0)))) {
    uVar5 = *(uint *)(param_1 + 0x18);
    if (uVar5 != 0) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 + (uVar5 >> 1);
        uVar2 = *(uint *)(*(long *)(param_1 + 0x10) + (long)iVar1 * 0x28 + 0x20);
        if (uVar2 == uVar4) {
          lVar3 = *(long *)(param_1 + 0x10) + (long)iVar1 * 0x28;
          if (lVar3 != 0) goto LAB_02eb16f8;
          break;
        }
        if (uVar2 < uVar4) {
          iVar6 = iVar1 + 1;
        }
        uVar5 = uVar5 - (uVar2 < uVar4) >> 1;
      } while (uVar5 != 0);
    }
    if (uVar4 != 0) {
      *param_2 = 0;
      uVar4 = *(uint *)(param_1 + 0x18);
      if (uVar4 != 0) {
        do {
          uVar4 = uVar4 >> 1;
          lVar3 = *(long *)(param_1 + 0x10) + (ulong)uVar4 * 0x28;
          if (*(int *)(lVar3 + 0x20) == 0) {
            if (lVar3 != 0) {
LAB_02eb16f8:
              lVar3 = FUN_02eb171c(lVar3,param_2 + 2);
              if (lVar3 != 0) {
                return lVar3;
              }
            }
            break;
          }
        } while (uVar4 != 0);
      }
    }
  }
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 6) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  param_2[8] = 0;
  param_2[9] = 0;
  if (*(char *)(param_1 + 0xc) == '\0') {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 8;
  }
  return param_1;
}


