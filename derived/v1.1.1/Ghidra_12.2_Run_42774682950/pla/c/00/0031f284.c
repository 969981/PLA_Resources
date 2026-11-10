/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031f284; name: FUN_0031f284
 */


void FUN_0031f284(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/stringpiece.cc"
               ,0x31);
                    /* try { // try from 0031f2b0 to 0031f2df has its CatchHandler @ 0031f304 */
  uVar1 = FUN_0030f3ac(auStack_50,"size too big: ");
  uVar1 = FUN_0030f5e4(uVar1,param_1);
  uVar1 = FUN_0030f3ac(uVar1," details: ");
  uVar1 = FUN_0030f3ac(uVar1,param_2);
                    /* try { // try from 0031f2e0 to 0031f2e7 has its CatchHandler @ 0031f300 */
  FUN_0030f41c(auStack_18,uVar1);
  FUN_0030f658(auStack_50);
  return;
}


