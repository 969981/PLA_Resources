/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ad26ac; name: FUN_01ad26ac
 */


undefined8 FUN_01ad26ac(int *param_1,ulong param_2,undefined1 *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  char cVar7;
  long *local_40;
  long *local_38;
  undefined1 auStack_28 [8];
  
  if (*param_1 != 7) {
    if (*param_1 != 3) {
      return 0;
    }
    if ((param_2 & 1) == 0) {
      return 0;
    }
    goto LAB_01ad2778;
  }
  FUN_00cf6d78(&local_38,param_1 + 2);
  if (local_38 == (long *)0x0) {
    return 0;
  }
  FUN_009c69bc(&local_40);
  lVar5 = FUN_01ad66f8(local_40 + 0x1e,auStack_28);
  if (local_40 == (long *)0x0) {
LAB_01ad2748:
    if (lVar5 != 0) goto LAB_01ad274c;
LAB_01ad27ec:
    cVar7 = '\x01';
  }
  else {
    lVar6 = local_40[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar7 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar4 + -1 != 0) goto LAB_01ad2748;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_40 + 0x20))();
    if (lVar5 == 0) goto LAB_01ad27ec;
LAB_01ad274c:
    cVar7 = *(char *)(lVar5 + 0x531);
  }
  if (local_38 != (long *)0x0) {
    lVar5 = local_38[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar4 + -1 == 0) {
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (cVar7 != '\0') {
    return 0;
  }
LAB_01ad2778:
  param_3[1] = 0;
  *(int *)(param_3 + 8) = *param_1;
  FUN_00b63974(param_3 + 0x10,param_1 + 2);
  FUN_00cfa028(param_3 + 0x20,param_1 + 6);
  FUN_0095aa3c(param_3 + 0x30,param_1 + 10);
  *(undefined8 *)(param_3 + 0x40) = *(undefined8 *)(param_1 + 0xe);
  FUN_00bd10a0(param_3 + 0x48,param_1 + 0x10);
  iVar4 = param_1[0x14];
  *param_3 = 1;
  param_3[0x58] = (char)iVar4;
  return 1;
}


