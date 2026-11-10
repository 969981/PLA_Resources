/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1eaf8; name: FUN_00b1eaf8
 */


uint FUN_00b1eaf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  byte *__s;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  byte *pbVar5;
  byte abStack_260 [512];
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  undefined8 uStack_48;
  
  __s = abStack_260;
  snprintf((char *)abStack_260,0x200,"%s",*(undefined8 *)(param_3 + 8));
  pcVar3 = strrchr((char *)abStack_260,0x2f);
  if (pcVar3 != (char *)0x0) {
    __s = (byte *)(pcVar3 + 1);
  }
  pcVar3 = strrchr((char *)__s,0x2e);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  local_50 = strlen((char *)__s);
  bVar1 = *__s;
  local_60 = &DAT_cbf29ce484222645;
  pbVar5 = __s;
  while (bVar1 != 0) {
    pbVar5 = pbVar5 + 1;
    local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar5;
  }
  uStack_48 = 0;
  pbStack_58 = __s;
  uVar4 = FUN_00b1eca0(param_1,param_2,&local_60);
  if ((uVar4 & 1) == 0) {
    uVar2 = FUN_00b1f320(param_1,param_2);
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}


