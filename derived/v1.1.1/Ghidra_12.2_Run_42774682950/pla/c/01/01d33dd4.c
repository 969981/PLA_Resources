/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01d33dd4; name: FUN_01d33dd4
 */


void FUN_01d33dd4(undefined8 *param_1,int *param_2,undefined8 param_3,long *param_4)

{
  int *piVar1;
  ulong *puVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  byte bVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  size_t sVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  uint *puVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  FUN_01d330d0();
  param_1[0x1e] = 0;
  *param_1 = &PTR_LAB_0424f390;
  param_1[9] = &PTR_LAB_0424f3e0;
  param_1[10] = &PTR_LAB_0424f428;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined2 *)((long)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((long)param_1 + 0x104) = 0;
  param_1[0x19] = &DAT_03996322;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0x8000;
  param_1[0x21] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x22) = 0x3f800000;
  *(undefined2 *)((long)param_1 + 0x114) = 0x100;
  param_1[0x17] = 0;
  param_1[0x18] = &DAT_cbf29ce484222645;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  puVar6 = PTR_DAT_0437a0d0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar12 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar6 = PTR_DAT_0437a0d8;
  param_1[0x26] = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[0x27] = *(undefined8 *)(puVar6 + 8);
  plVar14 = *(long **)(puVar6 + 0x18);
  param_1[0x28] = *(undefined8 *)(puVar6 + 0x10);
  param_1[0x29] = plVar14;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x18))();
  }
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 5) ||
     (uVar16 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[2], uVar16 == 0)) {
    lVar21 = 0;
  }
  else {
    puVar17 = (uint *)((long)param_2 + uVar16);
    lVar21 = (long)puVar17 + (ulong)*puVar17;
  }
  sVar13 = strlen((char *)(lVar21 + 4));
  bVar7 = *(byte *)(lVar21 + 4);
  puVar19 = &DAT_cbf29ce484222645;
  if (bVar7 != 0) {
    puVar19 = &DAT_cbf29ce484222645;
    pbVar18 = (byte *)(lVar21 + 5);
    do {
      puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar7) * 0x100000001b3);
      bVar7 = *pbVar18;
      pbVar18 = pbVar18 + 1;
    } while (bVar7 != 0);
  }
  param_1[0x1a] = sVar13;
  plVar14 = (long *)param_1[0x1b];
  param_1[0x1b] = 0;
  param_1[0x18] = puVar19;
  param_1[0x19] = (char *)(lVar21 + 4);
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  param_1[0x17] = &DAT_cbf29ce484222645;
  param_1[0x1b] = 0;
  param_1[0x1c] = &DAT_cbf29ce484222645;
  uVar9 = FUN_02c6849c(*(undefined8 *)(*param_4 + 0x98));
  *(undefined4 *)(param_1 + 0x1f) = uVar9;
  uVar8 = FUN_02c6f924(*(undefined8 *)(*param_4 + 0x98));
  *(undefined2 *)((long)param_1 + 0xfc) = uVar8;
  uVar9 = FUN_02c6f5e8(*(undefined8 *)(*param_4 + 0x98));
  *(undefined4 *)(param_1 + 0x20) = uVar9;
  lVar21 = *param_4;
  uVar10 = FUN_02c68b0c(*(undefined8 *)(lVar21 + 0x98));
  uVar11 = FUN_02c70958(*(undefined8 *)(lVar21 + 0x98));
  *(bool *)((long)param_1 + 0x104) =
       (uVar10 & 0xfff0 ^ uVar10 >> 0x10 ^ uVar11 >> 0x10 ^ uVar11 & 0xfff0) < 0x10;
  lVar21 = FUN_01d3ffb0(param_1[1],param_2,param_1 + 0x14);
  if (lVar21 != 0) {
    lVar22 = *(long *)(lVar21 + 0x58);
    if (*(undefined8 **)(lVar22 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar22 + 0x10) == 0) {
      uVar15 = (**(code **)**(undefined8 **)(lVar22 + 0x18))();
      *(undefined8 *)(lVar22 + 0x10) = uVar15;
    }
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)param_1[0x1e];
  param_1[0x1e] = 0;
  if (plVar14 != (long *)0x0) {
    lVar22 = plVar14[0xb];
    piVar1 = (int *)(lVar22 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar22 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))();
    }
  }
  param_1[0x1e] = lVar21;
  puVar2 = param_1 + 0x23;
  bVar7 = FUN_02c76bec(*(undefined8 *)(*param_4 + 0x98));
  *(float *)(param_1 + 0x22) = (float)bVar7 / 255.0 + (float)bVar7 / 255.0 + -1.0;
  puVar17 = (uint *)((long)param_2 + (ulong)*(ushort *)((long)param_2 + (0xe - (long)*param_2)));
  puVar17 = (uint *)((long)puVar17 + (ulong)*(uint *)(param_1 + 0x14) * 4 + (ulong)*puVar17 + 4);
  piVar1 = (int *)((long)puVar17 + (ulong)*puVar17);
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1d) ||
      (uVar16 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe], uVar16 == 0)) ||
     (*(char *)((long)piVar1 + uVar16) == '\0')) {
    uVar16 = *puVar2 & 0xfffffffffffffffe;
  }
  else {
    uVar16 = *puVar2 | 1;
  }
  *puVar2 = uVar16;
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x21) ||
      (uVar20 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0x10], uVar20 == 0)) ||
     (*(char *)((long)piVar1 + uVar20) == '\0')) {
    uVar16 = uVar16 & 0xfffffffffffffffd;
  }
  else {
    uVar16 = uVar16 | 2;
  }
  *puVar2 = uVar16;
  if (((*(ushort *)((long)piVar1 - (long)*piVar1) < 0x1f) ||
      (uVar20 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xf], uVar20 == 0)) ||
     (*(char *)((long)piVar1 + uVar20) == '\0')) {
    uVar16 = uVar16 & 0xfffffffffffffffb;
  }
  else {
    uVar16 = uVar16 | 4;
  }
  param_1[0x23] = uVar16;
  bVar7 = FUN_02c6d5b0(*(undefined8 *)(*param_4 + 0x98));
  local_68 = param_1[1];
  *(byte *)((long)param_1 + 0x114) = bVar7 & 1;
  lVar21 = FUN_0161a7bc(auStack_48,local_68,&local_68,*param_4);
  if (lVar21 != 0) {
    piVar1 = (int *)(lVar21 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar14 = (long *)param_1[0x24];
  param_1[0x24] = 0;
  if (plVar14 != (long *)0x0) {
    plVar3 = plVar14 + 10;
    do {
      iVar12 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar14 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x25) = 1;
  param_1[0x24] = lVar21;
  FUN_01d3382c(&local_68,param_2,*(undefined4 *)(param_1 + 0x14));
  param_1[0x26] = local_68;
  param_1[0x27] = local_60;
  plVar14 = (long *)param_1[0x29];
  param_1[0x28] = local_58;
  param_1[0x29] = 0;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 0x20))();
  }
  param_1[0x29] = local_50;
  return;
}


