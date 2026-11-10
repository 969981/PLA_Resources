/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181d8e4; name: FUN_0181d8e4
 */


void FUN_0181d8e4(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  FUN_0181d68c(local_60);
  puVar4 = local_60[0];
  puVar6 = PTR_DAT_0437de28;
  puVar5 = PTR_DAT_0437de20;
  if (local_60[0] == (undefined8 *)0x0) {
    *param_1 = 0;
  }
  else {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar8 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar12 = (long *)puVar4[2];
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          uVar9 = FUN_00fd7558();
          *(undefined8 *)puVar6 = uVar9;
          __cxa_guard_release(puVar5);
        }
        while( true ) {
          if (plVar12 == (long *)0x0) goto LAB_0181da38;
          if (plVar12 == (long *)puVar6) break;
          plVar12 = (long *)*plVar12;
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
            lVar10 = puVar4[3];
            lVar11 = 0;
            if (lVar10 != 0) {
              lVar11 = lVar10 + -0x50;
            }
            *param_1 = lVar11;
            puVar4 = local_60[0];
            goto joined_r0x0181d9ac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar8 = iVar7;
      } while (iVar7 != 0);
    }
LAB_0181da38:
    *param_1 = 0;
    puVar4 = local_60[0];
joined_r0x0181d9ac:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar11 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar11;
        local_48 = *puVar4;
        FUN_02a44274(lVar11 + 0xd8,&local_48);
      }
    }
  }
  return;
}


