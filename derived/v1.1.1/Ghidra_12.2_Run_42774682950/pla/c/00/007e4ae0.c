/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e4ae0; name: FUN_007e4ae0
 */


void FUN_007e4ae0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[3] = 0x400000000;
  FUN_007e57c4(param_1 + 4);
  FUN_007e610c(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_007e3400(param_1 + 0xb1);
  *(undefined2 *)(param_1 + 0xb5) = 0;
  param_1[0xb6] = 0;
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a7a0(0x458,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar2 + lVar3) = 0;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x458);
  }
  *param_1 = lVar2;
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a7a0(0x498,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      lVar4 = lVar2 + 3 + lVar3;
      lVar3 = lVar3 + 7;
      *(undefined4 *)(lVar4 + -3) = 0;
      *(undefined2 *)(lVar4 + 1) = 0;
      *(undefined1 *)(lVar4 + 3) = 0;
    } while (lVar3 != 0x498);
  }
  param_1[1] = lVar2;
  uVar1 = FUN_007e336c();
  lVar2 = FUN_0081a7a0(0x2750,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = lVar2 + 3;
    lVar4 = 0x2750;
    do {
      *(undefined4 *)(lVar3 + -3) = 0;
      lVar3 = lVar3 + 4;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  param_1[2] = lVar2;
  FUN_007e4464(param_1 + 0xb1);
  return;
}


