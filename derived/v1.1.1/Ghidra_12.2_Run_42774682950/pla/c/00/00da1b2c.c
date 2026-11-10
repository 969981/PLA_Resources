/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da1b2c; name: FUN_00da1b2c
 */


undefined4 FUN_00da1b2c(long param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint *puVar3;
  ulong uVar4;
  undefined8 local_38;
  char *local_30;
  undefined8 uStack_28;
  int *local_20;
  uint local_18;
  
  local_38 = 0x71cfcea90142567d;
  local_30 = "vib_table";
  uStack_28 = 9;
  FUN_010868dc(&local_20,param_1 + 0x38,&local_38);
  if ((((local_20 == (int *)0x0) || (local_18 == 0xffffffff)) ||
      (*(ushort *)((long)local_20 - (long)*local_20) < 5)) ||
     (uVar4 = (ulong)((ushort *)((long)local_20 - (long)*local_20))[2], uVar4 == 0)) {
    uVar2 = 0;
  }
  else {
    puVar3 = (uint *)((long)local_20 + uVar4);
    puVar3 = (uint *)((long)puVar3 + (ulong)local_18 * 4 + (ulong)*puVar3 + 4);
    piVar1 = (int *)((long)puVar3 + (ulong)*puVar3);
    puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (6 - (long)*piVar1)));
    uVar2 = *(undefined4 *)((long)puVar3 + (ulong)*puVar3);
  }
  return uVar2;
}


