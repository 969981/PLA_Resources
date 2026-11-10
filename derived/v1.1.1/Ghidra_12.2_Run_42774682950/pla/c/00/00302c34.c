/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00302c34; name: FUN_00302c34
 */


void FUN_00302c34(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04373878;
  if (param_2 == 0) {
    if (param_3 < 5) {
      return;
    }
    uVar2 = 0xe9;
  }
  else {
    if (PTR_DAT_04373878[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xee,0,
                   "running closure %p: created [%s:%d]: run [%s:%d]",param_2,
                   *(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x30),*param_1,
                   *(undefined4 *)(param_1 + 1));
    }
    if (*(code **)(param_2 + 8) == (code *)0x0) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xf2,2,
                   "assertion failed: %s","closure->cb != nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(param_2 + 8))(*(undefined8 *)(param_2 + 0x10),param_3);
    if (puVar1[0x10] != '\0') {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",0xf7,0,
                   "closure %p finished",param_2);
    }
    if (param_3 < 5) {
      return;
    }
    uVar2 = 0xfa;
  }
  FUN_002f0430(param_3,"external/com_google_grpc_base\\src/core/lib/iomgr/closure.h",uVar2);
  return;
}


