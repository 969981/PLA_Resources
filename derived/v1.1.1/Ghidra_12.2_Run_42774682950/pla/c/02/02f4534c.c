/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4534c; name: FUN_02f4534c
 */


void FUN_02f4534c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 auStack_210 [128];
  
  uVar1 = *(uint *)(param_1 + 0x88);
  uVar4 = (ulong)uVar1;
  lVar2 = -(uVar4 * 4 + 0xf & 0x7fffffff0);
  puVar3 = (undefined4 *)((long)auStack_210 + lVar2 + 0x200);
  if (uVar1 != 0) {
    lVar6 = *(long *)(param_1 + 0x80);
    *puVar3 = *(undefined4 *)(lVar6 + 8);
    if (((uVar1 != 1) &&
        (*(undefined4 *)((long)auStack_210 + lVar2 + 0x204) = *(undefined4 *)(lVar6 + 0x20),
        uVar1 != 2)) &&
       (*(undefined4 *)((long)auStack_210 + lVar2 + 0x208) = *(undefined4 *)(lVar6 + 0x38),
       uVar1 != 3)) {
      lVar5 = uVar4 - 3;
      puVar7 = (undefined4 *)(lVar6 + 0x50);
      puVar8 = (undefined4 *)((long)auStack_210 + lVar2 + 0x20c);
      do {
        lVar5 = lVar5 + -1;
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 6;
        puVar8 = puVar8 + 1;
      } while (lVar5 != 0);
    }
  }
  FUN_02ea8b20(*(long *)(param_1 + 0x78) + 0x128,*(undefined4 *)(*(long *)(param_1 + 0x78) + 0x10),
               puVar3,uVar4,0,0,0);
  return;
}


