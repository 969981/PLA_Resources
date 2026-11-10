/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0031e974; name: FUN_0031e974
 */


undefined1 FUN_0031e974(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [48];
  
  lVar1 = FUN_00310e54(param_1,*(undefined8 *)(param_1 + 0x40));
  *(long *)(param_1 + 0x40) = lVar1;
  if (lVar1 == 0) {
    FUN_0030f640(auStack_40,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x426);
                    /* try { // try from 0031e9b8 to 0031e9cb has its CatchHandler @ 0031e9f0 */
    uVar2 = FUN_0030f3ac(auStack_40,"CHECK failed: cur_: ");
                    /* try { // try from 0031e9cc to 0031e9d3 has its CatchHandler @ 0031e9ec */
    FUN_0030f41c(auStack_48,uVar2);
    FUN_0030f658(auStack_40);
    return *(undefined1 *)(param_1 + 0x38);
  }
  return *(undefined1 *)(param_1 + 0x38);
}


