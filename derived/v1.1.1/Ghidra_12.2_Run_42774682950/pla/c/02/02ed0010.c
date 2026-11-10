/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed0010; name: FUN_02ed0010
 */


void FUN_02ed0010(undefined1 param_1 [16],float param_2,float param_3,long param_4,uint param_5)

{
  byte *pbVar1;
  ulong uVar2;
  
  FUN_02ed6f30();
  if (param_2 != 0.0 || param_3 != 0.0) {
LAB_02ed004c:
    FUN_02ed00ac(param_4 + 0xb0,param_5,CONCAT44(param_3,param_2));
    return;
  }
  pbVar1 = *(byte **)(param_4 + 0xb0);
  if (pbVar1 != (byte *)0x0) {
    uVar2 = 0;
    do {
      if ((uint)pbVar1[uVar2 + 1] == (param_5 & 0xff)) goto LAB_02ed004c;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *pbVar1);
  }
  return;
}


