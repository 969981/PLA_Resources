/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00245f88; name: FUN_00245f88
 */


void FUN_00245f88(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_00245e80();
  if (*(long **)(param_1 + 0x48) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x48) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x48) + 0x18))(*(long **)(param_1 + 0x48),param_2);
    }
    FUN_00232674(*(undefined8 *)(param_1 + 0x48));
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(long **)(param_1 + 0x80) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x80) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x80) + 0x18))(*(long **)(param_1 + 0x80),param_2);
    }
    FUN_00232674(*(undefined8 *)(param_1 + 0x80));
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long **)(param_1 + 0x88) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x88) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x88) + 0x18))(*(long **)(param_1 + 0x88),param_2);
    }
    FUN_00232674(*(undefined8 *)(param_1 + 0x88));
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long **)(param_1 + 0x90) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x90) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x90) + 0x18))(*(long **)(param_1 + 0x90),param_2);
    }
    FUN_00232674(*(undefined8 *)(param_1 + 0x90));
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x30))();
    if ((uVar1 & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x78) + 0x18))(*(long **)(param_1 + 0x78),param_2);
    }
    FUN_00232674(*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}


