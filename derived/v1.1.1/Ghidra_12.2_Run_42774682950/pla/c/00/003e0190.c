/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003e0190; name: FUN_003e0190
 */


void FUN_003e0190(long param_1,undefined8 *param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  
  param_2[0x1c] = 0x7fffffffffffffff;
  param_2[0x19] = 0;
  param_2[0x18] = 0;
  param_2[0x1b] = 0;
  param_2[0x1a] = 0;
  param_2[0x15] = 0;
  param_2[0x14] = 0;
  param_2[0x17] = 0;
  param_2[0x16] = 0;
  param_2[0x11] = 0;
  param_2[0x10] = 0;
  param_2[0x13] = 0;
  param_2[0x12] = 0;
  param_2[0xd] = 0;
  param_2[0xc] = 0;
  param_2[0xf] = 0;
  param_2[0xe] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[0xb] = 0;
  param_2[10] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[0x1c] = *(undefined8 *)(param_1 + 0xe0);
  puVar3 = *(undefined8 **)(param_1 + 0x10);
  if (puVar3 != (undefined8 *)0x0) {
    do {
      uVar1 = FUN_003e0280(*puVar3,
                           "external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",
                           0x17b);
      if (uVar1 < 4) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0xcb,2
                     ,"assertion failed: %s",
                     "!(((grpc_mdelem_data*)((elem_to_add).payload & ~(uintptr_t)3)) == 0L)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *param_3 = uVar1;
      lVar2 = FUN_003dea10(param_2,param_3);
      if (lVar2 != 0) {
        FUN_002ebea0("external/com_google_grpc_base/src/core/lib/transport/metadata_batch.cc",0x180,
                     2,"assertion failed: %s","error == ((grpc_error*)0L)");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar3 = (undefined8 *)puVar3[1];
      param_3 = param_3 + 4;
    } while (puVar3 != (undefined8 *)0x0);
  }
  return;
}


