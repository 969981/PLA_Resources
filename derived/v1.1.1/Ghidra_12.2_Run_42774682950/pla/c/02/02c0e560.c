/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c0e560; name: FUN_02c0e560
 */


void FUN_02c0e560(long param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *local_88 [4];
  long *local_68;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  
  lVar5 = FUN_02aab204(local_88,*(undefined8 *)(param_1 + 8));
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  plVar6 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar6 != (long *)0x0) {
    plVar8 = plVar6 + 10;
    do {
      iVar4 = (int)*plVar8 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar3) {
        *(int *)plVar8 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x98) = lVar5;
  if (*(long *)(param_1 + 0x60) == 0) {
    lVar7 = FUN_00b779ac();
  }
  else {
    lVar7 = *(long *)(param_1 + 0x60) + 0x68;
  }
  *(undefined8 *)(lVar5 + 0xd8) = *(undefined8 *)(lVar7 + 8);
  *(undefined8 *)(lVar5 + 0xe0) = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(lVar5 + 0xe8) = *(undefined8 *)(lVar7 + 0x18);
  plVar6 = *(long **)(lVar7 + 0x20);
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
  }
  plVar8 = *(long **)(lVar5 + 0xf0);
  *(long **)(lVar5 + 0xf0) = plVar6;
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))();
  }
  lVar5 = *(long *)(param_1 + 0x98);
  FUN_02b4630c(lVar5 + 0x60,1);
  FUN_02b46530(lVar5 + 0x98,1);
  if ((*(long *)(param_1 + 0x178) == 0) || (**(char **)(*(long *)(param_1 + 0x178) + 0x60) == '\0'))
  {
    lVar5 = *(long *)(param_1 + 0x60);
    local_58 = *(undefined8 *)(lVar5 + 800);
    local_50 = *(char **)(lVar5 + 0x328);
    uStack_48 = *(undefined8 *)(lVar5 + 0x330);
    if (*local_50 != '\0') {
      if (lVar5 == 0) {
        lVar5 = FUN_00b779ac();
      }
      else {
        lVar5 = lVar5 + 0x68;
      }
      FUN_028c94b0(local_88,lVar5,&local_58,&DAT_03996322);
      FUN_02b46770(*(undefined8 *)(param_1 + 0x98),local_88,param_2 & 1,param_3,param_4);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_88[0] != (long *)0x0) {
        (**(code **)(*local_88[0] + 0x20))();
      }
    }
  }
  else {
    FUN_02b46770(*(undefined8 *)(param_1 + 0x98),param_1 + 0x178,param_2 & 1,param_3,param_4);
  }
  return;
}


