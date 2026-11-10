/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029cddec; name: FUN_029cddec
 */


undefined8 FUN_029cddec(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                       *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),0);
  if (((uVar1 & 1) == 0) ||
     (uVar1 = FUN_029cdf30(param_1,param_2,(ulong)(2 < *(uint *)(param_1 + 0x110)) << 1),
     (uVar1 & 1) == 0)) {
    uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                         *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),1);
    if ((uVar1 & 1) != 0) {
      uVar2 = 1;
      if (2 < *(uint *)(param_1 + 0x110)) {
        uVar2 = 2;
      }
      uVar1 = FUN_029cdf30(param_1,param_2,uVar2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
    uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                         *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = FUN_029cdf30(param_1,param_2,(ulong)(*(int *)(param_1 + 0x110) != 1) << 1),
       (uVar1 & 1) == 0)) {
      uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                           *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),3);
      if ((uVar1 & 1) != 0) {
        uVar2 = 1;
        if (*(int *)(param_1 + 0x110) != 1) {
          uVar2 = 2;
        }
        uVar1 = FUN_029cdf30(param_1,param_2,uVar2);
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
      uVar1 = FUN_02949cec(*(undefined4 *)(param_1 + 0x110),
                           *(undefined1 *)(*(long *)(param_1 + 0x58) + 0x55),4);
      if (((uVar1 & 1) == 0) || (uVar1 = FUN_029cdf30(param_1,param_2,2), (uVar1 & 1) == 0)) {
        return 0;
      }
    }
  }
  return 1;
}


