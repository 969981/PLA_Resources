/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c2ebc; name: FUN_018c2ebc
 */


void FUN_018c2ebc(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  
  *param_1 = *param_2;
  uVar4 = param_2[4];
  uVar6 = param_2[5];
  uVar5 = param_2[6];
  uVar7 = param_2[7];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = uVar5;
  param_1[7] = uVar7;
  param_1[4] = uVar4;
  param_1[5] = uVar6;
  lVar10 = param_2[2] - param_2[1];
  if (lVar10 != 0) {
    uVar3 = param_1[5];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)(lVar10 >> 5)) goto LAB_018c36f4;
    puVar9 = param_1 + 4;
    lVar1 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar10,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*puVar9 + 0xb8))();
    }
    param_1[1] = lVar1;
    param_1[2] = lVar1;
    param_1[3] = lVar1 + (lVar10 >> 5) * 0x20;
    lVar8 = param_2[2];
    for (lVar10 = param_2[1]; lVar10 != lVar8; lVar10 = lVar10 + 0x20) {
      FUN_00da822c(puVar9,lVar1,lVar10);
      lVar1 = param_1[2] + 0x20;
      param_1[2] = lVar1;
    }
  }
  uVar4 = param_2[0xb];
  uVar6 = param_2[0xc];
  uVar5 = param_2[0xd];
  uVar7 = param_2[0xe];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = uVar5;
  param_1[0xe] = uVar7;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar6;
  lVar10 = param_2[9] - param_2[8];
  if (lVar10 != 0) {
    uVar3 = param_1[0xc];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)(lVar10 >> 5)) goto LAB_018c36f4;
    puVar9 = param_1 + 0xb;
    lVar1 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar10,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*puVar9 + 0xb8))();
    }
    param_1[8] = lVar1;
    param_1[9] = lVar1;
    param_1[10] = lVar1 + (lVar10 >> 5) * 0x20;
    lVar8 = param_2[9];
    for (lVar10 = param_2[8]; lVar10 != lVar8; lVar10 = lVar10 + 0x20) {
      FUN_00da822c(puVar9,lVar1,lVar10);
      lVar1 = param_1[9] + 0x20;
      param_1[9] = lVar1;
    }
  }
  uVar4 = param_2[0x12];
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x14];
  uVar7 = param_2[0x15];
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = uVar5;
  param_1[0x15] = uVar7;
  param_1[0x12] = uVar4;
  param_1[0x13] = uVar6;
  lVar10 = param_2[0x10] - param_2[0xf];
  if (lVar10 != 0) {
    uVar3 = param_1[0x13];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)(lVar10 >> 5)) goto LAB_018c36f4;
    puVar9 = param_1 + 0x12;
    lVar1 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar10,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*puVar9 + 0xb8))();
    }
    param_1[0xf] = lVar1;
    param_1[0x10] = lVar1;
    param_1[0x11] = lVar1 + (lVar10 >> 5) * 0x20;
    lVar8 = param_2[0x10];
    for (lVar10 = param_2[0xf]; lVar10 != lVar8; lVar10 = lVar10 + 0x20) {
      FUN_00da822c(puVar9,lVar1,lVar10);
      lVar1 = param_1[0x10] + 0x20;
      param_1[0x10] = lVar1;
    }
  }
  uVar4 = param_2[0x19];
  uVar6 = param_2[0x1a];
  uVar5 = param_2[0x1b];
  uVar7 = param_2[0x1c];
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = uVar5;
  param_1[0x1c] = uVar7;
  param_1[0x19] = uVar4;
  param_1[0x1a] = uVar6;
  lVar10 = param_2[0x17] - param_2[0x16];
  if (lVar10 != 0) {
    uVar3 = param_1[0x1a];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)(lVar10 >> 5)) goto LAB_018c36f4;
    puVar9 = param_1 + 0x19;
    lVar1 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar10,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)*puVar9 + 0xb8))();
    }
    param_1[0x16] = lVar1;
    param_1[0x17] = lVar1;
    param_1[0x18] = lVar1 + (lVar10 >> 5) * 0x20;
    lVar8 = param_2[0x17];
    for (lVar10 = param_2[0x16]; lVar10 != lVar8; lVar10 = lVar10 + 0x20) {
      FUN_00da822c(puVar9,lVar1,lVar10);
      lVar1 = param_1[0x17] + 0x20;
      param_1[0x17] = lVar1;
    }
  }
  uVar4 = param_2[0x20];
  uVar6 = param_2[0x21];
  uVar5 = param_2[0x22];
  uVar7 = param_2[0x23];
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = uVar5;
  param_1[0x23] = uVar7;
  param_1[0x20] = uVar4;
  param_1[0x21] = uVar6;
  lVar10 = param_2[0x1e] - param_2[0x1d];
  if (lVar10 != 0) {
    uVar3 = param_1[0x21];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)(lVar10 >> 5)) {
LAB_018c36f4:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (**(code **)(*(long *)param_1[0x20] + 0x10))((long *)param_1[0x20],lVar10,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)param_1[0x20] + 0xb8))();
    }
    param_1[0x1d] = lVar1;
    param_1[0x1e] = lVar1;
    param_1[0x1f] = lVar1 + (lVar10 >> 5) * 0x20;
    lVar8 = param_2[0x1e];
    for (lVar10 = param_2[0x1d]; lVar10 != lVar8; lVar10 = lVar10 + 0x20) {
      FUN_00da822c(param_1 + 0x20,lVar1,lVar10);
      lVar1 = param_1[0x1e] + 0x20;
      param_1[0x1e] = lVar1;
    }
  }
  uVar4 = param_2[0x27];
  uVar6 = param_2[0x28];
  uVar5 = param_2[0x29];
  uVar7 = param_2[0x2a];
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x29] = uVar5;
  param_1[0x2a] = uVar7;
  param_1[0x27] = uVar4;
  param_1[0x28] = uVar6;
  lVar10 = param_2[0x25] - param_2[0x24];
  if (lVar10 != 0) {
    uVar3 = param_1[0x28];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)((lVar10 >> 5) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (**(code **)(*(long *)param_1[0x27] + 0x10))((long *)param_1[0x27],lVar10,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)param_1[0x27] + 0xb8))();
    }
    param_1[0x26] = lVar1 + (lVar10 >> 5) * 0x20;
    param_1[0x24] = lVar1;
    param_1[0x25] = lVar1;
    lVar8 = param_2[0x25];
    for (lVar10 = param_2[0x24]; lVar10 != lVar8; lVar10 = lVar10 + 0x60) {
      FUN_018c3710(param_1 + 0x27,lVar1,lVar10);
      lVar1 = param_1[0x25] + 0x60;
      param_1[0x25] = lVar1;
    }
  }
  uVar4 = param_2[0x2e];
  uVar6 = param_2[0x2f];
  uVar5 = param_2[0x30];
  uVar7 = param_2[0x31];
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = uVar5;
  param_1[0x31] = uVar7;
  param_1[0x2e] = uVar4;
  param_1[0x2f] = uVar6;
  lVar10 = param_2[0x2c] - param_2[0x2b];
  if (lVar10 != 0) {
    uVar3 = param_1[0x2f];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)((lVar10 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (**(code **)(*(long *)param_1[0x2e] + 0x10))((long *)param_1[0x2e],lVar10,8);
    if (lVar1 == 0) {
      (**(code **)(*(long *)param_1[0x2e] + 0xb8))();
    }
    param_1[0x2d] = lVar1 + (lVar10 >> 4) * 0x10;
    param_1[0x2b] = lVar1;
    param_1[0x2c] = lVar1;
    lVar8 = param_2[0x2c];
    for (lVar10 = param_2[0x2b]; lVar10 != lVar8; lVar10 = lVar10 + 0x30) {
      FUN_00b0de58(param_1 + 0x2e,lVar1,lVar10);
      lVar1 = param_1[0x2c] + 0x30;
      param_1[0x2c] = lVar1;
    }
  }
  plVar2 = (long *)param_2[0x32];
  param_1[0x32] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x33] = param_2[0x33];
  param_1[0x34] = param_2[0x34];
  param_1[0x35] = param_2[0x35];
  plVar2 = (long *)param_2[0x36];
  param_1[0x36] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(param_2 + 0x37);
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  plVar2 = (long *)param_2[0x3b];
  param_1[0x3b] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x3c] = param_2[0x3c];
  param_1[0x3d] = param_2[0x3d];
  param_1[0x3e] = param_2[0x3e];
  plVar2 = (long *)param_2[0x3f];
  param_1[0x3f] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  param_1[0x42] = param_2[0x42];
  plVar2 = (long *)param_2[0x43];
  param_1[0x43] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = param_2[0x45];
  param_1[0x46] = param_2[0x46];
  plVar2 = (long *)param_2[0x47];
  param_1[0x47] = plVar2;
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  uVar4 = param_2[0x4c];
  uVar5 = param_2[0x4d];
  uVar6 = param_2[0x4e];
  uVar7 = param_2[0x4f];
  param_1[0x4b] = 0;
  param_1[0x4a] = 0;
  param_1[0x49] = 0;
  param_1[0x4f] = uVar7;
  param_1[0x4e] = uVar6;
  param_1[0x4d] = uVar5;
  param_1[0x4c] = uVar4;
  lVar10 = param_2[0x4a] - param_2[0x49];
  if (lVar10 != 0) {
    uVar3 = param_1[0x4d];
    if (0x7ffffffffffffffe < uVar3) {
      uVar3 = 0x7fffffffffffffff;
    }
    if (uVar3 < (ulong)(lVar10 >> 2)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar1 = (**(code **)(*(long *)param_1[0x4c] + 0x10))((long *)param_1[0x4c],lVar10,4);
    if (lVar1 == 0) {
      (**(code **)(*(long *)param_1[0x4c] + 0xb8))();
    }
    param_1[0x4a] = lVar1;
    param_1[0x49] = lVar1;
    param_1[0x4b] = lVar1 + (lVar10 >> 2) * 4;
    lVar8 = param_2[0x4a];
    for (lVar10 = param_2[0x49]; lVar10 != lVar8; lVar10 = lVar10 + 4) {
      FUN_00957978(param_1 + 0x4c,lVar1,lVar10);
      lVar1 = param_1[0x4a] + 4;
      param_1[0x4a] = lVar1;
    }
  }
  return;
}


