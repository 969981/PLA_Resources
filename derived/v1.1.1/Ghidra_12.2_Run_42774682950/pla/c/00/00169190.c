/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00169190; name: FUN_00169190
 */


undefined8 FUN_00169190(long param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  double dVar3;
  double local_60;
  int local_58;
  double local_50;
  int local_48;
  double local_40;
  int local_38;
  
  if (param_3[4] == param_3[5]) {
    if (*param_3 == 6) {
      local_38 = 0x13;
    }
    else {
      if (*param_3 != 5) {
        return 0;
      }
      local_38 = 3;
    }
    local_40 = *(double *)(param_3 + 2);
    if (param_4[4] == param_4[5]) {
      if (*param_4 == 6) {
        local_48 = 0x13;
      }
      else {
        if (*param_4 != 5) {
          return 0;
        }
        local_48 = 3;
      }
      local_50 = *(double *)(param_4 + 2);
      if (param_2 < 0xe) {
        uVar1 = 1 << (ulong)(param_2 & 0x1f);
        if ((uVar1 & 0x2f80) == 0) {
          if ((uVar1 & 0x68) != 0) {
            dVar3 = (double)(long)local_50;
            if (local_48 != 0x13) {
              dVar3 = local_50;
            }
            if (dVar3 == 0.0) {
              return 0;
            }
          }
        }
        else {
          dVar3 = local_40;
          if ((local_38 != 0x13) &&
             (uVar2 = FUN_00175390(&local_40,&local_60,0), dVar3 = local_60, (int)uVar2 == 0)) {
            return uVar2;
          }
          local_60 = dVar3;
          if ((local_48 != 0x13) && (uVar2 = FUN_00175390(&local_50,&local_60,0), (int)uVar2 == 0))
          {
            return uVar2;
          }
        }
      }
      FUN_00162370(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38),param_2,&local_40,&local_50,
                   &local_60);
      if (local_58 == 0x13) {
        *param_3 = 6;
        *(double *)(param_3 + 2) = local_60;
      }
      else {
        if (local_60 == 0.0) {
          return 0;
        }
        if (NAN(local_60)) {
          return 0;
        }
        *param_3 = 5;
        *(double *)(param_3 + 2) = local_60;
      }
      return 1;
    }
  }
  return 0;
}


