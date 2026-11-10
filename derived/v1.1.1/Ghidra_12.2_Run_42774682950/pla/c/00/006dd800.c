/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006dd800; name: FUN_006dd800
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_006dd800(long *param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  size_t __n;
  long lVar3;
  char *__s;
  void *pvVar4;
  void *pvVar5;
  void *__dest;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong local_110;
  ulong uStack_108;
  void *local_100;
  ulong local_f0;
  ulong uStack_e8;
  void *local_e0;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  long *local_b8;
  ulong local_b0;
  size_t sStack_a8;
  void *local_a0;
  long *local_98;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long *plStack_78;
  __tree_node_base *local_70 [3];
  undefined1 auStack_58 [8];
  undefined8 local_48;
  
  uStack_e8 = 0;
  local_e0 = (void *)0x0;
  local_f0 = 0;
  puVar8 = (ulong *)(param_2 + 0x20);
  bVar1 = *(byte *)puVar8;
  if ((bVar1 & 1) == 0) {
    uStack_e8 = *(ulong *)(param_2 + 0x28);
    local_f0 = *puVar8;
    local_e0 = *(void **)(param_2 + 0x30);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x28);
    if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 006ddc08 to 006ddc0f has its CatchHandler @ 006ddc28 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar5 = *(void **)(param_2 + 0x30);
    if (uVar7 < 0x17) {
      local_f0 = (ulong)(byte)((int)uVar7 << 1);
      pvVar4 = (void *)((ulong)&local_f0 | 1);
      if (uVar7 != 0) goto LAB_006dd8a0;
    }
    else {
      uVar6 = uVar7 + 0x10 & 0xfffffffffffffff0;
      pvVar4 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      local_f0 = uVar6 | 1;
      uStack_e8 = uVar7;
      local_e0 = pvVar4;
LAB_006dd8a0:
      memcpy(pvVar4,pvVar5,uVar7);
    }
    *(undefined1 *)((long)pvVar4 + uVar7) = 0;
    bVar1 = *(byte *)puVar8;
  }
  pvVar5 = (void *)((ulong)&local_f0 | 1);
  if ((local_f0 & 1) != 0) {
    pvVar5 = local_e0;
  }
  uStack_108 = 0;
  local_100 = (void *)0x0;
  local_110 = 0;
  if ((bVar1 & 1) == 0) {
    uStack_108 = *(ulong *)(param_2 + 0x28);
    local_110 = *puVar8;
    local_100 = *(void **)(param_2 + 0x30);
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x28);
    if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 006ddc10 to 006ddc17 has its CatchHandler @ 006ddc18 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar4 = *(void **)(param_2 + 0x30);
    if (uVar7 < 0x17) {
      local_110 = (ulong)(byte)((int)uVar7 << 1);
      __dest = (void *)((ulong)&local_110 | 1);
      if (uVar7 != 0) goto LAB_006dd948;
    }
    else {
      uVar6 = uVar7 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar6);
      local_110 = uVar6 | 1;
      uStack_108 = uVar7;
      local_100 = __dest;
LAB_006dd948:
      memcpy(__dest,pvVar4,uVar7);
    }
    *(undefined1 *)((long)__dest + uVar7) = 0;
  }
  local_d0 = 0;
  uStack_c8 = 0;
  uVar7 = local_110 >> 1 & 0x7f;
  if ((local_110 & 1) != 0) {
    uVar7 = uStack_108;
  }
  local_c0 = (void *)0x0;
  local_b8 = (long *)FUN_00612290();
  if (0xffffffffffffffef < uVar7) {
                    /* try { // try from 006ddbf8 to 006ddbff has its CatchHandler @ 006ddc3c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    local_d0 = CONCAT71(local_d0._1_7_,(char)((int)uVar7 << 1));
    pvVar4 = (void *)((ulong)&local_d0 | 1);
    if (uVar7 != 0) goto LAB_006dd9d4;
  }
  else {
    uVar6 = uVar7 + 0x10 & 0xfffffffffffffff0;
    pvVar4 = (void *)(**(code **)(*local_b8 + 0x10))(local_b8,uVar6,1);
    local_d0 = uVar6 | 1;
    uStack_c8 = uVar7;
    local_c0 = pvVar4;
LAB_006dd9d4:
    memcpy(pvVar4,pvVar5,uVar7);
  }
  *(undefined1 *)((long)pvVar4 + uVar7) = 0;
  __s = *(char **)PTR_PTR_04376180;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  sStack_a8 = 0;
  plVar2 = (long *)FUN_00612290();
  local_98 = plVar2;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006ddc00 to 006ddc07 has its CatchHandler @ 006ddc2c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_b0 = CONCAT71(local_b0._1_7_,(char)((int)__n << 1));
    pvVar5 = (void *)((ulong)&local_b0 | 1);
    if (__n == 0) goto LAB_006dda7c;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar7,1);
    local_b0 = uVar7 | 1;
    sStack_a8 = __n;
    local_a0 = pvVar5;
  }
  memcpy(pvVar5,__s,__n);
LAB_006dda7c:
  local_80 = local_c0;
  uStack_88 = uStack_c8;
  local_90 = local_d0;
  *(undefined1 *)((long)pvVar5 + __n) = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = (void *)0x0;
  plVar2 = param_1 + 1;
  *plVar2 = 0;
  plStack_78 = local_b8;
  lVar3 = FUN_00612290();
  param_1[2] = lVar3;
  param_1[3] = 0;
  *param_1 = (long)plVar2;
                    /* try { // try from 006ddaa4 to 006ddb2b has its CatchHandler @ 006ddc4c */
  plVar2 = (long *)FUN_02766fc4(param_1,plVar2,&local_48,auStack_58,&local_b0);
  if (*plVar2 == 0) {
    FUN_02767154(local_70,param_1,&local_b0);
    *(undefined8 *)(local_70[0] + 0x10) = local_48;
    *(undefined8 *)local_70[0] = 0;
    *(undefined8 *)(local_70[0] + 8) = 0;
    *plVar2 = (long)local_70[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      local_70[0] = (__tree_node_base *)*plVar2;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],local_70[0]);
    param_1[3] = param_1[3] + 1;
  }
  if ((local_90 & 1) != 0) {
    (**(code **)(*plStack_78 + 0x18))(plStack_78,local_80,local_90 & 0xfffffffffffffffe,1);
  }
  if ((local_b0 & 1) != 0) {
    (**(code **)(*local_98 + 0x18))(local_98,local_a0,local_b0 & 0xfffffffffffffffe,1);
  }
  if ((local_d0 & 1) != 0) {
    (**(code **)(*local_b8 + 0x18))(local_b8,local_c0,local_d0 & 0xfffffffffffffffe,1);
  }
  if ((local_110 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_100);
  }
  if ((local_f0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_e0);
  }
  return;
}


