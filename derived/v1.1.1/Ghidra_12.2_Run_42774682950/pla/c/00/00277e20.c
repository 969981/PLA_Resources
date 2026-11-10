/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00277e20; name: FUN_00277e20
 */


void FUN_00277e20(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  if (param_2 == 0) {
    FUN_00271770("Heap is not set in the argument of the resource destruction method.");
    lVar2 = *(long *)(param_1 + 0x538);
  }
  else {
    *(long *)(param_1 + 0x458) = param_2;
    lVar2 = *(long *)(param_1 + 0x538);
  }
  if (lVar2 != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
  }
  if (*(long *)(param_1 + 0x4b0) != 0) {
    uVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
    FUN_0087cb1c(uVar1,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x4b0) = 0;
  }
  if (*(long *)(param_1 + 0x4f8) != 0) {
    uVar1 = nn::util::BinaryFileHeader::GetFirstBlock();
    FUN_0087cb1c(uVar1,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x4f8) = 0;
  }
  lVar2 = param_1 + 0x450;
  FUN_0027ab80(param_1 + 0x4c0,*(undefined8 *)(param_1 + 0x10),lVar2);
  FUN_0027af98(param_1 + 0x508,*(undefined8 *)(param_1 + 0x10),lVar2);
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_0028d744(*(long *)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  lVar3 = *(long *)(param_1 + 0xa8);
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar4 = 0;
    do {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      lVar3 = *(long *)(*(long *)(lVar3 + 0x28) + lVar4 * 8);
      FUN_0087eb6c(*(undefined8 *)(lVar3 + 0x80),uVar1);
      FUN_0087ecf8(*(undefined8 *)(lVar3 + 0x88),uVar1);
      lVar4 = lVar4 + 1;
      lVar3 = *(long *)(param_1 + 0xa8);
    } while (lVar4 < *(int *)(param_1 + 0xa0));
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == *(long *)(lVar3 + 0x40)) {
      FUN_00878520(*(long *)(lVar3 + 0x48),*(undefined8 *)(param_1 + 0x10));
    }
    *(undefined8 *)(lVar3 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x4c)) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(param_1 + 0x58);
      if (0 < *(int *)(lVar4 + lVar3 * 0x38 + 4)) {
        lVar5 = 0;
        lVar6 = 0;
        do {
          lVar4 = *(long *)(lVar4 + lVar3 * 0x38 + 0x18) + lVar5;
          FUN_00266d08(lVar4,*(undefined8 *)(param_1 + 0x10));
          FUN_002678b8(lVar4,*(undefined8 *)(param_1 + 0x10));
          lVar4 = *(long *)(param_1 + 0x58);
          lVar6 = lVar6 + 1;
          lVar5 = lVar5 + 0x3e0;
        } while (lVar6 < *(int *)(lVar4 + lVar3 * 0x38 + 4));
      }
      uVar1 = *(undefined8 *)(lVar4 + lVar3 * 0x38 + 0x20);
      *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
      (**(code **)(**(long **)(param_1 + 0x458) + 0x18))(*(long **)(param_1 + 0x458),uVar1);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x4c));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if (*(long *)(param_1 + 0x60) != 0) {
    *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + -1;
    (**(code **)(**(long **)(param_1 + 0x458) + 0x18))();
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x140) != '\0') {
    FUN_0028d3b4(param_1 + 0xf0,*(undefined8 *)(param_1 + 0x10),lVar2);
  }
  if (*(char *)(param_1 + 0x2f0) == '\0') {
    return;
  }
  FUN_0028d3b4(param_1 + 0x2a0,*(undefined8 *)(param_1 + 0x10),lVar2);
  return;
}


