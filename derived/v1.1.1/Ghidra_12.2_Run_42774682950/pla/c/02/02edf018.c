/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02edf018; name: FUN_02edf018
 */


void FUN_02edf018(long param_1,ulong *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar3 = *param_2;
  if ((((uVar3 == 0) && ((int)param_2[1] == 0)) && ((int)param_2[2] == 0)) &&
     ((((char)param_2[3] == -1 && ((char)param_2[4] == -1)) && (param_2[5] == 0)))) {
    if (*(char *)(param_1 + 0xc) != '\0') {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x18);
    if (uVar5 != 0) {
      lVar9 = *(long *)(param_1 + 0x10);
      iVar7 = 0;
      do {
        iVar1 = iVar7 + (uVar5 >> 1);
        lVar10 = (long)iVar1;
        uVar8 = *(ulong *)(lVar9 + (long)iVar1 * 0x28 + 0x20);
        if (uVar8 == uVar3) {
          lVar2 = lVar9 + lVar10 * 0x28;
          if (lVar2 == 0) {
            return;
          }
          FUN_02ee5260(lVar2,param_2 + 1);
          if (*(char *)(lVar9 + lVar10 * 0x28 + 0xc) != '\0') {
            return;
          }
          piVar4 = (int *)(lVar9 + lVar10 * 0x28 + 0x18);
          if (*piVar4 != 0) {
            return;
          }
          plVar6 = (long *)(lVar9 + lVar10 * 0x28 + 0x10);
          if (*plVar6 != 0) {
            *piVar4 = 0;
            (*DAT_0442d150)(0);
            *plVar6 = 0;
            *(undefined4 *)(lVar9 + lVar10 * 0x28 + 0x1c) = 0;
          }
          FUN_02ee4394((long *)(param_1 + 0x10),*param_2);
          return;
        }
        if (uVar8 < uVar3) {
          iVar7 = iVar1 + 1;
        }
        uVar5 = uVar5 - (uVar8 < uVar3) >> 1;
      } while (uVar5 != 0);
    }
  }
  return;
}


