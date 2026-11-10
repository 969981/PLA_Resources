/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0027af98; name: FUN_0027af98
 */


void FUN_0027af98(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04372850;
  if (*(long *)(param_1 + 0x18) != 0) {
    if (0 < *(int *)(param_1 + 0x28)) {
      lVar2 = 0;
      lVar3 = 0;
      do {
        FUN_0087d828(*(undefined8 *)
                      (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x20) +
                                 *(long *)(puVar1 + (ulong)*(uint *)(param_1 + 0x10) * 8) + lVar2) +
                      0x68),param_2);
        lVar3 = lVar3 + 1;
        lVar2 = lVar2 + 0x40;
      } while (lVar3 < *(int *)(param_1 + 0x28));
    }
    (**(code **)(*param_3 + 0x18))(param_3,*(undefined8 *)(param_1 + 0x20));
    *(long *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


