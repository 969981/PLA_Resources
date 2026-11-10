/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002f45b0; name: FUN_002f45b0
 */


undefined8 * FUN_002f45b0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0xd0);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[0x17] = 0;
    puVar2[0x16] = 0;
    puVar2[0x19] = 0;
    puVar2[0x18] = 0;
    puVar2[0x13] = 0;
    puVar2[0x12] = 0;
    puVar2[0x15] = 0;
    puVar2[0x14] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[0x11] = 0;
    puVar2[0x10] = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar3 = puVar2 + 10;
    puVar2[0xb] = 0;
    *puVar3 = 0;
    puVar2[1] = puVar3;
    puVar2[9] = puVar3;
    *puVar3 = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
  }
  FUN_002ef5c0(puVar2 + 0x19,1);
  puVar2[0xc] = 1;
  puVar2[0x11] = &LAB_002f4690;
  puVar2[0x12] = puVar2;
  puVar2[0x15] = "external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc";
  puVar2[0x13] = 0;
  *(undefined2 *)(puVar2 + 0x14) = 0;
  *(undefined4 *)(puVar2 + 0x16) = 0x3c;
  puVar2[0xe] = 0;
  puVar2[0xf] = 0;
  puVar1 = PTR_DAT_043738b8;
  puVar2[0x17] = 0;
  *(undefined4 *)(puVar2 + 0x18) = 0;
  if (puVar1[0x10] != '\0') {
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/iomgr/combiner.cc",0x3d,1,"C:%p create"
                 ,puVar2);
  }
  return puVar2;
}


