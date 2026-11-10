/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294fc84; name: FUN_0294fc84
 */


void FUN_0294fc84(long param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long lVar3;
  
  if ((param_2 & 1) != 0) {
    uVar1 = FUN_02c63ba8(*(undefined8 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 0x2dc) = uVar1;
    uVar1 = FUN_02c63ce0(*(undefined8 *)(param_1 + 0x60));
    *(undefined1 *)(param_1 + 0x2dd) = uVar1;
    *(undefined4 *)(param_1 + 0x2e0) = 0;
    *(undefined1 *)(param_1 + 0x2de) = 0x12;
  }
  uVar1 = FUN_02c6f5e8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined1 *)(param_1 + 0x2df) = uVar1;
  if ((param_3 & 1) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
    if (*(long *)(lVar3 + 8) == 0) {
      uVar2 = FUN_02c5e59c();
    }
    else {
      uVar2 = FUN_02c671ac(lVar3);
    }
    *(undefined2 *)(param_1 + 0x2d2) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
    if (*(long *)(lVar3 + 8) == 0) {
      uVar2 = FUN_02c5e850();
    }
    else {
      uVar2 = FUN_02c674d4(lVar3);
    }
    *(undefined2 *)(param_1 + 0x2d4) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
    if (*(long *)(lVar3 + 8) == 0) {
      uVar2 = FUN_02c5eb08();
    }
    else {
      uVar2 = FUN_02c677fc(lVar3);
    }
    *(undefined2 *)(param_1 + 0x2d6) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
    if (*(long *)(lVar3 + 8) == 0) {
      uVar2 = FUN_02c5edc0();
    }
    else {
      uVar2 = FUN_02c67b24(lVar3);
    }
    *(undefined2 *)(param_1 + 0x2d8) = uVar2;
    lVar3 = *(long *)(*(long *)(param_1 + 0x60) + 0x98);
    if (*(long *)(lVar3 + 8) == 0) {
      uVar2 = FUN_02c5f078();
    }
    else {
      uVar2 = FUN_02c67e4c(lVar3);
    }
    *(undefined2 *)(param_1 + 0x2da) = uVar2;
  }
  uVar2 = FUN_02c6849c(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x98));
  *(undefined2 *)(param_1 + 0x2d0) = uVar2;
  return;
}


