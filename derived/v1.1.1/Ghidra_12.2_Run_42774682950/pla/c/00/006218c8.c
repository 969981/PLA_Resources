/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006218c8; name: FUN_006218c8
 */


void FUN_006218c8(undefined4 *param_1,undefined4 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = *param_2;
  plVar1 = (long *)FUN_00612290();
  puVar2 = (undefined8 *)(param_1 + 2);
  *puVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plVar1;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *puVar2 = uVar4;
    goto LAB_0062198c;
  }
  __n = *(ulong *)(param_2 + 4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00621a34 to 00621a3b has its CatchHandler @ 00621a3c */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 6);
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)puVar2 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00621978;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar3,1);
    *(ulong *)(param_1 + 2) = uVar3 | 1;
    *(ulong *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
LAB_00621978:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_0062198c:
  local_58 = 0;
  local_50 = FUN_00612290();
  uStack_48 = 0;
                    /* try { // try from 006219a8 to 006219b3 has its CatchHandler @ 00621a40 */
  local_60 = &local_58;
  FUN_02767d84(&local_80,param_2 + 10,&local_60);
  FUN_02767254(&local_60,local_58);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_80;
  *(undefined8 *)(param_1 + 0x10) = uStack_70;
  *(undefined8 *)(param_1 + 0xe) = local_78;
  plVar1 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_68;
  if (local_68 == 0) {
    *(long **)(param_1 + 0xc) = plVar1;
  }
  else {
    *(long **)(*plVar1 + 0x10) = plVar1;
    local_68 = 0;
    local_80 = &local_78;
    local_78 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_02767254(&local_80,local_78);
  return;
}


