/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e1980; name: FUN_004e1980
 */


long * FUN_004e1980(long *param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  
  plVar3 = (long *)FUN_004002a0(0x228,"external/openssl/ssl/ssl_cert.c",0x4c);
  if (plVar3 == (long *)0x0) {
    FUN_004014b0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x50);
    return (long *)0x0;
  }
  *(undefined4 *)(plVar3 + 0x43) = 1;
  *plVar3 = (*param_1 - (long)param_1) + (long)plVar3;
  lVar4 = FUN_004000a0();
  plVar3[0x44] = lVar4;
  if (lVar4 == 0) {
    FUN_004014b0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x58);
    FUN_00400420(plVar3,"external/openssl/ssl/ssl_cert.c",0x59);
    return (long *)0x0;
  }
  if (param_1[1] != 0) {
    plVar3[1] = param_1[1];
    FUN_004231b0();
  }
  plVar3[2] = param_1[2];
  lVar4 = 0;
  *(int *)(plVar3 + 3) = (int)param_1[3];
  lVar5 = param_1[4];
  plVar1 = param_1;
  while( true ) {
    if (lVar5 != 0) {
      *(long *)((long)plVar3 + lVar4 + 0x20) = lVar5;
      FUN_00466c20();
    }
    if (plVar1[5] != 0) {
      *(long *)((long)plVar3 + lVar4 + 0x28) = plVar1[5];
      FUN_004231b0(plVar1[5]);
    }
    if (plVar1[6] != 0) {
      lVar5 = FUN_0044eb50();
      *(long *)((long)plVar3 + lVar4 + 0x30) = lVar5;
      if (lVar5 == 0) {
        FUN_004014b0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x75);
        goto LAB_004e1c78;
      }
    }
    if (plVar1[7] != 0) {
      pvVar6 = (void *)FUN_00400260(plVar1[8],"external/openssl/ssl/ssl_cert.c",0x7c);
      *(void **)((long)plVar3 + lVar4 + 0x38) = pvVar6;
      if (pvVar6 == (void *)0x0) {
        FUN_004014b0(0x14,0xdd,0x41,"external/openssl/ssl/ssl_cert.c",0x7e);
        goto LAB_004e1c78;
      }
      *(long *)((long)plVar3 + lVar4 + 0x40) = plVar1[8];
      memcpy(pvVar6,(void *)plVar1[7],plVar1[8]);
    }
    lVar4 = lVar4 + 0x28;
    if (lVar4 == 0x168) break;
    plVar1 = (long *)((long)param_1 + lVar4);
    lVar5 = plVar1[4];
  }
  if (param_1[0x33] == 0) {
    plVar3[0x33] = 0;
    if (param_1[0x35] != 0) goto LAB_004e1b50;
LAB_004e1bbc:
    plVar3[0x35] = 0;
    plVar3[0x37] = 0;
    lVar4 = param_1[0x31];
  }
  else {
    pvVar6 = (void *)FUN_00400260(param_1[0x34] << 1,"external/openssl/ssl/ssl_cert.c",0x8a);
    plVar3[0x33] = (long)pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_004e1c78;
    memcpy(pvVar6,(void *)param_1[0x33],param_1[0x34] << 1);
    plVar3[0x34] = param_1[0x34];
    if (param_1[0x35] == 0) goto LAB_004e1bbc;
LAB_004e1b50:
    pvVar6 = (void *)FUN_00400260(param_1[0x36] << 1,"external/openssl/ssl/ssl_cert.c",0x95);
    plVar3[0x35] = (long)pvVar6;
    if (pvVar6 == (void *)0x0) goto LAB_004e1c78;
    memcpy(pvVar6,(void *)param_1[0x35],param_1[0x36] << 1);
    plVar3[0x36] = param_1[0x36];
    plVar3[0x37] = 0;
    lVar4 = param_1[0x31];
  }
  if (lVar4 != 0) {
    lVar4 = FUN_00405020(lVar4,param_1[0x32],"external/openssl/ssl/ssl_cert.c",0xa1);
    plVar3[0x31] = lVar4;
    if (lVar4 == 0) goto LAB_004e1c78;
    plVar3[0x32] = param_1[0x32];
  }
  *(undefined4 *)((long)plVar3 + 0x1c) = *(undefined4 *)((long)param_1 + 0x1c);
  lVar4 = param_1[0x39];
  plVar3[0x3a] = param_1[0x3a];
  plVar3[0x39] = lVar4;
  if (param_1[0x3c] != 0) {
    FUN_0046ad60();
    plVar3[0x3c] = param_1[0x3c];
  }
  if (param_1[0x3b] != 0) {
    FUN_0046ad60();
    plVar3[0x3b] = param_1[0x3b];
  }
  plVar3[0x3f] = param_1[0x3f];
  *(int *)(plVar3 + 0x40) = (int)param_1[0x40];
  plVar3[0x41] = param_1[0x41];
  iVar2 = FUN_004e3720(plVar3 + 0x3d,param_1 + 0x3d);
  if (iVar2 != 0) {
    if (param_1[0x42] == 0) {
      return plVar3;
    }
    lVar4 = FUN_00404f10(param_1[0x42],"external/openssl/ssl/ssl_cert.c",0xbe);
    plVar3[0x42] = lVar4;
    if (lVar4 != 0) {
      return plVar3;
    }
  }
LAB_004e1c78:
  FUN_004e1ca0(plVar3);
  return (long *)0x0;
}


