/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e481dc; name: FUN_02e481dc
 */


void FUN_02e481dc(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x60) != '\0') {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_02f59e60(10);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_02f59e60(10);
    }
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      uVar2 = (ulong)*(ushort *)(param_1 + 0x34);
      if (*(ushort *)(param_1 + 0x34) != 0) {
        uVar3 = 1;
        lVar4 = 8;
        lVar1 = *(long *)(lVar1 + 8);
        while( true ) {
          if (lVar1 != 0) {
            FUN_02f59e60(10);
            uVar2 = (ulong)*(ushort *)(param_1 + 0x34);
          }
          if (uVar2 <= uVar3) break;
          uVar3 = uVar3 + 1;
          lVar4 = lVar4 + 0x10;
          lVar1 = *(long *)(*(long *)(param_1 + 0x18) + lVar4);
        }
        lVar1 = *(long *)(param_1 + 0x18);
      }
      FUN_02f59e60(10,lVar1);
    }
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_02f59e60(9);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


