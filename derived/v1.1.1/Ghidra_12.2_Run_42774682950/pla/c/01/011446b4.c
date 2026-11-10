/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011446b4; name: FUN_011446b4
 */


void FUN_011446b4(long param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 local_60;
  undefined8 local_58;
  long *local_50 [4];
  long *local_30;
  
  if ((*(long *)(param_1 + 0x60) == 0) || ((*(byte *)(*(long *)(param_1 + 0x60) + 0x302) & 1) != 0))
  {
    FUN_01144450(local_50,param_2,&DAT_041f2b08);
    uVar9 = *(undefined8 *)(param_1 + 0x50);
    uVar6 = FUN_011448d0();
    uVar2 = 0xc42432c5;
    if (*(char *)(param_1 + 0x68) != '\0') {
      uVar2 = 0x69ebdee8;
    }
    local_60 = CONCAT44(uVar2 ^ uVar6,uVar6);
    FUN_011447d0(&local_58,uVar9,local_50,&local_60);
    plVar7 = *(long **)(param_1 + 0x60);
    *(undefined8 *)(param_1 + 0x60) = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar3 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar3 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar3 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x60) = local_58;
    FUN_02a49678(local_58,"save linked",0xffffffff,0x10);
    if (local_30 != (long *)0x0) {
      (**(code **)(*local_30 + 0x20))();
    }
    if (local_50[0] != (long *)0x0) {
      (**(code **)(*local_50[0] + 0x20))();
    }
  }
  return;
}


