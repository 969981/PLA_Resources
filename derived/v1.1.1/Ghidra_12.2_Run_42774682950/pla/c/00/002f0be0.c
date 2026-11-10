/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f0be0; name: FUN_002f0be0
 */


void FUN_002f0be0(long *param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_18;
  undefined3 uStack_14;
  
  bVar2 = FUN_002f1ea0(param_1,0x10);
  lVar4 = *param_1;
  if (bVar2 == 0xff) {
    uVar3 = FUN_002f1480(param_2);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x114,2,
                 "Error %p is full, dropping error %p = %s",lVar4,param_2,uVar3);
    if (4 < param_2) {
      FUN_002f0430(param_2,"external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x116);
    }
    return;
  }
  bVar1 = *(byte *)(lVar4 + 0x2e);
  if (*(char *)(lVar4 + 0x2d) == -1) {
    if (bVar1 != 0xff) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x11a,2,
                   "assertion failed: %s","(*err)->last_err == UINT8_MAX");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(byte *)(lVar4 + 0x2e) = bVar2;
    *(byte *)(lVar4 + 0x2d) = bVar2;
  }
  else {
    if (bVar1 == 0xff) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/error.cc",0x11e,2,
                   "assertion failed: %s","(*err)->last_err != UINT8_MAX");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(byte *)(lVar4 + (ulong)bVar1 * 8 + 0x40) = bVar2;
    *(byte *)(lVar4 + 0x2e) = bVar2;
  }
  lVar4 = lVar4 + (ulong)bVar2 * 8;
  *(ulong *)(lVar4 + 0x38) = param_2;
  *(undefined1 *)(lVar4 + 0x40) = 0xff;
  *(uint *)(lVar4 + 0x44) = CONCAT31(uStack_14,local_18._3_1_);
  *(undefined4 *)(lVar4 + 0x41) = local_18;
  return;
}


