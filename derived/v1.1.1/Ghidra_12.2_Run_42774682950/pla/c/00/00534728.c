/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00534728; name: FUN_00534728
 */


void FUN_00534728(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined1 *puVar1;
  char *local_30;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = param_3;
  param_1[1] = param_4;
  if (param_5 != 0x7fffffffffffffff) {
    puVar1 = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,0x60);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = param_2;
      *(long *)(puVar1 + 0x10) = param_5;
    }
    *(undefined2 *)(puVar1 + 0x38) = 0;
    *(undefined1 **)(puVar1 + 0x20) = &LAB_005347d0;
    *(undefined8 *)(puVar1 + 0x50) = 0;
    *(undefined1 **)(puVar1 + 0x28) = puVar1;
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined4 *)(puVar1 + 0x58) = 0;
    *(char **)(puVar1 + 0x40) =
         "external/com_google_grpc_base/src/core/ext/filters/deadline/deadline_filter.cc";
    *(undefined4 *)(puVar1 + 0x48) = 0xca;
    local_30 = "external/com_google_grpc_base/src/core/ext/filters/deadline/deadline_filter.cc";
    local_28 = 0xcb;
    FUN_002f019c(&local_30,puVar1 + 0x18,0);
  }
  return;
}


