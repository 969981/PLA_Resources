/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0066898c; name: FUN_0066898c
 */


void FUN_0066898c(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  plVar1 = (long *)FUN_00612290();
  puVar3 = (undefined8 *)(param_1 + 8);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long **)(param_1 + 0x20) = plVar1;
  if ((param_2[8] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x10);
    uVar2 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar8;
    *puVar3 = uVar2;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x10);
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_2 + 0x18);
    if (uVar7 < 0x17) {
      puVar6 = param_1 + 9;
      *(char *)puVar3 = (char)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_00668a3c;
    }
    else {
      uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
      puVar6 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
      *(ulong *)(param_1 + 8) = uVar5 | 1;
      *(ulong *)(param_1 + 0x10) = uVar7;
      *(undefined1 **)(param_1 + 0x18) = puVar6;
LAB_00668a3c:
      memcpy(puVar6,pvVar4,uVar7);
    }
    puVar6[uVar7] = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar3 = (undefined8 *)(param_1 + 0x28);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(long **)(param_1 + 0x40) = plVar1;
  if ((param_2[0x28] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *puVar3 = uVar2;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x30);
    if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 00668bbc to 00668bc3 has its CatchHandler @ 00668c10 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_2 + 0x38);
    if (uVar7 < 0x17) {
      puVar6 = param_1 + 0x29;
      *(char *)puVar3 = (char)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_00668adc;
    }
    else {
      uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
      puVar6 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
      *(ulong *)(param_1 + 0x28) = uVar5 | 1;
      *(ulong *)(param_1 + 0x30) = uVar7;
      *(undefined1 **)(param_1 + 0x38) = puVar6;
LAB_00668adc:
      memcpy(puVar6,pvVar4,uVar7);
    }
    puVar6[uVar7] = 0;
  }
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  plVar1 = (long *)FUN_00612290();
  puVar3 = (undefined8 *)(param_1 + 0x58);
  *puVar3 = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(long **)(param_1 + 0x70) = plVar1;
  if ((param_2[0x58] & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x60);
    uVar2 = *(undefined8 *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x60) = uVar8;
    *puVar3 = uVar2;
    return;
  }
  uVar7 = *(ulong *)(param_2 + 0x60);
  if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 00668bc4 to 00668bcb has its CatchHandler @ 00668bcc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar4 = *(void **)(param_2 + 0x68);
  if (uVar7 < 0x17) {
    puVar6 = param_1 + 0x59;
    *(char *)puVar3 = (char)((int)uVar7 << 1);
    if (uVar7 == 0) goto LAB_00668b98;
  }
  else {
    uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
    puVar6 = (undefined1 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5,1);
    *(ulong *)(param_1 + 0x58) = uVar5 | 1;
    *(ulong *)(param_1 + 0x60) = uVar7;
    *(undefined1 **)(param_1 + 0x68) = puVar6;
  }
  memcpy(puVar6,pvVar4,uVar7);
LAB_00668b98:
  puVar6[uVar7] = 0;
  return;
}


