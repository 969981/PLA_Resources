/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b5ed34; name: FUN_01b5ed34
 */


void FUN_01b5ed34(undefined8 *param_1,long param_2,long param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  long *plVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 local_58;
  
  uVar14 = param_3 - param_2 >> 4;
  plVar13 = (long *)*param_1;
  if ((ulong)(param_1[2] - (long)plVar13 >> 4) < uVar14) {
    FUN_01b5f370(param_1);
    uVar10 = FUN_01b5f680(param_1,uVar14);
    FUN_01b5f5f8(param_1,uVar10);
    if (param_2 != param_3) {
      puVar15 = param_1 + 3;
      FUN_01b5f6d0(puVar15,param_1[1],param_2);
      param_1[1] = param_1[1] + 0x10;
      if (param_2 + 0x10 != param_3) {
        FUN_01b5f6d0(puVar15);
        param_1[1] = param_1[1] + 0x10;
        if (param_2 + 0x20 != param_3) {
          FUN_01b5f6d0(puVar15);
          lVar12 = param_1[1] + 0x10;
          param_1[1] = lVar12;
          for (param_2 = param_2 + 0x30; param_2 != param_3; param_2 = param_2 + 0x10) {
            FUN_01b5f6d0(puVar15,lVar12,param_2);
            lVar12 = param_1[1] + 0x10;
            param_1[1] = lVar12;
          }
        }
      }
    }
  }
  else {
    uVar17 = param_1[1] - (long)plVar13 >> 4;
    lVar12 = param_2 + (param_1[1] - (long)plVar13);
    plVar4 = (long *)PTR_DAT_043794a8;
    plVar5 = (long *)PTR_DAT_043794a0;
    pbVar6 = PTR_DAT_04379498;
    lVar11 = lVar12;
    if (uVar14 <= uVar17) {
      lVar11 = param_3;
    }
    for (; PTR_DAT_04379498 = pbVar6, PTR_DAT_043794a0 = (undefined *)plVar5,
        PTR_DAT_043794a8 = (undefined *)plVar4, lVar11 != param_2; param_2 = param_2 + 0x10) {
      FUN_008c4b3c(plVar13,param_2);
      plVar13 = plVar13 + 2;
      plVar4 = (long *)PTR_DAT_043794a8;
      plVar5 = (long *)PTR_DAT_043794a0;
      pbVar6 = PTR_DAT_04379498;
    }
    if (uVar17 < uVar14) {
      if (lVar11 != param_3) {
        puVar15 = param_1 + 3;
        FUN_01b5f6d0(puVar15,param_1[1],lVar12);
        lVar11 = param_1[1];
        param_1[1] = lVar11 + 0x10;
        if (lVar12 + 0x10 != param_3) {
          FUN_01b5f6d0(puVar15,lVar11 + 0x10,lVar12 + 0x10);
          lVar11 = param_1[1];
          param_1[1] = lVar11 + 0x10;
          if (lVar12 + 0x20 != param_3) {
            FUN_01b5f6d0(puVar15,lVar11 + 0x10,lVar12 + 0x20);
            lVar11 = param_1[1] + 0x10;
            param_1[1] = lVar11;
            for (lVar12 = lVar12 + 0x30; lVar12 != param_3; lVar12 = lVar12 + 0x10) {
              FUN_01b5f6d0(puVar15,lVar11,lVar12);
              lVar11 = param_1[1] + 0x10;
              param_1[1] = lVar11;
            }
          }
        }
      }
    }
    else {
      if ((long *)param_1[1] != plVar13) {
        plVar16 = (long *)param_1[1] + -2;
        puVar15 = (undefined8 *)*plVar16;
        puVar7 = PTR_LAB_04379590;
        puVar8 = PTR_LAB_04379590;
        if (puVar15 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar15 + 1);
          do {
            iVar9 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar9 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          puVar7 = PTR_LAB_04379590;
          puVar8 = PTR_LAB_04379590;
          if (iVar9 + -1 == 0) {
            puVar15[2] = 0;
            if (((*pbVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0))
            {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar12 = *plVar5;
            *plVar4 = lVar12;
            local_58 = *puVar15;
            FUN_02a44274(lVar12 + 0xd8,&local_58);
            puVar7 = PTR_LAB_04379590;
            puVar8 = PTR_LAB_04379590;
          }
        }
        while (PTR_LAB_04379590 = puVar8, puVar8 = PTR_LAB_04379590, PTR_LAB_04379590 = puVar7,
              plVar16 != plVar13) {
          plVar16 = plVar16 + -2;
          puVar15 = (undefined8 *)*plVar16;
          if (puVar15 != (undefined8 *)0x0) {
            piVar1 = (int *)(puVar15 + 1);
            do {
              iVar9 = *piVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar9 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            puVar7 = PTR_LAB_04379590;
            if (iVar9 + -1 == 0) {
              puVar15[2] = 0;
              if (((*pbVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(pbVar6), iVar9 != 0)) {
                FUN_00100250(puVar8,plVar5,&PTR_LOOP_0411a000);
                __cxa_guard_release(pbVar6);
              }
              lVar12 = *plVar5;
              *plVar4 = lVar12;
              local_58 = *puVar15;
              FUN_02a44274(lVar12 + 0xd8,&local_58);
              puVar7 = PTR_LAB_04379590;
            }
          }
        }
      }
      param_1[1] = plVar13;
    }
  }
  return;
}


