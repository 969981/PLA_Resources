/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122eaa4; name: FUN_0122eaa4
 */


void FUN_0122eaa4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_18;
  uint uStack_14;
  
  local_28 = *(undefined8 *)(param_1 + 8);
  local_2c = 0xc;
  FUN_0122f090(&local_18,local_28,&local_2c,&local_28);
  plVar5 = *(long **)(param_1 + 0x5b0);
  *(undefined8 *)(param_1 + 0x5b0) = 0;
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
  lVar6 = CONCAT44(uStack_14,local_18);
  *(long *)(param_1 + 0x5b0) = lVar6;
  local_18 = 0;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(lVar6 + 0x88,&local_18);
  local_18 = 1;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 2;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 3;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 4;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 5;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 6;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 7;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 8;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 9;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 10;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  local_18 = 0xb;
  uStack_14 = uStack_14 & 0xffffff00;
  FUN_012329e4(*(long *)(param_1 + 0x5b0) + 0x88,&local_18);
  return;
}


