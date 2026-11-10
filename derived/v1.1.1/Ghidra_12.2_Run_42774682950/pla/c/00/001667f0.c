/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001667f0; name: FUN_001667f0
 */


void FUN_001667f0(long param_1,int param_2,long param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x58);
  lVar9 = (long)param_2;
  plVar4 = *(long **)(param_1 + 0x30);
  lVar5 = *(long *)(lVar10 + 0x10);
  uVar8 = (uint)*(byte *)(lVar5 + (long)param_2 * 0x18 + 0x10);
  if (uVar8 < *(byte *)(param_3 + 0x10)) {
    plVar7 = (long *)(lVar5 + lVar9 * 0x18);
    uVar3 = FUN_00162fa0(*(undefined8 *)(param_1 + 0x38),
                         "<goto %s> at line %d jumps into the scope of local \'%s\'",*plVar7 + 0x18,
                         *(undefined4 *)((long)plVar7 + 0xc),
                         *(long *)(*(long *)(*plVar4 + 0x50) +
                                  (long)*(short *)(**(long **)(plVar4[2] + 0x58) +
                                                  (long)(int)(*(int *)((long)plVar4 + 0x34) + uVar8)
                                                  * 2) * 0x10) + 0x18);
    FUN_00166910(param_1,uVar3);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x166904);
    (*pcVar2)();
  }
  FUN_001672a0(plVar4,*(undefined4 *)(lVar5 + lVar9 * 0x18 + 8),*(undefined4 *)(param_3 + 8));
  uVar8 = *(int *)(lVar10 + 0x18) - 1;
  uVar6 = (ulong)uVar8;
  if (param_2 < (int)uVar8) {
    lVar5 = lVar9 * 0x18;
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x10) + lVar5);
      lVar9 = lVar9 + 1;
      lVar5 = lVar5 + 0x18;
      *puVar1 = puVar1[3];
      puVar1[1] = puVar1[4];
      puVar1[2] = puVar1[5];
      uVar6 = (long)*(int *)(lVar10 + 0x18) - 1;
    } while (lVar9 < (long)uVar6);
  }
  *(int *)(lVar10 + 0x18) = (int)uVar6;
  return;
}


