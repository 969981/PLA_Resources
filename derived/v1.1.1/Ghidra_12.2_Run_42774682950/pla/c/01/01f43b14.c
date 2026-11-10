/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f43b14; name: FUN_01f43b14
 */


void FUN_01f43b14(undefined8 *param_1,long param_2)

{
  int *piVar1;
  ulong uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *local_28;
  
  uVar6 = FUN_01f48210(*(long *)(param_2 + 0x10) + -1);
  lVar7 = *(long *)(param_2 + 8);
  if (uVar6 != 0) {
    uVar8 = uVar6 - 1;
    for (uVar2 = uVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      lVar7 = *(long *)(lVar7 + 8);
      uVar6 = uVar6 - 1;
    }
    if (2 < uVar8) {
      do {
        uVar6 = uVar6 - 4;
        lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 8) + 8) + 8) + 8);
      } while (uVar6 != 0);
    }
  }
  if ((*(long *)(lVar7 + 0x10) != 0) && (FUN_01f4eb34(&local_28), local_28 != (long *)0x0)) {
    FUN_019e1c10(local_28,*(undefined1 *)*param_1);
    FUN_01f48344(param_2,lVar7);
    lVar7 = local_28[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))(local_28);
    }
  }
  return;
}


