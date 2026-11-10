/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00631270; name: FUN_00631270
 */


void FUN_00631270(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  FUN_0030ea70(0x2df5a2,&LAB_002df5a0,
               "bazel-out/arm64-v8a-opt/bin/external/net_nintendo_npln_proto/proto/friends/v1/resources.pb.cc"
              );
  puVar3 = PTR_DAT_04375658;
  puVar2 = PTR_DAT_04375650;
  *(undefined4 *)(PTR_DAT_04375650 + 0x14) = 0;
  *(undefined2 *)(puVar2 + 0x10) = 0;
  puVar1 = PTR_LAB_04373360;
  *(undefined **)puVar2 = puVar3 + 0x10;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x12] = 0;
  FUN_0031f0c0(puVar1);
  return;
}


