/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0050d4a0; name: FUN_0050d4a0
 */


ulong * FUN_0050d4a0(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  
  if (param_2 != param_1) {
    puVar1 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      puVar1 = (ulong *)param_2[1];
    }
    FUN_0050d74c(param_1,puVar1,((long)((*param_2 >> 1) * 0x90) >> 4) * -0x71c71c71c71c71c7);
  }
  FUN_0050d104(param_1 + 0x13,param_2 + 0x13);
  if (4 < param_1[0x14]) {
    FUN_002f0430(param_1[0x14],
                 "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver.cc",
                 0x42);
  }
  uVar2 = param_2[0x14];
  if (4 < uVar2) {
    uVar2 = FUN_002f03c0(uVar2,
                         "external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver.cc"
                         ,0x43);
  }
  param_1[0x14] = uVar2;
  FUN_002e4a10(param_1[0x15]);
  uVar2 = FUN_002e45d0(param_2[0x15]);
  param_1[0x15] = uVar2;
  return param_1;
}


