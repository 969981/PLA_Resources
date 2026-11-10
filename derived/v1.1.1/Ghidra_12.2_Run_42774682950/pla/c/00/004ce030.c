/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ce030; name: FUN_004ce030
 */


void FUN_004ce030(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0xb0);
  *(undefined4 *)(lVar2 + 0x1f0) = 0;
  *(undefined8 *)(lVar2 + 0x1e8) = 0;
  lVar2 = *(long *)(param_1 + 0xb0);
  *(undefined8 *)(lVar2 + 0x1f8) = 0;
  *(undefined8 *)(lVar2 + 0x200) = 0;
  *(undefined4 *)(*(long *)(param_1 + 0xb0) + 0x208) = 1000000;
  uVar1 = FUN_004c3370();
  FUN_00404920(uVar1,0x2d,0,*(long *)(param_1 + 0xb0) + 0x1f8);
  lVar2 = FUN_004f5d20(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
  if (lVar2 != 0) {
    do {
      FUN_004cbbd0(*(undefined8 *)(lVar2 + 8));
      FUN_004f5be0(lVar2);
      lVar2 = FUN_004f5d20(*(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x120));
    } while (lVar2 != 0);
  }
  return;
}


