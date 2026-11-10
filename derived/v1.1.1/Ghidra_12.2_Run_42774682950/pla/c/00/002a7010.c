/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002a7010; name: FUN_002a7010
 */


void FUN_002a7010(long *param_1,long *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  plVar3 = (long *)(**(code **)(*(long *)*param_2 + 0x10))((long *)*param_2,0xe8,8);
  lVar4 = *param_2;
  puVar1 = PTR_DAT_04373320 + 0x10;
  plVar3[2] = 0;
  plVar3[3] = lVar4;
  *plVar3 = (long)puVar1;
  plVar3[1] = 0;
  FUN_00782ef8(plVar3 + 4);
  plVar3[4] = (long)(PTR_DAT_04373328 + 0x10);
  *(undefined4 *)(plVar3 + 6) = *param_3;
  lVar5 = *(long *)(param_3 + 4);
  lVar4 = *(long *)(param_3 + 2);
  lVar6 = *(long *)(param_3 + 6);
  plVar3[10] = *(long *)(param_3 + 8);
  plVar3[9] = lVar6;
  plVar3[8] = lVar5;
  plVar3[7] = lVar4;
  *(undefined8 *)(param_3 + 2) = 0;
  *(undefined8 *)(param_3 + 4) = 0;
  *(undefined8 *)(param_3 + 6) = 0;
  *(undefined1 *)(plVar3 + 0xb) = 0;
  if (*(char *)(param_3 + 10) != '\0') {
    plVar3[0xc] = *(long *)(param_3 + 0xc);
    lVar4 = *(long *)(param_3 + 0xe);
    plVar3[0xe] = *(long *)(param_3 + 0x10);
    plVar3[0xd] = lVar4;
    lVar4 = *(long *)(param_3 + 0x12);
    plVar2 = plVar3 + 0xd;
    plVar3[0xf] = lVar4;
    if (lVar4 == 0) {
      plVar3[0xc] = (long)plVar2;
    }
    else {
      *(long **)(*plVar2 + 0x10) = plVar2;
      *(undefined4 **)(param_3 + 0xc) = param_3 + 0xe;
      *(undefined8 *)(param_3 + 0xe) = 0;
      *(undefined8 *)(param_3 + 0x12) = 0;
    }
    *(undefined1 *)(plVar3 + 0xb) = 1;
  }
  lVar4 = *(long *)(param_3 + 0x14);
  lVar6 = *(long *)(param_3 + 0x1a);
  lVar5 = *(long *)(param_3 + 0x18);
  plVar3[0x11] = *(long *)(param_3 + 0x16);
  plVar3[0x10] = lVar4;
  plVar3[0x13] = lVar6;
  plVar3[0x12] = lVar5;
  *(undefined8 *)(param_3 + 0x14) = 0;
  *(undefined8 *)(param_3 + 0x16) = 0;
  *(undefined8 *)(param_3 + 0x18) = 0;
  nn::os::InitializeMutex((MutexType *)(plVar3 + 0x14),false,0);
  nn::os::InitializeEvent((EventType *)(plVar3 + 0x18),0,0);
  nn::os::SignalEvent((EventType *)(plVar3 + 0x18));
  *param_1 = (long)(plVar3 + 4);
  param_1[1] = (long)plVar3;
  return;
}


