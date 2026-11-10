/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009770bc; name: FUN_009770bc
 */


void FUN_009770bc(long param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  long *local_28;
  
  if (5 < param_3) {
    return;
  }
  lVar8 = param_1 + (long)(int)param_3 * 4;
  uVar3 = *(uint *)(lVar8 + 0x78);
  uVar4 = 1 << (ulong)(param_2 & 0x1f);
  uVar2 = uVar3 | uVar4;
  if ((param_4 & 1) == 0) {
    uVar2 = uVar3 & (uVar4 ^ 0xffffffff);
  }
  *(uint *)(lVar8 + 0x78) = uVar2;
  if (param_3 == 0) {
    FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
    FUN_011d691c(local_28[0xd1] + 0x5b0,(uVar2 & 7) == 7);
    if (local_28 == (long *)0x0) {
      return;
    }
    lVar8 = local_28[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      iVar7 = *piVar1 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar7;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    goto joined_r0x009771e8;
  }
  FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
  lVar8 = local_28[0xd2];
  if (param_3 == 1) {
    lVar8 = lVar8 + 0x5b0;
    goto LAB_00977124;
  }
  switch(param_3) {
  case 2:
    lVar8 = lVar8 + 0x5f8;
    break;
  case 3:
    lVar8 = lVar8 + 0x640;
    break;
  case 4:
    lVar8 = lVar8 + 0x688;
    break;
  case 5:
    lVar8 = lVar8 + 0x6d0;
    break;
  default:
    goto switchD_00977184_default;
  }
LAB_00977124:
  FUN_011d691c(lVar8,(uVar2 & 7) == 7);
switchD_00977184_default:
  if (local_28 == (long *)0x0) {
    return;
  }
  lVar8 = local_28[0xb];
  piVar1 = (int *)(lVar8 + 0xc);
  do {
    iVar7 = *piVar1 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar7;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
joined_r0x009771e8:
  if (iVar7 == 0) {
    *(undefined8 *)(lVar8 + 0x18) = 0;
    (**(code **)(*local_28 + 0x20))();
  }
  return;
}


