/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017fa828; name: FUN_017fa828
 */


void FUN_017fa828(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  code *pcVar9;
  long lVar10;
  undefined8 *local_48 [2];
  undefined8 local_38;
  
  local_48[0] = param_2;
  plVar6 = (long *)FUN_01800400(&local_38,param_2[1],local_48);
  plVar6[0x3c] = plVar6[0x3c] | 8;
  if (plVar6 != (long *)0x0) {
    lVar10 = plVar6[0xb];
    if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_017faa74;
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcVar9 = (code *)plVar6[0x75];
  if (pcVar9 != (code *)0x0) {
    plVar6[0x76] = 0;
    plVar6[0x77] = 0;
    plVar6[0x74] = 0;
    plVar6[0x75] = 0;
    (*pcVar9)(plVar6 + 0x78);
  }
  plVar6[0x74] = (long)&LAB_0180054c;
  lVar10 = plVar6[0xb];
  plVar6[0x75] = (long)&LAB_01804aa8;
  plVar6[0x76] = (long)&LAB_01804aac;
  plVar6[0x78] = (long)param_2;
  plVar6[0x77] = (long)&LAB_01804ab8;
  if (*(undefined8 **)(lVar10 + 0x18) != (undefined8 *)0x0) {
    if (*(long *)(lVar10 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
      *(undefined8 *)(lVar10 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar8 = (long *)param_2[0x213];
    param_2[0x213] = plVar6;
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar8 + 0x20))();
      }
    }
    (**(code **)(*(long *)param_2[0x213] + 0x10))(local_48);
    *param_1 = 0;
    param_1[1] = 0;
    FUN_017eec30(param_1,local_48);
    puVar4 = local_48[0];
    if (local_48[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_48[0] + 1);
      do {
        iVar5 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar5 + -1 == 0) {
        local_48[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04379498), iVar5 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_38 = *puVar4;
        FUN_02a44274(lVar10 + 0xd8,&local_38);
      }
    }
    lVar10 = plVar6[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar6 + 0x20))(plVar6);
    }
    return;
  }
LAB_017faa74:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


