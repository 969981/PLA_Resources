/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a480c; name: FUN_031a480c
 */


void FUN_031a480c(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long local_28;
  
  *param_1 = &PTR_LAB_042ffe18;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  FUN_031a48b0(param_1 + 4,param_2 + 0x20);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[10] = uVar3;
  if (*(long *)(param_2 + 0x68) != 0) {
    FUN_031a4be0(&local_28,*(long *)(param_2 + 0x68),param_1);
    lVar1 = local_28;
    local_28 = 0;
    lVar2 = param_1[0xd];
    param_1[0xd] = lVar1;
    if (lVar2 != 0) {
      FUN_032d647c();
      if (local_28 != 0) {
        FUN_032d647c();
      }
    }
  }
  return;
}


