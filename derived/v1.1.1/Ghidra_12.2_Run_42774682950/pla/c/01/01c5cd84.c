/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c5cd84; name: FUN_01c5cd84
 */


undefined4 * FUN_01c5cd84(long *param_1,undefined4 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 local_58;
  
  puVar11 = (undefined4 *)param_1[1];
  puVar13 = param_2 + 6;
  puVar14 = param_2;
  if (puVar13 != puVar11) {
    lVar10 = *param_1;
    puVar14 = param_2 + 6;
    *param_2 = *puVar14;
    FUN_00ad52f4(lVar10 + ((long)param_2 - lVar10 >> 3) * 8 + 8,param_2 + 8);
    if (param_2 + 0xc != puVar11) {
      puVar13 = param_2;
      do {
        puVar14 = puVar13;
        puVar13 = puVar14 + 6;
        *puVar13 = puVar14[0xc];
        FUN_00ad52f4(puVar14 + 8,puVar14 + 0xe);
      } while (puVar11 + -0xc != puVar13);
      puVar14 = puVar14 + 0xc;
    }
    puVar13 = (undefined4 *)param_1[1];
    if (puVar13 == puVar14) goto LAB_01c5cf0c;
  }
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  puVar12 = *(undefined8 **)(puVar13 + -4);
  puVar4 = PTR_LAB_04379590;
  puVar8 = PTR_LAB_04379590;
  if (puVar12 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar12 + 1);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar4 = PTR_LAB_04379590;
    puVar8 = PTR_LAB_04379590;
    if (iVar9 + -1 == 0) {
      puVar12[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar10 = *(long *)puVar6;
      *(long *)puVar7 = lVar10;
      local_58 = *puVar12;
      FUN_02a44274(lVar10 + 0xd8,&local_58);
      puVar4 = PTR_LAB_04379590;
      puVar8 = PTR_LAB_04379590;
    }
  }
  while (PTR_LAB_04379590 = puVar8, puVar8 = PTR_LAB_04379590, puVar13 = puVar13 + -6,
        PTR_LAB_04379590 = puVar4, puVar13 != puVar14) {
    puVar12 = *(undefined8 **)(puVar13 + -4);
    if (puVar12 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar12 + 1);
      do {
        iVar9 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      puVar4 = PTR_LAB_04379590;
      if (iVar9 + -1 == 0) {
        puVar12[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar10 = *(long *)puVar6;
        *(long *)puVar7 = lVar10;
        local_58 = *puVar12;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
        puVar4 = PTR_LAB_04379590;
      }
    }
  }
LAB_01c5cf0c:
  param_1[1] = (long)puVar14;
  return param_2;
}


