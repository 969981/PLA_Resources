/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f301e0; name: FUN_02f301e0
 */


void FUN_02f301e0(long *param_1,undefined4 param_2)

{
  long lVar1;
  
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    if ((*(byte *)(lVar1 + 10) >> 4 & 1) != 0) {
      FUN_02ede37c(DAT_0440a178,*(undefined4 *)(lVar1 + 0x210),param_1);
      lVar1 = param_1[3];
    }
    *(undefined8 *)(lVar1 + 0x238) = 0;
    FUN_02f111b8(0,lVar1,4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x02f30228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))(param_1);
  return;
}


