/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00977320; name: FUN_00977320
 */


bool FUN_00977320(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  long lVar6;
  long *local_18;
  
  if (param_2 == 0) {
    FUN_00931034(&local_18,*(undefined8 *)(param_1 + 0x58));
    if (*(long *)(local_18[0xd1] + 0x5c8) == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(char *)(*(long *)(local_18[0xd1] + 0x5c8) + 0x261) != '\0';
    }
    if (local_18 == (long *)0x0) {
      return bVar5;
    }
    lVar6 = local_18[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_009773c8;
  }
  FUN_00931034(&local_18,*(undefined8 *)(param_1 + 0x58));
  lVar6 = local_18[0xd2];
  if (param_2 == 1) {
    lVar6 = *(long *)(lVar6 + 0x5c8);
    goto joined_r0x00977424;
  }
  switch(param_2) {
  case 2:
    lVar6 = *(long *)(lVar6 + 0x610);
    break;
  case 3:
    lVar6 = *(long *)(lVar6 + 0x658);
    break;
  case 4:
    lVar6 = *(long *)(lVar6 + 0x6a0);
    break;
  case 5:
    lVar6 = *(long *)(lVar6 + 0x6e8);
    break;
  default:
    goto switchD_009773fc_default;
  }
joined_r0x00977424:
  if (lVar6 == 0) {
switchD_009773fc_default:
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(lVar6 + 0x261) != '\0';
  }
  if (local_18 == (long *)0x0) {
    return bVar5;
  }
  lVar6 = local_18[0xb];
  piVar1 = (int *)(lVar6 + 0xc);
  do {
    iVar4 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_009773c8:
  if (iVar4 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_18 + 0x20))();
  }
  return bVar5;
}


