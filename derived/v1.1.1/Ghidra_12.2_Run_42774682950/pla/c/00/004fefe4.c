/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fefe4; name: FUN_004fefe4
 */


void FUN_004fefe4(long *param_1,long param_2,undefined4 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  *(int *)(param_1 + 1) = (int)uVar2;
  *(undefined4 *)((long)param_1 + 0xc) = param_3;
  puVar1 = PTR_DAT_043749b8;
  param_1[2] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  if (uVar2 >> 0x20 != 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/byte_stream.cc",0x28,2,
                 "assertion failed: %s","slice_buffer->length <= UINT32_MAX");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_00305000(param_1 + 3);
  FUN_00305510(param_2,param_1 + 3);
  return;
}


