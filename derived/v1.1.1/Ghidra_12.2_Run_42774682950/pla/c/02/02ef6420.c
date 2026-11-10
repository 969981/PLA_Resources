/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ef6420; name: FUN_02ef6420
 */


void FUN_02ef6420(undefined8 *param_1,undefined4 param_2,undefined4 param_3,char *param_4,
                 undefined4 param_5,ushort param_6,ushort param_7)

{
  size_t __n;
  char *__dest;
  size_t sVar1;
  ushort uVar2;
  
  uVar2 = *(ushort *)((long)param_1 + 0xc);
  if (((uVar2 & 0x7c) == 4) && (param_1[2] != 0)) {
    (*DAT_0442d150)(0);
    uVar2 = *(ushort *)((long)param_1 + 0xc);
    param_1[2] = 0;
  }
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0xffffffff00000000;
  param_1[2] = 0;
  *(ushort *)((long)param_1 + 0xc) = uVar2 & 0xf800;
  *(undefined4 *)(param_1 + 3) = param_3;
  if (param_4 != (char *)0x0) {
    __n = strlen(param_4);
    __dest = (char *)FUN_02f59e30(0,__n + 1);
    param_1[2] = __dest;
    if (__dest != (char *)0x0) {
      sVar1 = strlen(param_4);
      if (sVar1 + 1 <= __n) {
        __n = sVar1 + 1;
      }
      strncpy(__dest,param_4,__n);
      __dest[__n] = '\0';
    }
  }
  *(undefined4 *)param_1 = param_2;
  *(undefined4 *)((long)param_1 + 4) = param_5;
  *(undefined4 *)(param_1 + 1) = 0;
  *(ushort *)((long)param_1 + 0xc) =
       (param_7 & 1) << 8 | (param_6 & 1) << 9 | *(ushort *)((long)param_1 + 0xc) & 0xf800 | 0x84;
  return;
}


