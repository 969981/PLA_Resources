/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310fe4; name: FUN_00310fe4
 */


long FUN_00310fe4(long *param_1,void *param_2,int param_3,void *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  size_t __n;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [48];
  
  lVar2 = *param_1;
  if ((void *)(lVar2 + 0x10U) < param_4) {
    FUN_0030f640(auStack_80,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x346);
                    /* try { // try from 00311034 to 00311047 has its CatchHandler @ 00311144 */
    uVar1 = FUN_0030f3ac(auStack_80,"CHECK failed: ptr <= end_ + kSlopBytes: ");
                    /* try { // try from 00311048 to 0031104f has its CatchHandler @ 00311140 */
    FUN_0030f41c(auStack_88,uVar1);
    FUN_0030f658(auStack_80);
    lVar2 = *param_1;
  }
  lVar2 = (lVar2 - (long)param_4) + 0x10;
  if ((int)lVar2 < param_3) {
    do {
      __n = (size_t)(int)lVar2;
      memcpy(param_4,param_2,__n);
      param_4 = (void *)FUN_00310ec4(param_1,(long)param_4 + __n);
      lVar3 = *param_1;
      if ((void *)(lVar3 + 0x10U) < param_4) {
        FUN_0030f640(auStack_80,3,
                     "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                     ,0x346);
                    /* try { // try from 003110e4 to 003110f3 has its CatchHandler @ 0031114c */
        uVar1 = FUN_0030f3ac(auStack_80,"CHECK failed: ptr <= end_ + kSlopBytes: ");
                    /* try { // try from 003110f4 to 003110fb has its CatchHandler @ 00311148 */
        FUN_0030f41c(auStack_88,uVar1);
        FUN_0030f658(auStack_80);
        lVar3 = *param_1;
      }
      param_3 = param_3 - (int)lVar2;
      lVar2 = (lVar3 - (long)param_4) + 0x10;
      param_2 = (void *)((long)param_2 + __n);
    } while ((int)lVar2 < param_3);
  }
  memcpy(param_4,param_2,(long)param_3);
  return (long)param_4 + (long)param_3;
}


