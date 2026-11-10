/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ebc850; name: FUN_02ebc850
 */


void FUN_02ebc850(long param_1,code *param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long local_58;
  
  if (((*(char *)(param_1 + 0x10) != '\0') &&
      (uVar2 = (*param_2)(param_1 + 8,param_3,param_5), (uVar2 & 1) != 0)) &&
     (*(char *)(param_1 + 0x10) != '\0')) {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  local_58 = *(long *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    do {
      lVar1 = local_58;
      *param_4 = *(undefined8 *)(local_58 + 0x28);
      uVar2 = FUN_02ebc940(local_58,param_2,param_3,param_4 + 1,param_5);
      if ((uVar2 & 1) == 0) {
        local_58 = lVar1 + 0x30;
      }
      else {
        FUN_02ebca50(lVar1);
        local_58 = FUN_02ebcaa0((long *)(param_1 + 0x18),&local_58);
      }
    } while (local_58 != *(long *)(param_1 + 0x18) + (ulong)*(uint *)(param_1 + 0x20) * 0x30);
  }
  return;
}


