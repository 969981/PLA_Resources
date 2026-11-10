/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00987dbc; name: FUN_00987dbc
 */


void FUN_00987dbc(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_40 [2];
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar13 = *(long *)(param_2 + 8);
  FUN_00987fd4(local_40,lVar13);
  puVar5 = local_40[0];
  puVar4 = PTR_DAT_0437a0c0;
  if (local_40[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_40[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_40[0] + 0xc);
      pbVar11 = PTR_DAT_0437a0b8;
      iVar7 = *(int *)((long)local_40[0] + 0xc);
      do {
        plVar12 = (long *)puVar5[2];
        if (((*pbVar11 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a0b8), pbVar11 = PTR_DAT_0437a0b8, iVar6 != 0))
        {
          uVar8 = FUN_00986b1c();
          *(undefined8 *)puVar4 = uVar8;
          __cxa_guard_release(PTR_DAT_0437a0b8);
          pbVar11 = PTR_DAT_0437a0b8;
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_00987ea8;
          if (plVar12 == (long *)puVar4) break;
          plVar12 = (long *)*plVar12;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar9 = puVar5[3];
            if (lVar9 != 0) {
              plVar12 = (long *)*param_1;
              *param_1 = 0;
              if (plVar12 != (long *)0x0) {
                lVar10 = plVar12[0xb];
                piVar1 = (int *)(lVar10 + 0xc);
                do {
                  iVar7 = *piVar1;
                  cVar2 = '\x01';
                  bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                  if (bVar3) {
                    *piVar1 = iVar7 + -1;
                    cVar2 = ExclusiveMonitorsStatus();
                  }
                } while (cVar2 != '\0');
                if (iVar7 + -1 == 0) {
                  *(undefined8 *)(lVar10 + 0x18) = 0;
                  (**(code **)(*plVar12 + 0x20))();
                }
              }
              *param_1 = lVar9 + -0x50;
              param_1[1] = lVar13;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar6;
      } while (iVar6 != 0);
    }
LAB_00987ea8:
    if (local_40[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_40[0] + 1);
      do {
        iVar7 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 + -1 == 0) {
        local_40[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_28 = *local_40[0];
        FUN_02a44274(lVar13 + 0xd8,&local_28);
      }
    }
  }
  return;
}


