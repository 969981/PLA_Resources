/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01706230; name: FUN_01706230
 */


void FUN_01706230(undefined8 param_1)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 local_28;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  lVar3 = FUN_01705da4(param_1,1,&local_28);
  pcVar4 = *(code **)(lVar2 + 0xb0);
  if ((*(ulong *)(lVar2 + 0xb8) & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(lVar3 + ((long)*(ulong *)(lVar2 + 0xb8) >> 1)));
  }
  uVar1 = (*pcVar4)();
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,uVar1);
  return;
}


