/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ba75ac; name: FUN_01ba75ac
 */


void FUN_01ba75ac(undefined8 *param_1,undefined8 *param_2)

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
  param_1[1] = param_2[1];
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  uVar2 = param_2[7];
  uVar4 = param_2[8];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = uVar2;
  param_1[8] = uVar4;
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  lVar6 = param_2[3] - param_2[2];
  if (lVar6 != 0) {
    uVar8 = param_1[6];
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < (ulong)(lVar6 >> 5)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar9 = param_1 + 5;
    lVar7 = (**(code **)(*(long *)*puVar9 + 0x10))((long *)*puVar9,lVar6,8);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*puVar9 + 0xb8))();
    }
    param_1[2] = lVar7;
    param_1[3] = lVar7;
    param_1[4] = lVar7 + (lVar6 >> 5) * 0x20;
    lVar5 = param_2[3];
    for (lVar6 = param_2[2]; lVar6 != lVar5; lVar6 = lVar6 + 0x20) {
      FUN_00da822c(puVar9,lVar7,lVar6);
      lVar7 = param_1[3] + 0x20;
      param_1[3] = lVar7;
    }
  }
  return;
}


