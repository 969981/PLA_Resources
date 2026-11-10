/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028e7294; name: FUN_028e7294
 */


long FUN_028e7294(long param_1,long *param_2,int *param_3)

{
  long *plVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  long *plVar6;
  bool bVar7;
  int iVar8;
  size_t sVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  int *piVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  long *local_68 [2];
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 5) ||
     (uVar12 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[2], uVar12 == 0)) {
    lVar14 = 0;
  }
  else {
    puVar2 = (uint *)((long)param_3 + uVar12);
    lVar14 = (long)puVar2 + (ulong)*puVar2;
  }
  puVar16 = &DAT_cbf29ce484222645;
  sVar9 = strlen((char *)(lVar14 + 4));
  bVar3 = *(byte *)(lVar14 + 4);
  if (bVar3 != 0) {
    pbVar13 = (byte *)(lVar14 + 5);
    do {
      puVar16 = (undefined1 *)(((ulong)puVar16 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar13;
      pbVar13 = pbVar13 + 1;
    } while (bVar3 != 0);
  }
  *(undefined8 *)(param_1 + 0x20) = puVar16;
  *(char **)(param_1 + 0x28) = (char *)(lVar14 + 4);
  *(size_t *)(param_1 + 0x30) = sVar9;
  plVar10 = *(long **)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  (**(code **)(*param_2 + 0x38))(local_68,param_2,(undefined8 *)(param_1 + 0x20));
  plVar10 = (long *)(param_1 + 0x40);
  FUN_008802f0(plVar10,local_68);
  plVar6 = local_68[0];
  *(undefined4 *)(param_1 + 0x58) = local_50;
  *(undefined8 *)(param_1 + 0x50) = local_58;
  if (local_68[0] != (long *)0x0) {
    plVar1 = local_68[0] + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar8;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar8 == 0) {
      local_68[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_48 = *plVar6;
      FUN_02a44274(lVar14 + 0xd8,&local_48);
    }
  }
  if (*(ushort *)((long)param_3 - (long)*param_3) < 7) {
    uVar17 = 0;
  }
  else {
    uVar12 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[3];
    uVar17 = 0;
    if (uVar12 != 0) {
      uVar17 = *(undefined4 *)((long)param_3 + uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar17;
  if ((*(ushort *)((long)param_3 - (long)*param_3) < 9) ||
     (uVar12 = (ulong)((ushort *)((long)param_3 - (long)*param_3))[4], uVar12 == 0)) {
    *(undefined1 *)(param_1 + 8) = 0;
    return param_1;
  }
  uVar4 = *(undefined1 *)((long)param_3 + uVar12);
  *(undefined1 *)(param_1 + 8) = uVar4;
  switch(uVar4) {
  case 1:
    if (((*plVar10 == 0) || (*(int *)(*plVar10 + 0xc) == 0)) ||
       ((*(char *)(param_1 + 0x54) == '\0' ||
        (FUN_028aee54(local_68,plVar10), local_68[0] == (long *)0x0)))) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*local_68[0] + 0x130))(local_68[0],param_1 + 0x54);
      if (local_68[0] != (long *)0x0) {
        (**(code **)(*local_68[0] + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar11;
    puVar2 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3)));
    piVar15 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
       (uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar12 == 0)) {
      *(undefined4 *)(param_1 + 0x18) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)((long)piVar15 + uVar12);
    }
    break;
  case 2:
    if ((((*(long *)(param_1 + 0x40) == 0) || (*(int *)(*(long *)(param_1 + 0x40) + 0xc) == 0)) ||
        (*(char *)(param_1 + 0x54) == '\0')) ||
       (FUN_028aee54(local_68,plVar10), local_68[0] == (long *)0x0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*local_68[0] + 0x138))(local_68[0],param_1 + 0x54);
      if (local_68[0] != (long *)0x0) {
        (**(code **)(*local_68[0] + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar11;
    puVar2 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3)));
    piVar15 = (int *)((long)puVar2 + (ulong)*puVar2);
    uVar17 = 0;
    if ((4 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar12 != 0)) {
      uVar17 = *(undefined4 *)((long)piVar15 + uVar12);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar17;
    break;
  case 3:
    if (((*(long *)(param_1 + 0x40) == 0) ||
        ((*(int *)(*(long *)(param_1 + 0x40) + 0xc) == 0 || (*(char *)(param_1 + 0x54) == '\0'))))
       || (FUN_028aee54(local_68,plVar10), local_68[0] == (long *)0x0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*local_68[0] + 0x140))(local_68[0],param_1 + 0x54);
      if (local_68[0] != (long *)0x0) {
        (**(code **)(*local_68[0] + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar11;
    puVar2 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3)));
    piVar15 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((4 < *(ushort *)((long)piVar15 - (long)*piVar15)) &&
       (uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar12 != 0))
    goto LAB_028e7644;
LAB_028e76e8:
    bVar7 = false;
    goto LAB_028e76ec;
  case 4:
    if ((((*(long *)(param_1 + 0x40) == 0) || (*(int *)(*(long *)(param_1 + 0x40) + 0xc) == 0)) ||
        (*(char *)(param_1 + 0x54) == '\0')) ||
       (FUN_028aee54(local_68,plVar10), local_68[0] == (long *)0x0)) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*local_68[0] + 0x148))(local_68[0],param_1 + 0x54);
      if (local_68[0] != (long *)0x0) {
        (**(code **)(*local_68[0] + 0x18))();
      }
    }
    *(undefined8 *)(param_1 + 0x10) = uVar11;
    puVar2 = (uint *)((long)param_3 + (ulong)*(ushort *)((long)param_3 + (10 - (long)*param_3)));
    piVar15 = (int *)((long)puVar2 + (ulong)*puVar2);
    if ((*(ushort *)((long)piVar15 - (long)*piVar15) < 5) ||
       (uVar12 = (ulong)((ushort *)((long)piVar15 - (long)*piVar15))[2], uVar12 == 0))
    goto LAB_028e76e8;
LAB_028e7644:
    bVar7 = *(char *)((long)piVar15 + uVar12) != '\0';
LAB_028e76ec:
    *(bool *)(param_1 + 0x18) = bVar7;
  }
  return param_1;
}


