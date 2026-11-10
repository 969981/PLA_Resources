/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d6ddc; name: FUN_032d6ddc
 */


undefined8 FUN_032d6ddc(long param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined1 auStack_48 [16];
  ulong local_38;
  
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar2 = 0;
    do {
      FUN_032d6ab8(auStack_48,param_1,uVar2 & 0xffffffff);
      iVar1 = FUN_032e6458(param_2,auStack_48);
      if ((local_38 & 1) != 0) {
        FUN_032e0c40(local_38 & 0xfffffffffffffffe);
      }
      if (iVar1 == 0) {
        return *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar2 * 8);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < *(int *)(param_1 + 0x10));
  }
  return 0;
}


