/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032fbac8; name: FUN_032fbac8
 */


undefined4 FUN_032fbac8(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *local_48 [2];
  ulong local_38;
  
  uVar7 = (uint)*param_3;
  if ((uVar7 >> 0x11 & 1) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uVar7 & 0x1ffff) - (uVar7 >> 1 & 0x5555);
    uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
    uVar7 = (uint)*(ushort *)
                   (param_3 + (ulong)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2);
  }
  if (*(char *)*param_1 == '\0') {
    uVar5 = 0;
  }
  else {
    FUN_032e2c7c(local_48,param_3,&DAT_04358dc0);
    if ((local_38 & 1) != 0) {
      plVar6 = (long *)(local_38 & 0xfffffffffffffffe);
      plVar1 = plVar6 + 1;
      do {
        lVar4 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *(int *)plVar1 = (int)lVar4 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((plVar6 != (long *)0x0) && ((int)lVar4 == 1)) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    if (local_48[0] == (undefined8 *)0x0) {
      uVar5 = FUN_032f9800(param_1,param_3,uVar7 + param_2,0,0);
    }
    else {
      uVar5 = (*(code *)*local_48[0])(param_1[1],param_3,uVar7 + param_2,0,0);
    }
  }
  return uVar5;
}


