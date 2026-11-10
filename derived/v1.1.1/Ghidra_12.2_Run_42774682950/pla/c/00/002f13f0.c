/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f13f0; name: FUN_002f13f0
 */


ulong FUN_002f13f0(ulong param_1,ulong param_2)

{
  ulong local_18;
  
  if (param_1 == 0) {
    param_1 = param_2;
  }
  else if (param_2 != 0) {
    if (param_2 != param_1) {
      local_18 = FUN_002f0ee0(param_1);
      FUN_002f0be0(&local_18,param_2);
      return local_18;
    }
    if (4 < param_1) {
      FUN_002f0430(param_1,"external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x209);
      return param_1;
    }
  }
  return param_1;
}


