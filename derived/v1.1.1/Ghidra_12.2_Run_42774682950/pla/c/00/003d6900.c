/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d6900; name: FUN_003d6900
 */


undefined8 * FUN_003d6900(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x110);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)(puVar1 + 0x10) = 0;
    *(undefined1 *)(puVar1 + 0x17) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
    puVar1[0x12] = 0;
    puVar1[0x11] = 0;
    puVar1[0x19] = 0;
    puVar1[0x18] = 0;
    puVar1[0x14] = 0;
    puVar1[0x13] = 0;
    puVar1[0x16] = 0;
    puVar1[0x15] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x1e] = 0;
    puVar1[0x21] = 0;
    puVar1[0x20] = 0;
    puVar1[0x1b] = 0;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = 0;
    puVar1[0x1c] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
  }
  *(undefined2 *)(puVar1 + 4) = 0;
  puVar1[1] = &LAB_003d69a0;
  puVar1[5] = "external/com_google_grpc_base/src/core/lib/transport/transport.cc";
  *(undefined4 *)(puVar1 + 6) = 0xe6;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[2] = puVar1;
  puVar1[3] = 0;
  puVar1[9] = param_1;
  puVar1[10] = puVar1;
  return puVar1 + 10;
}


