/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00631160; name: FUN_00631160
 */


void FUN_00631160(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_0030ea70(0x2df5a2,&LAB_002df5a0,
               "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/resources.pb.cc"
              );
  puVar3 = PTR_DAT_04375620;
  puVar1 = PTR_DAT_04375628 + 0x10;
  *(undefined4 *)(PTR_DAT_04375620 + 0x28) = 0;
  *(undefined **)puVar3 = puVar1;
  *(undefined8 *)(puVar3 + 8) = 0;
  if (*(int *)PTR_DAT_04375630 != 0) {
    FUN_0032d2b0(PTR_DAT_04375630);
  }
  puVar2 = PTR_LAB_04373360;
  puVar1 = PTR_DAT_043730c0;
  *(undefined **)(puVar3 + 0x18) = PTR_DAT_043730c0;
  *(undefined **)(puVar3 + 0x10) = puVar1;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  FUN_0031f0c0(puVar2,puVar3);
  return;
}


