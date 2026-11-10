/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef3428; name: FUN_02ef3428
 */


long * FUN_02ef3428(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined *puVar4;
  int iVar5;
  void *__dest;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *__src;
  ulong uVar9;
  uint uVar10;
  
  uVar9 = (ulong)*(uint *)(param_1 + 0x40);
  if (4 < *(uint *)(param_1 + 0x40)) goto LAB_02ef344c;
  if (*(uint *)(param_1 + 0x44) < 5) {
    __src = *(void **)(param_1 + 0x38);
    lVar6 = (*(uint *)(param_1 + 0x44) - uVar9) + 5;
    pvVar1 = (void *)(param_1 + 0x28);
    uVar10 = (uint)lVar6;
    if (uVar10 < 3) {
      __dest = pvVar1;
      if (__src != (void *)0x0) goto LAB_02ef358c;
LAB_02ef35cc:
      if (__dest == (void *)0x0) {
        return (long *)0x0;
      }
    }
    else {
      __dest = (void *)(*DAT_0442d140)(4,lVar6 * 8,8);
      if (__src == (void *)0x0) goto LAB_02ef35cc;
LAB_02ef358c:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02ef35cc;
      memcpy(__dest,__src,(uVar9 & 0x1fffffff) << 3);
      if (pvVar1 != __src) {
        (*DAT_0442d158)(4,__src);
      }
    }
    *(void **)(param_1 + 0x38) = __dest;
    *(uint *)(param_1 + 0x44) = uVar10;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  if (uVar9 + 1 != 5) {
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (uVar9 + 1) * 8) = 0;
    lVar6 = uVar9 + 2;
    if (lVar6 != 5) {
      lVar7 = uVar9 * -8 + -0x10;
      do {
        if (*(long *)(param_1 + 0x38) != lVar7) {
          *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar6 * 8) = 0;
        }
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + -8;
      } while (lVar6 != 5);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 5;
LAB_02ef344c:
  plVar8 = *(long **)(*(long *)(param_1 + 0x38) + 0x20);
  if ((plVar8 == (long *)0x0) && (plVar8 = (long *)(*DAT_0442d138)(4,0x30), plVar8 != (long *)0x0))
  {
    *plVar8 = (long)&PTR_LAB_042ab228;
    plVar8[1] = 0;
    puVar4 = PTR_DAT_043885d8;
    lVar6 = *(long *)(PTR_DAT_043885d8 + 8);
    plVar8[2] = 0;
    plVar8[3] = lVar6;
    plVar3 = (long *)(puVar4 + 0x10);
    if (*(long *)(puVar4 + 0x10) != 0) {
      plVar3 = (long *)(lVar6 + 0x10);
    }
    *plVar3 = (long)plVar8;
    *(long **)(puVar4 + 8) = plVar8;
    *(int *)puVar4 = *(int *)puVar4 + 1;
    *plVar8 = (long)&PTR_FUN_042ab200;
    plVar8[4] = 0;
    plVar8[5] = 0;
    *(long **)(*(long *)(param_1 + 0x38) + 0x20) = plVar8;
    plVar8[1] = param_1;
    iVar5 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x48));
    if (iVar5 != 1) {
      (**(code **)*plVar8)(plVar8);
      (*DAT_0442d150)(4,plVar8);
      plVar8 = (long *)0x0;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x20) = 0;
    }
  }
  return plVar8;
}


