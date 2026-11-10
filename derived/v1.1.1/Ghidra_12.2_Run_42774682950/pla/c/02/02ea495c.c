/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea495c; name: FUN_02ea495c
 */


void FUN_02ea495c(long *param_1)

{
  ulong uVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined4 uVar4;
  long *local_20;
  undefined1 local_18;
  
  uVar4 = 0x3f800000;
  local_18 = 0x59;
  if ((param_1[0xb] != 0) && (pbVar2 = *(byte **)(param_1[0xb] + 0x18), pbVar2 != (byte *)0x0)) {
    uVar1 = 0;
    pbVar3 = pbVar2 + ((ulong)(*pbVar2 + 4) & 0x1fc);
    do {
      if (pbVar2[uVar1 + 1] == 0xb) {
        uVar4 = *(undefined4 *)pbVar3;
        break;
      }
      uVar1 = uVar1 + 1;
      pbVar3 = pbVar3 + 0x10;
    } while (uVar1 < *pbVar2);
  }
  local_20 = param_1;
  (**(code **)(*param_1 + 0xd0))(uVar4,param_1,&local_20,1);
  return;
}


