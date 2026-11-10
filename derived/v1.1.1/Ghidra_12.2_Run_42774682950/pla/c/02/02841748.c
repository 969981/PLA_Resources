/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02841748; name: FUN_02841748
 */


void FUN_02841748(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  
  *param_1 = *param_2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  uVar2 = param_2[6];
  uVar4 = param_2[7];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  lVar6 = param_2[2] - param_2[1];
  if (lVar6 != 0) {
    uVar8 = param_1[5];
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < (ulong)(lVar6 >> 5)) goto LAB_0284193c;
    puVar9 = param_1 + 4;
    lVar7 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar6,8);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*puVar9 + 0xb8))();
    }
    param_1[1] = lVar7;
    param_1[2] = lVar7;
    param_1[3] = lVar7 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[2];
    for (lVar6 = param_2[1]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(puVar9,lVar7,lVar6);
      lVar7 = param_1[2] + 0x20;
      param_1[2] = lVar7;
    }
  }
  uVar1 = param_2[0xb];
  uVar3 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar4 = param_2[0xe];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = uVar2;
  param_1[0xe] = uVar4;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar3;
  lVar6 = param_2[9] - param_2[8];
  if (lVar6 != 0) {
    uVar8 = param_1[0xc];
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < (ulong)((lVar6 >> 4) * -0x5555555555555555)) {
LAB_0284193c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar9 = param_1 + 0xb;
    lVar7 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar6,8);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*puVar9 + 0xb8))();
    }
    param_1[10] = lVar7 + (lVar6 >> 4) * 0x10;
    param_1[8] = lVar7;
    param_1[9] = lVar7;
    lVar5 = param_2[9];
    for (lVar6 = param_2[8]; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
      FUN_02841d0c(puVar9,lVar7,lVar6);
      lVar7 = param_1[9] + 0x30;
      param_1[9] = lVar7;
    }
  }
  return;
}


