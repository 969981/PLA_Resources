/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d6a40; name: FUN_003d6a40
 */


long FUN_003d6a40(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_002ebd80(0x150);
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined1 **)(lVar1 + 8) = &LAB_003d6aa0;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(char **)(lVar1 + 0x28) = "external/com_google_grpc_base/src/core/lib/transport/transport.cc";
  *(undefined2 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined4 *)(lVar1 + 0x40) = 0;
  *(undefined4 *)(lVar1 + 0x30) = 0xff;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  *(long *)(lVar1 + 0x50) = lVar1;
  *(long *)(lVar1 + 0x58) = lVar1 + 0xb8;
  return lVar1 + 0x50;
}


