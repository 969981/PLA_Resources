/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085c7b4; name: FUN_0085c7b4
 */


/* WARNING: Removing unreachable block (ram,0x0085c8fc) */

void FUN_0085c7b4(long param_1)

{
  void *__dest;
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  void *__src;
  undefined8 uVar9;
  undefined1 auStack_c0 [24];
  undefined *local_a8;
  void *pvStack_a0;
  undefined4 local_98;
  char local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 auStack_80 [32];
  
  __dest = (void *)(param_1 + 0x768);
  puVar1 = PTR_DAT_04377590 + 0x10;
  lVar7 = *(long *)(param_1 + 0x1338);
  while( true ) {
    if (((lVar7 == 0) || (*(int *)(param_1 + 0x1340) == 0)) ||
       (iVar5 = *(int *)(param_1 + 0x1348), iVar5 == *(int *)(param_1 + 0x1344))) {
      return;
    }
    lVar8 = lVar7 + (long)iVar5 * 0x5d0;
    uVar2 = *(uint *)(lVar8 + 0x5c0);
    if (0x4d8 < uVar2) {
      return;
    }
    __src = (void *)(lVar7 + (long)iVar5 * 0x5d0);
    memcpy(__dest,__src,(ulong)uVar2);
    iVar5 = *(int *)(param_1 + 0x1348) + 1;
    iVar3 = *(int *)(param_1 + 0x1340);
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = iVar5 / iVar3;
    }
    iVar4 = *(int *)(lVar8 + 0x5c0);
    uVar9 = *(undefined8 *)((long)__src + 0x5c8);
    *(int *)(param_1 + 0x1348) = iVar5 - iVar6 * iVar3;
    if (iVar4 == 0) break;
    if ((iVar4 - 4U < 0x4d5) &&
       (lVar7 = FUN_0085e934(*(undefined8 *)(param_1 + 0x1308),uVar9), lVar7 != 0)) {
      FUN_007f0ce0(auStack_80);
      FUN_007f110c(auStack_80,uVar9);
      FUN_007f1158(auStack_80,0x4e96);
      local_98 = 0x4d8;
      local_94 = '\x01';
      local_90 = 4;
      local_88 = 0;
      local_a8 = puVar1;
      pvStack_a0 = __dest;
      FUN_007fd53c(&local_a8);
      if (local_94 == '\x01') {
        return;
      }
      FUN_007ff084(auStack_c0,param_1 + 0xc40,iVar4);
      FUN_007ff094(auStack_c0,__dest,iVar4,local_94);
      FUN_007f605c(param_1,auStack_c0,auStack_80);
    }
    lVar7 = *(long *)(param_1 + 0x1338);
  }
  return;
}


