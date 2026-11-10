/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0221a550; name: FUN_0221a550
 */


void FUN_0221a550(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_28;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  lVar3 = FUN_02021fe8(param_1,1,&local_28);
  uVar4 = FUN_00150ba0(param_1,2,0);
  pcVar5 = *(code **)(lVar2 + 0x110);
  plVar1 = (long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0x118) >> 1));
  if ((*(ulong *)(lVar2 + 0x118) & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *plVar1);
  }
  (*pcVar5)(plVar1,uVar4);
  FUN_0014ff10(param_1,0);
  return;
}


