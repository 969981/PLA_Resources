/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed8240; name: FUN_02ed8240
 */


long * FUN_02ed8240(long param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  int iVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  void *__src;
  long *plVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar7 = (ulong)*(uint *)(param_1 + 0x40);
  if (3 < *(uint *)(param_1 + 0x40)) goto LAB_02ed8334;
  if (*(uint *)(param_1 + 0x44) < 4) {
    __src = *(void **)(param_1 + 0x38);
    lVar4 = (*(uint *)(param_1 + 0x44) - uVar7) + 4;
    pvVar1 = (void *)(param_1 + 0x28);
    uVar8 = (uint)lVar4;
    if (uVar8 < 3) {
      __dest = pvVar1;
      if (__src != (void *)0x0) goto LAB_02ed82a8;
LAB_02ed82f0:
      if (__dest == (void *)0x0) {
        return (long *)0x0;
      }
    }
    else {
      __dest = (void *)(*DAT_0442d140)(4,lVar4 * 8,8);
      if (__src == (void *)0x0) goto LAB_02ed82f0;
LAB_02ed82a8:
      if ((__dest == __src) || (__dest == (void *)0x0)) goto LAB_02ed82f0;
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
  if (uVar7 + 1 != 4) {
    *(undefined8 *)(*(long *)(param_1 + 0x38) + (uVar7 + 1) * 8) = 0;
    lVar4 = uVar7 + 2;
    if (lVar4 != 4) {
      lVar5 = uVar7 * -8 + -0x10;
      do {
        if (*(long *)(param_1 + 0x38) != lVar5) {
          *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar4 * 8) = 0;
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar4 != 4);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = 4;
LAB_02ed8334:
  plVar6 = *(long **)(*(long *)(param_1 + 0x38) + 0x18);
  if ((plVar6 == (long *)0x0) && (plVar6 = (long *)(*DAT_0442d138)(4,0x48), plVar6 != (long *)0x0))
  {
    FUN_02eef924(plVar6);
    *(long **)(*(long *)(param_1 + 0x38) + 0x18) = plVar6;
    plVar6[1] = param_1;
    iVar3 = (**(code **)(*plVar6 + 0x10))(plVar6,*(undefined8 *)(param_1 + 0x48));
    if (iVar3 != 1) {
      (**(code **)*plVar6)(plVar6);
      (*DAT_0442d150)(4,plVar6);
      plVar6 = (long *)0x0;
      *(undefined8 *)(*(long *)(param_1 + 0x38) + 0x18) = 0;
    }
  }
  return plVar6;
}


