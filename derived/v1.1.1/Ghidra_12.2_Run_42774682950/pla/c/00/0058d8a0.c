/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058d8a0; name: FUN_0058d8a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0058d8a0(long param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  long *plVar3;
  void *__dest;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  long in_x6;
  long in_x7;
  long *plVar7;
  char *local_50;
  undefined4 local_48;
  
  if ((param_1 == 0) || (in_x6 == 0)) {
    pcVar6 = "Invalid arguments to handshaker_next()";
    uVar4 = 0x1e5;
    iVar2 = 2;
LAB_0058d928:
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                 ,uVar4,2,pcVar6);
  }
  else {
    lVar5 = param_1 + 0x68;
    FUN_002ef750(lVar5);
    if (*(char *)(param_1 + 0x90) != '\0') {
                    /* try { // try from 0058d8e4 to 0058d8ff has its CatchHandler @ 0058da98 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                   ,0x1ed,2,"TSI handshake shutdown");
                    /* try { // try from 0058d900 to 0058d907 has its CatchHandler @ 0058da94 */
      FUN_002ef790(lVar5);
      return 0xe;
    }
                    /* try { // try from 0058d94c to 0058d953 has its CatchHandler @ 0058da90 */
    FUN_002ef790(lVar5);
    if ((*(long *)(param_1 + 0x58) == 0) && (*(char *)(param_1 + 0x60) == '\0')) {
      plVar3 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x70);
      lVar5 = _DAT_00000008;
      if (plVar3 == (long *)0x0) {
        _DAT_00000008 = 0;
        sVar1 = param_3;
        lRam0000000000000000 = param_1;
        if (lVar5 != 0) {
          FUN_002e2ea0(PTR_LAB_04373088);
          sVar1 = param_3;
        }
      }
      else {
        *plVar3 = param_1;
        plVar3[0xb] = 0;
        plVar3[10] = 0;
        plVar3[0xd] = 0;
        plVar3[0xc] = 0;
        plVar3[7] = 0;
        plVar3[6] = 0;
        plVar3[9] = 0;
        plVar3[8] = 0;
        plVar3[3] = 0;
        plVar3[2] = 0;
        plVar3[5] = 0;
        plVar3[4] = 0;
        plVar3[1] = 0;
        plVar3[2] = param_3;
        sVar1 = _DAT_00000010;
      }
      _DAT_00000010 = sVar1;
      if (param_3 != 0) {
        plVar7 = plVar3 + 1;
        __dest = (void *)FUN_002ebd80(param_3);
        lVar5 = *plVar7;
        *plVar7 = (long)__dest;
        if (lVar5 != 0) {
          FUN_002e2ea0(PTR_LAB_04373088);
          __dest = (void *)*plVar7;
        }
        memcpy(__dest,param_2,param_3);
      }
      plVar3[8] = 0;
      plVar3[6] = (long)&LAB_0058dab0;
      plVar3[7] = (long)plVar3;
      plVar3[3] = in_x6;
      plVar3[4] = in_x7;
      *(undefined2 *)(plVar3 + 9) = 0;
      plVar3[0xc] = 0;
      *(undefined4 *)(plVar3 + 0xd) = 0;
      plVar3[10] = (long)
                   "external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
      ;
      *(undefined4 *)(plVar3 + 0xb) = 0x1ff;
      local_50 = "external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
      ;
      local_48 = 0x205;
      FUN_002f019c(&local_50,plVar3 + 5,0);
    }
    else {
      iVar2 = FUN_0058db60(param_1,param_2,param_3,in_x6,in_x7);
      if (iVar2 != 0) {
        pcVar6 = "Failed to schedule ALTS handshaker requests";
        uVar4 = 0x20a;
        goto LAB_0058d928;
      }
    }
    iVar2 = 0xd;
  }
  return iVar2;
}


