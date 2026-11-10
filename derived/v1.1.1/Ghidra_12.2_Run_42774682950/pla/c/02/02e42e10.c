/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e42e10; name: FUN_02e42e10
 */


long * FUN_02e42e10(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *__src;
  uint uVar8;
  
  uVar4 = (ulong)*(uint *)(param_1 + 0x40);
  if (2 < *(uint *)(param_1 + 0x40)) goto LAB_02e42e30;
  if (*(uint *)(param_1 + 0x44) < 3) {
    __src = *(void **)(param_1 + 0x38);
    lVar5 = (*(uint *)(param_1 + 0x44) - uVar4) + 3;
    pvVar1 = (void *)(param_1 + 0x28);
    uVar8 = (uint)lVar5;
    if (uVar8 < 3) {
      __dest = pvVar1;
      if (__src != (void *)0x0) goto LAB_02e42f30;
LAB_02e42f74:
      if (__dest == (void *)0x0) {
        return (long *)0x0;
      }
    }
    else {
      __dest = (void *)(*DAT_0442d140)(4,lVar5 * 8,8);
      if (__src == (void *)0x0) goto LAB_02e42f74;
LAB_02e42f30:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02e42f74;
      memcpy(__dest,__src,(uVar4 & 0x1fffffff) << 3);
      if (pvVar1 != __src) {
        (*DAT_0442d158)(4,__src);
      }
    }
    *(void **)(param_1 + 0x38) = __dest;
    *(uint *)(param_1 + 0x44) = uVar8;
  }
  puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar4 * 8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
  }
  if (uVar4 + 1 != 3) {
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (uVar4 + 1) * 8) = 0;
    lVar5 = uVar4 + 2;
    if (lVar5 != 3) {
      lVar6 = uVar4 * -8 + -0x10;
      do {
        if (*(long *)(param_1 + 0x38) != lVar6) {
          *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar5 * 8) = 0;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar5 != 3);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 3;
LAB_02e42e30:
  plVar7 = *(long **)(*(long *)(param_1 + 0x38) + 0x10);
  if ((plVar7 == (long *)0x0) && (plVar7 = (long *)(*DAT_0442d138)(4,0x90), plVar7 != (long *)0x0))
  {
    FUN_02e71a88(plVar7);
    *(long **)(*(long *)(param_1 + 0x38) + 0x10) = plVar7;
    plVar7[1] = param_1;
    iVar3 = (**(code **)(*plVar7 + 0x10))(plVar7,*(undefined8 *)(param_1 + 0x48));
    if (iVar3 != 1) {
      (**(code **)*plVar7)(plVar7);
      (*DAT_0442d150)(4,plVar7);
      plVar7 = (long *)0x0;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x10) = 0;
    }
  }
  return plVar7;
}


