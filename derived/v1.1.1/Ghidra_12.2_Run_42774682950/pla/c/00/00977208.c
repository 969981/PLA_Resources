/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00977208; name: FUN_00977208
 */


uint FUN_00977208(long param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  long *local_18;
  
  if (param_2 == 0) {
    FUN_00931034(&local_18,*(undefined8 *)(param_1 + 0x58));
    uVar5 = FUN_011d6a20(local_18[0xd1] + 0x5b0);
    if (local_18 == (long *)0x0) goto LAB_00977268;
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
  }
  else {
    FUN_00931034(&local_18,*(undefined8 *)(param_1 + 0x58));
    lVar6 = local_18[0xd2];
    if (param_2 == 1) {
      lVar6 = lVar6 + 0x5b0;
      goto LAB_0097723c;
    }
    switch(param_2) {
    case 2:
      lVar6 = lVar6 + 0x5f8;
      break;
    case 3:
      lVar6 = lVar6 + 0x640;
      break;
    case 4:
      lVar6 = lVar6 + 0x688;
      break;
    case 5:
      lVar6 = lVar6 + 0x6d0;
      break;
    default:
      uVar5 = 0;
      goto joined_r0x00977310;
    }
LAB_0097723c:
    uVar5 = FUN_011d6a20(lVar6);
joined_r0x00977310:
    if (local_18 == (long *)0x0) goto LAB_00977268;
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
  }
  if (iVar4 == 0) {
    *(undefined8 *)(lVar6 + 0x18) = 0;
    (**(code **)(*local_18 + 0x20))();
  }
LAB_00977268:
  return uVar5 & 1;
}


