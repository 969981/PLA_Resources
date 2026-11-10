/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0221aa44; name: FUN_0221aa44
 */


void FUN_0221aa44(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long *local_38;
  byte *pbStack_30;
  undefined8 local_28;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  FUN_02021fe8(param_1,1,&local_28);
  FUN_01b16a90(&local_38);
  plVar5 = local_38;
  if (local_38 != (long *)0x0) {
    lVar7 = local_38[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
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
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))(local_38);
    }
  }
  FUN_0014ff10(param_1,0);
  pbStack_30 = (byte *)FUN_0203cdb8();
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
    puVar6 = (undefined8 *)FUN_0203cfb0();
    *puVar6 = plVar5;
    FUN_0203d0fc(&local_38);
  }
  return;
}


