/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5703c; name: FUN_02b5703c
 */


void FUN_02b5703c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar7 = (long *)param_2[3];
  param_1[3] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  uVar1 = param_2[7];
  uVar3 = param_2[8];
  uVar2 = param_2[9];
  uVar4 = param_2[10];
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[9] = uVar2;
  param_1[10] = uVar4;
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  lVar6 = param_2[5] - param_2[4];
  if (lVar6 != 0) {
    uVar9 = param_1[8];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) goto LAB_02b57674;
    puVar10 = param_1 + 7;
    lVar8 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xb8))();
    }
    param_1[6] = lVar8 + (lVar6 >> 3) * 8;
    param_1[4] = lVar8;
    param_1[5] = lVar8;
    lVar5 = param_2[5];
    for (lVar6 = param_2[4]; lVar6 != lVar5; lVar6 = lVar6 + 0x28) {
      FUN_02b57690(puVar10,lVar8,lVar6);
      lVar8 = param_1[5] + 0x28;
      param_1[5] = lVar8;
    }
  }
  uVar1 = param_2[0xe];
  uVar3 = param_2[0xf];
  uVar2 = param_2[0x10];
  uVar4 = param_2[0x11];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = uVar2;
  param_1[0x11] = uVar4;
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar3;
  lVar6 = param_2[0xc] - param_2[0xb];
  if (lVar6 != 0) {
    uVar9 = param_1[0xf];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)((lVar6 >> 3) * -0x71c71c71c71c71c7)) goto LAB_02b57674;
    puVar10 = param_1 + 0xe;
    lVar8 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar6,4);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xb8))();
    }
    param_1[0xd] = lVar8 + (lVar6 >> 3) * 8;
    param_1[0xb] = lVar8;
    param_1[0xc] = lVar8;
    lVar5 = param_2[0xc];
    for (lVar6 = param_2[0xb]; lVar6 != lVar5; lVar6 = lVar6 + 0x48) {
      FUN_02b57798(puVar10,lVar8,lVar6);
      lVar8 = param_1[0xc] + 0x48;
      param_1[0xc] = lVar8;
    }
  }
  param_1[0x12] = param_2[0x12];
  uVar1 = param_2[0x16];
  uVar3 = param_2[0x17];
  uVar2 = param_2[0x18];
  uVar4 = param_2[0x19];
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = uVar2;
  param_1[0x19] = uVar4;
  param_1[0x16] = uVar1;
  param_1[0x17] = uVar3;
  lVar6 = param_2[0x14] - param_2[0x13];
  if (lVar6 != 0) {
    uVar9 = param_1[0x17];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar6 >> 5)) goto LAB_02b57674;
    puVar10 = param_1 + 0x16;
    lVar8 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xb8))();
    }
    param_1[0x13] = lVar8;
    param_1[0x14] = lVar8;
    param_1[0x15] = lVar8 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[0x14];
    for (lVar6 = param_2[0x13]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(puVar10,lVar8,lVar6);
      lVar8 = param_1[0x14] + 0x20;
      param_1[0x14] = lVar8;
    }
  }
  uVar1 = param_2[0x1d];
  uVar3 = param_2[0x1e];
  uVar2 = param_2[0x1f];
  uVar4 = param_2[0x20];
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = uVar2;
  param_1[0x20] = uVar4;
  param_1[0x1d] = uVar1;
  param_1[0x1e] = uVar3;
  lVar6 = param_2[0x1b] - param_2[0x1a];
  if (lVar6 != 0) {
    uVar9 = param_1[0x1e];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar6 >> 5)) {
LAB_02b57674:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar10 = param_1 + 0x1d;
    lVar8 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xb8))();
    }
    param_1[0x1a] = lVar8;
    param_1[0x1b] = lVar8;
    param_1[0x1c] = lVar8 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[0x1b];
    for (lVar6 = param_2[0x1a]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(puVar10,lVar8,lVar6);
      lVar8 = param_1[0x1b] + 0x20;
      param_1[0x1b] = lVar8;
    }
  }
  uVar1 = param_2[0x24];
  uVar3 = param_2[0x25];
  uVar2 = param_2[0x26];
  uVar4 = param_2[0x27];
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x26] = uVar2;
  param_1[0x27] = uVar4;
  param_1[0x24] = uVar1;
  param_1[0x25] = uVar3;
  lVar6 = param_2[0x22] - param_2[0x21];
  if (lVar6 != 0) {
    uVar9 = param_1[0x25];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar6 >> 5)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (**(code **)(*(long *)param_1[0x24] + 0x10))((long *)param_1[0x24],lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)param_1[0x24] + 0xb8))();
    }
    param_1[0x21] = lVar8;
    param_1[0x22] = lVar8;
    param_1[0x23] = lVar8 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[0x22];
    for (lVar6 = param_2[0x21]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(param_1 + 0x24,lVar8,lVar6);
      lVar8 = param_1[0x22] + 0x20;
      param_1[0x22] = lVar8;
    }
  }
  uVar1 = param_2[0x2b];
  uVar3 = param_2[0x2c];
  uVar2 = param_2[0x2d];
  uVar4 = param_2[0x2e];
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = uVar2;
  param_1[0x2e] = uVar4;
  param_1[0x2b] = uVar1;
  param_1[0x2c] = uVar3;
  lVar6 = param_2[0x29] - param_2[0x28];
  if (lVar6 != 0) {
    uVar9 = param_1[0x2c];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar6 >> 5)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (**(code **)(*(long *)param_1[0x2b] + 0x10))((long *)param_1[0x2b],lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)param_1[0x2b] + 0xb8))();
    }
    param_1[0x28] = lVar8;
    param_1[0x29] = lVar8;
    param_1[0x2a] = lVar8 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[0x29];
    for (lVar6 = param_2[0x28]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(param_1 + 0x2b,lVar8,lVar6);
      lVar8 = param_1[0x29] + 0x20;
      param_1[0x29] = lVar8;
    }
  }
  uVar1 = param_2[0x32];
  uVar3 = param_2[0x33];
  uVar2 = param_2[0x34];
  uVar4 = param_2[0x35];
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = uVar2;
  param_1[0x35] = uVar4;
  param_1[0x32] = uVar1;
  param_1[0x33] = uVar3;
  lVar6 = param_2[0x30] - param_2[0x2f];
  if (lVar6 != 0) {
    uVar9 = param_1[0x33];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar6 >> 5)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (**(code **)(*(long *)param_1[0x32] + 0x10))((long *)param_1[0x32],lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)param_1[0x32] + 0xb8))();
    }
    param_1[0x2f] = lVar8;
    param_1[0x30] = lVar8;
    param_1[0x31] = lVar8 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[0x30];
    for (lVar6 = param_2[0x2f]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(param_1 + 0x32,lVar8,lVar6);
      lVar8 = param_1[0x30] + 0x20;
      param_1[0x30] = lVar8;
    }
  }
  return;
}


