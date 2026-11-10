/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ed7c8; name: FUN_028ed7c8
 */


void FUN_028ed7c8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  *param_1 = &PTR_LAB_04274770;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  uVar9 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = uVar1;
  param_1[8] = uVar3;
  param_1[5] = uVar9;
  param_1[6] = uVar2;
  lVar6 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    uVar8 = param_1[6];
    if (0x7ffffffffffffffe < uVar8) {
      uVar8 = 0x7fffffffffffffff;
    }
    if (uVar8 < (ulong)(lVar6 >> 3)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    puVar10 = param_1 + 5;
    lVar7 = (**(code **)(*(long *)*puVar10 + 0x10))((long *)*puVar10,lVar6,8);
    if (lVar7 == 0) {
      (**(code **)(*(long *)*puVar10 + 0xb8))();
    }
    param_1[2] = lVar7;
    param_1[3] = lVar7;
    param_1[4] = lVar7 + (lVar6 >> 3) * 8;
    lVar4 = *(long *)(param_2 + 0x18);
    for (lVar6 = *(long *)(param_2 + 0x10); lVar6 != lVar4; lVar6 = lVar6 + 8) {
      FUN_028eccd4(puVar10,lVar7,lVar6);
      lVar7 = param_1[3] + 8;
      param_1[3] = lVar7;
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  *param_1 = &PTR_LAB_04274188;
  *(undefined4 *)(param_1 + 9) = uVar5;
  param_1[10] = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_008802f0(param_1 + 0xb,param_2 + 0x58);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x70);
  param_1[0xf] = 0;
  param_1[0xd] = uVar9;
  *(undefined4 *)(param_1 + 0xe) = uVar5;
  param_1[0x10] = 0;
  FUN_008802f0(param_1 + 0xf,param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x90);
  param_1[0x11] = uVar9;
  uVar9 = *(undefined8 *)(param_2 + 0x98);
  uVar1 = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  param_1[0x15] = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x16] = uVar2;
  param_1[0x13] = uVar9;
  param_1[0x14] = uVar1;
  return;
}


