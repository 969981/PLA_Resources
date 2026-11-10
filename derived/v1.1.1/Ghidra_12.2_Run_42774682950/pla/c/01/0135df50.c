/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0135df50; name: FUN_0135df50
 */


void FUN_0135df50(undefined1 *param_1,undefined8 *param_2)

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
  
  *(undefined8 *)(param_1 + 8) = *param_2;
  *(undefined8 *)(param_1 + 0x10) = param_2[1];
  *(undefined8 *)(param_1 + 0x18) = param_2[2];
  plVar7 = (long *)param_2[3];
  *(long **)(param_1 + 0x20) = plVar7;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))();
  }
  uVar1 = param_2[7];
  uVar3 = param_2[8];
  uVar2 = param_2[9];
  uVar4 = param_2[10];
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  puVar10 = (undefined8 *)(param_1 + 0x40);
  *puVar10 = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  lVar6 = param_2[5] - param_2[4];
  if (lVar6 != 0) {
    uVar9 = *(ulong *)(param_1 + 0x48);
    if (0x7ffffffffffffffe < uVar9) {
      uVar9 = 0x7fffffffffffffff;
    }
    if (uVar9 < (ulong)((lVar6 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar8 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar6,8);
    if (lVar8 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xb8))();
    }
    *(long *)(param_1 + 0x38) = lVar8 + (lVar6 >> 4) * 0x10;
    *(long *)(param_1 + 0x28) = lVar8;
    *(long *)(param_1 + 0x30) = lVar8;
    lVar5 = param_2[5];
    for (lVar6 = param_2[4]; lVar6 != lVar5; lVar6 = lVar6 + 0x30) {
      FUN_0135e6c0(puVar10,lVar8,lVar6);
      lVar8 = *(long *)(param_1 + 0x30) + 0x30;
      *(long *)(param_1 + 0x30) = lVar8;
    }
  }
  *param_1 = 1;
  return;
}


