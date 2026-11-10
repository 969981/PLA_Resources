/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00534b10; name: FUN_00534b10
 */


void FUN_00534b10(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((*(byte *)(param_2 + 0x10) >> 6 & 1) == 0) {
    if ((*(byte *)(param_2 + 0x10) >> 5 & 1) != 0) {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x80);
      *(undefined1 **)(lVar1 + 0xa0) = &LAB_00535160;
      *(long *)(lVar1 + 0xa8) = lVar1;
      *(char **)(lVar1 + 0xc0) =
           "external/com_google_grpc_base/src/core/ext/filters/deadline/deadline_filter.cc";
      *(undefined4 *)(lVar1 + 200) = 0x94;
      *(undefined8 *)(lVar1 + 0xe0) = uVar2;
      *(undefined8 *)(lVar1 + 0xb0) = 0;
      *(undefined2 *)(lVar1 + 0xb8) = 0;
      *(undefined8 *)(lVar1 + 0xd0) = 0;
      *(undefined4 *)(lVar1 + 0xd8) = 0;
      *(long *)(*(long *)(param_2 + 8) + 0x80) = lVar1 + 0x98;
    }
  }
  else if (*(int *)(lVar1 + 0x10) == 1) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
    FUN_002f5c80(lVar1 + 0x18);
    return;
  }
  return;
}


