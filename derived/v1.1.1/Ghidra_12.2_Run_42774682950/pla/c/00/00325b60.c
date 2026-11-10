/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00325b60; name: FUN_00325b60
 */


long FUN_00325b60(int *param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  iVar2 = *param_1;
  if (param_1[1] - iVar2 < param_2) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x4f9);
                    /* try { // try from 00325b9c to 00325bcb has its CatchHandler @ 00325c04 */
    uVar1 = FUN_0030f3ac(auStack_50,"CHECK failed: (total_size_ - current_size_) >= (n): ");
    uVar1 = FUN_0030f52c(uVar1,param_1[1]);
    uVar1 = FUN_0030f3ac(uVar1,&DAT_0398d5c8);
    uVar1 = FUN_0030f52c(uVar1,*param_1);
                    /* try { // try from 00325bcc to 00325bd3 has its CatchHandler @ 00325c00 */
    FUN_0030f41c(auStack_18,uVar1);
    FUN_0030f658(auStack_50);
    iVar2 = *param_1;
  }
  *param_1 = iVar2 + param_2;
  return *(long *)(param_1 + 2) + (long)iVar2;
}


