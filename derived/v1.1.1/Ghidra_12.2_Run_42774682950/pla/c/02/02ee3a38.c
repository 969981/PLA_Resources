/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee3a38; name: FUN_02ee3a38
 */


long FUN_02ee3a38(long param_1,ulong *param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  char local_24 [4];
  
  uVar5 = *param_2;
  if (((((uVar5 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
      (((char)param_2[3] == -1 && ((char)param_2[4] == -1)))) && (param_2[5] == 0)) {
    if (param_4 != 0) {
      *(bool *)param_4 = *(int *)(param_1 + 0x18) != 0;
    }
    lVar3 = 0;
    if (*(char *)(param_1 + 0xc) != '\0') {
      lVar3 = param_1 + 8;
    }
    return lVar3;
  }
  if ((param_3 == (long *)0x0) || (*(char *)(param_1 + 0xc) == '\0')) {
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  else {
    *param_3 = param_1 + 8;
    uVar5 = *param_2;
    uVar6 = *(uint *)(param_1 + 0x18);
  }
  if (uVar6 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    iVar7 = 0;
    do {
      iVar1 = iVar7 + (uVar6 >> 1);
      lVar4 = (long)iVar1;
      uVar9 = *(ulong *)(lVar3 + (long)iVar1 * 0x28 + 0x20);
      if (uVar9 == uVar5) {
        if (lVar3 + lVar4 * 0x28 == 0) {
          return 0;
        }
        uVar6 = (uint)param_2[1];
        if ((((uVar6 == 0) && ((int)param_2[2] == 0)) && ((char)param_2[3] == -1)) &&
           (((char)param_2[4] == -1 && (param_2[5] == 0)))) {
          if (param_4 != 0) {
            *(bool *)param_4 = *(int *)(lVar3 + lVar4 * 0x28 + 0x18) != 0;
          }
          lVar3 = lVar3 + lVar4 * 0x28;
          if (*(char *)(lVar3 + 0xc) == '\0') {
            return 0;
          }
          return lVar3 + 8;
        }
        if ((param_3 != (long *)0x0) && (*(char *)(lVar3 + lVar4 * 0x28 + 0xc) != '\0')) {
          *param_3 = lVar3 + lVar4 * 0x28 + 8;
          uVar6 = (uint)param_2[1];
        }
        uVar8 = *(uint *)(lVar3 + lVar4 * 0x28 + 0x18);
        if (uVar8 == 0) {
          return 0;
        }
        lVar3 = *(long *)(lVar3 + lVar4 * 0x28 + 0x10);
        iVar7 = 0;
        do {
          iVar1 = iVar7 + (uVar8 >> 1);
          uVar2 = *(uint *)(lVar3 + (long)iVar1 * 0x28 + 0x20);
          if (uVar2 == uVar6) {
            lVar3 = lVar3 + (long)iVar1 * 0x28;
            if (lVar3 == 0) {
              return 0;
            }
            iVar7 = (int)param_2[2];
            if ((((iVar7 == 0) && ((char)param_2[3] == -1)) && ((char)param_2[4] == -1)) &&
               (param_2[5] == 0)) {
              if (param_4 != 0) {
                *(bool *)param_4 = *(int *)(lVar3 + 0x18) != 0;
              }
              lVar4 = 0;
              if (*(char *)(lVar3 + 0xc) != '\0') {
                lVar4 = lVar3 + 8;
              }
            }
            else {
              if ((param_3 != (long *)0x0) && (*(char *)(lVar3 + 0xc) != '\0')) {
                *param_3 = lVar3 + 8;
                iVar7 = (int)param_2[2];
              }
              lVar3 = FUN_02eb18a8(lVar3 + 0x10,iVar7,local_24);
              lVar4 = 0;
              if ((lVar3 != 0) && (local_24[0] != '\0')) {
                lVar4 = FUN_02ee3cc8(lVar3,param_2 + 3,param_3,param_4);
              }
            }
            return lVar4;
          }
          if (uVar2 < uVar6) {
            iVar7 = iVar1 + 1;
          }
          uVar8 = uVar8 - (uVar2 < uVar6) >> 1;
        } while (uVar8 != 0);
        return 0;
      }
      if (uVar9 < uVar5) {
        iVar7 = iVar1 + 1;
      }
      uVar6 = uVar6 - (uVar9 < uVar5) >> 1;
    } while (uVar6 != 0);
  }
  return 0;
}


