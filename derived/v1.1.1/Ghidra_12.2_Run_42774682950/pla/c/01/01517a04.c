/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01517a04; name: FUN_01517a04
 */


undefined8 FUN_01517a04(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_28;
  
  uVar6 = FUN_01516fa4();
  if ((uVar6 & 1) == 0) {
LAB_01517a80:
    uVar7 = 0;
  }
  else {
    FUN_01515284(param_1,param_2);
    FUN_01517a94(&local_28);
    if (local_28 != (long *)0x0) {
      lVar8 = local_28[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      cVar3 = *(char *)((long)local_28 + 0xb4);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*local_28 + 0x20))();
      }
      if (cVar3 == '\0') goto LAB_01517a80;
    }
    uVar7 = 1;
  }
  return uVar7;
}


