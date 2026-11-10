/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00311160; name: FUN_00311160
 */


long * FUN_00311160(long *param_1,void *param_2,int param_3,long *param_4)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  size_t __n;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  lVar4 = *param_1;
  if ((long *)(lVar4 + 0x10U) < param_4) {
    FUN_0030f640(auStack_60,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/io/coded_stream.h"
                 ,0x346);
                    /* try { // try from 003111a8 to 003111bb has its CatchHandler @ 003112a0 */
    uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: ptr <= end_ + kSlopBytes: ");
                    /* try { // try from 003111bc to 003111c3 has its CatchHandler @ 0031129c */
    FUN_0030f41c(auStack_68,uVar2);
    FUN_0030f658(auStack_60);
    lVar4 = *param_1;
  }
  __n = (size_t)param_3;
  if ((long)__n < (lVar4 - (long)param_4) + 0x10) {
    if (lVar4 - (long)param_4 < (long)__n) {
      param_4 = (long *)FUN_00310fe4(param_1,param_2,param_3,param_4);
    }
    else {
      memcpy(param_4,param_2,__n);
      param_4 = (long *)((long)param_4 + __n);
    }
  }
  else {
    if ((char)param_1[7] == '\0') {
      iVar1 = FUN_00310abc(param_1,param_4);
      if (iVar1 != 0) {
        (**(code **)(*(long *)param_1[6] + 0x18))((long *)param_1[6],iVar1);
      }
      param_4 = param_1 + 2;
      *param_1 = (long)param_4;
      param_1[1] = (long)param_4;
    }
    uVar3 = (**(code **)(*(long *)param_1[6] + 0x28))((long *)param_1[6],param_2,param_3);
    if ((uVar3 & 1) == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      param_4 = param_1 + 2;
      *param_1 = (long)(param_1 + 4);
    }
  }
  return param_4;
}


