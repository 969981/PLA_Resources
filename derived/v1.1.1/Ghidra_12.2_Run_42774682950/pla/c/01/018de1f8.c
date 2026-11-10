/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018de1f8; name: FUN_018de1f8
 */


undefined8 FUN_018de1f8(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_28;
  
  FUN_018e3f8c(&local_28,param_2);
  if (local_28 == (long *)0x0) {
LAB_018de264:
    uVar7 = 0;
  }
  else {
    uVar6 = FUN_01abefac();
    if ((uVar6 & 1) == 0) {
      bVar5 = true;
      if (local_28 != (long *)0x0) goto LAB_018de244;
LAB_018de260:
      if (bVar5) goto LAB_018de264;
    }
    else {
      FUN_018de2a4(param_1 + 0x7b0,param_2);
      bVar5 = false;
      if (local_28 == (long *)0x0) goto LAB_018de260;
LAB_018de244:
      lVar8 = local_28[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 != 0) goto LAB_018de260;
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
      if (bVar5) goto LAB_018de264;
    }
    uVar7 = 1;
  }
  return uVar7;
}


