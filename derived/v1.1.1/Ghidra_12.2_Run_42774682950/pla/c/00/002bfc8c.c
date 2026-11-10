/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002bfc8c; name: FUN_002bfc8c
 */


void FUN_002bfc8c(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 local_58 [2];
  ulong local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  plVar1 = (long *)(param_1 + 0x538);
  do {
    lVar4 = *plVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *plVar1 = lVar4 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar4 + -1 == 0) {
    local_58[0] = *(undefined4 *)(param_1 + 0x500);
    uStack_48 = *(undefined8 *)(param_1 + 0x510);
    local_50 = *(ulong *)(param_1 + 0x508);
    local_40 = *(undefined8 *)(param_1 + 0x518);
    *(undefined8 *)(param_1 + 0x518) = 0;
    *(undefined8 *)(param_1 + 0x510) = 0;
    *(undefined8 *)(param_1 + 0x508) = 0;
    uStack_30 = *(undefined8 *)(param_1 + 0x528);
    local_38 = *(ulong *)(param_1 + 0x520);
    local_28 = *(undefined8 *)(param_1 + 0x530);
    *(undefined8 *)(param_1 + 0x530) = 0;
    *(undefined8 *)(param_1 + 0x528) = 0;
    *(undefined8 *)(param_1 + 0x520) = 0;
    puVar5 = *(undefined8 **)(param_1 + 0x40);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    FUN_002be828();
                    /* try { // try from 002bfd24 to 002bfd3f has its CatchHandler @ 002bfd80 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x120))(*(long **)PTR_DAT_04373140,uVar6);
    (**(code **)*puVar5)(puVar5,local_58);
    if ((local_38 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_28);
    }
    if ((local_50 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_40);
      return;
    }
  }
  return;
}


