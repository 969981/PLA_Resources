/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e70bcc; name: FUN_02e70bcc
 */


int FUN_02e70bcc(long param_1)

{
  uint *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  
  uVar7 = (uint)*(byte *)(param_1 + 0xc0);
  plVar6 = *(long **)(param_1 + 0xb8);
  if (uVar7 != 0 && plVar6 != (long *)0x0) {
    do {
      uVar7 = uVar7 - 1;
      plVar6 = (long *)*plVar6;
      if (uVar7 == 0) break;
    } while (plVar6 != (long *)0x0);
  }
  iVar5 = 0;
  if (plVar6 != (long *)0x0) {
    uVar7 = *(uint *)(param_1 + 0x90);
    do {
      lVar8 = *(long *)plVar6[1];
      puVar1 = (uint *)(plVar6 + 2);
      uVar4 = *(uint *)((long *)plVar6[1] + 3);
      uVar2 = lVar8 + (ulong)*puVar1;
      plVar6 = (long *)*plVar6;
      iVar3 = uVar4 - *puVar1;
      if (uVar2 < uVar7 && (ulong)uVar7 < lVar8 + (ulong)uVar4) {
        iVar3 = uVar7 - (int)uVar2;
      }
      iVar5 = iVar3 + iVar5;
    } while (plVar6 != (long *)0x0);
  }
  plVar6 = *(long **)(param_1 + 0xd0);
  if (plVar6 != (long *)0x0) {
    uVar7 = *(uint *)(param_1 + 0x90);
    do {
      lVar8 = *(long *)plVar6[1];
      puVar1 = (uint *)(plVar6 + 2);
      uVar4 = *(uint *)((long *)plVar6[1] + 3);
      uVar2 = lVar8 + (ulong)*puVar1;
      plVar6 = (long *)*plVar6;
      iVar3 = uVar4 - *puVar1;
      if (uVar2 < uVar7 && (ulong)uVar7 < lVar8 + (ulong)uVar4) {
        iVar3 = uVar7 - (int)uVar2;
      }
      iVar5 = iVar3 + iVar5;
    } while (plVar6 != (long *)0x0);
  }
  return iVar5;
}


