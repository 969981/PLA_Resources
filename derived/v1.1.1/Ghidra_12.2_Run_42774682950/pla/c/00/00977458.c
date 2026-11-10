/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00977458; name: FUN_00977458
 */


undefined4 FUN_00977458(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  long *local_28;
  
  if (param_2 == 0) {
    FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
    if (*(long *)(local_28[0xd1] + 0x5c8) == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(*(long *)(local_28[0xd1] + 0x5c8) + 0x25c);
    }
    if (local_28 == (long *)0x0) {
      return uVar6;
    }
    lVar5 = local_28[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
    do {
      iVar4 = *piVar1 + -1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar4;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    goto LAB_009774fc;
  }
  FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
  uVar6 = 0;
  lVar5 = local_28[0xd2];
  if (param_2 == 1) {
    lVar5 = *(long *)(lVar5 + 0x5c8);
    goto joined_r0x00977558;
  }
  switch(param_2) {
  case 2:
    lVar5 = *(long *)(lVar5 + 0x610);
    if (lVar5 == 0) goto switchD_00977538_default;
    goto LAB_009774dc;
  case 3:
    lVar5 = *(long *)(lVar5 + 0x658);
    break;
  case 4:
    lVar5 = *(long *)(lVar5 + 0x6a0);
    break;
  case 5:
    lVar5 = *(long *)(lVar5 + 0x6e8);
    break;
  default:
    goto switchD_00977538_default;
  }
joined_r0x00977558:
  if (lVar5 != 0) {
LAB_009774dc:
    uVar6 = *(undefined4 *)(lVar5 + 0x25c);
  }
switchD_00977538_default:
  if (local_28 == (long *)0x0) {
    return uVar6;
  }
  lVar5 = local_28[0xb];
  piVar1 = (int *)(lVar5 + 0xc);
  do {
    iVar4 = *piVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar4;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
LAB_009774fc:
  if (iVar4 == 0) {
    *(undefined8 *)(lVar5 + 0x18) = 0;
    (**(code **)(*local_28 + 0x20))();
  }
  return uVar6;
}


