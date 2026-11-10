/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b1fbdc; name: FUN_00b1fbdc
 */


uint FUN_00b1fbdc(undefined8 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  byte *__s;
  byte bVar1;
  uint uVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined1 *local_260;
  byte *pbStack_258;
  size_t local_250;
  undefined8 uStack_248;
  byte abStack_240 [512];
  
  __s = abStack_240;
  snprintf((char *)abStack_240,0x200,"%s",*(undefined8 *)(param_3 + 8));
  pcVar3 = strrchr((char *)abStack_240,0x2f);
  if (pcVar3 != (char *)0x0) {
    __s = (byte *)(pcVar3 + 1);
  }
  pcVar3 = strrchr((char *)__s,0x2e);
  if (pcVar3 != (char *)0x0) {
    *pcVar3 = '\0';
  }
  local_250 = strlen((char *)__s);
  bVar1 = *__s;
  local_260 = &DAT_cbf29ce484222645;
  pbVar4 = __s;
  while (bVar1 != 0) {
    pbVar4 = pbVar4 + 1;
    local_260 = (undefined1 *)(((ulong)local_260 ^ (ulong)bVar1) * 0x100000001b3);
    bVar1 = *pbVar4;
  }
  uStack_248 = 0;
  pbStack_258 = __s;
  uVar2 = FUN_00b1f924(param_1,param_2,&local_260,param_4);
  return uVar2 & 1;
}


