/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e4358c; name: FUN_02e4358c
 */


long * FUN_02e4358c(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  void *__dest;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  void *__src;
  ulong uVar9;
  uint uVar10;
  
  uVar9 = (ulong)*(uint *)(param_1 + 0x40);
  if (6 < *(uint *)(param_1 + 0x40)) goto LAB_02e435b0;
  if (*(uint *)(param_1 + 0x44) < 7) {
    __src = *(void **)(param_1 + 0x38);
    lVar7 = (*(uint *)(param_1 + 0x44) - uVar9) + 7;
    pvVar1 = (void *)(param_1 + 0x28);
    uVar10 = (uint)lVar7;
    if (uVar10 < 3) {
      __dest = pvVar1;
      if (__src != (void *)0x0) goto LAB_02e43734;
LAB_02e43774:
      if (__dest == (void *)0x0) {
        return (long *)0x0;
      }
    }
    else {
      __dest = (void *)(*DAT_0442d140)(4,lVar7 * 8,8);
      if (__src == (void *)0x0) goto LAB_02e43774;
LAB_02e43734:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02e43774;
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
  if (uVar9 + 1 != 7) {
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (uVar9 + 1) * 8) = 0;
    lVar7 = uVar9 + 2;
    if (lVar7 != 7) {
      lVar6 = uVar9 * -8 + -0x10;
      do {
        if (*(long *)(param_1 + 0x38) != lVar6) {
          *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar7 * 8) = 0;
        }
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar7 != 7);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 7;
LAB_02e435b0:
  plVar8 = *(long **)(*(long *)(param_1 + 0x38) + 0x30);
  if ((plVar8 == (long *)0x0) && (plVar8 = (long *)(*DAT_0442d138)(4,0xf0), plVar8 != (long *)0x0))
  {
    *plVar8 = (long)&PTR_LAB_042a5d68;
    plVar8[1] = 0;
    puVar3 = PTR_DAT_043885f8;
    lVar7 = *(long *)(PTR_DAT_043885f8 + 8);
    plVar8[2] = 0;
    plVar8[3] = lVar7;
    plVar5 = (long *)(puVar3 + 0x10);
    if (*plVar5 != 0) {
      plVar5 = (long *)(lVar7 + 0x10);
    }
    *plVar5 = (long)plVar8;
    *(long **)(puVar3 + 8) = plVar8;
    *(int *)puVar3 = *(int *)puVar3 + 1;
    *plVar8 = (long)&PTR_FUN_042a5e68;
    plVar8[6] = 0;
    plVar8[7] = 0;
    *(undefined2 *)((long)plVar8 + 100) = 1;
    plVar8[0xb] = (long)&PTR_LAB_042a5d90;
    plVar8[4] = 0;
    plVar8[5] = 0;
    *(undefined4 *)(plVar8 + 0x18) = 0;
    plVar8[0x19] = 0;
    *(undefined4 *)(plVar8 + 0x1a) = 0;
    plVar8[0x1b] = 0;
    plVar8[0x11] = 0;
    *(undefined1 *)(plVar8 + 0x12) = 0;
    plVar8[8] = 0;
    plVar8[9] = 0;
    plVar8[0xd] = 0;
    plVar8[0xe] = 0;
    plVar8[0x13] = 0;
    plVar8[0x14] = 0;
    plVar8[0x16] = 0;
    plVar8[0x17] = 0;
    plVar8[0x1c] = 0;
    plVar8[0x1d] = 0;
    plVar8[0xf] = 0;
    plVar8[0x10] = 0;
    *(long **)(*(long *)(param_1 + 0x38) + 0x30) = plVar8;
    plVar8[1] = param_1;
    iVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,*(undefined8 *)(param_1 + 0x48));
    if (iVar4 != 1) {
      (**(code **)*plVar8)(plVar8);
      (*DAT_0442d150)(4,plVar8);
      plVar8 = (long *)0x0;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x30) = 0;
    }
  }
  return plVar8;
}


