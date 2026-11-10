/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008ae408; name: FUN_008ae408
 */


void FUN_008ae408(long param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4,byte param_5
                 ,byte param_6,byte param_7)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_34;
  byte local_30;
  byte local_2f;
  uint local_2c;
  uint uStack_28;
  undefined8 local_18;
  
  local_2f = param_6 & 1;
  local_30 = param_5 & 1;
  local_2c = (uint)param_7;
  uStack_28 = (uint)(param_7 != 0);
  if ((param_5 & 1) == 0) {
    uStack_28 = 2;
  }
  local_38 = param_2;
  local_37 = param_3;
  local_34 = param_4;
  FUN_008ae4bc(&local_18,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd8),&local_38);
  plVar5 = *(long **)(param_1 + 0xb60);
  *(undefined8 *)(param_1 + 0xb60) = 0;
  if (plVar5 != (long *)0x0) {
    lVar6 = plVar5[0xb];
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
      (**(code **)(*plVar5 + 0x20))();
    }
  }
  *(undefined8 *)(param_1 + 0xb60) = local_18;
  return;
}


