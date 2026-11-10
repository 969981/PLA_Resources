/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028ff060; name: FUN_028ff060
 */


void FUN_028ff060(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  uint *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  puVar4 = (uint *)*param_3;
  if (0.0 < (float)puVar4[1]) {
    plVar1 = (long *)(*(long *)(*(long *)*param_1 + 0x60) + 0x58);
    uVar2 = (**(code **)(*plVar1 + 0xa8))(plVar1,local_40,param_2,*(long *)*param_1 + 0xd0);
    if ((uVar2 & 1) != 0) {
      uStack_48 = local_38;
      local_50 = CONCAT44(*(undefined4 *)((ulong)local_40 | 4),local_40[0]);
      pcVar3 = *(code **)(PTR_PTR_04387fe8 + (ulong)*puVar4 * 0x10);
      uVar2 = *(ulong *)((long)(PTR_PTR_04387fe8 + (ulong)*puVar4 * 0x10) + 8);
      plVar1 = (long *)((long)puVar4 + ((long)uVar2 >> 1));
      if ((uVar2 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *plVar1);
      }
      (*pcVar3)(*(undefined4 *)param_1[1],plVar1,&local_50);
    }
  }
  return;
}


