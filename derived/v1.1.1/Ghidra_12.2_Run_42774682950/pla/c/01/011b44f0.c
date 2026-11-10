/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011b44f0; name: FUN_011b44f0
 */


void FUN_011b44f0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  long *local_18;
  
  FUN_011d24c4(&local_18);
  local_78 = 0xe7064b2abab7aae7;
  FUN_02c2e7d0(local_18,&local_78,*(undefined8 *)(param_1 + 0xa0));
  local_78 = 0x3ce587c2a412cfae;
  FUN_02c2e7d0(local_18,&local_78,*(undefined8 *)(param_1 + 0xa8));
  local_78 = 0x3ce588c2a412d161;
  FUN_02c2e7d0(local_18,&local_78,*(undefined8 *)(param_1 + 0xb0));
  local_27 = 1;
  local_38 = *(undefined8 *)(param_1 + 0xa0);
  uStack_30 = 0;
  local_28 = 0;
  local_26 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 1;
  local_3c = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_78 = *(undefined8 *)(param_1 + 0xa8);
  local_70 = *(undefined8 *)(param_1 + 0xb0);
  local_3e = 1;
  uStack_68 = 0;
  FUN_00d428b0(*(undefined8 *)(param_1 + 0x98),0);
  (**(code **)(**(long **)(param_1 + 0x98) + 0x90))(*(long **)(param_1 + 0x98),&local_38,&local_78);
  if (local_18 != (long *)0x0) {
    plVar1 = local_18 + 10;
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
      (**(code **)(*local_18 + 0x10))();
    }
  }
  return;
}


