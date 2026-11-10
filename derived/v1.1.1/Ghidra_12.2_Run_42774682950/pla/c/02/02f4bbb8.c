/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4bbb8; name: FUN_02f4bbb8
 */


/* WARNING: Removing unreachable block (ram,0x02f4bdbc) */

long * FUN_02f4bbb8(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  ushort uVar5;
  ushort uVar6;
  bool bVar7;
  long *plVar8;
  void *__s;
  long lVar9;
  long *plVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  size_t __n;
  uint uVar14;
  ulong uVar15;
  
  uVar5 = *(ushort *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x30) < 2) {
    if (uVar5 == 0) {
      return (long *)0x0;
    }
    plVar8 = (long *)(*DAT_0442d138)(0,0x10);
    if (plVar8 == (long *)0x0) {
      return (long *)0x0;
    }
    *plVar8 = (long)&PTR_LAB_042ab0f8;
    *(undefined1 *)(plVar8 + 1) = 1;
    *(undefined2 *)((long)plVar8 + 10) = 0xffff;
    return plVar8;
  }
  if (1 < *(uint *)(param_1 + 0x30) - 2) {
    return (long *)0x0;
  }
  if (uVar5 == 0) {
    return (long *)0x0;
  }
  uVar6 = *(ushort *)(param_1 + 0x38);
  uVar14 = (uint)uVar6;
  plVar8 = (long *)(*DAT_0442d138)(0,0x38);
  if (plVar8 == (long *)0x0) {
    return (long *)0x0;
  }
  *plVar8 = (long)&PTR_FUN_042ab0b0;
  iVar11 = (uint)uVar5 * 50000;
  plVar8[6] = 0;
  *(int *)(plVar8 + 1) = iVar11;
  *(int *)((long)plVar8 + 0xc) = iVar11;
  *(ushort *)(plVar8 + 2) = uVar5;
  *(ushort *)((long)plVar8 + 0x12) = uVar5;
  uVar15 = (ulong)uVar5 + 7 >> 3;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = 0;
  __n = uVar15 << 1;
  __s = (void *)(*DAT_0442d138)(0,__n);
  plVar8[5] = (long)__s;
  if (__s != (void *)0x0) {
    plVar8[6] = (long)__s + uVar15;
    memset(__s,0,__n);
    if (uVar6 < 4) {
      if (uVar6 == 0) goto LAB_02f4bcf8;
    }
    else {
      uVar14 = 4;
    }
    lVar9 = (*DAT_0442d138)(0,uVar14 << 1);
    plVar8[3] = lVar9;
    if (lVar9 != 0) {
      *(uint *)((long)plVar8 + 0x24) = uVar14;
LAB_02f4bcf8:
      if (*(char *)(param_1 + 0x34) == '\0') {
        return plVar8;
      }
      iVar11 = 0;
      if (*(uint *)(param_1 + 0x28) != 0) {
        plVar10 = *(long **)(param_1 + 0x20);
        uVar12 = (ulong)*(uint *)(param_1 + 0x28) * 8 - 8;
        uVar15 = (uVar12 >> 3) + 1;
        uVar13 = uVar15 & 3;
        if (uVar12 < 0x18) {
          iVar11 = 0;
        }
        else {
          iVar11 = 0;
          lVar9 = uVar15 - uVar13;
          do {
            lVar2 = *plVar10;
            plVar3 = plVar10 + 1;
            lVar9 = lVar9 + -4;
            plVar1 = plVar10 + 2;
            plVar4 = plVar10 + 3;
            plVar10 = plVar10 + 4;
            iVar11 = *(int *)(*plVar4 + 0x1c) +
                     *(int *)(*plVar1 + 0x1c) +
                     *(int *)(*plVar3 + 0x1c) + *(int *)(lVar2 + 0x1c) + iVar11;
          } while (lVar9 != 0);
        }
        if (uVar13 != 0) {
          lVar9 = -uVar13;
          do {
            bVar7 = lVar9 != -1;
            lVar9 = lVar9 + 1;
            iVar11 = *(int *)(*plVar10 + 0x1c) + iVar11;
            plVar10 = plVar10 + 1;
          } while (bVar7);
        }
      }
      *(int *)(plVar8 + 1) = iVar11;
      *(int *)((long)plVar8 + 0xc) = iVar11;
      return plVar8;
    }
  }
  (**(code **)(*plVar8 + 0x10))(plVar8);
  return (long *)0x0;
}


