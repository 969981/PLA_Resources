/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e44d58; name: FUN_02e44d58
 */


ulong * FUN_02e44d58(void *param_1,ulong param_2,undefined1 *param_3)

{
  int iVar1;
  ulong *puVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  void *__src;
  ulong *puVar6;
  uint uVar7;
  ulong *puVar8;
  ulong uVar9;
  
  uVar7 = *(uint *)((long)param_1 + 0x10);
  if (uVar7 == 0) {
    uVar9 = 0;
  }
  else {
    iVar5 = 0;
    do {
      iVar1 = iVar5 + (uVar7 >> 1);
      uVar9 = *(ulong *)(*(long *)((long)param_1 + 8) + (long)iVar1 * 8);
      if (uVar9 == param_2) {
        *param_3 = 1;
        return (ulong *)(*(long *)((long)param_1 + 8) + (long)iVar1 * 8);
      }
      if (uVar9 < param_2) {
        iVar5 = iVar1 + 1;
      }
      uVar7 = uVar7 - (uVar9 < param_2) >> 1;
    } while (uVar7 != 0);
    uVar9 = (ulong)iVar5;
  }
  *param_3 = 0;
  __src = *(void **)((long)param_1 + 8);
  if ((void *)((long)__src + uVar9 * 8) != (void *)0x0) {
    uVar3 = *(uint *)((long)param_1 + 0x10);
    uVar7 = *(uint *)((long)param_1 + 0x14);
    if (uVar7 <= uVar3) {
      iVar5 = uVar7 + (uVar7 >> 1);
      if (uVar7 == 0) {
        iVar5 = 1;
      }
      uVar7 = iVar5 + uVar7;
      if (uVar7 < 2) {
        pvVar4 = param_1;
        if (__src == (void *)0x0) goto LAB_02e44ed4;
LAB_02e44ec4:
        if ((pvVar4 == __src) || (pvVar4 == (void *)0x0)) goto LAB_02e44ed4;
        memcpy(pvVar4,__src,((ulong)uVar3 & 0x1fffffff) << 3);
        if (param_1 != __src) {
          (*DAT_0442d158)(4,__src);
        }
      }
      else {
        pvVar4 = (void *)(*DAT_0442d140)(4,(ulong)uVar7 << 3,8);
        if (__src != (void *)0x0) goto LAB_02e44ec4;
LAB_02e44ed4:
        if (pvVar4 == (void *)0x0) {
          return (ulong *)0x0;
        }
      }
      *(void **)((long)param_1 + 8) = pvVar4;
      *(uint *)((long)param_1 + 0x14) = uVar7;
      __src = pvVar4;
    }
    if (uVar7 <= uVar3) {
      return (ulong *)0x0;
    }
    uVar7 = *(uint *)((long)param_1 + 0x10);
    *(uint *)((long)param_1 + 0x10) = uVar7 + 1;
    if ((uint)uVar9 < uVar7) {
      puVar8 = (ulong *)((long)__src + (ulong)uVar7 * 8);
      do {
        puVar6 = puVar8 + -1;
        *puVar8 = *puVar6;
        puVar2 = (ulong *)(*(long *)((long)param_1 + 8) + (uVar9 & 0xffffffff) * 8);
        puVar8 = puVar6;
      } while (puVar2 < puVar6);
    }
    else {
      puVar2 = (ulong *)((long)__src + (uVar9 & 0xffffffff) * 8);
    }
    goto joined_r0x02e44e68;
  }
  uVar3 = *(uint *)((long)param_1 + 0x10);
  uVar7 = *(uint *)((long)param_1 + 0x14);
  if (uVar7 <= uVar3) {
    iVar5 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar5 = 1;
    }
    uVar7 = iVar5 + uVar7;
    if (uVar7 < 2) {
      pvVar4 = param_1;
      if (__src == (void *)0x0) goto LAB_02e44dc4;
LAB_02e44db8:
      if ((pvVar4 == __src) || (pvVar4 == (void *)0x0)) goto LAB_02e44dc4;
      memcpy(pvVar4,__src,((ulong)uVar3 & 0x1fffffff) << 3);
      if (param_1 != __src) {
        (*DAT_0442d158)(4,__src);
      }
    }
    else {
      pvVar4 = (void *)(*DAT_0442d140)(4,(ulong)uVar7 << 3,8);
      if (__src != (void *)0x0) goto LAB_02e44db8;
LAB_02e44dc4:
      if (pvVar4 == (void *)0x0) {
        return (ulong *)0x0;
      }
    }
    __src = pvVar4;
    *(void **)((long)param_1 + 8) = __src;
    *(uint *)((long)param_1 + 0x14) = uVar7;
  }
  if (uVar7 <= uVar3) {
    return (ulong *)0x0;
  }
  uVar7 = *(uint *)((long)param_1 + 0x10);
  *(uint *)((long)param_1 + 0x10) = uVar7 + 1;
  puVar2 = (ulong *)((long)__src + (ulong)uVar7 * 8);
joined_r0x02e44e68:
  if (puVar2 == (ulong *)0x0) {
    return (ulong *)0x0;
  }
  *puVar2 = param_2;
  return puVar2;
}


