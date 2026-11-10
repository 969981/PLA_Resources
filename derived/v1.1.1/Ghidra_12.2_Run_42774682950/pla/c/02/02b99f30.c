/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b99f30; name: FUN_02b99f30
 */


void FUN_02b99f30(long param_1,long param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_38;
  undefined4 local_34;
  
  (*DAT_043f0068)(*(undefined8 *)(param_2 + 0x10),0x12,&local_34);
  *(undefined4 *)(param_1 + 0x108) = local_34;
  (*DAT_043f0068)(*(undefined8 *)(param_2 + 0x10),0x10,&local_38);
  (**(code **)(*(long *)**(undefined8 **)(param_2 + 8) + 0x28))
            (&local_58,(long *)**(undefined8 **)(param_2 + 8),local_38 * param_3);
  plVar5 = *(long **)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x90) = local_58;
  *(undefined8 *)(param_1 + 0x98) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 10;
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
      (**(code **)(*plVar5 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0x98) = local_50;
  *(undefined8 *)(param_1 + 0xa0) = local_48;
  *(undefined8 *)(param_1 + 0xa8) = local_40;
  if (*(long **)(param_1 + 0x98) == (long *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (**(code **)(**(long **)(param_1 + 0x98) + 0x68))();
  }
  (*DAT_043f03e0)(param_1 + 0xb0,uVar6,*(undefined8 *)(param_1 + 0xa0),param_3);
  FUN_00876f2c(param_1 + 0x110,param_1 + 0xb0);
  return;
}


