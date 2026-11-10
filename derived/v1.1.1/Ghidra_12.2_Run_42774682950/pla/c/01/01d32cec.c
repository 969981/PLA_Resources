/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d32cec; name: FUN_01d32cec
 */


void FUN_01d32cec(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  ulong *puVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  size_t sVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  byte *pbVar13;
  uint *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined1 *puVar18;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar18 = &DAT_cbf29ce484222645;
  FUN_01d330d0();
  *param_1 = &PTR_LAB_0424f390;
  param_1[9] = &PTR_LAB_0424f3e0;
  param_1[10] = &PTR_LAB_0424f428;
  puVar16 = param_1 + 0x17;
  *puVar16 = 0;
  param_1[0x18] = &DAT_cbf29ce484222645;
  param_1[0x19] = &DAT_03996322;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((long)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((long)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((long)param_1 + 0x10c) = 0x3f800000ffffffff;
  *(undefined2 *)((long)param_1 + 0x114) = 0x100;
  *(undefined4 *)(param_1 + 0x25) = 0;
  puVar6 = PTR_DAT_0437a0d0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (((*puVar6 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar6 = PTR_DAT_0437a0d8;
  param_1[0x26] = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[0x27] = *(undefined8 *)(puVar6 + 8);
  plVar9 = *(long **)(puVar6 + 0x18);
  param_1[0x28] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x29] = plVar9;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x18))();
  }
  if (*(ushort *)((long)param_2 - (long)*param_2) < 9) {
    uVar12 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[4];
    uVar12 = 0;
    if (uVar11 != 0) {
      uVar12 = *(undefined8 *)((long)param_2 + uVar11);
    }
  }
  *puVar16 = uVar12;
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar11 == 0)) {
    lVar10 = 0;
  }
  else {
    puVar14 = (uint *)((long)param_2 + uVar11);
    lVar10 = (long)puVar14 + (ulong)*puVar14;
  }
  sVar8 = strlen((char *)(lVar10 + 4));
  bVar3 = *(byte *)(lVar10 + 4);
  if (bVar3 != 0) {
    pbVar13 = (byte *)(lVar10 + 5);
    do {
      puVar18 = (undefined1 *)(((ulong)puVar18 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar3 != 0);
  }
  param_1[0x1a] = sVar8;
  plVar9 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  param_1[0x18] = puVar18;
  param_1[0x19] = (char *)(lVar10 + 4);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  param_1[0x1b] = 0;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0xb) {
    local_60 = 0;
  }
  else {
    uVar11 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5];
    local_60 = 0;
    if (uVar11 != 0) {
      local_60 = *(undefined8 *)((long)param_2 + uVar11);
    }
  }
  uVar12 = FUN_01d33564(&local_60,puVar16);
  param_1[0x1c] = uVar12;
  lVar10 = FUN_01d3ffb0(param_1[1],param_2,param_1 + 0x14);
  if (lVar10 != 0) {
    lVar17 = *(long *)(lVar10 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar12;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar9 != (long *)0x0) {
    lVar17 = plVar9[0xb];
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar7 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar17 + 0x18) = 0;
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  param_1[0x1e] = lVar10;
  puVar14 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0xe - (long)*param_2)));
  puVar2 = param_1 + 0x23;
  puVar14 = (uint *)((long)puVar14 + (ulong)*(uint *)(param_1 + 0x14) * 4 + (ulong)*puVar14 + 4);
  piVar1 = (int *)((long)puVar14 + (ulong)*puVar14);
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1d) ||
      (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe], uVar11 == 0)) ||
     (*(char *)((long)piVar1 + uVar11) == '\0')) {
    uVar11 = *puVar2 & 0xfffffffffffffffe;
  }
  else {
    uVar11 = *puVar2 | 1;
  }
  *puVar2 = uVar11;
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) ||
      (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10], uVar15 == 0)) ||
     (*(char *)((long)piVar1 + uVar15) == '\0')) {
    uVar11 = uVar11 & 0xfffffffffffffffd;
  }
  else {
    uVar11 = uVar11 | 2;
  }
  *puVar2 = uVar11;
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1f) ||
      (uVar15 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xf], uVar15 == 0)) ||
     (*(char *)((long)piVar1 + uVar15) == '\0')) {
    uVar11 = uVar11 & 0xfffffffffffffffb;
  }
  else {
    uVar11 = uVar11 | 4;
  }
  param_1[0x23] = uVar11;
  FUN_01d3382c(&local_60,param_2);
  param_1[0x26] = local_60;
  param_1[0x27] = local_58;
  plVar9 = (long *)param_1[0x29];
  param_1[0x28] = local_50;
  param_1[0x29] = 0;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x20))();
  }
  param_1[0x29] = local_48;
  return;
}


