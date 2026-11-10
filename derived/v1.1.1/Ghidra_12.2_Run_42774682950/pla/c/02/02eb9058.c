/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb9058; name: FUN_02eb9058
 */


undefined8 * FUN_02eb9058(void *param_1,ulong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  void *__src;
  
  uVar3 = *(uint *)((long)param_1 + 0x10);
  __src = *(void **)((long)param_1 + 8);
  if (uVar3 == 0) {
    uVar5 = 0;
  }
  else {
    iVar6 = 0;
    uVar8 = uVar3;
    do {
      iVar1 = iVar6 + (uVar8 >> 1);
      uVar5 = (ulong)iVar1;
      uVar10 = *(ulong *)((long)__src + (long)iVar1 * 8);
      if (uVar10 == param_2) goto joined_r0x02eb9100;
      if (uVar10 < param_2) {
        iVar6 = iVar1 + 1;
      }
      uVar8 = uVar8 - (uVar10 < param_2) >> 1;
    } while (uVar8 != 0);
    uVar5 = (ulong)iVar6;
  }
joined_r0x02eb9100:
  if ((void *)((long)__src + uVar5 * 8) != (void *)0x0) {
    uVar8 = *(uint *)((long)param_1 + 0x14);
    if (uVar3 < uVar8) goto joined_r0x02eb91cc;
    iVar6 = uVar8 + (uVar8 >> 1);
    if (uVar8 == 0) {
      iVar6 = 1;
    }
    uVar8 = iVar6 + uVar8;
    if (uVar8 < 2) {
      pvVar4 = param_1;
      if (__src != (void *)0x0) goto LAB_02eb919c;
LAB_02eb91ac:
      if (pvVar4 == (void *)0x0) {
        return (undefined8 *)0x0;
      }
    }
    else {
      pvVar4 = (void *)(*DAT_0442d140)(4,(ulong)uVar8 << 3,8);
      if (__src == (void *)0x0) goto LAB_02eb91ac;
LAB_02eb919c:
      if ((pvVar4 == __src) || (pvVar4 == (void *)0x0)) goto LAB_02eb91ac;
      memcpy(pvVar4,__src,((ulong)uVar3 & 0x1fffffff) << 3);
      if (param_1 != __src) {
        (*DAT_0442d158)(4,__src);
      }
    }
    *(void **)((long)param_1 + 8) = pvVar4;
    *(uint *)((long)param_1 + 0x14) = uVar8;
    __src = pvVar4;
joined_r0x02eb91cc:
    if (uVar8 <= uVar3) {
      return (undefined8 *)0x0;
    }
    uVar3 = *(uint *)((long)param_1 + 0x10);
    *(uint *)((long)param_1 + 0x10) = uVar3 + 1;
    if (uVar3 <= (uint)uVar5) {
      return (undefined8 *)((long)__src + (uVar5 & 0xffffffff) * 8);
    }
    puVar9 = (undefined8 *)((long)__src + (ulong)uVar3 * 8);
    do {
      puVar7 = puVar9 + -1;
      *puVar9 = *puVar7;
      puVar2 = (undefined8 *)(*(long *)((long)param_1 + 8) + (uVar5 & 0xffffffff) * 8);
      puVar9 = puVar7;
    } while (puVar2 < puVar7);
    return puVar2;
  }
  uVar8 = *(uint *)((long)param_1 + 0x14);
  pvVar4 = __src;
  if (uVar3 < uVar8) goto LAB_02eb914c;
  iVar6 = uVar8 + (uVar8 >> 1);
  if (uVar8 == 0) {
    iVar6 = 1;
  }
  uVar8 = iVar6 + uVar8;
  if (uVar8 < 2) {
    pvVar4 = param_1;
    if (__src == (void *)0x0) goto LAB_02eb913c;
LAB_02eb9130:
    if ((pvVar4 == __src) || (pvVar4 == (void *)0x0)) goto LAB_02eb913c;
    memcpy(pvVar4,__src,((ulong)uVar3 & 0x1fffffff) << 3);
    if (param_1 != __src) {
      (*DAT_0442d158)(4,__src);
    }
  }
  else {
    pvVar4 = (void *)(*DAT_0442d140)(4,(ulong)uVar8 << 3,8);
    if (__src != (void *)0x0) goto LAB_02eb9130;
LAB_02eb913c:
    if (pvVar4 == (void *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  *(void **)((long)param_1 + 8) = pvVar4;
  *(uint *)((long)param_1 + 0x14) = uVar8;
LAB_02eb914c:
  if (uVar3 < uVar8) {
    uVar3 = *(uint *)((long)param_1 + 0x10);
    *(uint *)((long)param_1 + 0x10) = uVar3 + 1;
    return (undefined8 *)((long)pvVar4 + (ulong)uVar3 * 8);
  }
  return (undefined8 *)0x0;
}


