/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0068c9f0; name: FUN_0068c9f0
 */


void FUN_0068c9f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0030ea70(0x2df5a2,&LAB_002df5a0,
               "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/gamesync/v1/resources.pb.cc"
              );
  puVar2 = PTR_DAT_04375c18;
  puVar1 = PTR_DAT_04375c20 + 0x10;
  *(undefined4 *)(PTR_DAT_04375c18 + 0x18) = 0;
  *(undefined **)puVar2 = puVar1;
  *(undefined8 *)(puVar2 + 8) = 0;
  if (*(int *)PTR_DAT_04375c28 != 0) {
    FUN_0032d2b0(PTR_DAT_04375c28);
  }
  puVar1 = PTR_LAB_04373360;
  *(undefined **)(puVar2 + 0x10) = PTR_DAT_043730c0;
  FUN_0031f0c0(puVar1,puVar2);
  return;
}


