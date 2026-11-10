/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00701ce0; name: FUN_00701ce0
 */


void FUN_00701ce0(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 2);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plVar1;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 4);
    uVar7 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 4);
    if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 6);
    if (uVar6 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 9);
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_00701d90;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 2) = uVar4 | 1;
      *(ulong *)(param_1 + 4) = uVar6;
      *(void **)(param_1 + 6) = pvVar5;
LAB_00701d90:
      memcpy(pvVar5,pvVar3,uVar6);
    }
    *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  }
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 10);
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0xc);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(long **)(param_1 + 0x12) = plVar1;
  if ((*(byte *)(param_2 + 0xc) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0xe);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0xe) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0xe);
    if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 00701f08 to 00701f0f has its CatchHandler @ 00701f5c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x10);
    if (uVar6 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 0x31);
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_00701e38;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 0xc) = uVar4 | 1;
      *(ulong *)(param_1 + 0xe) = uVar6;
      *(void **)(param_1 + 0x10) = pvVar5;
LAB_00701e38:
      memcpy(pvVar5,pvVar3,uVar6);
    }
    *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x14);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long **)(param_1 + 0x1a) = plVar1;
  if ((*(byte *)(param_2 + 0x14) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x16);
    uVar7 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x16) = uVar8;
    *puVar2 = uVar7;
    return;
  }
  uVar6 = *(ulong *)(param_2 + 0x16);
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 00701f10 to 00701f17 has its CatchHandler @ 00701f18 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_2 + 0x18);
  if (uVar6 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x51);
    *(char *)puVar2 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_00701ee4;
  }
  else {
    uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 0x14) = uVar4 | 1;
    *(ulong *)(param_1 + 0x16) = uVar6;
    *(void **)(param_1 + 0x18) = pvVar5;
  }
  memcpy(pvVar5,pvVar3,uVar6);
LAB_00701ee4:
  *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  return;
}


