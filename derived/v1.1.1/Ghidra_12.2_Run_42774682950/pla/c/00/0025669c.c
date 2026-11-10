/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0025669c; name: FUN_0025669c
 */


void FUN_0025669c(long *param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((*(byte *)((long)param_1 + 0xdd) & 1) != 0) {
    *(byte *)((long)param_1 + 0xdd) = *(byte *)((long)param_1 + 0xdd) & 0xfe;
    FUN_002441c4(param_1,param_3,1);
    if ((*(byte *)((long)param_1 + 0xdd) >> 1 & 1) == 0) {
      if (*(uint *)((long)param_1 + 0xd4) < 2) {
        FUN_00256748();
      }
      else {
        FUN_002571e4();
      }
    }
    else if (*(uint *)((long)param_1 + 0xd4) < 2) {
      FUN_00257388();
    }
    else {
      FUN_00257e4c(param_1);
    }
  }
  FUN_0024319c(param_1,param_2,param_3,param_4 & 1);
                    /* WARNING: Could not recover jumptable at 0x00256744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))(param_1,param_2);
  return;
}


