/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009878e4; name: FUN_009878e4
 */


void FUN_009878e4(long *param_1,long param_2)

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
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 *local_68 [2];
  undefined8 local_58;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar12 = *(long *)(param_2 + 8);
  FUN_00987ac8(local_68,lVar12);
  puVar6 = local_68[0];
  puVar5 = PTR_DAT_0437a0b0;
  puVar4 = PTR_DAT_0437a0a8;
  if (local_68[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_68[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_68[0] + 0xc);
      iVar8 = *(int *)((long)local_68[0] + 0xc);
      do {
        plVar13 = (long *)puVar6[2];
        if (((*puVar4 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar4), iVar7 != 0)) {
          uVar9 = FUN_00987804();
          *(undefined8 *)puVar5 = uVar9;
          __cxa_guard_release(puVar4);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_009879e4;
          if (plVar13 == (long *)puVar5) break;
          plVar13 = (long *)*plVar13;
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
            lVar10 = puVar6[3];
            if (lVar10 != 0) {
              plVar13 = (long *)*param_1;
              *param_1 = 0;
              if (plVar13 != (long *)0x0) {
                lVar11 = plVar13[0xb];
                piVar1 = (int *)(lVar11 + 0xc);
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
                  *(undefined8 *)(lVar11 + 0x18) = 0;
                  (**(code **)(*plVar13 + 0x20))();
                }
              }
              *param_1 = lVar10 + -0x50;
              param_1[1] = lVar12;
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
LAB_009879e4:
    if (local_68[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_68[0] + 1);
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
        local_68[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_58 = *local_68[0];
        FUN_02a44274(lVar12 + 0xd8,&local_58);
      }
    }
  }
  return;
}


