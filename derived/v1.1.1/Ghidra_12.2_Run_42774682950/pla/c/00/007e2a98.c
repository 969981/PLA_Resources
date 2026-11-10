/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007e2a98; name: FUN_007e2a98
 */


long FUN_007e2a98(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x70);
  uVar2 = uVar4 + param_2;
  if ((CARRY8(uVar4,param_2)) || (uVar2 == 0xffffffffffffffff)) {
    *(undefined4 *)(param_1 + 0x5c) = 4;
LAB_007e2aec:
    *(undefined8 *)(param_1 + 0x70) = 0xffffffffffffffff;
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x5c);
  if (iVar1 == 4) goto LAB_007e2aec;
  uVar3 = *(ulong *)(param_1 + 0x78);
  if ((iVar1 == 2) && (*(char *)(param_1 + 0x80) == '\0')) {
    *(undefined1 *)(param_1 + 0x80) = 1;
    *(ulong *)(param_1 + 0x70) = uVar2;
    *(ulong *)(param_1 + 0x78) = uVar4;
    *(undefined4 *)(param_1 + 0x5c) = 3;
  }
  else {
    *(ulong *)(param_1 + 0x70) = uVar2;
    if (iVar1 - 1U < 2) {
      uVar4 = uVar2 - uVar3;
      if (uVar3 < uVar2) {
        if ((param_3 <= uVar4) && (uVar4 <= param_4)) {
          *(ulong *)(param_1 + 0x78) = uVar2;
          if (iVar1 == 2) {
            *(undefined4 *)(param_1 + 0x5c) = 3;
            return uVar2 - uVar3;
          }
          goto LAB_007e2b5c;
        }
        if (param_2 <= uVar4) {
          uVar2 = uVar3 + param_4;
          goto LAB_007e2b58;
        }
      }
      uVar2 = uVar3 + param_3;
    }
    else {
      uVar2 = uVar3 + param_2;
    }
  }
LAB_007e2b58:
  *(ulong *)(param_1 + 0x78) = uVar2;
LAB_007e2b5c:
  return uVar2 - uVar3;
}


