/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0114436c; name: FUN_0114436c
 */


void FUN_0114436c(long param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long *local_50 [4];
  long *local_30;
  undefined8 local_18;
  
  if ((*(long *)(param_1 + 0x58) == 0) || ((*(byte *)(*(long *)(param_1 + 0x58) + 0x302) & 1) != 0))
  {
    FUN_01144450(local_50,param_2,&DAT_041f2b08);
    FUN_01144538(&local_18,*(undefined8 *)(param_1 + 0x50),local_50);
    plVar5 = *(long **)(param_1 + 0x58);
    *(undefined8 *)(param_1 + 0x58) = 0;
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
    *(undefined8 *)(param_1 + 0x58) = local_18;
    FUN_02a49678(local_18,"load linked",0xffffffff,0x10);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_50[0] != (long *)0x0) {
      (**(code **)(*local_50[0] + 0x20))();
    }
  }
  return;
}


