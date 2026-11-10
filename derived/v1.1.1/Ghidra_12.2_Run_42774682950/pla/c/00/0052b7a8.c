/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0052b7a8; name: FUN_0052b7a8
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0052b7a8(long param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_002ef660();
  if (iVar2 == 0) {
    return;
  }
  lVar3 = FUN_00536130(*(undefined8 *)(param_1 + 0x10));
  bVar1 = *(byte *)(param_1 + 0x28);
  if ((bVar1 & 1) != 0) {
    FUN_003de350(lVar3 + 0xa0);
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 >> 1 & 1) != 0) {
    FUN_003de350(lVar3 + 0x1c0);
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 >> 3 & 1) != 0) {
    FUN_003de350(lVar3 + 0x2a8);
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  if ((bVar1 >> 5 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x10);
  }
  else {
    FUN_003de350(lVar3 + 0x430);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_005363ac();
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_003c9ce0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + 0x120),"batch_data");
  return;
}


