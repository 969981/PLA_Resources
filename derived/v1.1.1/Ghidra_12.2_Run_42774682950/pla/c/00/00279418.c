/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00279418; name: FUN_00279418
 */


undefined8 FUN_00279418(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  size_t __n;
  int iVar3;
  uint uVar4;
  long *plVar5;
  int iVar6;
  size_t sVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint *puVar12;
  
  if ((param_2 != -1) && (lVar10 = *(long *)(param_1 + 0xa8), lVar10 != 0)) {
    plVar5 = *(long **)(param_1 + 0xb0);
    while (plVar5 != (long *)0x0) {
      if (*plVar5 == param_2) {
        lVar11 = *(long *)(lVar10 + 0x38);
        sVar7 = strlen((char *)(plVar5 + 2));
        uVar8 = (ulong)*(ushort *)(lVar11 + 0xc);
        puVar12 = (uint *)((int *)(lVar11 + 8) + uVar8 * 4);
        uVar4 = *puVar12;
        if (*(int *)(lVar11 + 8) < (int)uVar4) {
          do {
            uVar9 = (long)((ulong)uVar4 << 0x20) >> 0x23;
            if (uVar9 < sVar7) {
              uVar9 = (ulong)(*(byte *)((long)plVar5 + sVar7 + ~uVar9 + 0x10) >> ((ulong)uVar4 & 7))
                      & 1;
            }
            else {
              uVar9 = 0;
            }
            piVar2 = (int *)(lVar11 + 8 + uVar8 * 0x10);
            uVar8 = (ulong)*(ushort *)((long)piVar2 + uVar9 * 2 + 4);
            puVar12 = (uint *)(lVar11 + 8 + uVar8 * 0x10);
            uVar4 = *puVar12;
          } while (*piVar2 < (int)uVar4);
        }
        uVar8 = (ulong)**(ushort **)(puVar12 + 2);
        __n = sVar7;
        if (uVar8 <= sVar7) {
          __n = uVar8;
        }
        if (__n == 0) {
          if (sVar7 < uVar8) {
            return 0;
          }
        }
        else {
          iVar6 = memcmp(*(ushort **)(puVar12 + 2) + 1,plVar5 + 2,__n);
          iVar3 = iVar6;
          if (iVar6 == 0) {
            iVar3 = 1;
          }
          if (sVar7 < uVar8 || iVar6 != 0) {
            if (iVar3 != 0) {
              return 0;
            }
            goto LAB_00279540;
          }
        }
        if (uVar8 < sVar7) {
          return 0;
        }
LAB_00279540:
        uVar8 = (long)puVar12 + (-0x18 - lVar11);
        if ((~uVar8 & 0xffffffff0) == 0) {
          return 0;
        }
        return *(undefined8 *)(*(long *)(lVar10 + 0x28) + ((long)(uVar8 * 0x10000000) >> 0x1d));
      }
      puVar12 = (uint *)(plVar5 + 1);
      plVar1 = (long *)((long)plVar5 + (ulong)*puVar12);
      plVar5 = (long *)0x0;
      if (*puVar12 != 0) {
        plVar5 = plVar1;
      }
    }
  }
  return 0;
}


