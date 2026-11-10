/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033725d0; name: FUN_033725d0
 */


void FUN_033725d0(long param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_033728d4();
  uVar3 = (uint)*(undefined8 *)(param_1 + 0x10);
  uVar3 = uVar3 | uVar3 >> 1;
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x10) >> 0x20);
  uVar2 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 | uVar3 >> 2;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar3 = uVar3 | uVar3 >> 4;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar3 = uVar3 | uVar3 >> 8;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar3 = uVar3 | uVar3 >> 0x10;
  uVar2 = uVar2 | uVar2 >> 0x10;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
  uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
  uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
  uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
  uVar2 = (uVar2 + (uVar2 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
  iVar1 = 0x40 - ((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18);
  if (uVar2 != 0) {
    iVar1 = 0x20 - uVar2;
  }
  param_2[1] = CONCAT44((int)((ulong)param_2[1] >> 0x20),iVar1);
  *param_2 = *param_2;
  return;
}


