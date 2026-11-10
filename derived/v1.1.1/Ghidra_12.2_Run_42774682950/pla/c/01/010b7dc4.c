/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b7dc4; name: FUN_010b7dc4
 */


/* WARNING: Removing unreachable block (ram,0x010b7ed8) */

void FUN_010b7dc4(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined8 *__dest;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  
  puVar5 = PTR_DAT_04372ab8;
  puVar4 = PTR_DAT_04372ab0;
  puVar3 = PTR_DAT_043729f0;
  puVar2 = PTR_DAT_043729e8;
  plVar11 = *(long **)(*(long *)(param_2 + 0x88) + 0x18);
  if (plVar11 == (long *)0x0) {
LAB_010b7edc:
    if (*(long *)(*(long *)(param_1 + 0x3a8) + 0x28) == 0) {
      *(undefined1 *)(param_1 + 0x3f8) = 1;
      return;
    }
    FUN_0022289c(*(long *)(param_1 + 0x1a0) + 0x17340);
    FUN_0022289c(*(long *)(param_1 + 0x1a0) + 0x17340);
    FUN_0022289c(*(long *)(param_1 + 0x1a8) + 0x17340);
    FUN_0022289c(*(long *)(param_1 + 0x1a8) + 0x17340);
    FUN_0022289c(*(long *)(param_1 + 0x1b0) + 0x17340);
    FUN_0022289c(*(long *)(param_1 + 0x1b0) + 0x17340);
    return;
  }
  if ((*PTR_DAT_04372ab0 & 1) != 0) goto LAB_010b7e3c;
LAB_010b7f6c:
  iVar6 = __cxa_guard_acquire(puVar4);
  if (iVar6 != 0) {
    if (((*puVar2 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar2), iVar6 != 0)) {
      *(undefined8 *)puVar3 = 0;
      __cxa_guard_release(puVar2);
    }
    *(undefined **)puVar5 = puVar3;
    __cxa_guard_release(puVar4);
  }
LAB_010b7e3c:
  for (plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11); plVar7 != (long *)0x0;
      plVar7 = (long *)*plVar7) {
    if (plVar7 == (long *)puVar5) {
      lVar12 = *(long *)(param_1 + 0x3a8);
      __dest = *(undefined8 **)(lVar12 + 0x20);
      lVar8 = *(long *)(lVar12 + 0x28);
      puVar9 = __dest + lVar8 * 3;
      if ((lVar8 == 0) || ((long *)*__dest == plVar11)) goto LAB_010b7ea8;
      lVar10 = lVar8 * 0x18;
      goto LAB_010b7e88;
    }
  }
  goto LAB_010b7e24;
  while (puVar1 = __dest + 3, __dest = __dest + 3, (long *)*puVar1 != plVar11) {
LAB_010b7e88:
    lVar10 = lVar10 + -0x18;
    if (lVar10 == 0) goto LAB_010b7e24;
  }
LAB_010b7ea8:
  if (puVar9 != __dest) {
    puVar1 = __dest + 3;
    if (puVar1 != puVar9) {
      memmove(__dest,puVar1,(long)puVar9 - (long)puVar1);
      lVar8 = *(long *)(lVar12 + 0x28);
    }
    *(long *)(lVar12 + 0x28) = lVar8 + -1;
  }
LAB_010b7e24:
  plVar11 = (long *)FUN_00250790(plVar11);
  if (plVar11 == (long *)0x0) goto LAB_010b7edc;
  if ((*puVar4 & 1) == 0) goto LAB_010b7f6c;
  goto LAB_010b7e3c;
}


