/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e43210; name: FUN_02e43210
 */


long * FUN_02e43210(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *__src;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x40);
  if (5 < *(uint *)(param_1 + 0x40)) goto LAB_02e43234;
  if (*(uint *)(param_1 + 0x44) < 6) {
    __src = *(void **)(param_1 + 0x38);
    lVar4 = (*(uint *)(param_1 + 0x44) - uVar7) + 6;
    pvVar1 = (void *)(param_1 + 0x28);
    uVar8 = (uint)lVar4;
    if (uVar8 < 3) {
      __dest = pvVar1;
      if (__src != (void *)0x0) goto LAB_02e43328;
LAB_02e43368:
      if (__dest == (void *)0x0) {
        return (long *)0x0;
      }
    }
    else {
      __dest = (void *)(*DAT_0442d140)(4,lVar4 * 8,8);
      if (__src == (void *)0x0) goto LAB_02e43368;
LAB_02e43328:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02e43368;
      memcpy(__dest,__src,(uVar7 & 0x1fffffff) << 3);
      if (pvVar1 != __src) {
        (*DAT_0442d158)(4,__src);
      }
    }
    *(void **)(param_1 + 0x38) = __dest;
    *(uint *)(param_1 + 0x44) = uVar8;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar7 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  if (uVar7 + 1 != 6) {
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (uVar7 + 1) * 8) = 0;
    lVar4 = uVar7 + 2;
    if (lVar4 != 6) {
      lVar5 = uVar7 * -8 + -0x10;
      do {
        if (*(long *)(param_1 + 0x38) != lVar5) {
          *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar4 * 8) = 0;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar4 != 6);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 6;
LAB_02e43234:
  plVar6 = *(long **)(*(long *)(param_1 + 0x38) + 0x28);
  if ((plVar6 == (long *)0x0) && (plVar6 = (long *)(*DAT_0442d138)(4,0x100), plVar6 != (long *)0x0))
  {
    FUN_02ef6774(plVar6);
    *(long **)(*(long *)(param_1 + 0x38) + 0x28) = plVar6;
    plVar6[1] = param_1;
    iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(param_1 + 0x48));
    if (iVar3 != 1) {
      (**(code **)*plVar6)(plVar6);
      (*DAT_0442d150)(4,plVar6);
      plVar6 = (long *)0x0;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x28) = 0;
    }
  }
  return plVar6;
}


