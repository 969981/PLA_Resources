/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0226d8a8; name: FUN_0226d8a8
 */


void FUN_0226d8a8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_40 [24];
  undefined8 local_28;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  lVar3 = FUN_022657c8(param_1,1,&local_28);
  pcVar4 = *(code **)(lVar2 + 0x128);
  if ((*(ulong *)(lVar2 + 0x130) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x130) >> 1)));
  }
  (*pcVar4)(auStack_40);
  FUN_0014ff10(param_1,0);
  uVar1 = FUN_0226a9b4();
  FUN_0226a960(param_1,uVar1,auStack_40);
  return;
}


