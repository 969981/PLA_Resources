/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031d0c10; name: FUN_031d0c10
 */


void FUN_031d0c10(long param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 local_60 [2];
  int local_58 [2];
  undefined4 local_50 [2];
  int local_48 [2];
  int local_38 [2];
  
  local_50[0] = *param_3;
  cVar1 = FUN_031d2ff4(param_2,local_50,local_38,local_48);
  if (cVar1 != '\0') {
    for (; local_38[0] != local_48[0]; local_38[0] = local_38[0] + 1) {
      local_58[0] = local_38[0];
      FUN_031dde00(*(undefined8 *)(param_1 + 0x18),param_2,local_58);
    }
  }
  local_60[0] = *param_3;
  FUN_0318abb4(param_2,local_60);
  return;
}


