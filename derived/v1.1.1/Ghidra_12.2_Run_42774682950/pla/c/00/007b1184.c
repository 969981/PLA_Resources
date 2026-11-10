/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007b1184; name: FUN_007b1184
 */


void FUN_007b1184(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined1 local_50 [8];
  long local_48;
  long local_38;
  long local_30;
  
  local_30 = param_1[2];
                    /* try { // try from 007b11a4 to 007b11ab has its CatchHandler @ 007b1250 */
  FUN_007b17a0(&local_38,*(undefined8 *)(local_30 + 0x18));
  lVar1 = local_48;
  local_48 = local_30;
  while (local_30 = local_48, local_38 != 0) {
                    /* try { // try from 007b11dc to 007b11eb has its CatchHandler @ 007b1254 */
    FUN_007b1258(&local_38,param_1,local_50);
    lVar1 = local_48;
    local_48 = local_30;
  }
  if ((*param_1 == 0) && (lVar2 = param_1[2], lVar2 != 0)) {
                    /* try { // try from 007b1214 to 007b121b has its CatchHandler @ 007b124c */
    if ((*(long *)(lVar2 + 0x20) != 0) &&
       (local_48 = lVar1, FUN_007b1944(lVar2), lVar1 = local_48, *(long *)(lVar2 + 0x28) == 0)) {
      FUN_002ee710(*(undefined8 *)(lVar2 + 0x20));
      lVar1 = local_48;
    }
    local_48 = lVar1;
    FUN_002e2ea0(PTR_LAB_04373088,lVar2);
  }
  return;
}


