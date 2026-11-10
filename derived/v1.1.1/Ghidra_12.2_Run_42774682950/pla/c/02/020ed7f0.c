/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ed7f0; name: FUN_020ed7f0
 */


undefined8 FUN_020ed7f0(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  long *local_38;
  byte *pbStack_30;
  undefined8 local_28;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  lVar6 = FUN_020ecf68(param_1,1,&local_28);
  FUN_009c685c(&local_38,lVar6 + 0x5c8);
  plVar5 = local_38;
  if (local_38 != (long *)0x0) {
    lVar6 = local_38[0xb];
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
      (**(code **)(*local_38 + 0x20))(local_38);
    }
  }
  FUN_0014ff10(param_1,0);
  pbStack_30 = (byte *)FUN_020bb81c();
  if ((*pbStack_30 & 1) == 0) {
    pbStack_30 = pbStack_30 + 1;
  }
  else {
    pbStack_30 = *(byte **)(pbStack_30 + 0x10);
  }
  if (local_38 == (long *)0x0) {
    local_38 = param_1;
    FUN_00151490(param_1);
  }
  else {
    local_38 = param_1;
    puVar7 = (undefined8 *)FUN_020ed430();
    *puVar7 = plVar5;
    FUN_020ed570(&local_38);
  }
  return 1;
}


