/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0096baf4; name: FUN_0096baf4
 */


void FUN_0096baf4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *local_28;
  
  FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
  lVar7 = local_28[0xd1];
  lVar6 = lVar7 + 0x5f8;
  FUN_011d6050(lVar6,0,*(undefined8 *)(lVar7 + 0x600));
  FUN_011d6050(lVar6,1,*(undefined8 *)(lVar7 + 0x608));
  FUN_011d6050(lVar6,2,*(undefined8 *)(lVar7 + 0x610));
  FUN_011d6050(lVar6,3,*(undefined8 *)(lVar7 + 0x618));
  FUN_011d6050(lVar6,4,*(undefined8 *)(lVar7 + 0x620));
  FUN_011d6050(lVar6,5,*(undefined8 *)(lVar7 + 0x628));
  if (local_28 != (long *)0x0) {
    lVar6 = local_28[0xb];
    piVar1 = (int *)(lVar6 + 0xc);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  uVar5 = FUN_0096b898(param_1);
  if ((uVar5 & 1) != 0) {
    FUN_00931034(&local_28,*(undefined8 *)(param_1 + 0x58));
    lVar7 = local_28[0xd1];
    lVar6 = lVar7 + 0x638;
    FUN_011d6050(lVar6,0,*(undefined8 *)(lVar7 + 0x640));
    FUN_011d6050(lVar6,1,*(undefined8 *)(lVar7 + 0x648));
    FUN_011d6050(lVar6,2,*(undefined8 *)(lVar7 + 0x650));
    FUN_011d6050(lVar6,3,*(undefined8 *)(lVar7 + 0x658));
    FUN_011d6050(lVar6,4,*(undefined8 *)(lVar7 + 0x660));
    FUN_011d6050(lVar6,5,*(undefined8 *)(lVar7 + 0x668));
    if (local_28 != (long *)0x0) {
      lVar6 = local_28[0xb];
      piVar1 = (int *)(lVar6 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar6 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  return;
}


