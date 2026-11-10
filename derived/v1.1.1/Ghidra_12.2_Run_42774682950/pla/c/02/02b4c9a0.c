/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b4c9a0; name: FUN_02b4c9a0
 */


void FUN_02b4c9a0(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  byte *pbVar11;
  long *plVar12;
  long lVar13;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar13 = *(long *)(param_2 + 8);
  FUN_02b4cd3c(local_38,lVar13);
  puVar4 = local_38[0];
  if (local_38[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_38[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_38[0] + 0xc);
      puVar10 = PTR_DAT_04388168;
      pbVar11 = PTR_DAT_04388160;
      iVar6 = *(int *)((long)local_38[0] + 0xc);
      do {
        while( true ) {
          plVar12 = (long *)puVar4[2];
          if (((*pbVar11 & 1) == 0) &&
             (iVar5 = __cxa_guard_acquire(PTR_DAT_04388160), pbVar11 = PTR_DAT_04388160,
             puVar10 = PTR_DAT_04388168, iVar5 != 0)) {
            uVar7 = FUN_00986b1c();
            *(undefined8 *)PTR_DAT_04388168 = uVar7;
            __cxa_guard_release(PTR_DAT_04388160);
            pbVar11 = PTR_DAT_04388160;
            puVar10 = PTR_DAT_04388168;
          }
          while( true ) {
            if (plVar12 == (long *)0x0) goto LAB_02b4cb04;
            if (plVar12 == (long *)puVar10) break;
            plVar12 = (long *)*plVar12;
          }
          iVar5 = *piVar1;
          if (iVar5 == iVar6) break;
          ClearExclusiveLocal();
          iVar6 = iVar5;
          if (iVar5 == 0) goto LAB_02b4cb04;
        }
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar8 = puVar4[3];
          if (lVar8 != 0) {
            plVar12 = (long *)*param_1;
            *param_1 = 0;
            if (plVar12 != (long *)0x0) {
              lVar9 = plVar12[0xb];
              piVar1 = (int *)(lVar9 + 0xc);
              do {
                iVar6 = *piVar1;
                cVar2 = '\x01';
                bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar3) {
                  *piVar1 = iVar6 + -1;
                  cVar2 = ExclusiveMonitorsStatus();
                }
              } while (cVar2 != '\0');
              if (iVar6 + -1 == 0) {
                *(undefined8 *)(lVar9 + 0x18) = 0;
                (**(code **)(*plVar12 + 0x20))();
              }
            }
            *param_1 = lVar8 + -0x50;
            param_1[1] = lVar13;
          }
          break;
        }
        iVar6 = iVar5;
      } while (iVar5 != 0);
    }
LAB_02b4cb04:
    if (local_38[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_38[0] + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        local_38[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_28 = *local_38[0];
        FUN_02a44274(lVar13 + 0xd8,&local_28);
      }
    }
  }
  return;
}


