/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028462f8; name: FUN_028462f8
 */


void FUN_028462f8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *local_68;
  long *local_60 [4];
  long *local_40;
  char *local_28;
  
  local_28 = "bin/appli/movie_skip/bin/movie_skip.arc";
  FUN_009f1b84(local_60,&local_28);
  FUN_00d24350(param_1 + 0x60,0,local_60,0,*(undefined8 *)(param_1 + 0x58),0);
  if (local_40 != (long *)0x0) {
    (**(code **)(*local_40 + 0x20))();
  }
  if (local_60[0] != (long *)0x0) {
    (**(code **)(*local_60[0] + 0x20))();
  }
  lVar6 = FUN_00d25b60(local_60,*(undefined8 *)(param_1 + 0x58));
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = 0;
  if (plVar7 != (long *)0x0) {
    plVar2 = plVar7 + 10;
    do {
      iVar5 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*plVar7 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x90) = lVar6;
  FUN_02c3bc04(lVar6,param_1 + 0x60);
  lVar6 = FUN_00d25c98(local_60,*(undefined8 *)(param_1 + 0x58));
  if (lVar6 != 0) {
    lVar9 = *(long *)(lVar6 + 0x58);
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar7 != (long *)0x0) {
    lVar9 = plVar7[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar5 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))();
    }
  }
  local_68 = *(long **)(param_1 + 0x90);
  *(long *)(param_1 + 0x98) = lVar6;
  if (local_68 != (long *)0x0) {
    plVar7 = local_68 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = (int)*plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  FUN_02c41570(lVar6,&local_68,3,"movie_skip.bflyt",0,0);
  if (local_68 != (long *)0x0) {
    plVar7 = local_68 + 10;
    do {
      iVar5 = (int)*plVar7 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *(int *)plVar7 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  lVar6 = param_1 + 0xa0;
  FUN_02c39e0c(lVar6,&DAT_03a7e4d8,&DAT_03a848b0);
  local_60[0] = (long *)0x438078000000000;
  FUN_02c39e5c(lVar6,local_60);
  FUN_02c436c0(*(undefined8 *)(param_1 + 0x98),lVar6);
  FUN_0284658c(param_1);
  FUN_02c444d4(*(undefined8 *)(param_1 + 0x98),0xe5);
  FUN_0284671c(param_1);
  FUN_02c3bc38(*(undefined8 *)(param_1 + 0x90));
  FUN_0284677c(param_1);
  lVar6 = FUN_02c436cc(*(undefined8 *)(param_1 + 0x98),&DAT_038f95fa);
  *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
  return;
}


