/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f09f0; name: FUN_001f09f0
 */


void FUN_001f09f0(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_30 [16];
  
  lVar2 = *(long *)(param_1 + 0x1e8);
  if (((*(int *)(param_1 + 0xef0) != *(int *)(param_1 + 0x1540)) ||
      (((uint)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x34) & 1) !=
       (*(ushort *)(param_1 + 0x15a4) >> 0xc & 1))) ||
     (*(long *)(param_1 + 0xee8) != *(long *)(param_1 + 0x1538))) {
    FUN_001f1aac(param_1,auStack_30);
    iVar1 = FUN_002122fc(param_2,0,*(undefined4 *)(lVar2 + 0x218),auStack_30);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_00207ddc(param_2);
  return;
}


