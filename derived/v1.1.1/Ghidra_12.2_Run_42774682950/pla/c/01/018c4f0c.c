/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c4f0c; name: FUN_018c4f0c
 */


void FUN_018c4f0c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar7 = (long *)param_2[7];
  param_1[7] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  plVar7 = (long *)param_2[0xb];
  param_1[0xb] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  plVar7 = (long *)param_2[0xf];
  param_1[0xf] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar7 = (long *)param_2[0x13];
  param_1[0x13] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  uVar1 = param_2[0x17];
  uVar3 = param_2[0x18];
  uVar2 = param_2[0x19];
  uVar4 = param_2[0x1a];
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = uVar2;
  param_1[0x1a] = uVar4;
  param_1[0x17] = uVar1;
  param_1[0x18] = uVar3;
  lVar6 = param_2[0x15] - param_2[0x14];
  if (lVar6 != 0) {
    uVar9 = param_1[0x18];
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)(lVar6 >> 5)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar10 = param_1 + 0x17;
    lVar8 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xb8))();
    }
    param_1[0x14] = lVar8;
    param_1[0x15] = lVar8;
    param_1[0x16] = lVar8 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[0x15];
    for (lVar6 = param_2[0x14]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(puVar10,lVar8,lVar6);
      lVar8 = param_1[0x15] + 0x20;
      param_1[0x15] = lVar8;
    }
  }
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  plVar7 = (long *)param_2[0x1e];
  param_1[0x1e] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  plVar7 = (long *)param_2[0x22];
  param_1[0x22] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = param_2[0x25];
  plVar7 = (long *)param_2[0x26];
  param_1[0x26] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = param_2[0x28];
  param_1[0x29] = param_2[0x29];
  plVar7 = (long *)param_2[0x2a];
  param_1[0x2a] = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  return;
}


