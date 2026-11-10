/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a6458; name: thunk_FUN_007b1184
 */


void thunk_FUN_007b1184(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [8];
  long lStack_48;
  long lStack_38;
  long lStack_30;
  
  lStack_30 = param_1[2];
  FUN_007b17a0(&lStack_38,*(undefined8 *)(lStack_30 + 0x18));
  lVar1 = lStack_48;
  lStack_48 = lStack_30;
  while (lStack_30 = lStack_48, lStack_38 != 0) {
    FUN_007b1258(&lStack_38,param_1,auStack_50);
    lVar1 = lStack_48;
    lStack_48 = lStack_30;
  }
  if ((*param_1 == 0) && (lVar2 = param_1[2], lVar2 != 0)) {
    if ((*(long *)(lVar2 + 0x20) != 0) &&
       (lStack_48 = lVar1, FUN_007b1944(lVar2), lVar1 = lStack_48, *(long *)(lVar2 + 0x28) == 0)) {
      FUN_002ee710(*(undefined8 *)(lVar2 + 0x20));
      lVar1 = lStack_48;
    }
    lStack_48 = lVar1;
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  return;
}


