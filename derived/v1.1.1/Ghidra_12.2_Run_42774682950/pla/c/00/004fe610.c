/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fe610; name: FUN_004fe610
 */


undefined8 FUN_004fe610(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (param_1 == 1) {
      iVar1 = FUN_004fea40(param_2,param_3,0);
    }
    else {
      if (param_1 != 2) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/compression/message_compress.cc",
                     0xa5,2,"invalid compression algorithm %d");
        goto LAB_004fe690;
      }
      iVar1 = FUN_004fea40(param_2,param_3,1);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
LAB_004fe690:
  FUN_004fe6b0(param_2,param_3);
  return 0;
}


