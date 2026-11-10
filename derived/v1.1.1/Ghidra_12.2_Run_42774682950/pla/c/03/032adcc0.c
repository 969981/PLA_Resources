/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032adcc0; name: FUN_032adcc0
 */


undefined8 FUN_032adcc0(long *param_1,uint param_2,undefined8 param_3,uint *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulong local_38;
  
  if (0x3fffffff < (int)param_2) {
    FUN_032bd0a8(param_2);
  }
  uVar2 = (*param_4 & 0x3fffffff) << 1;
  if (0x3ffffffe < uVar2) {
    uVar2 = 0x3fffffff;
  }
  if ((int)param_2 <= (int)uVar2) {
    param_2 = uVar2;
  }
  FUN_032bd100(param_2,0x150,*param_4,&local_38);
  uVar2 = *param_4;
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,local_38,&local_38);
  if (-1 < (int)uVar2) {
    (**(code **)(*param_1 + 0x18))(param_1,param_3,((ulong)uVar2 & 0x3fffffff) * 0x150);
  }
  uVar2 = 0x3fffffff;
  if (local_38 < 0x53fffffeb0) {
    uVar2 = (uint)(local_38 / 0x150);
  }
  *param_4 = uVar2;
  return uVar1;
}


