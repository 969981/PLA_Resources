/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e61a8; name: FUN_019e61a8
 */


void FUN_019e61a8(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  long *local_78 [2];
  long local_68;
  
  puVar9 = PTR_DAT_043794a8;
  puVar8 = PTR_DAT_043794a0;
  puVar7 = PTR_DAT_04379498;
  puVar13 = (undefined8 *)param_1[0x40];
  if ((undefined8 *)param_1[0x40] != (undefined8 *)param_1[0x41]) {
    do {
      puVar2 = puVar13 + 2;
      while (FUN_00cf6d78(local_78,puVar13), local_78[0] == (long *)0x0) {
        puVar14 = (undefined8 *)param_1[0x41];
        puVar15 = puVar13;
        puVar16 = puVar2;
        if (puVar2 == puVar14) {
LAB_019e62c8:
          puVar16 = puVar16 + -2;
          puVar14 = (undefined8 *)*puVar16;
          if (puVar14 == (undefined8 *)0x0) goto LAB_019e6360;
          piVar4 = (int *)(puVar14 + 1);
          do {
            iVar11 = *piVar4 + -1;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
            if (bVar6) {
              *piVar4 = iVar11;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          do {
            if (iVar11 == 0) {
              puVar14[2] = 0;
              if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                FUN_00100250(PTR_LAB_04379590,puVar8,&PTR_LOOP_0411a000);
                __cxa_guard_release(puVar7);
              }
              lVar12 = *(long *)puVar8;
              *(long *)puVar9 = lVar12;
              local_78[0] = (long *)*puVar14;
              FUN_02a44274(lVar12 + 0xd8,local_78);
            }
LAB_019e6360:
            do {
              if (puVar16 == puVar15) goto LAB_019e638c;
              puVar16 = puVar16 + -2;
              puVar14 = (undefined8 *)*puVar16;
            } while (puVar14 == (undefined8 *)0x0);
            piVar4 = (int *)(puVar14 + 1);
            do {
              iVar11 = *piVar4 + -1;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
              if (bVar6) {
                *piVar4 = iVar11;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
          } while( true );
        }
        FUN_00b5fc1c(puVar13,puVar2);
        puVar15 = puVar2;
        if (puVar13 + 4 != puVar14) {
          do {
            puVar15 = puVar16 + 2;
            FUN_00b5fc1c(puVar16,puVar15);
            puVar3 = puVar16 + 4;
            puVar16 = puVar15;
          } while (puVar3 != puVar14);
        }
        puVar16 = (undefined8 *)param_1[0x41];
        if (puVar16 != puVar15) goto LAB_019e62c8;
LAB_019e638c:
        param_1[0x41] = (long)puVar15;
        if (puVar13 == puVar15) goto LAB_019e61dc;
      }
      lVar12 = local_78[0][0xb];
      piVar4 = (int *)(lVar12 + 0xc);
      do {
        iVar11 = *piVar4;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar4,0x10);
        if (bVar6) {
          *piVar4 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_78[0] + 0x20))();
      }
      puVar13 = puVar2;
    } while (puVar2 != (undefined8 *)param_1[0x41]);
  }
LAB_019e61dc:
  (**(code **)(*param_1 + 0xf0))(local_78,param_1);
  FUN_00b5fc1c(param_1 + 0x3e,local_78);
  plVar10 = local_78[0];
  if (local_78[0] != (long *)0x0) {
    plVar1 = local_78[0] + 1;
    do {
      iVar11 = (int)*plVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar6) {
        *(int *)plVar1 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      local_78[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_68 = *plVar10;
      FUN_02a44274(lVar12 + 0xd8,&local_68);
    }
  }
  return;
}


