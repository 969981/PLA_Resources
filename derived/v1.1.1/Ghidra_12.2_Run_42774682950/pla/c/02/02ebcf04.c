/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebcf04; name: FUN_02ebcf04
 */


byte FUN_02ebcf04(long param_1,code *param_2,undefined8 param_3,undefined1 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long local_68;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar3 = (*param_2)(param_1 + 8,param_3,param_5), (uVar3 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  local_68 = *(long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) == 0) {
    bVar2 = true;
  }
  else {
    do {
      lVar1 = local_68;
      *param_4 = *(undefined1 *)(local_68 + 0x28);
      uVar3 = FUN_02ebd140(local_68,param_2,param_3,param_4 + 8,param_5);
      if ((uVar3 & 1) == 0) {
        local_68 = lVar1 + 0x30;
      }
      else {
        if (*(long *)(lVar1 + 0x18) != 0) {
          *(undefined4 *)(lVar1 + 0x20) = 0;
          (*DAT_0442d150)(0);
          *(undefined8 *)(lVar1 + 0x18) = 0;
          *(undefined4 *)(lVar1 + 0x24) = 0;
        }
        local_68 = FUN_02ebd2f4((long *)(param_1 + 0x18),&local_68);
      }
    } while (local_68 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
    bVar2 = *(uint *)(param_1 + 0x20) == 0;
  }
  return bVar2 & *(char *)(param_1 + 0x10) == '\0';
}


