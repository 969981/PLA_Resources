/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f95c; name: FUN_0030f95c
 */


void FUN_0030f95c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  FUN_0030f640(auStack_40,2,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
               ,0xc1);
                    /* try { // try from 0030f980 to 0030f9a7 has its CatchHandler @ 0030f9c8 */
  uVar1 = FUN_0030f3ac(auStack_40,
                       "A protocol message was rejected because it was too big (more than ");
  uVar1 = FUN_0030f52c(uVar1,*(undefined4 *)(param_1 + 0x30));
  uVar1 = FUN_0030f3ac(uVar1,
                       " bytes).  To increase the limit (or to disable these warnings), see CodedInputStream::SetTotalBytesLimit() in third_party/protobuf/src/google/protobuf/io/coded_stream.h."
                      );
                    /* try { // try from 0030f9a8 to 0030f9af has its CatchHandler @ 0030f9c4 */
  FUN_0030f41c(auStack_48,uVar1);
  FUN_0030f658(auStack_40);
  return;
}


