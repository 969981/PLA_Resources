/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c431c; name: FUN_018c431c
 */


void FUN_018c431c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar8 = (long *)param_2[3];
  param_1[3] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  plVar8 = (long *)param_2[7];
  param_1[7] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  plVar8 = (long *)param_2[0xb];
  param_1[0xb] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  plVar8 = (long *)param_2[0xf];
  param_1[0xf] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  plVar8 = (long *)param_2[0x13];
  param_1[0x13] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = param_2[0x16];
  plVar8 = (long *)param_2[0x17];
  param_1[0x17] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  uVar1 = param_2[0x1b];
  uVar3 = param_2[0x1c];
  uVar2 = param_2[0x1d];
  uVar4 = param_2[0x1e];
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = uVar2;
  param_1[0x1e] = uVar4;
  param_1[0x1b] = uVar1;
  param_1[0x1c] = uVar3;
  lVar7 = param_2[0x19] - param_2[0x18];
  if (lVar7 != 0) {
    uVar10 = param_1[0x1c];
    if (0x7ffffffffffffffe < uVar10) {
      uVar10 = 0x7fffffffffffffff;
    }
    if (uVar10 < (ulong)(lVar7 >> 2)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar11 = param_1 + 0x1b;
    lVar9 = (**(code **)(*(long *)*puVar11 + 0x10))((long *)*puVar11,lVar7,4);
    if (lVar9 == 0) {
      (**(code **)(*(long *)*puVar11 + 0xb8))();
    }
    param_1[0x18] = lVar9;
    param_1[0x19] = lVar9;
    param_1[0x1a] = lVar9 + (lVar7 >> 2) * 4;
    lVar5 = param_2[0x19];
    for (lVar7 = param_2[0x18]; lVar7 != lVar5; lVar7 = lVar7 + 4) {
      FUN_00957978(puVar11,lVar9,lVar7);
      lVar9 = param_1[0x19] + 4;
      param_1[0x19] = lVar9;
    }
  }
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = param_2[0x20];
  param_1[0x21] = param_2[0x21];
  plVar8 = (long *)param_2[0x22];
  param_1[0x22] = plVar8;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x18))();
  }
  uVar6 = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((long)param_1 + 0x11b) = *(undefined4 *)((long)param_2 + 0x11b);
  *(undefined4 *)(param_1 + 0x23) = uVar6;
  return;
}


