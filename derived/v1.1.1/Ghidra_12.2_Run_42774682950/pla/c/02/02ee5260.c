/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee5260; name: FUN_02ee5260
 */


void FUN_02ee5260(long param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = *param_2;
  if ((((uVar2 == 0) && (param_2[2] == 0)) && ((char)param_2[4] == -1)) &&
     (((char)param_2[6] == -1 && (*(long *)(param_2 + 8) == 0)))) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x18);
    if (uVar4 != 0) {
      lVar6 = *(long *)(param_1 + 0x10);
      iVar5 = 0;
      do {
        iVar1 = iVar5 + (uVar4 >> 1);
        lVar8 = (long)iVar1;
        uVar3 = *(uint *)(lVar6 + (long)iVar1 * 0x28 + 0x20);
        if (uVar3 == uVar2) {
          lVar7 = lVar6 + lVar8 * 0x28;
          if (lVar7 == 0) {
            return;
          }
          FUN_02ee5370(lVar7,param_2 + 2);
          if (*(char *)(lVar6 + lVar8 * 0x28 + 0xc) != '\0') {
            return;
          }
          if (*(int *)(lVar6 + lVar8 * 0x28 + 0x18) == 0) {
            FUN_02ee4658(lVar7);
            FUN_02ee4734((long *)(param_1 + 0x10),*param_2);
            return;
          }
          return;
        }
        if (uVar3 < uVar2) {
          iVar5 = iVar1 + 1;
        }
        uVar4 = uVar4 - (uVar3 < uVar2) >> 1;
      } while (uVar4 != 0);
    }
  }
  return;
}


