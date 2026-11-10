/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003218f0; name: FUN_003218f0
 */


void FUN_003218f0(byte *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_50 [48];
  undefined1 auStack_18 [8];
  
  lVar2 = *param_2;
  if ((*param_1 & 1) == 0) {
    if ((ulong)(*param_1 >> 1) < ~(ulong)param_1 + lVar2) goto LAB_00321978;
  }
  else if (*(ulong *)(param_1 + 8) < (ulong)(lVar2 - *(long *)(param_1 + 0x10))) goto LAB_00321978;
  FUN_0030f640(auStack_50,3,
               "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/stubs/strutil.cc"
               ,0x62c);
                    /* try { // try from 00321950 to 00321963 has its CatchHandler @ 00321998 */
  uVar1 = FUN_0030f3ac(auStack_50,
                       "CHECK failed: (uintptr_t((a).data() - (*result).data())) > (uintptr_t((*result).size())): "
                      );
                    /* try { // try from 00321964 to 0032196b has its CatchHandler @ 00321994 */
  FUN_0030f41c(auStack_18,uVar1);
  FUN_0030f658(auStack_50);
  lVar2 = *param_2;
LAB_00321978:
  FUN_002e4094(param_1,lVar2,param_2[1]);
  return;
}


