/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3c010; name: FUN_02b3c010
 */


void FUN_02b3c010(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *local_48;
  
  lVar6 = *(long *)(param_1 + 0x120);
  lVar5 = *(long *)(lVar6 + 0x98);
  if ((int)((ulong)(*(long *)(lVar6 + 0xa0) - lVar5) >> 3) * -0x33333333 != 0) {
    uVar7 = 0;
    do {
      FUN_02b3365c(&local_48,*(undefined8 *)(lVar6 + 0x58),lVar5 + uVar7 * 0x28);
      if (local_48 != (long *)0x0) {
        FUN_02b2d620(local_48,param_2,param_3,param_4);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
          do {
            iVar4 = (int)*plVar1 + -1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar3) {
              *(int *)plVar1 = iVar4;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar4 == 0) {
            (**(code **)(*local_48 + 0x10))();
          }
        }
      }
      lVar5 = *(long *)(lVar6 + 0x98);
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)((ulong)(*(long *)(lVar6 + 0xa0) - lVar5) >> 3) * -0x33333333));
  }
  return;
}


