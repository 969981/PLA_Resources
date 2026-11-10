/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0108ebf8; name: FUN_0108ebf8
 */


undefined1  [16] FUN_0108ebf8(char *param_1)

{
  ushort uVar1;
  int *piVar2;
  ushort *puVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (*param_1 == '\0') {
    piVar2 = *(int **)(param_1 + 0x28);
    if (piVar2 == (int *)0x0) {
      piVar2 = *(int **)(param_1 + 0x20);
    }
  }
  else {
    piVar2 = *(int **)(param_1 + 0x30);
  }
  puVar3 = (ushort *)((long)piVar2 - (long)*piVar2);
  uVar1 = *puVar3;
  if (uVar1 < 0x3f) {
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    if ((ulong)puVar3[0x1f] != 0) {
      uVar5 = *(undefined4 *)((long)piVar2 + (ulong)puVar3[0x1f]);
    }
    if (uVar1 < 0x41) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = 0;
      if ((ulong)puVar3[0x20] != 0) {
        uVar6 = *(undefined4 *)((long)piVar2 + (ulong)puVar3[0x20]);
      }
      if ((0x42 < uVar1) && ((ulong)puVar3[0x21] != 0)) {
        uVar7 = *(undefined4 *)((long)piVar2 + (ulong)puVar3[0x21]);
      }
    }
  }
  auVar4._4_4_ = uVar6;
  auVar4._0_4_ = uVar5;
  auVar4._8_4_ = uVar7;
  auVar4._12_4_ = 0;
  return auVar4;
}


