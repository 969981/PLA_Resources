/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065902c; name: FUN_0065902c
 */


void FUN_0065902c(undefined1 *param_1,undefined1 *param_2)

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
      if (uVar6 != 0) goto LAB_006590e0;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 8) = uVar4 | 1;
      *(ulong *)(param_1 + 0x10) = uVar6;
      *(undefined1 **)(param_1 + 0x18) = puVar5;
LAB_006590e0:
      memcpy(puVar5,pvVar3,uVar6);
    }
    puVar5[uVar6] = 0;
  }
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x30);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(long **)(param_1 + 0x48) = plVar1;
  if ((param_2[0x30] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x38);
    uVar7 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x38);
    if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 00659314 to 0065931b has its CatchHandler @ 006593c4 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x40);
    if (uVar6 < 0x17) {
      puVar5 = param_1 + 0x31;
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_00659188;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 0x30) = uVar4 | 1;
      *(ulong *)(param_1 + 0x38) = uVar6;
      *(undefined1 **)(param_1 + 0x40) = puVar5;
LAB_00659188:
      memcpy(puVar5,pvVar3,uVar6);
    }
    puVar5[uVar6] = 0;
  }
  FUN_006d9d50(param_1 + 0x50,param_2 + 0x50);
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x58);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(long **)(param_1 + 0x70) = plVar1;
  if ((param_2[0x58] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    uVar7 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x60);
    if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 0065931c to 00659323 has its CatchHandler @ 00659388 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x68);
    if (uVar6 < 0x17) {
      puVar5 = param_1 + 0x59;
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_00659238;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 0x58) = uVar4 | 1;
      *(ulong *)(param_1 + 0x60) = uVar6;
      *(undefined1 **)(param_1 + 0x68) = puVar5;
LAB_00659238:
      memcpy(puVar5,pvVar3,uVar6);
    }
    puVar5[uVar6] = 0;
  }
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
    goto LAB_006592e8;
  }
  uVar6 = *(ulong *)(param_2 + 0x80);
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 00659324 to 0065932b has its CatchHandler @ 0065932c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_2 + 0x88);
  if (uVar6 < 0x17) {
    puVar5 = param_1 + 0x79;
    *(char *)puVar2 = (char)((int)uVar6 << 1);
    if (uVar6 != 0) goto LAB_006592d4;
  }
  else {
    uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
    puVar5 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 0x78) = uVar4 | 1;
    *(ulong *)(param_1 + 0x80) = uVar6;
    *(undefined1 **)(param_1 + 0x88) = puVar5;
LAB_006592d4:
    memcpy(puVar5,pvVar3,uVar6);
  }
  puVar5[uVar6] = 0;
LAB_006592e8:
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
  return;
}


