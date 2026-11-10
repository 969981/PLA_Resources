/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00802464; name: FUN_00802464
 */


void FUN_00802464(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  if (*(short *)(param_1 + 0x18) != *(short *)(param_2 + 0x18)) {
    *(short *)(param_1 + 0x18) = *(short *)(param_2 + 0x18);
  }
  if (*(short *)(param_1 + 0x1a) != *(short *)(param_2 + 0x1a)) {
    *(short *)(param_1 + 0x1a) = *(short *)(param_2 + 0x1a);
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  FUN_007ee660(param_1 + 0x20,param_2 + 0x20);
  if (*(short *)(param_1 + 0x38) == 0) {
    return;
  }
  lVar1 = 0;
  uVar2 = 0;
  if (*(short *)(param_2 + 0x38) != 0) goto LAB_0080250c;
  do {
    FUN_007f0d58(*(long *)(param_1 + 0x30) + lVar1);
    while( true ) {
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x20;
      if (*(ushort *)(param_1 + 0x38) <= uVar2) {
        return;
      }
      if (*(ushort *)(param_2 + 0x38) <= uVar2) break;
LAB_0080250c:
      FUN_007f0f88(*(long *)(param_1 + 0x30) + lVar1,*(long *)(param_2 + 0x30) + lVar1);
    }
  } while( true );
}


