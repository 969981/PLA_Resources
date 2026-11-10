/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ee578; name: FUN_007ee578
 */


void FUN_007ee578(int *param_1,int *param_2)

{
  undefined8 uVar1;
  ErrorResultVariant *this;
  int local_58 [4];
  int local_48 [4];
  int local_38 [4];
  undefined4 local_28 [2];
  
  this = (ErrorResultVariant *)(param_1 + 1);
  *param_1 = *param_2;
  nn::err::ErrorResultVariant::ErrorResultVariant(this);
  local_38[0] = 0xa466;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_48);
  if (*param_2 != local_38[0]) {
    local_28[0] = 0;
    local_48[0] = 0xc47f;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
    if (*param_2 != local_48[0]) {
      local_58[0] = 0xc485;
      local_28[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_28);
      if (*param_2 != local_58[0]) {
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
        return;
      }
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 1);
  param_1[3] = param_2[3];
  *(undefined8 *)this = uVar1;
  return;
}


