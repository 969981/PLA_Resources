/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cc2880; name: FUN_02cc2880
 */


void FUN_02cc2880(undefined8 *param_1)

{
  ulong uVar1;
  
  uVar1 = nn::err::ErrorCode::IsValid();
  if ((uVar1 & 1) == 0) {
    return;
  }
  nn::err::ShowError(*param_1);
  return;
}


