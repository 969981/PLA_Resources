/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0064f808; name: FUN_0064f808
 */


void FUN_0064f808(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  size_t __n;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong *puVar9;
  void *__dest;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  long *local_78;
  undefined8 local_70;
  ulong uStack_68;
  long local_60;
  long *local_58;
  
  *param_1 = *param_2;
  lVar7 = param_2[1];
  param_1[1] = lVar7;
  if (lVar7 != 0) {
    plVar5 = (long *)(lVar7 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  puVar9 = param_1 + 2;
  *puVar9 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar4 = FUN_00612290();
  param_1[4] = 0;
  param_1[5] = uVar4;
  *puVar9 = 0;
  param_1[3] = 0;
  puVar8 = param_1 + 6;
  *puVar8 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  uVar4 = FUN_00612290();
  param_1[10] = 0;
  param_1[9] = uVar4;
  *puVar8 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  plVar5 = (long *)FUN_00612290();
  param_1[0xd] = plVar5;
  __n = strlen(param_3);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 0064faec to 0064faf3 has its CatchHandler @ 0064faf4 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((long)param_1 + 0x51);
    *(char *)(param_1 + 10) = (char)((int)__n << 1);
    if (__n == 0) goto LAB_0064f910;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar6,1);
    param_1[10] = uVar6 | 1;
    param_1[0xb] = __n;
    param_1[0xc] = __dest;
  }
  memcpy(__dest,param_3,__n);
LAB_0064f910:
  *(undefined1 *)((long)__dest + __n) = 0;
  FUN_0061b920(&local_90,param_3);
  if (((long *)param_1[5] == local_78) ||
     (uVar6 = (**(code **)(*(long *)param_1[5] + 0x20))(), (uVar6 & 1) != 0)) {
    if ((*puVar9 & 1) == 0) {
      *(undefined2 *)puVar9 = 0;
    }
    else {
      *(undefined1 *)param_1[4] = 0;
      param_1[3] = 0;
      if ((*(byte *)(param_1 + 2) & 1) != 0) {
        (**(code **)(*(long *)param_1[5] + 0x18))
                  ((long *)param_1[5],param_1[4],param_1[2] & 0xfffffffffffffffe,1);
        param_1[2] = 0;
      }
    }
    param_1[4] = local_80;
    param_1[3] = uStack_88;
    *puVar9 = local_90;
    uStack_88 = 0;
    local_80 = 0;
    local_90 = 0;
  }
  else if (puVar9 != &local_90) {
    uVar6 = local_90 >> 1 & 0x7f;
    uVar3 = (ulong)&local_90 | 1;
    if ((local_90 & 1) != 0) {
      uVar6 = uStack_88;
      uVar3 = local_80;
    }
                    /* try { // try from 0064f9c8 to 0064f9cf has its CatchHandler @ 0064fafc */
    FUN_02762710(puVar9,uVar3,uVar6);
  }
  if (((long *)param_1[9] == local_58) ||
     (uVar6 = (**(code **)(*(long *)param_1[9] + 0x20))(), (uVar6 & 1) != 0)) {
    if ((*puVar8 & 1) == 0) {
      *(undefined2 *)puVar8 = 0;
    }
    else {
      *(undefined1 *)param_1[8] = 0;
      param_1[7] = 0;
      if ((*(byte *)(param_1 + 6) & 1) != 0) {
        (**(code **)(*(long *)param_1[9] + 0x18))
                  ((long *)param_1[9],param_1[8],param_1[6] & 0xfffffffffffffffe,1);
        param_1[6] = 0;
      }
    }
    param_1[8] = local_60;
    param_1[7] = uStack_68;
    *puVar8 = local_70;
    uStack_68 = 0;
    local_60 = 0;
    local_70 = 0;
  }
  else {
    if (puVar8 != &local_70) {
      if ((local_70 & 1) == 0) {
        uVar6 = local_70 >> 1 & 0x7f;
        lVar7 = (long)&local_70 + 1;
      }
      else {
        uVar6 = uStack_68;
        lVar7 = local_60;
      }
                    /* try { // try from 0064fa80 to 0064fa87 has its CatchHandler @ 0064fafc */
      FUN_02762710(puVar8,lVar7,uVar6);
    }
    if ((local_70 & 1) != 0) {
      (**(code **)(*local_58 + 0x18))(local_58,local_60,local_70 & 0xfffffffffffffffe,1);
    }
  }
  if ((local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
  }
  return;
}


