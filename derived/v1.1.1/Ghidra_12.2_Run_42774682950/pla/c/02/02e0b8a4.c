/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e0b8a4; name: FUN_02e0b8a4
 */


undefined8 FUN_02e0b8a4(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(param_1 + 0x158);
  if (*(char *)(lVar4 + 0x98) == '\0') {
    *(undefined1 *)(param_1 + 0x134) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x135) = 0;
    if (*(int *)(lVar4 + 0x80) - 2U < 2) {
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
      if (*(int *)(lVar4 + 0x80) == 1) {
        uVar6 = (ulong)*(byte *)(param_1 + 0x138);
      }
    }
    *(char *)(param_1 + 0x136) = (char)uVar6;
    if (*(int *)(lVar4 + 0x88) - 2U < 2) {
      uVar6 = (ulong)((int)uVar6 + 1);
    }
    else if (*(int *)(lVar4 + 0x88) == 1) {
      uVar6 = (ulong)((int)uVar6 + (uint)*(byte *)(param_1 + 0x138));
    }
    *(char *)(param_1 + 0x137) = (char)uVar6;
    if (*(int *)(lVar4 + 0x90) - 2U < 2) {
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulong)uVar1;
      *(char *)(param_1 + 0x134) = (char)uVar1;
    }
    else {
      if (*(int *)(lVar4 + 0x90) == 1) {
        uVar6 = (ulong)((int)uVar6 + (uint)*(byte *)(param_1 + 0x138));
      }
      *(char *)(param_1 + 0x134) = (char)uVar6;
      if ((int)uVar6 == 0) goto LAB_02e0b988;
    }
    lVar4 = (**(code **)(**(long **)(param_1 + 0x160) + 0x10))
                      (*(long **)(param_1 + 0x160),uVar6 * 0xa0);
    *(long *)(param_1 + 0x148) = lVar4;
    if (lVar4 == 0) {
      return 0x34;
    }
    lVar5 = 0;
    lVar3 = lVar4;
    while( true ) {
      uVar6 = uVar6 - 1;
      if (lVar3 != 0) {
        puVar2 = (undefined8 *)(lVar4 + lVar5);
        puVar2[0x12] = 0;
        puVar2[0x13] = 0;
        puVar2[0x10] = 0;
        puVar2[0x11] = 0;
        puVar2[0xe] = 0;
        puVar2[0xf] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[8] = 0;
        puVar2[9] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      if (uVar6 == 0) break;
      lVar4 = *(long *)(param_1 + 0x148);
      lVar5 = lVar5 + 0xa0;
      lVar3 = lVar4 + lVar5;
    }
  }
LAB_02e0b988:
  FUN_02e0be54(param_1);
  FUN_02e0c16c(param_1);
  FUN_02e0c484(param_1);
  return 1;
}


