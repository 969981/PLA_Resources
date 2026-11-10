/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003261cc; name: FUN_003261cc
 */


void FUN_003261cc(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *__dest;
  void *__src;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [48];
  
  if (param_2 == param_1) {
    FUN_0030f640(auStack_50,3,
                 "external/com_google_grpc_base/third_party/protobuf/src\\google/protobuf/repeated_field.h"
                 ,0x57b);
                    /* try { // try from 00326200 to 00326213 has its CatchHandler @ 00326288 */
    uVar2 = FUN_0030f3ac(auStack_50,"CHECK failed: (&other) != (this): ");
                    /* try { // try from 00326214 to 0032621b has its CatchHandler @ 00326284 */
    FUN_0030f41c(auStack_58,uVar2);
    FUN_0030f658(auStack_50);
  }
  if (*param_2 != 0) {
    iVar1 = *param_1;
    FUN_00325870(param_1,iVar1 + *param_2);
    FUN_00325b60(param_1,*param_2);
    __dest = (void *)FUN_00325c18(param_1,iVar1);
    __src = (void *)FUN_00325d58(param_2,0);
    memcpy(__dest,__src,(long)*param_2);
  }
  return;
}


