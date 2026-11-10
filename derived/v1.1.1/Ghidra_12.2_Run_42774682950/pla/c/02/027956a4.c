/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027956a4; name: FUN_027956a4
 */


void FUN_027956a4(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  long *plVar6;
  undefined4 local_34;
  
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar5 = FUN_00d15530();
  *(undefined1 *)((long)param_1 + 0x1b) = uVar5;
  *(byte *)((long)param_1 + 0x1a) = ~*param_2 & 1;
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_34,4);
  *(undefined4 *)((long)param_1 + 0x1c) = local_34;
  plVar6 = *(long **)(**(long **)(param_2 + 8) + 0x68);
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar5 = *(undefined1 *)((long)param_1 + 0x1b);
  }
  FUN_02c2e830(plVar6,&UNK_03a7e220 + *(long *)param_2 * 8,uVar5,**(undefined8 **)(param_2 + 0x10));
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 10;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
  FUN_02c30048(**(undefined8 **)(param_2 + 0x10),param_1,0x1a);
  return;
}


