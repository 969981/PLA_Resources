/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ec7fd0; name: FUN_02ec7fd0
 */


void FUN_02ec7fd0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = *(undefined4 **)(param_1 + 0x78);
  puVar5 = puVar3;
  if (*(int *)(param_1 + 0x80) != 0) {
    do {
      puVar6 = puVar5 + 4;
      FUN_02ef886c(*puVar5,puVar5 + 2);
      puVar3 = *(undefined4 **)(param_1 + 0x78);
      puVar5 = puVar6;
    } while (puVar6 != puVar3 + (ulong)*(uint *)(param_1 + 0x80) * 4);
  }
  if (puVar3 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x84) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x68);
  lVar1 = lVar4;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      FUN_02f59e60(0,*(undefined8 *)(lVar1 + 8));
      lVar4 = *(long *)(param_1 + 0x68);
      lVar1 = lVar1 + 0x10;
    } while (lVar1 != lVar4 + (ulong)*(uint *)(param_1 + 0x70) * 0x10);
  }
  if (lVar4 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xa8);
  uVar2 = *(uint *)(param_1 + 0xb0);
  if (uVar2 != 0) {
    lVar4 = lVar1;
    do {
      if (*(long *)(lVar4 + 8) != 0) {
        *(undefined4 *)(lVar4 + 0x10) = 0;
        FUN_02f59e70(0,*(long *)(lVar4 + 8));
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined4 *)(lVar4 + 0x14) = 0;
        lVar1 = *(long *)(param_1 + 0xa8);
        uVar2 = *(uint *)(param_1 + 0xb0);
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar4 != lVar1 + (ulong)uVar2 * 0x18);
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_02f59e60(0);
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined4 *)(param_1 + 0xb4) = 0;
  }
  return;
}


