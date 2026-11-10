/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5e080; name: FUN_02e5e080
 */


undefined8 FUN_02e5e080(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4) = *param_2;
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x10) = param_2[1];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x20) = param_2[2];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x30) = param_2[3];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x40) = param_2[4];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x50) = param_2[5];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x60) = param_2[6];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x70) = param_2[7];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x80) = param_2[8];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x90) = param_2[9];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0xa0) = param_2[10];
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0xb0) = param_2[0xb];
    *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 8 + 0xe8) =
         *(long *)(param_2 + 0xe) + 0x20;
    lVar2 = FUN_02e5611c(param_2);
    iVar1 = *(uint *)(param_1 + 0xe0) + 1;
    *(undefined4 *)(param_1 + (ulong)*(uint *)(param_1 + 0xe0) * 4 + 0x108) =
         *(undefined4 *)(lVar2 + 4);
    *(int *)(param_1 + 0xe0) = iVar1;
    if (iVar1 == 4) {
      uVar3 = FUN_02e5db28(param_1);
      if ((uVar3 & 1) == 0) {
        uVar4 = *(undefined1 *)(param_1 + 0x11c);
      }
      else {
        uVar4 = 1;
      }
      *(undefined1 *)(param_1 + 0x11c) = uVar4;
      *(undefined4 *)(param_1 + 0xe0) = 0;
    }
  }
  return 1;
}


