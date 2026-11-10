/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027da6e0; name: FUN_027da6e0
 */


void FUN_027da6e0(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_30 [16];
  
  if (((*(long *)(param_1 + 0xa8) != 0) && (*(long *)(param_1 + 0xb0) != 0)) &&
     (*(long *)(param_1 + 0x70) != 0)) {
    uVar2 = FUN_02728974();
    if ((uVar2 & 1) == 0) {
      FUN_00daf4a0(auStack_30,*(undefined8 *)(param_1 + 8));
      uVar1 = FUN_02c5be48(*(undefined8 *)(param_1 + 0xa8));
      uVar3 = FUN_00daf624(auStack_30,uVar1);
      uVar1 = FUN_02c5be50(*(undefined8 *)(param_1 + 0xa8));
      uVar3 = FUN_00daf654(uVar3,uVar1);
      uVar1 = FUN_02c5be48(*(undefined8 *)(param_1 + 0xb0));
      uVar3 = FUN_00daf684(uVar3,uVar1);
      uVar1 = FUN_02c5be50(*(undefined8 *)(param_1 + 0xb0));
      uVar3 = FUN_00daf6b4(uVar3,uVar1);
      uVar1 = FUN_01123cd8(*(undefined8 *)(param_1 + 0x70));
      plVar4 = (long *)FUN_00daf6e4(uVar3,uVar1);
      (**(code **)(*plVar4 + 0x10))();
      thunk_FUN_00daf734(auStack_30);
    }
    else {
      FUN_00daf21c(auStack_30,*(undefined8 *)(param_1 + 8));
      uVar1 = FUN_02c5be48(*(undefined8 *)(param_1 + 0xa8));
      uVar3 = FUN_00daf3a0(auStack_30,uVar1);
      uVar1 = FUN_02c5be50(*(undefined8 *)(param_1 + 0xa8));
      uVar3 = FUN_00daf3d0(uVar3,uVar1);
      uVar1 = FUN_02c5be48(*(undefined8 *)(param_1 + 0xb0));
      uVar3 = FUN_00daf400(uVar3,uVar1);
      uVar1 = FUN_02c5be50(*(undefined8 *)(param_1 + 0xb0));
      uVar3 = FUN_00daf430(uVar3,uVar1);
      uVar1 = FUN_01123cd8(*(undefined8 *)(param_1 + 0x70));
      plVar4 = (long *)FUN_00daf460(uVar3,uVar1);
      (**(code **)(*plVar4 + 0x10))();
      thunk_FUN_00daf734(auStack_30);
    }
  }
  return;
}


