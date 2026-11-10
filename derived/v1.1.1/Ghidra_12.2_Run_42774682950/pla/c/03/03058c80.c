/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03058c80; name: FUN_03058c80
 */


void FUN_03058c80(long *param_1,ulong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar11 = *(long *)(*param_1 + 0x38);
  FUN_03051388(param_1,param_2 & 0xffffffff,param_3 == 0);
  piVar5 = (int *)(param_1[0x71] +
                   (long)*(int *)(lVar11 + (param_2 & 0xffffff) * 0xc0 + 0x80) * 0x20 + 0x10);
  iVar2 = *piVar5;
  if (iVar2 != -1) {
    iVar8 = 0;
    uVar10 = param_2 & 0xffffffff;
    do {
      uVar10 = (ulong)((uint)uVar10 & 0xffffff);
      if ((iVar8 != 0) && ((*(byte *)(*(long *)(*param_1 + 0x38) + uVar10 * 0xc0 + 0x88) & 1) != 0))
      goto LAB_03058d1c;
      uVar1 = *(uint *)(*(long *)(*param_1 + 0x38) + uVar10 * 0xc0 + 0x84);
      uVar10 = (ulong)uVar1;
      iVar8 = iVar8 + -1;
    } while (uVar1 != (uint)param_2);
    *piVar5 = -1;
LAB_03058d1c:
    plVar6 = *(long **)(param_1[0x73] + (long)iVar2 * 8);
    uVar1 = *(uint *)(plVar6 + 1);
    uVar10 = (ulong)uVar1;
    if (0 < (int)uVar1) {
      lVar9 = *plVar6;
      lVar7 = 0;
      lVar11 = 0;
      do {
        if (*(uint *)(lVar9 + lVar11 * 4) == (uint)param_2) {
          if ((int)lVar11 == -1) {
            return;
          }
          *(int *)(plVar6 + 1) = (int)((long)(int)uVar1 + -1);
          if ((int)uVar10 != 1) {
            *(undefined4 *)(lVar9 + (lVar7 >> 0x1e)) =
                 *(undefined4 *)(lVar9 + ((long)(int)uVar1 + -1) * 4);
          }
          if (param_3 == 0) {
            *(undefined1 *)((long)plVar6 + 0x24) = 1;
          }
          if ((int)plVar6[1] != 0) {
            return;
          }
          *(undefined1 *)((long)plVar6 + 0x24) = 1;
          if (*(char *)((long)plVar6 + 0x25) != '\0') {
            return;
          }
          *(undefined1 *)((long)plVar6 + 0x25) = 1;
          uVar4 = *(uint *)((long)param_1 + 0x33c);
          iVar8 = (int)param_1[0x67];
          uVar1 = iVar8 + 1;
          if (iVar8 < (int)(uVar4 & 0x3fffffff)) {
            lVar11 = param_1[0x66];
          }
          else {
            lVar11 = param_1[0x66];
            if (0x3ffffffe < iVar8) {
              FUN_032bd0a8(uVar1);
              uVar4 = *(uint *)((long)param_1 + 0x33c);
            }
            uVar4 = (uVar4 & 0x3fffffff) << 1;
            if (0x3ffffffe < uVar4) {
              uVar4 = 0x3fffffff;
            }
            uVar3 = uVar1;
            if ((int)uVar1 <= (int)uVar4) {
              uVar3 = uVar4;
            }
            lVar11 = FUN_032bd1d4(PTR_PTR_0434a080,uVar3,4,lVar11,iVar8,
                                  (uint *)((long)param_1 + 0x33c));
            iVar8 = (int)param_1[0x67];
            param_1[0x66] = lVar11;
          }
          *(int *)(lVar11 + (long)iVar8 * 4) = iVar2;
          *(uint *)(param_1 + 0x67) = uVar1;
          return;
        }
        lVar11 = lVar11 + 1;
        lVar7 = lVar7 + 0x100000000;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
  }
  return;
}


