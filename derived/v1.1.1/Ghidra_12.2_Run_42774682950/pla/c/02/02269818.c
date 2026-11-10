/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02269818; name: FUN_02269818
 */


void FUN_02269818(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  lVar2 = FUN_022657c8(param_1,1,&local_28);
  pcVar4 = *(code **)(lVar1 + 0xb0);
  if ((*(ulong *)(lVar1 + 0xb8) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar2 + ((long)*(ulong *)(lVar1 + 0xb8) >> 1)));
  }
  (*pcVar4)(auStack_38);
  FUN_0014ff10(param_1,0);
  uVar3 = FUN_022669d4();
  FUN_02266980(param_1,uVar3,auStack_38);
  return;
}


