/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005aebc0; name: FUN_005aebc0
 */


void FUN_005aebc0(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  void *__ptr;
  void *__ptr_00;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = (undefined8 *)(param_3 & 0xfffffffffffffffc);
  uStack_48 = puVar2[1];
  local_50 = *puVar2;
  uStack_38 = puVar2[3];
  uStack_40 = puVar2[2];
  __ptr = (void *)FUN_002f2680(&local_50);
  __ptr_00 = (void *)FUN_00304ac0(puVar2 + 4,3);
  puVar1 = &DAT_0392e934;
  if (*(char *)(param_1 + 0xcf0) != '\0') {
    puVar1 = &DAT_039372b9;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/ext/transport/chttp2/transport/parsing.cc",
               0x1a4,1,"HTTP:%d:HDR:%s: %s: %s",*(undefined4 *)(param_2 + 200),puVar1,__ptr,__ptr_00
              );
  free(__ptr);
  free(__ptr_00);
  return;
}


