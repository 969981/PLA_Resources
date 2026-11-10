/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019e1c10; name: FUN_019e1c10
 */


void FUN_019e1c10(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  long *unaff_x19;
  undefined1 auStack_a0 [128];
  
  FUN_019e088c(param_1,1,(int)(*(float *)(param_1 + 0x388) * 30.0));
  FUN_019e16d0(param_1,1);
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x208) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  FUN_009c69bc(auStack_a0 + 0x88);
  lVar5 = *(long *)(param_1 + 0x3a8);
  unaff_x19[0x1a] = *(long *)(param_1 + 0x3a0);
  unaff_x19[0x1b] = lVar5;
  *(undefined1 *)(unaff_x19 + 0x1c) = 1;
  if (unaff_x19 != (long *)0x0) {
    lVar5 = unaff_x19[0xb];
    piVar1 = (int *)(lVar5 + 0xc);
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
      *(undefined8 *)(lVar5 + 0x18) = 0;
      (**(code **)(*unaff_x19 + 0x20))();
    }
  }
  FUN_019e1e24(param_1);
  *(undefined4 *)(param_1 + 0x208) = 3;
  return;
}


