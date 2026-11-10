/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006135f0; name: FUN_006135f0
 */


void FUN_006135f0(undefined4 *param_1,undefined4 *param_2,byte *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  ulong uVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
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
                    /* try { // try from 00613804 to 0061380b has its CatchHandler @ 0061382c */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar3 = *(void **)(param_2 + 6);
    if (uVar6 < 0x17) {
      pvVar5 = (void *)((long)param_1 + 9);
      *(char *)puVar2 = (char)((int)uVar6 << 1);
      if (uVar6 != 0) goto LAB_006136a8;
    }
    else {
      uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
      pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
      *(ulong *)(param_1 + 2) = uVar4 | 1;
      *(ulong *)(param_1 + 4) = uVar6;
      *(void **)(param_1 + 6) = pvVar5;
LAB_006136a8:
      memcpy(pvVar5,pvVar3,uVar6);
    }
    *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  }
  local_68 = 0;
  local_60 = FUN_00612290();
  uStack_58 = 0;
                    /* try { // try from 006136d8 to 006136e3 has its CatchHandler @ 00613830 */
  local_70 = &local_68;
  FUN_02767d84(&local_90,param_2 + 10,&local_70);
  FUN_02767254(&local_70,local_68);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_90;
  *(undefined8 *)(param_1 + 0x10) = uStack_80;
  *(undefined8 *)(param_1 + 0xe) = local_88;
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_78;
  if (local_78 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    local_78 = 0;
    local_90 = &local_88;
    local_88 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_02767254(&local_90,local_88);
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 0x14);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(long **)(param_1 + 0x1a) = plVar1;
  if ((*param_3 & 1) == 0) {
    uVar8 = *(undefined8 *)(param_3 + 8);
    uVar7 = *(undefined8 *)param_3;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x16) = uVar8;
    *puVar2 = uVar7;
    return;
  }
  uVar6 = *(ulong *)(param_3 + 8);
  if (0xffffffffffffffef < uVar6) {
                    /* try { // try from 0061380c to 00613813 has its CatchHandler @ 00613814 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  pvVar3 = *(void **)(param_3 + 0x10);
  if (uVar6 < 0x17) {
    pvVar5 = (void *)((long)param_1 + 0x51);
    *(char *)puVar2 = (char)((int)uVar6 << 1);
    if (uVar6 == 0) goto LAB_006137e4;
  }
  else {
    uVar4 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar4,1);
    *(ulong *)(param_1 + 0x14) = uVar4 | 1;
    *(ulong *)(param_1 + 0x16) = uVar6;
    *(void **)(param_1 + 0x18) = pvVar5;
  }
  memcpy(pvVar5,pvVar3,uVar6);
LAB_006137e4:
  *(undefined1 *)((long)pvVar5 + uVar6) = 0;
  return;
}


