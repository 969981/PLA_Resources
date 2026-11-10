/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006311e0; name: FUN_006311e0
 */


void FUN_006311e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0030ea70(0x2df5a2,&LAB_002df5a0,
               "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/resources.pb.cc"
              );
  puVar2 = PTR_DAT_04375638;
  puVar1 = PTR_DAT_04375640 + 0x10;
  *(undefined4 *)(PTR_DAT_04375638 + 0x30) = 0;
  *(undefined **)puVar2 = puVar1;
  *(undefined8 *)(puVar2 + 8) = 0;
  if (*(int *)PTR_DAT_04375648 != 0) {
    FUN_0032d2b0(PTR_DAT_04375648);
  }
  puVar1 = PTR_DAT_043730c0;
  *(undefined **)(puVar2 + 0x20) = PTR_DAT_043730c0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined **)(puVar2 + 0x10) = puVar1;
  FUN_0031f0c0(PTR_LAB_04373360,puVar2);
  *(undefined **)(puVar2 + 0x28) = PTR_DAT_04375650;
  return;
}


