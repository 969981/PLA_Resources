/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed0118; name: FUN_02ed0118
 */


void FUN_02ed0118(long param_1,uint param_2,undefined8 param_3,int param_4,int param_5)

{
  byte *pbVar1;
  ulong uVar2;
  
  FUN_02ed7250();
  if (param_5 != 0 || param_4 != 0) {
LAB_02ed0144:
    FUN_02ed00ac(param_1 + 0xb0,param_2,CONCAT44(param_5,param_4));
    return;
  }
  pbVar1 = *(byte **)(param_1 + 0xb0);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = 0;
    do {
      if ((uint)pbVar1[uVar2 + 1] == (param_2 & 0xff)) goto LAB_02ed0144;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *pbVar1);
  }
  return;
}


