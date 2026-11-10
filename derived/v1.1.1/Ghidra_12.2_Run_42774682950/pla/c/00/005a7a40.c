/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005a7a40; name: FUN_005a7a40
 */


void FUN_005a7a40(uint param_1,byte *param_2,int param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)(param_3 - 1);
  switch(uVar1) {
  case 4:
    param_2[4] = (byte)(param_1 >> 0x1c) | 0x80;
  case 3:
    param_2[3] = (byte)(param_1 >> 0x15) | 0x80;
  case 2:
    param_2[2] = (byte)(param_1 >> 0xe) | 0x80;
  case 1:
    param_2[1] = (byte)(param_1 >> 7) | 0x80;
  case 0:
    *param_2 = (byte)param_1 | 0x80;
  default:
    param_2[uVar1] = param_2[uVar1] & 0x7f;
    return;
  }
}


