/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339f578; name: FUN_0339f578
 */


void FUN_0339f578(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                 undefined8 param_5,long *param_6,long *param_7,uint param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  long local_48;
  long lStack_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  *param_1 = &PTR_FUN_04370570;
  if (param_3 == (undefined8 *)0x0) {
    if ((param_8 & 1) == 0) {
      param_3 = param_1 + 2;
    }
    else {
      param_3 = param_1 + 7;
    }
  }
  *param_1 = &PTR_FUN_04370570;
  param_1[1] = param_3;
  param_1[2] = &PTR_LAB_0436e2c8;
  param_1[3] = 0;
  param_1[4] = 0x8000000000000000;
  if (param_4 == 0) {
    param_4 = DAT_0444ab10;
  }
  param_1[5] = param_4;
  param_1[7] = &PTR_LAB_0436e318;
  param_1[8] = param_1 + 2;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x12] = param_2;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0xc] = &DAT_03aad864;
  param_1[0xe] = param_6;
  param_1[0xf] = param_5;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  if (param_7 == (long *)0x0) {
    param_7 = param_1 + 0x14;
  }
  param_1[0x13] = param_7;
  param_1[0x14] = &PTR_LAB_043705d8;
  param_1[0x15] = 0;
  param_1[0x16] = 0x8000000000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0x8000000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x8000000000000000;
  lVar4 = FUN_033a1d70(param_6);
  if (lVar4 != 0) {
    lVar4 = (long)*(int *)(lVar4 + 4);
    lVar6 = *param_6;
    if ((lVar6 + lVar4 * 0x18 != 0) && (piVar7 = (int *)(lVar6 + lVar4 * 0x18 + 0x10), *piVar7 != 0)
       ) {
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      local_48 = *(long *)(lVar6 + lVar4 * 0x18 + 8);
      lStack_40 = local_48 + (long)*piVar7 * 0x18;
      (**(code **)(*param_7 + 0x18))(param_7,&local_48,&local_38,&local_38);
      if ((local_28 & 1) != 0) {
        plVar5 = (long *)(local_28 & 0xfffffffffffffffe);
        plVar1 = plVar5 + 1;
        do {
          lVar4 = *plVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *(int *)plVar1 = (int)lVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if ((plVar5 != (long *)0x0) && ((int)lVar4 == 1)) {
          (**(code **)(*plVar5 + 8))();
        }
      }
    }
  }
  return;
}


