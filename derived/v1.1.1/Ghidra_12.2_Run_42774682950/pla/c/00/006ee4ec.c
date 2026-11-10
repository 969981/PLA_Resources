/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006ee4ec; name: FUN_006ee4ec
 */


void FUN_006ee4ec(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  FUN_02cd57dc();
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x68);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(long **)(param_1 + 0x80) = plVar1;
  if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x70);
    uVar7 = *(undefined8 *)(param_2 + 0x68);
    *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
    *(undefined8 *)(param_1 + 0x70) = uVar8;
    *puVar2 = uVar7;
  }
  else {
    uVar6 = *(ulong *)(param_2 + 0x70);
    if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 006ee658 to 006ee65f has its CatchHandler @ 006ee694 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 0x78);
    if (uVar6 < 0x17) {
      pvVar5 = (void *)(param_1 + 0x69);
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_006ee594;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 0x68) = uVar4 | 1;
      *(ulong *)(param_1 + 0x70) = uVar6;
      *(void **)(param_1 + 0x78) = pvVar5;
LAB_006ee594:
      memcpy(pvVar5,pvVar3,uVar6);
    }
    *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  }
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x88);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(long **)(param_1 + 0xa0) = plVar1;
  if ((*(byte *)(param_2 + 0x88) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x90);
    uVar7 = *(undefined8 *)(param_2 + 0x88);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x98);
    *(undefined8 *)(param_1 + 0x90) = uVar8;
    *puVar2 = uVar7;
    return;
  }
  uVar6 = *(ulong *)(param_2 + 0x90);
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 006ee660 to 006ee667 has its CatchHandler @ 006ee668 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_2 + 0x98);
  if (uVar6 < 0x17) {
    pvVar5 = (void *)(param_1 + 0x89);
    *(char *)puVar2 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_006ee640;
  }
  else {
    uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 0x88) = uVar4 | 1;
    *(ulong *)(param_1 + 0x90) = uVar6;
    *(void **)(param_1 + 0x98) = pvVar5;
  }
  memcpy(pvVar5,pvVar3,uVar6);
LAB_006ee640:
  *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  return;
}


