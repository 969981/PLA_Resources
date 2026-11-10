/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004cde80; name: FUN_004cde80
 */


void FUN_004cde80(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_1 + 0xb0);
  if ((*(long *)(lVar4 + 0x1f8) == 0) && (*(long *)(lVar4 + 0x200) == 0)) {
    if (*(code **)(lVar4 + 0x210) == (code *)0x0) {
      *(undefined4 *)(lVar4 + 0x208) = 1000000;
    }
    else {
      uVar2 = (**(code **)(lVar4 + 0x210))(param_1,0);
      lVar4 = *(long *)(param_1 + 0xb0);
      *(undefined4 *)(lVar4 + 0x208) = uVar2;
    }
  }
  FUN_004281c0(lVar4 + 0x1f8);
  lVar5 = *(long *)(param_1 + 0xb0);
  lVar4 = *(long *)(lVar5 + 0x1f8) + (ulong)(*(uint *)(lVar5 + 0x208) / 1000000);
  lVar1 = *(long *)(lVar5 + 0x200) + (ulong)(*(uint *)(lVar5 + 0x208) % 1000000);
  *(long *)(lVar5 + 0x1f8) = lVar4;
  *(long *)(lVar5 + 0x200) = lVar1;
  if (999999 < lVar1) {
    *(long *)(lVar5 + 0x1f8) = lVar4 + 1;
    *(long *)(lVar5 + 0x200) = lVar1 + -1000000;
  }
  uVar3 = FUN_004c3370(param_1);
  FUN_00404920(uVar3,0x2d,0,*(long *)(param_1 + 0xb0) + 0x1f8);
  return;
}


