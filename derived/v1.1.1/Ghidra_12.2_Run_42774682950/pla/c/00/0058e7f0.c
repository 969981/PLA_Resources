/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058e7f0; name: FUN_0058e7f0
 */


undefined8 FUN_0058e7f0(long *param_1,long param_2,ulong param_3)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_3 < 0xfffffffffffffffc) {
      iVar1 = (int)param_3 + 4;
      *(char *)(param_1 + 1) = (char)iVar1;
      param_1[3] = 0;
      param_1[4] = param_3;
      param_1[2] = 0;
      *(char *)((long)param_1 + 0xb) = (char)((uint)iVar1 >> 0x18);
      *(char *)((long)param_1 + 10) = (char)((uint)iVar1 >> 0x10);
      *(char *)((long)param_1 + 9) = (char)((uint)iVar1 >> 8);
      *param_1 = param_2;
      *(undefined4 *)((long)param_1 + 0xc) = 6;
      return 1;
    }
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/frame_protector/frame_handler.cc",
                 0x3a,2,"length must be at most %zu",0xfffffffffffffffb);
  }
  return 0;
}


