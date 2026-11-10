/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e79bc4; name: FUN_02e79bc4
 */


long * FUN_02e79bc4(undefined8 param_1,int param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 local_58;
  undefined1 local_50;
  long local_48 [3];
  
  plVar5 = (long *)0x0;
  if (((param_2 != 0) && (param_3 != 0)) && (DAT_0440a320 != 0)) {
    local_48[0] = 0;
    local_48[1] = 0;
    do {
      uVar1 = DAT_0440a308 + 1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x440a308,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_0440a308 = uVar1;
      }
    } while (cVar2 != '\0');
    local_48[2] = (ulong)uVar1 << 0x20;
    local_50 = 0;
    local_58 = 0x400000000;
    plVar5 = (long *)FUN_02f59e30(0,0x78);
    if (plVar5 != (long *)0x0) {
      FUN_02e7c3ac(plVar5,param_1,param_3,&local_58,local_48,param_2,1);
      iVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
      if (iVar4 != 1) {
        FUN_02e7c354(plVar5);
        plVar5 = (long *)0x0;
      }
    }
    if (local_48[0] != 0) {
      FUN_02e771a8();
    }
  }
  return plVar5;
}


