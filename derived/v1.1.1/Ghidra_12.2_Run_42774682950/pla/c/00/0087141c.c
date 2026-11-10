/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0087141c; name: FUN_0087141c
 */


void FUN_0087141c(long param_1)

{
  undefined2 uVar1;
  ulong uVar2;
  int local_50 [4];
  undefined1 auStack_40 [32];
  
  if ((*(char *)(param_1 + 0x74) != '\0') &&
     (uVar2 = (**(code **)(**(long **)(param_1 + 0x78) + 0x20))(), (uVar2 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x74) = 0;
    (**(code **)(**(long **)(param_1 + 0x78) + 0x28))
              (local_50,*(long **)(param_1 + 0x78),param_1 + 0x80);
    if (local_50[0] == 0) {
      FUN_007ecf14(param_1 + 0x850);
      uVar1 = *(undefined2 *)(param_1 + 0x60);
      FUN_007e3400(auStack_40);
      FUN_00874c48(param_1,1,auStack_40,uVar1,0);
      FUN_007e34a4(auStack_40);
      return;
    }
    FUN_007ee660(param_1 + 0x728,local_50);
    *(undefined4 *)(param_1 + 0x7b8) = 5;
  }
  return;
}


