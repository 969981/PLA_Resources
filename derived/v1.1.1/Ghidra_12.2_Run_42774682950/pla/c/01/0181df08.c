/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0181df08; name: FUN_0181df08
 */


void FUN_0181df08(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *plVar13;
  undefined8 *local_60 [2];
  undefined8 local_48;
  
  *(undefined1 *)(param_1 + 0x330) = 0;
  uVar2 = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)(param_1 + 0x388) = param_2[3];
  *(undefined8 *)(param_1 + 0x378) = param_2[1];
  *(undefined8 *)(param_1 + 0x370) = *param_2;
  uVar11 = param_2[2];
  uVar12 = param_2[4];
  *(undefined4 *)(param_1 + 0x398) = uVar2;
  *(undefined8 *)(param_1 + 0x390) = uVar12;
  *(undefined8 *)(param_1 + 0x380) = uVar11;
  if (*(long *)(param_1 + 0x3f8) != 0) {
    FUN_0181e154();
  }
  if (*(char *)(param_1 + 0x3a0) != '\0') {
    FUN_0181d68c(local_60,param_1);
    puVar5 = local_60[0];
    puVar7 = PTR_DAT_0437de28;
    puVar6 = PTR_DAT_0437de20;
    if (local_60[0] != (undefined8 *)0x0) {
      if (*(int *)((long)local_60[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_60[0] + 0xc);
        iVar9 = *(int *)((long)local_60[0] + 0xc);
        do {
          plVar13 = (long *)puVar5[2];
          if (((*puVar6 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar6), iVar8 != 0)) {
            uVar11 = FUN_00fd7558();
            *(undefined8 *)puVar7 = uVar11;
            __cxa_guard_release(puVar6);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_0181e108;
            if (plVar13 == (long *)puVar7) break;
            plVar13 = (long *)*plVar13;
          }
          iVar8 = *piVar1;
          if (iVar8 == iVar9) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar9 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar10 = puVar5[3];
              plVar13 = (long *)0x0;
              puVar5 = local_60[0];
              if (lVar10 != 0) {
                plVar13 = (long *)(lVar10 + -0x50);
              }
              goto joined_r0x0181e028;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar9 = iVar8;
        } while (iVar8 != 0);
      }
LAB_0181e108:
      plVar13 = (long *)0x0;
      puVar5 = local_60[0];
joined_r0x0181e028:
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar10 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar10;
          local_48 = *puVar5;
          FUN_02a44274(lVar10 + 0xd8,&local_48);
        }
      }
      if (plVar13 != (long *)0x0) {
        if (((int)plVar13[0xd] == 2) && (*(char *)((long)plVar13 + 0x3ec) != '\0')) {
          *(undefined2 *)((long)plVar13 + 0x3ec) = 0x100;
        }
        lVar10 = plVar13[0xb];
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          iVar9 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar9 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 + -1 == 0) {
          *(undefined8 *)(lVar10 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))(plVar13);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3a0) = 0;
    if (*(char *)(param_1 + 0x240) != '\0') {
      *(undefined1 *)(param_1 + 0x240) = 0;
    }
  }
  return;
}


