/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f1aac; name: FUN_001f1aac
 */


void FUN_001f1aac(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0xee8) == 0) ||
     (lVar2 = *(long *)(*(long *)(param_1 + 0xee8) + 0x1e8), lVar2 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 0x218);
  }
  FUN_00205be8(param_2,uVar1,*(undefined4 *)(param_1 + 0xef0),
               *(ulong *)(param_1 + 0xf40) >> 0x34 & 1);
  *(undefined4 *)(param_1 + 0x1540) = *(undefined4 *)(param_1 + 0xef0);
  *(ushort *)(param_1 + 0x15a4) =
       (ushort)((ulong)*(undefined8 *)(param_1 + 0xf40) >> 0x28) & 0x1000 |
       *(ushort *)(param_1 + 0x15a4) & 0xefff;
  *(undefined8 *)(param_1 + 0x1538) = *(undefined8 *)(param_1 + 0xee8);
  return;
}


