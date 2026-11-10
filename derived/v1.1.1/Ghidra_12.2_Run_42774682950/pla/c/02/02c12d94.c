/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c12d94; name: FUN_02c12d94
 */


void FUN_02c12d94(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  undefined8 *local_48;
  undefined8 local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  puVar4 = PTR_DAT_04379498;
  lVar16 = *(long *)(param_2 + 8);
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  uVar9 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar9;
  FUN_02a44e0c(&local_48,uVar9,lVar16);
  if (local_48 != (undefined8 *)0x0) {
    puVar14 = (undefined8 *)local_48[2];
    puVar10 = local_48;
    if (puVar14 == (undefined8 *)0x0) {
LAB_02c12e30:
      piVar1 = (int *)(puVar10 + 1);
      do {
        iVar8 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      puVar10 = (undefined8 *)PTR_DAT_04388278;
      pbVar11 = PTR_DAT_04388270;
      if ((*PTR_DAT_04388270 & 1) != 0) goto LAB_02c12e18;
      iVar8 = __cxa_guard_acquire(PTR_DAT_04388270);
      puVar10 = (undefined8 *)PTR_DAT_04388278;
      pbVar11 = PTR_DAT_04388270;
      if (iVar8 == 0) goto LAB_02c12e18;
      uVar9 = FUN_00986b1c();
      *(undefined8 *)PTR_DAT_04388278 = uVar9;
      __cxa_guard_release(PTR_DAT_04388270);
      puVar10 = (undefined8 *)PTR_DAT_04388278;
      pbVar11 = PTR_DAT_04388270;
      if (puVar14 != (undefined8 *)PTR_DAT_04388278) {
        do {
          puVar14 = (undefined8 *)*puVar14;
          if (puVar14 == (undefined8 *)0x0) {
            puVar10 = local_48;
            if (local_48 == (undefined8 *)0x0) {
              return;
            }
            goto LAB_02c12e30;
          }
LAB_02c12e18:
        } while (puVar14 != puVar10);
      }
      if (local_48 == (undefined8 *)0x0) {
        return;
      }
      if (*(int *)((long)local_48 + 0xc) != 0) {
        piVar1 = (int *)((long)local_48 + 0xc);
        iVar8 = *(int *)((long)local_48 + 0xc);
        do {
          while( true ) {
            plVar15 = (long *)local_48[2];
            if (((*pbVar11 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(PTR_DAT_04388270), pbVar11 = PTR_DAT_04388270,
               puVar10 = (undefined8 *)PTR_DAT_04388278, iVar7 != 0)) {
              uVar9 = FUN_00986b1c();
              *(undefined8 *)PTR_DAT_04388278 = uVar9;
              __cxa_guard_release(PTR_DAT_04388270);
              pbVar11 = PTR_DAT_04388270;
              puVar10 = (undefined8 *)PTR_DAT_04388278;
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_02c1300c;
              if (plVar15 == puVar10) break;
              plVar15 = (long *)*plVar15;
            }
            iVar7 = *piVar1;
            if (iVar7 == iVar8) break;
            ClearExclusiveLocal();
            iVar8 = iVar7;
            if (iVar7 == 0) goto LAB_02c1300c;
          }
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = local_48[3];
            if (lVar12 != 0) {
              plVar15 = (long *)*param_1;
              *param_1 = 0;
              if (plVar15 != (long *)0x0) {
                lVar13 = plVar15[0xb];
                piVar1 = (int *)(lVar13 + 0xc);
                do {
                  iVar8 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar8 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar8 + -1 == 0) {
                  *(undefined8 *)(lVar13 + 0x18) = 0;
                  (**(code **)(*plVar15 + 0x20))();
                }
              }
              *param_1 = lVar12 + -0x50;
              param_1[1] = lVar16;
            }
            break;
          }
          iVar8 = iVar7;
        } while (iVar7 != 0);
      }
LAB_02c1300c:
      piVar1 = (int *)(local_48 + 1);
      do {
        iVar8 = *piVar1 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        puVar10 = local_48;
      } while (cVar2 != '\0');
    }
    if (iVar8 == 0) {
      puVar10[2] = 0;
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)puVar5;
      *(long *)puVar6 = lVar16;
      local_38 = *puVar10;
      FUN_02a44274(lVar16 + 0xd8,&local_38);
    }
  }
  return;
}


