/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00807a64; name: FUN_00807a64
 */


ulong FUN_00807a64(long param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  int local_30 [4];
  
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = FUN_007f63fc(uVar4);
  if (((((uVar2 & 1) == 0) && (uVar2 = FUN_007f6c84(uVar4), (uVar2 & 1) == 0)) ||
      (FUN_007ee578(local_30,*(long *)(param_1 + 0x58) + 0x1a8), local_30[0] != 0)) ||
     (FUN_007fc610(local_30,*(undefined8 *)(param_1 + 0x58)), local_30[0] != 0)) {
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0xd8))();
    bVar1 = (uVar2 & 1) == 0;
    uVar2 = 0;
    if (bVar1) {
      uVar2 = 0xf0000;
    }
    uVar3 = 4;
    if (!bVar1) {
      uVar3 = 1;
    }
  }
  return uVar3 | uVar2;
}


