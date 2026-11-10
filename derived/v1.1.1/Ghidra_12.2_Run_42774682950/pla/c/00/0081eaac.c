/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0081eaac; name: FUN_0081eaac
 */


long * FUN_0081eaac(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long *plVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  
  if ((*(long *)PTR_DAT_043773f8 == 0) ||
     (lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_043773f8 + 0x88)), lVar4 == 0)) {
    FUN_0082481c(PTR_DAT_04377bb0);
    puVar8 = (ulong *)0x0;
    bVar3 = true;
    iVar1 = *(int *)PTR_DAT_043773f0;
  }
  else {
    puVar8 = (ulong *)(lVar4 + 0xb0);
    do {
      plVar7 = (long *)*puVar8;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *puVar8 = (ulong)plVar7 | 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (((plVar7 != (long *)0x0) && ((int)plVar7[0xb] == 0)) &&
       (uVar5 = (**(code **)(*plVar7 + 0x88))(plVar7,param_2), (uVar5 & 1) != 0)) {
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
        if (bVar3) {
          *puVar8 = *puVar8 & 0xfffffffffffffffe;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      return plVar7;
    }
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar8,0x10);
      if (bVar3) {
        *puVar8 = *puVar8 & 0xfffffffffffffffe;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_0082481c(PTR_DAT_04377bb0);
    plVar7 = (long *)*puVar8;
    if ((plVar7 != (long *)0x0) &&
       (plVar6 = (long *)FUN_0081da4c(plVar7,param_2), plVar6 != (long *)0x0)) {
      if (plVar6 != plVar7) {
        *puVar8 = (ulong)plVar6;
LAB_0081ec24:
        plVar7 = plVar6;
      }
      goto LAB_0081ec5c;
    }
    bVar3 = false;
    iVar1 = *(int *)PTR_DAT_043773f0;
  }
  if (iVar1 != 0) {
    puVar9 = *(undefined8 **)(PTR_DAT_043773f0 + 8);
    lVar4 = (long)iVar1 << 3;
    if (bVar3) {
      do {
        plVar6 = (long *)FUN_0081da4c(*puVar9,param_2);
        if (plVar6 != (long *)0x0) goto LAB_0081ec24;
        lVar4 = lVar4 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar4 != 0);
    }
    else {
      do {
        plVar7 = (long *)FUN_0081da4c(*puVar9,param_2);
        if (plVar7 != (long *)0x0) goto LAB_0081ec54;
        puVar9 = puVar9 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  iVar1 = *(int *)PTR_DAT_04377bd0;
  if (iVar1 != 0) {
    puVar9 = *(undefined8 **)(PTR_DAT_04377bd0 + 8);
    if (bVar3) {
      lVar4 = (long)iVar1 << 3;
      do {
        plVar6 = (long *)FUN_0081da4c(*puVar9,param_2);
        if (plVar6 != (long *)0x0) goto LAB_0081ec24;
        lVar4 = lVar4 + -8;
        puVar9 = puVar9 + 1;
      } while (lVar4 != 0);
    }
    else {
      lVar4 = (long)iVar1 << 3;
      do {
        plVar7 = (long *)FUN_0081da4c(*puVar9,param_2);
        if (plVar7 != (long *)0x0) goto LAB_0081ec54;
        puVar9 = puVar9 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
  }
  plVar7 = (long *)0x0;
LAB_0081ec5c:
  FUN_00824824(PTR_DAT_04377bb0);
  return plVar7;
LAB_0081ec54:
  *puVar8 = (ulong)plVar7;
  goto LAB_0081ec5c;
}


