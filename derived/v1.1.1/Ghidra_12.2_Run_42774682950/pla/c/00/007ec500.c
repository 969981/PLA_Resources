/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ec500; name: FUN_007ec500
 */


void FUN_007ec500(long *param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_007e5f30();
  if ((uVar2 & 1) == 0) {
    lVar3 = *(long *)PTR_DAT_043774c8;
    do {
      uVar2 = FUN_007e5f54(param_1);
      if ((uVar2 & 1) == 0) {
        iVar1 = FUN_007e5ee4(param_1);
        if (iVar1 != 2) {
          return;
        }
        break;
      }
      FUN_00824d50((long)(lVar3 * (param_2 & 0xffffffff)) / 1000);
      uVar2 = FUN_007e5f30(param_1);
    } while ((uVar2 & 1) == 0);
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  *(undefined1 *)(param_1 + 9) = 0;
                    /* WARNING: Could not recover jumptable at 0x007ec5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}


