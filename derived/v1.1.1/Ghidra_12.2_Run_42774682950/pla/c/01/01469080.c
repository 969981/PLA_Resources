/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01469080; name: FUN_01469080
 */


undefined8 FUN_01469080(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined1 local_68 [8];
  long *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined7 local_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined6 local_30;
  undefined2 uStack_2a;
  undefined6 uStack_28;
  
  lVar5 = FUN_01467b34(*(undefined8 *)(param_1 + 0x4c8),"View_Top");
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  local_48 = 0;
  local_38 = 0;
  local_34 = 0;
  uStack_41 = 0;
  uStack_40 = 0;
  local_30 = 0;
  uStack_2a = 0;
  uStack_28 = 0;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = *param_2;
  local_68[0] = 1;
  FUN_0148d9e8(lVar5,local_68);
  if (local_60 != (long *)0x0) {
    plVar1 = local_60 + 10;
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
      (**(code **)(*local_60 + 0x10))();
    }
  }
  return 1;
}


