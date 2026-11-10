/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00854740; name: FUN_00854740
 */


void FUN_00854740(undefined8 param_1,long param_2)

{
  int *piVar1;
  int local_40 [4];
  int local_30 [4];
  undefined4 local_18 [2];
  
  piVar1 = local_40;
  FUN_008547c0(local_30);
  if (local_30[0] == 0) {
    FUN_00847f00(local_40,param_2 + 0x10);
    FUN_007ee660(local_30,local_40);
    if (local_30[0] == 0) {
      local_40[0] = 0;
      local_18[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_18);
      goto LAB_0085478c;
    }
  }
  piVar1 = local_30;
LAB_0085478c:
  FUN_007ee578(param_1,piVar1);
  return;
}


