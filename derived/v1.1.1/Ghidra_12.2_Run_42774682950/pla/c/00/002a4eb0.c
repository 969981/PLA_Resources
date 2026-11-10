/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a4eb0; name: FUN_002a4eb0
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002a4eb0(long *param_1,undefined4 param_2)

{
  long *plVar1;
  size_t __n;
  long lVar2;
  char *__s;
  void *__dest;
  ulong uVar3;
  ulong local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *plStack_a8;
  ulong local_a0;
  size_t sStack_98;
  void *local_90;
  long *local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long *plStack_68;
  undefined4 local_60 [2];
  __tree_node_base *local_58 [3];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  local_60[0] = param_2;
  FUN_00615dd0(&local_c0,local_60);
  __s = *(char **)PTR_PTR_043732d0;
  local_a0 = 0;
  sStack_98 = 0;
  local_90 = (void *)0x0;
  plVar1 = (long *)FUN_00612290();
  local_88 = plVar1;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 002a509c to 002a50a3 has its CatchHandler @ 002a50a4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_a0 | 1);
    if (__n == 0) goto LAB_002a4f68;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    local_a0 = uVar3 | 1;
    sStack_98 = __n;
    local_90 = __dest;
  }
  memcpy(__dest,__s,__n);
LAB_002a4f68:
  local_70 = local_b0;
  uStack_78 = uStack_b8;
  local_80 = local_c0;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  plVar1 = param_1 + 1;
  *plVar1 = 0;
  plStack_68 = plStack_a8;
  lVar2 = FUN_00612290();
  param_1[2] = lVar2;
  param_1[3] = 0;
  *param_1 = (long)plVar1;
                    /* try { // try from 002a4f90 to 002a4fa7 has its CatchHandler @ 002a50b8 */
  plVar1 = (long *)FUN_02766fc4(param_1,plVar1,&local_38,auStack_40,&local_a0);
  if (*plVar1 == 0) {
                    /* try { // try from 002a4ffc to 002a500b has its CatchHandler @ 002a50b8 */
    FUN_02767154(local_58,param_1,&local_a0);
    *(undefined8 *)(local_58[0] + 0x10) = local_38;
    *(undefined8 *)local_58[0] = 0;
    *(undefined8 *)(local_58[0] + 8) = 0;
    *plVar1 = (long)local_58[0];
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      local_58[0] = (__tree_node_base *)*plVar1;
    }
    std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
              ((__tree_node_base *)param_1[1],local_58[0]);
    param_1[3] = param_1[3] + 1;
  }
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,local_80 & 0xfffffffffffffffe,1);
  }
  if ((local_a0 & 1) != 0) {
    (**(code **)(*local_88 + 0x18))(local_88,local_90,local_a0 & 0xfffffffffffffffe,1);
  }
  if ((local_c0 & 1) != 0) {
    (**(code **)(*plStack_a8 + 0x18))(plStack_a8,local_b0,local_c0 & 0xfffffffffffffffe,1);
  }
  return;
}


