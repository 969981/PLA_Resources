/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028fefb0; name: FUN_028fefb0
 */


void FUN_028fefb0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  uint *puVar4;
  undefined1 auStack_24 [4];
  
  puVar4 = (uint *)*param_3;
  if ((0.0 < (float)puVar4[1]) &&
     (plVar1 = (long *)(*(long *)(*(long *)*param_1 + 0x60) + 0x58),
     uVar2 = (**(code **)(*plVar1 + 0x98))(plVar1,auStack_24,param_2,*(long *)*param_1 + 0xd0),
     (uVar2 & 1) != 0)) {
    pcVar3 = *(code **)(PTR_PTR_04387fe0 + (ulong)*puVar4 * 0x10);
    uVar2 = *(ulong *)((long)(PTR_PTR_04387fe0 + (ulong)*puVar4 * 0x10) + 8);
    plVar1 = (long *)((long)puVar4 + ((long)uVar2 >> 1));
    if ((uVar2 & 1) != 0) {
      pcVar3 = *(code **)(pcVar3 + *plVar1);
    }
    (*pcVar3)(*(undefined4 *)param_1[1],plVar1,auStack_24);
  }
  return;
}


