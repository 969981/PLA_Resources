/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002eef40; name: FUN_002eef40
 */


int FUN_002eef40(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)((ulong)param_2 >> 0x20) != (int)((ulong)param_4 >> 0x20)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/gpr/time.cc",0x1f,2,
                 "assertion failed: %s","a.clock_type == b.clock_type");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar2 = (uint)(param_3 < param_1) - (uint)(param_1 < param_3);
  iVar1 = 0;
  if (1 < param_1 + 0x8000000000000001U) {
    iVar1 = (uint)((int)param_4 < (int)param_2) - (uint)((int)param_2 < (int)param_4);
  }
  if (iVar2 == 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}


