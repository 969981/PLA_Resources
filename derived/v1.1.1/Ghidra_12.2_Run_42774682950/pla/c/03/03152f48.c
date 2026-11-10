/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03152f48; name: FUN_03152f48
 */


undefined8 FUN_03152f48(long *param_1,uint *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  ulong local_38;
  
  uVar2 = (*param_2 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  if (uVar2 < 3) {
    uVar2 = 2;
  }
  FUN_032bd100(uVar2,0x30,*param_2,&local_38);
  uVar2 = *param_2;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_38,&local_38);
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,0,((ulong)uVar2 & 0x3fffffff) * 0x30);
  }
  uVar2 = 0x3fffffff;
  if (local_38 < 0xbffffffd0) {
    uVar2 = (uint)(local_38 / 0x30);
  }
  *param_2 = uVar2;
  return uVar1;
}


