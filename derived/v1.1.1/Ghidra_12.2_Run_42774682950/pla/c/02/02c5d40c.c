/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5d40c; name: FUN_02c5d40c
 */


void FUN_02c5d40c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if ((int)uVar1 < 3) {
    uVar2 = FUN_02c69870(*(undefined8 *)(param_1 + 0x98));
    FUN_02c7afc8(*(undefined8 *)(param_1 + 0x98),uVar2 & 0xfffffffc | uVar1);
  }
  uVar1 = param_2[1];
  if ((int)uVar1 < 3) {
    uVar2 = FUN_02c69870(*(undefined8 *)(param_1 + 0x98));
    FUN_02c7afc8(*(undefined8 *)(param_1 + 0x98),uVar2 & 0xfffffff3 | uVar1 << 2);
  }
  uVar1 = param_2[2];
  if ((int)uVar1 < 3) {
    uVar2 = FUN_02c69870(*(undefined8 *)(param_1 + 0x98));
    FUN_02c7afc8(*(undefined8 *)(param_1 + 0x98),uVar2 & 0xffffffcf | uVar1 << 4);
  }
  uVar1 = param_2[3];
  if ((int)uVar1 < 3) {
    uVar2 = FUN_02c69870(*(undefined8 *)(param_1 + 0x98));
    FUN_02c7afc8(*(undefined8 *)(param_1 + 0x98),uVar2 & 0xffffff3f | uVar1 << 6);
  }
  uVar1 = param_2[4];
  if ((int)uVar1 < 3) {
    uVar2 = FUN_02c69870(*(undefined8 *)(param_1 + 0x98));
    FUN_02c7afc8(*(undefined8 *)(param_1 + 0x98),uVar2 & 0xfffffcff | uVar1 << 8);
  }
  uVar1 = param_2[5];
  if ((int)uVar1 < 3) {
    uVar2 = FUN_02c69870(*(undefined8 *)(param_1 + 0x98));
    FUN_02c7afc8(*(undefined8 *)(param_1 + 0x98),uVar2 & 0xfffff3ff | uVar1 << 10);
    return;
  }
  return;
}


