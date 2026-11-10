/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066e244; name: FUN_0066e244
 */


void FUN_0066e244(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 8);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long **)(param_1 + 0x20) = plVar1;
  if ((param_2[8] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar7 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x10);
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x18);
    if (uVar6 < 0x17) {
      puVar5 = param_1 + 9;
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_0066e2f4;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 8) = uVar4 | 1;
      *(ulong *)(param_1 + 0x10) = uVar6;
      *(undefined1 **)(param_1 + 0x18) = puVar5;
LAB_0066e2f4:
      memcpy(puVar5,pvVar3,uVar6);
    }
    puVar5[uVar6] = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x28);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long **)(param_1 + 0x40) = plVar1;
  if ((param_2[0x28] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar7 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x30);
    if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 0066e514 to 0066e51b has its CatchHandler @ 0066e5ac */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x38);
    if (uVar6 < 0x17) {
      puVar5 = param_1 + 0x29;
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_0066e394;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 0x28) = uVar4 | 1;
      *(ulong *)(param_1 + 0x30) = uVar6;
      *(undefined1 **)(param_1 + 0x38) = puVar5;
LAB_0066e394:
      memcpy(puVar5,pvVar3,uVar6);
    }
    puVar5[uVar6] = 0;
  }
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_2 + 0x48);
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x50);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(long **)(param_1 + 0x68) = plVar1;
  if ((param_2[0x50] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x58);
    uVar7 = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(undefined8 *)(param_1 + 0x58) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x58);
    if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 0066e51c to 0066e523 has its CatchHandler @ 0066e578 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x60);
    if (uVar6 < 0x17) {
      puVar5 = param_1 + 0x51;
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_0066e43c;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 0x50) = uVar4 | 1;
      *(ulong *)(param_1 + 0x58) = uVar6;
      *(undefined1 **)(param_1 + 0x60) = puVar5;
LAB_0066e43c:
      memcpy(puVar5,pvVar3,uVar6);
    }
    puVar5[uVar6] = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x78);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(long **)(param_1 + 0x90) = plVar1;
  if ((param_2[0x78] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x80);
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x80) = uVar8;
    *puVar2 = uVar7;
    return;
  }
  uVar6 = *(ulong *)(param_2 + 0x80);
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 0066e524 to 0066e52b has its CatchHandler @ 0066e52c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_2 + 0x88);
  if (uVar6 < 0x17) {
    puVar5 = param_1 + 0x79;
    *(char *)puVar2 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_0066e4f0;
  }
  else {
    uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 0x78) = uVar4 | 1;
    *(ulong *)(param_1 + 0x80) = uVar6;
    *(undefined1 **)(param_1 + 0x88) = puVar5;
  }
  memcpy(puVar5,pvVar3,uVar6);
LAB_0066e4f0:
  puVar5[uVar6] = 0;
  return;
}


