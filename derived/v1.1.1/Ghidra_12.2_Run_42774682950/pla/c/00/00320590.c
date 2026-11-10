/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00320590; name: FUN_00320590
 */


undefined1 * FUN_00320590(ulong param_1)

{
  undefined2 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_1 >> 0x20 == 0) {
    puVar4 = (undefined1 *)FUN_003203e0(param_1 & 0xffffffff);
    return puVar4;
  }
  puVar5 = (undefined2 *)FUN_00320590(param_1 / 1000000000);
  uVar7 = (uint)(param_1 % 1000000000);
  if (999999999 < uVar7) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
                 ,0x432);
                    /* try { // try from 00320618 to 0032062b has its CatchHandler @ 003206f8 */
    uVar6 = FUN_0030f3ac(auStack_50,"CHECK failed: (digits) < (100): ");
                    /* try { // try from 0032062c to 00320633 has its CatchHandler @ 003206f4 */
    FUN_0030f41c(auStack_58,uVar6);
    FUN_0030f658(auStack_50);
  }
  uVar3 = (param_1 % 1000000000) / 10000000;
  uVar7 = uVar7 + (int)uVar3 * -10000000;
  uVar2 = uVar7 >> 5;
  *puVar5 = *(undefined2 *)(&DAT_039f9e18 + uVar3 * 2);
  uVar7 = uVar7 + (uVar2 / 0xc35) * -100000;
  puVar5[1] = *(undefined2 *)(&DAT_039f9e18 + ((ulong)uVar2 / 0xc35) * 2);
  uVar2 = uVar7 % 1000;
  puVar5[2] = *(undefined2 *)(&DAT_039f9e18 + ((ulong)uVar7 / 1000) * 2);
  uVar1 = *(undefined2 *)(&DAT_039f9e18 + ((ulong)uVar2 / 10) * 2);
  *(char *)(puVar5 + 4) = (char)(uVar2 % 10) + '0';
  puVar5[3] = uVar1;
  *(undefined1 *)((long)puVar5 + 9) = 0;
  return (undefined1 *)((long)puVar5 + 9);
}


