/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001c141c; name: FUN_001c141c
 */


void FUN_001c141c(long *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  plVar4 = (long *)*param_1;
  if (plVar4 == (long *)0x0) {
    return;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 1);
LAB_001c1440:
  do {
    uVar1 = 9U >> (ulong)(((uint)uVar5 & 0xf) << 1) & 3;
    uVar5 = (ulong)uVar1;
    *param_1 = (long)plVar4;
    *(uint *)(param_1 + 1) = uVar1;
    if (uVar1 != 0) {
      lVar6 = plVar4[uVar5 + 2];
      lVar7 = plVar4[(ulong)(9U >> (ulong)(uVar1 << 1) & 3) + 2];
      iVar2 = *(int *)(lVar6 + 0x20);
      iVar3 = *(int *)(lVar7 + 0x20);
      if (iVar2 < iVar3) {
        return;
      }
      if (iVar3 < iVar2) {
LAB_001c1430:
        if (3 < (ulong)plVar4[uVar5 + 5]) goto LAB_001c1440;
      }
      else if ((*(int *)(lVar7 + 0x24) <= *(int *)(lVar6 + 0x24)) &&
              ((*(int *)(lVar7 + 0x24) < *(int *)(lVar6 + 0x24) ||
               (*(int *)(lVar7 + 0x28) < *(int *)(lVar6 + 0x28))))) goto LAB_001c1430;
      if (iVar2 <= iVar3) {
        if (*(int *)(lVar6 + 0x24) < *(int *)(lVar7 + 0x24)) {
          return;
        }
        if ((*(int *)(lVar6 + 0x24) <= *(int *)(lVar7 + 0x24)) &&
           (*(int *)(lVar6 + 0x28) <= *(int *)(lVar7 + 0x28))) {
          return;
        }
      }
      if ((ulong)plVar4[uVar5 + 5] < 4) {
        return;
      }
    }
    plVar4 = (long *)*plVar4;
    *param_1 = (long)plVar4;
    *(undefined4 *)(param_1 + 1) = 0;
    if (plVar4 == (long *)0x0) {
      return;
    }
    lVar6 = plVar4[2];
    lVar7 = plVar4[3];
    if (*(int *)(lVar6 + 0x20) < *(int *)(lVar7 + 0x20)) {
      return;
    }
    if (*(int *)(lVar6 + 0x20) <= *(int *)(lVar7 + 0x20)) {
      if (*(int *)(lVar6 + 0x24) < *(int *)(lVar7 + 0x24)) {
        return;
      }
      if ((*(int *)(lVar6 + 0x24) <= *(int *)(lVar7 + 0x24)) &&
         (*(int *)(lVar6 + 0x28) <= *(int *)(lVar7 + 0x28))) {
        return;
      }
    }
    uVar5 = 0;
    if ((ulong)plVar4[5] < 4) {
      return;
    }
  } while( true );
}


