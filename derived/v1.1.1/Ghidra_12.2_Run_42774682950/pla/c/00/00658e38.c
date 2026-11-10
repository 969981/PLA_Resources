/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00658e38; name: FUN_00658e38
 */


void FUN_00658e38(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong __n;
  void *__src;
  void *__dest;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  *param_1 = *param_2;
  plVar3 = (long *)FUN_00612290();
  puVar6 = (undefined8 *)(param_1 + 2);
  *puVar6 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(long **)(param_1 + 8) = plVar3;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar8 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar8;
    *puVar6 = uVar4;
    goto LAB_00658f04;
  }
  __n = *(ulong *)(param_2 + 4);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 00659000 to 00659007 has its CatchHandler @ 00659008 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  __src = *(void **)(param_2 + 6);
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 9);
    *(char *)puVar6 = (char)((int)__n << 1);
    if (__n != 0) goto LAB_00658ef0;
  }
  else {
    uVar7 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar3 + 0x10))(plVar3,uVar7,1);
    *(ulong *)(param_1 + 2) = uVar7 | 1;
    *(ulong *)(param_1 + 4) = __n;
    *(void **)(param_1 + 6) = __dest;
LAB_00658ef0:
    memcpy(__dest,__src,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
LAB_00658f04:
  local_68 = 0;
  uStack_60 = FUN_00612290();
  uStack_58 = 0;
  local_70 = &local_68;
  if (*(char *)(param_2 + 10) == '\0') {
    uVar4 = 0;
    local_90 = &local_88;
    local_78 = 0;
    local_88 = local_68;
    uStack_80 = uStack_60;
  }
  else {
                    /* try { // try from 00658f28 to 00658f2f has its CatchHandler @ 0065900c */
    FUN_0065675c(&local_90,param_2 + 0xc);
    uVar4 = local_68;
  }
  FUN_02767254(&local_70,uVar4);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_90;
  *(undefined8 *)(param_1 + 0x10) = uStack_80;
  *(undefined8 *)(param_1 + 0xe) = local_88;
  plVar3 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_78;
  if (local_78 == 0) {
    *(long **)(param_1 + 0xc) = plVar3;
  }
  else {
    *(long **)(*plVar3 + 0x10) = plVar3;
    local_78 = 0;
    local_90 = &local_88;
    local_88 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_02767254(&local_90,local_88);
  *(undefined8 *)(param_1 + 0x14) = *param_3;
  lVar5 = param_3[1];
  *(long *)(param_1 + 0x16) = lVar5;
  if (lVar5 != 0) {
    plVar3 = (long *)(lVar5 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


