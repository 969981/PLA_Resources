/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00251010; name: FUN_00251010
 */


void FUN_00251010(undefined1 *param_1,undefined8 param_2,long param_3,uint param_4)

{
  undefined1 *puVar1;
  size_t __n;
  char *__s;
  ulong uVar2;
  undefined8 *puVar3;
  
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4;
    puVar3 = (undefined8 *)(param_3 + 0x50);
    do {
      __s = (char *)*puVar3;
      __n = strlen(__s);
      memcpy(param_1,__s,__n);
      puVar1 = param_1 + __n;
      uVar2 = uVar2 - 1;
      param_1 = puVar1 + 1;
      *puVar1 = 0x25;
      puVar3 = puVar3 + 1;
    } while (uVar2 != 0);
  }
  param_1[-1] = 0;
  return;
}


