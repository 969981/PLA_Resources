/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0143bf48; name: FUN_0143bf48
 */


void FUN_0143bf48(long *param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  long local_38;
  undefined4 local_2c;
  int iStack_28;
  undefined4 local_24;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  *(bool *)(param_2 + 0x260) = param_6 != 0;
  if (param_6 == 0) {
    *(undefined1 *)(param_2 + 0x261) = 0;
  }
  local_38 = param_2;
  local_2c = param_7;
  iStack_28 = param_6;
  local_24 = param_5;
  local_14 = param_4;
  lVar4 = FUN_0143c344(auStack_18,param_3,&local_38,&local_14,&local_24,&iStack_28,&local_2c);
  *param_1 = lVar4;
  if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + 0x58);
    if (*(undefined8 **)(lVar4 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar4 + 0x10) == 0) {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x18))();
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
    }
    piVar1 = (int *)(lVar4 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}


