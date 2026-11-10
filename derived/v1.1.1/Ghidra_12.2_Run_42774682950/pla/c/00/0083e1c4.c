/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0083e1c4; name: FUN_0083e1c4
 */


void FUN_0083e1c4(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 local_28 [2];
  
  uVar3 = FUN_00847434();
  local_28[0] = (**(code **)(*param_1 + 0x18))(param_1);
  plVar4 = (long *)FUN_00844598(uVar3,local_28);
  (**(code **)(*(long *)*plVar4 + 0x78))();
  uVar5 = (**(code **)(*(long *)*plVar4 + 0x80))();
  while ((uVar5 & 1) == 0) {
    plVar1 = (long *)0x0;
    if (*(long *)(*plVar4 + 0x50) != 0) {
      plVar1 = (long *)(*plVar4 + 0x50);
    }
    bVar2 = *(byte *)(plVar1 + 5);
    uVar6 = 1;
    if ((bVar2 & 1) != 0) {
      uVar6 = 2;
    }
    if ((bVar2 & 2) != 0) {
      uVar6 = uVar6 + 2;
    }
    if ((bVar2 & 4) != 0) {
      uVar6 = uVar6 + 4;
    }
    if ((bVar2 & 8) != 0) {
      uVar6 = uVar6 + 8;
    }
    if (*(short *)((long)plVar1 + 0x2a) != 0) {
      if (*(char *)(*plVar1 + (ulong)uVar6) == '\x01') {
        FUN_0083e8a4(param_1);
      }
      else if (*(char *)(*plVar1 + (ulong)uVar6) == '\0') {
        FUN_0083e684(param_1);
      }
    }
    (**(code **)(*(long *)*plVar4 + 0x88))();
    uVar5 = (**(code **)(*(long *)*plVar4 + 0x80))();
  }
  return;
}


