/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b2d620; name: FUN_02b2d620
 */


void FUN_02b2d620(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  long *local_48;
  
  uVar5 = (**(code **)(*DAT_043ef740 + 0x18))();
  if ((uVar5 & 0xff) != 0) {
    FUN_02b2aaa0(param_1);
    if (*(long *)(param_1 + 0x110) != 0) {
      uVar6 = 0;
      do {
        FUN_02b3343c(&local_48,*(undefined8 *)(param_1 + 0x58),
                     *(long *)(param_1 + 0xd8) + uVar6 * 0x28);
        FUN_02b2d71c(param_1,&local_48,uVar5 >> 0x20,param_3,param_4);
        if (local_48 != (long *)0x0) {
          plVar1 = local_48 + 10;
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
            (**(code **)(*local_48 + 0x10))();
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ulong *)(param_1 + 0x110));
    }
    FUN_02b2d71c(param_1,param_1 + 0xd0,uVar5 >> 0x20,param_3,param_4);
  }
  return;
}


