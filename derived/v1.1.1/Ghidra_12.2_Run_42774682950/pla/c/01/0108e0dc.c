/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108e0dc; name: FUN_0108e0dc
 */


undefined1  [16] FUN_0108e0dc(char *param_1)

{
  int *piVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auVar6 [16];
  
  if (*param_1 == '\0') {
    piVar1 = *(int **)(param_1 + 0x28);
    if (piVar1 == (int *)0x0) {
      piVar1 = *(int **)(param_1 + 0x20);
    }
  }
  else {
    piVar1 = *(int **)(param_1 + 0x30);
  }
  uVar3 = 0;
  if ((0x1c < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar2 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[0xe], uVar2 != 0)) {
    uVar3 = *(undefined4 *)((long)piVar1 + uVar2);
  }
  uVar4 = FUN_0108e174(param_1);
  uVar5 = FUN_0108e1b8(param_1);
  auVar6._4_4_ = uVar4;
  auVar6._0_4_ = uVar3;
  auVar6._8_4_ = uVar5;
  auVar6._12_4_ = 0;
  return auVar6;
}


