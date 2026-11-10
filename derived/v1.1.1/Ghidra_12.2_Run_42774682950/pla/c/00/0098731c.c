/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0098731c; name: FUN_0098731c
 */


void FUN_0098731c(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar13 = *(long *)(param_2 + 8);
  FUN_00987510(local_60,lVar13);
  puVar6 = local_60[0];
  puVar5 = PTR_DAT_0437a090;
  puVar4 = PTR_DAT_0437a088;
  if (local_60[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar8 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar10 = (long *)puVar6[2];
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar9 = FUN_00987804();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar10 == (long *)0x0) goto LAB_0098741c;
          if (plVar10 == (long *)puVar5) break;
          plVar10 = (long *)*plVar10;
        }
        iVar7 = *piVar1;
        if (iVar7 == iVar8) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar8 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = puVar6[3];
            if (lVar11 != 0) {
              plVar10 = (long *)*param_1;
              *param_1 = 0;
              if (plVar10 != (long *)0x0) {
                lVar12 = plVar10[0xb];
                piVar1 = (int *)(lVar12 + 0xc);
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
                  *(undefined8 *)(lVar12 + 0x18) = 0;
                  (**(code **)(*plVar10 + 0x20))();
                }
              }
              *param_1 = lVar11 + -0x50;
              param_1[1] = lVar13;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_0098741c:
    if (local_60[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_60[0] + 1);
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
        local_60[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_48 = *local_60[0];
        FUN_02a44274(lVar13 + 0xd8,&local_48);
      }
    }
  }
  return;
}


