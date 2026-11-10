/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00305ca0; name: FUN_00305ca0
 */


void FUN_00305ca0(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_2 + 0x10);
  if (lVar2 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/slice/slice_buffer.cc",0x17c,2,
                 "assertion failed: %s","sb->count > 0");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar3 = *(long **)(param_2 + 8);
  lVar4 = *plVar3;
  lVar6 = plVar3[3];
  lVar5 = plVar3[2];
  param_1[1] = plVar3[1];
  *param_1 = lVar4;
  param_1[3] = lVar6;
  param_1[2] = lVar5;
  *(long **)(param_2 + 8) = plVar3 + 4;
  *(long *)(param_2 + 0x10) = lVar2 + -1;
  uVar1 = param_1[1] & 0xff;
  if (*param_1 != 0) {
    uVar1 = param_1[1];
  }
  *(ulong *)(param_2 + 0x20) = *(long *)(param_2 + 0x20) - uVar1;
  return;
}


