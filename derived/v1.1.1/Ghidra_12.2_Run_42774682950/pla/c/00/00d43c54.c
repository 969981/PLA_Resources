/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d43c54; name: FUN_00d43c54
 */


undefined8 FUN_00d43c54(long *param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  if ((param_2 == 0) || ((lVar3 = param_1[0xe], lVar3 != 0 && (lVar3 != param_2)))) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (lVar3 == 0) {
    param_1[0xe] = param_2;
    plVar1 = param_1 + 0xf;
    (**(code **)(*param_1 + 0x80))(param_1,plVar1);
    (**(code **)(*param_1 + 0x78))(param_1,plVar1,param_1 + 0x15);
    FUN_00d45104(param_1 + 0x34,plVar1);
    FUN_00d2a2c8(param_1 + 0x30);
  }
  else {
    uVar2 = FUN_00d2be88(param_1 + 0x30);
    if ((uVar2 & 1) != 0) {
      FUN_00d2c08c(param_1 + 0x30);
      return 1;
    }
  }
  return 0;
}


