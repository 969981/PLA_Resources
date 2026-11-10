/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e99b1c; name: FUN_02e99b1c
 */


undefined8 * FUN_02e99b1c(void *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  void *__src;
  long *plVar12;
  
  uVar3 = *(uint *)((long)param_1 + 0x10);
  __src = *(void **)((long)param_1 + 8);
  if (uVar3 == 0) {
    lVar7 = 0;
  }
  else {
    iVar6 = 0;
    uVar8 = uVar3;
    do {
      iVar1 = iVar6 + (uVar8 >> 1);
      plVar12 = (long *)((long)__src + (long)iVar1 * 8);
      uVar4 = *(uint *)(*plVar12 + 0x10);
      if (uVar4 == param_2) goto LAB_02e99b7c;
      if (uVar4 < param_2) {
        iVar6 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar4 < param_2) >> 1;
    } while (uVar8 != 0);
    lVar7 = (long)iVar6;
  }
  plVar12 = (long *)((long)__src + lVar7 * 8);
LAB_02e99b7c:
  if (plVar12 == (long *)0x0) {
    uVar8 = *(uint *)((long)param_1 + 0x14);
    if (uVar3 < uVar8) goto LAB_02e99d34;
    iVar6 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar6 = 1;
    }
    uVar8 = iVar6 + uVar8;
    if (uVar8 == 0) {
      pvVar5 = param_1;
      if (__src == (void *)0x0) goto LAB_02e99d50;
LAB_02e99cec:
      if ((pvVar5 == __src) || (pvVar5 == (void *)0x0)) goto LAB_02e99d50;
      memcpy(pvVar5,__src,((ulong)uVar3 & 0x1fffffff) << 3);
      if (param_1 != __src) {
        (*DAT_0442d158)(0,__src);
      }
    }
    else {
      pvVar5 = (void *)(*DAT_0442d140)(0,(ulong)uVar8 << 3,4);
      if (__src != (void *)0x0) goto LAB_02e99cec;
LAB_02e99d50:
      if (pvVar5 == (void *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    __src = pvVar5;
    *(void **)((long)param_1 + 8) = __src;
    *(uint *)((long)param_1 + 0x14) = uVar8;
LAB_02e99d34:
    if (uVar3 < uVar8) {
      uVar3 = *(uint *)((long)param_1 + 0x10);
      *(uint *)((long)param_1 + 0x10) = uVar3 + 1;
      return (undefined8 *)((long)__src + (ulong)uVar3 * 8);
    }
    return (undefined8 *)0x0;
  }
  uVar8 = *(uint *)((long)param_1 + 0x14);
  pvVar5 = __src;
  if (uVar3 < uVar8) goto joined_r0x02e99cb8;
  iVar6 = uVar8 + (uVar8 >> 1);
  if (uVar8 == 0) {
    iVar6 = 1;
  }
  uVar8 = iVar6 + uVar8;
  if (uVar8 == 0) {
    pvVar5 = param_1;
    if (__src == (void *)0x0) goto LAB_02e99cc0;
LAB_02e99c70:
    if ((pvVar5 == __src) || (pvVar5 == (void *)0x0)) goto LAB_02e99cc0;
    memcpy(pvVar5,__src,((ulong)uVar3 & 0x1fffffff) << 3);
    if (param_1 != __src) {
      (*DAT_0442d158)(0,__src);
    }
  }
  else {
    pvVar5 = (void *)(*DAT_0442d140)(0,(ulong)uVar8 << 3,4);
    if (__src != (void *)0x0) goto LAB_02e99c70;
LAB_02e99cc0:
    if (pvVar5 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  *(void **)((long)param_1 + 8) = pvVar5;
  *(uint *)((long)param_1 + 0x14) = uVar8;
joined_r0x02e99cb8:
  if (uVar8 <= uVar3) {
    return (undefined8 *)0x0;
  }
  uVar3 = *(uint *)((long)param_1 + 0x10);
  uVar9 = (ulong)((long)plVar12 - (long)__src) >> 3;
  *(uint *)((long)param_1 + 0x10) = uVar3 + 1;
  if (uVar3 <= (uint)uVar9) {
    return (undefined8 *)((long)pvVar5 + (uVar9 & 0xffffffff) * 8);
  }
  puVar11 = (undefined8 *)((long)pvVar5 + (ulong)uVar3 * 8);
  do {
    puVar10 = puVar11 + -1;
    *puVar11 = *puVar10;
    puVar2 = (undefined8 *)
             (*(long *)((long)param_1 + 8) +
             ((ulong)((long)plVar12 - (long)__src) >> 3 & 0xffffffff) * 8);
    puVar11 = puVar10;
  } while (puVar2 < puVar10);
  return puVar2;
}


