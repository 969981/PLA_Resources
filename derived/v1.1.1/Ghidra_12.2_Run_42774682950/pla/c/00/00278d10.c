/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00278d10; name: FUN_00278d10
 */


undefined8 FUN_00278d10(long param_1,undefined8 *param_2,long param_3)

{
  int *piVar1;
  size_t __n;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  uint *puVar12;
  
  if (param_3 != -1) {
    lVar9 = *(long *)(param_1 + 0xa8);
    if ((lVar9 != 0) && (plVar11 = *(long **)(param_1 + 0xb0), plVar11 != (long *)0x0)) {
LAB_00278d50:
      if (*plVar11 != param_3) goto code_r0x00278d5c;
      lVar10 = *(long *)(lVar9 + 0x38);
      plVar8 = plVar11 + 2;
      sVar6 = strlen((char *)plVar8);
      uVar5 = (ulong)*(ushort *)(lVar10 + 0xc);
      puVar12 = (uint *)((int *)(lVar10 + 8) + uVar5 * 4);
      uVar3 = *puVar12;
      if (*(int *)(lVar10 + 8) < (int)uVar3) {
        do {
          uVar7 = (long)((ulong)uVar3 << 0x20) >> 0x23;
          if (uVar7 < sVar6) {
            uVar7 = (ulong)(*(byte *)((long)plVar11 + sVar6 + ~uVar7 + 0x10) >> ((ulong)uVar3 & 7))
                    & 1;
          }
          else {
            uVar7 = 0;
          }
          piVar1 = (int *)(lVar10 + 8 + uVar5 * 0x10);
          uVar5 = (ulong)*(ushort *)((long)piVar1 + uVar7 * 2 + 4);
          puVar12 = (uint *)(lVar10 + 8 + uVar5 * 0x10);
          uVar3 = *puVar12;
        } while (*piVar1 < (int)uVar3);
      }
      uVar5 = (ulong)**(ushort **)(puVar12 + 2);
      __n = sVar6;
      if (uVar5 <= sVar6) {
        __n = uVar5;
      }
      if (__n == 0) {
        if (uVar5 <= sVar6) goto LAB_00278e9c;
      }
      else {
        iVar4 = memcmp(*(ushort **)(puVar12 + 2) + 1,plVar8,__n);
        iVar2 = iVar4;
        if (iVar4 == 0) {
          iVar2 = 1;
        }
        if (sVar6 < uVar5 || iVar4 != 0) {
          if (iVar2 != 0) goto LAB_00278d74;
        }
        else {
LAB_00278e9c:
          if (uVar5 < sVar6) goto LAB_00278d74;
        }
        uVar5 = (long)puVar12 + (-0x18 - lVar10);
        if ((~uVar5 & 0xffffffff0) != 0) {
          *param_2 = *(undefined8 *)
                      (*(long *)(*(long *)(lVar9 + 0x28) + ((long)(uVar5 * 0x10000000) >> 0x1d)) +
                      0x90);
          return 1;
        }
      }
      goto LAB_00278d74;
    }
LAB_00278d70:
    plVar8 = (long *)0x0;
LAB_00278d74:
    if (*(long *)(param_1 + 0x4a8) == 0) {
      return 0;
    }
    uVar5 = FUN_00278d10(*(long *)(param_1 + 0x4a8),param_2,param_3);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    FUN_00271a10("Appointed Texture is not found from Resident Resource.\n");
    if (plVar8 != (long *)0x0) {
      FUN_00271a10("The Texture which was not found is %s.\n",plVar8);
    }
  }
  return 0;
code_r0x00278d5c:
  puVar12 = (uint *)(plVar11 + 1);
  plVar8 = (long *)((long)plVar11 + (ulong)*puVar12);
  plVar11 = (long *)0x0;
  if (*puVar12 != 0) {
    plVar11 = plVar8;
  }
  if (plVar11 == (long *)0x0) goto LAB_00278d70;
  goto LAB_00278d50;
}


