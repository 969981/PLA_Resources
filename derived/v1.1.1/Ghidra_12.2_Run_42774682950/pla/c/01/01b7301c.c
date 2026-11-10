/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b7301c; name: FUN_01b7301c
 */


void FUN_01b7301c(undefined8 *param_1,undefined8 *param_2,long *param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar6 = PTR_DAT_04379570;
  puVar15 = (undefined8 *)*param_2;
  lVar14 = *param_3;
  plVar11 = (long *)*puVar15;
  puVar10 = param_1 + 9;
  puVar12 = (undefined8 *)*puVar10;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar16 = *(undefined8 *)puVar6;
  uVar3 = *(undefined8 *)(puVar6 + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[4] = uVar16;
  param_1[5] = uVar3;
  *puVar10 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
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
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_70 = *puVar12;
      FUN_02a44274(lVar9 + 0xd8,&local_70);
    }
  }
  param_1[10] = 0;
  plVar13 = param_1 + 0xb;
  puVar12 = (undefined8 *)*plVar13;
  *plVar13 = 0;
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
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
      puVar12[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_70 = *puVar12;
      FUN_02a44274(lVar9 + 0xd8,&local_70);
    }
  }
  param_1[0xc] = 0;
  if (*(ushort *)(lVar14 + 4) < 0xd) {
    puVar12 = (undefined8 *)(lVar14 + 0x10);
    puVar2 = (undefined8 *)(lVar14 + 8);
    if (*(int *)(puVar15 + 4) != 0) {
      puVar12 = (undefined8 *)(lVar14 + 8);
      puVar2 = (undefined8 *)(lVar14 + 0x10);
    }
    if ((param_4 & 1) == 0) {
      puVar2 = puVar12;
    }
    *param_1 = *puVar2;
    lVar14 = (**(code **)(*plVar11 + 0x180))(plVar11);
    puVar12 = (undefined8 *)(**(code **)(*plVar11 + 0x1d0))(plVar11,*param_1);
    uVar16 = *(undefined8 *)(lVar14 + 0x30);
    param_1[3] = *(ulong *)(lVar14 + 0x38) & 0xffffffff;
    param_1[2] = uVar16;
    FUN_032cb060(&local_70,lVar14);
    param_1[5] = uStack_68;
    param_1[4] = local_70;
    uVar16 = *puVar12;
    param_1[7] = puVar12[1] & 0xffffffff;
    param_1[6] = uVar16;
    puVar8 = (undefined4 *)FUN_01e4b314(param_2,param_3);
    if (puVar8 != (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 8) = *puVar8;
      FUN_00b63974(puVar10,puVar8 + 2);
      FUN_00cfa028(plVar13,puVar8 + 6);
    }
  }
  return;
}


