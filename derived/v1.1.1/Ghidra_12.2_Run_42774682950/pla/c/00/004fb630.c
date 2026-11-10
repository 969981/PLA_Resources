/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004fb630; name: FUN_004fb630
 */


void FUN_004fb630(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  char *local_50;
  undefined4 local_48;
  long local_40;
  long lStack_38;
  long lStack_30;
  long lStack_28;
  ulong local_18;
  
  local_18 = param_2;
  if (param_2 == 0) {
    lVar3 = *param_1;
    uVar2 = param_1[1];
    if (uVar2 < *(ulong *)(lVar3 + 0x28) >> 1) {
      param_1[1] = uVar2 + 1;
      if (*(ulong *)(lVar3 + 0x28) >> 1 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("i < size()","external/com_google_absl\\absl/container/inlined_vector.h",0x13e
                      ,"operator[]");
      }
      if ((*(ulong *)(lVar3 + 0x28) & 1) == 0) {
        lVar3 = lVar3 + 0x30;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x30);
      }
      lStack_38 = param_1[4];
      local_40 = param_1[3];
      lStack_28 = param_1[6];
      lStack_30 = param_1[5];
      plVar1 = *(long **)(lVar3 + uVar2 * 8);
      uVar2 = (**(code **)(*plVar1 + 0x10))
                        (plVar1,param_1[2],&local_40,param_1[7],param_1 + 9,&local_18);
      if ((uVar2 & 1) == 0) {
        return;
      }
      FUN_004fb630(param_1,local_18);
      if (local_18 < 5) {
        return;
      }
      FUN_002f0430(local_18,
                   "external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                   ,0x50);
      return;
    }
  }
  local_50 = 
  "external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
  ;
  local_48 = 0x56;
  lVar3 = param_1[8];
  if (4 < param_2) {
    param_2 = FUN_002f03c0(param_2,
                           "external/com_google_grpc_base/src/core/lib/security/credentials/composite/composite_credentials.cc"
                           ,0x57);
  }
  FUN_002f019c(&local_50,lVar3,param_2);
  FUN_002e2ea0(PTR_LAB_04373088,param_1);
  return;
}


