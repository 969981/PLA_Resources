/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01306260; name: FUN_01306260
 */


long * FUN_01306260(long param_1,byte *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  
  lVar12 = *(long *)(param_1 + 0x148);
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    puVar10 = *(undefined1 **)PTR_DAT_0437a0d8;
    plVar9 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      puVar1 = *(undefined8 **)(lVar12 + 0x148);
      lVar2 = *(long *)(lVar12 + 0x150);
      puVar13 = puVar1 + lVar2 * 6;
      (**(code **)(*plVar9 + 0x18))(plVar9);
      bVar4 = false;
      goto joined_r0x013062c0;
    }
  }
  else {
    puVar10 = &DAT_cbf29ce484222645;
    bVar3 = *param_2;
    while (bVar3 != 0) {
      param_2 = param_2 + 1;
      puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *param_2;
    }
  }
  puVar1 = *(undefined8 **)(lVar12 + 0x148);
  lVar2 = *(long *)(lVar12 + 0x150);
  plVar9 = (long *)0x0;
  bVar4 = true;
  puVar13 = puVar1 + lVar2 * 6;
joined_r0x013062c0:
  if (lVar2 != 0) {
    puVar7 = (undefined1 *)*puVar1;
    while ((puVar7 != puVar10 && (puVar8 = puVar1 + 6, puVar1 = puVar13, puVar13 != puVar8))) {
      puVar7 = (undefined1 *)*puVar8;
      puVar1 = puVar8;
    }
  }
  if (!bVar4) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  if (puVar1 == (undefined8 *)(*(long *)(lVar12 + 0x148) + *(long *)(lVar12 + 0x150) * 0x30)) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = (long *)puVar1[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar5 != 0))
  {
    *(undefined8 *)PTR_DAT_043729f0 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar11 != (long *)0x0) {
    for (plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      if (plVar6 == (long *)PTR_DAT_043729f0) goto LAB_01306360;
    }
    plVar11 = (long *)0x0;
  }
LAB_01306360:
  if (!bVar4) {
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  return plVar11;
}


