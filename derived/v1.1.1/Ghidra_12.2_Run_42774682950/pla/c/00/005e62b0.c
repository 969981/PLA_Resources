/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005e62b0; name: FUN_005e62b0
 */


byte FUN_005e62b0(undefined8 *param_1,code *param_2,long param_3)

{
  undefined8 *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  size_t sVar6;
  ulong uVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  char *__s;
  byte bVar12;
  long lVar13;
  ulong uVar14;
  undefined8 local_2b0;
  undefined1 auStack_2a8 [136];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  long *local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined1 auStack_198 [8];
  long local_190;
  ulong local_188;
  long *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (*(char *)param_1[1] == '\0') {
    __s = (char *)param_1[2];
    sVar6 = strlen(__s);
    FUN_002f2d10(&local_70,__s,sVar6,&LAB_005e6580);
    FUN_00305000(auStack_198);
    uStack_1b8 = uStack_68;
    local_1c0 = local_70;
    uStack_1a8 = uStack_58;
    uStack_1b0 = uStack_60;
    FUN_00304b80(&local_1c0,&DAT_038ee629,auStack_198);
    if (local_188 == 0) {
      bVar12 = 0;
    }
    else {
      lVar13 = 0;
      bVar12 = 0;
      uVar14 = 1;
      if (param_3 == 0) {
        do {
          uStack_1f8 = param_1[1];
          local_200 = *param_1;
          uStack_1e8 = param_1[3];
          local_1f0 = (void *)param_1[2];
          puVar1 = (undefined8 *)(local_190 + lVar13);
          uStack_1d8 = param_1[5];
          local_1e0 = param_1[4];
          uStack_1c8 = param_1[7];
          uStack_1d0 = param_1[6];
          uStack_218 = puVar1[1];
          local_220 = *puVar1;
          uStack_208 = puVar1[3];
          uStack_210 = puVar1[2];
          pvVar8 = (void *)FUN_002f2680(&local_220);
                    /* try { // try from 005e6454 to 005e645f has its CatchHandler @ 005e654c */
          local_1f0 = pvVar8;
          bVar5 = (*param_2)(&local_200,auStack_2a8);
          if (pvVar8 != (void *)0x0) {
                    /* try { // try from 005e6468 to 005e646f has its CatchHandler @ 005e653c */
            free(pvVar8);
          }
          bVar12 = bVar12 | bVar5 ^ 1;
          bVar4 = uVar14 < local_188;
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x20;
        } while ((bVar5 & bVar4) != 0);
      }
      else {
        do {
          uStack_1f8 = param_1[1];
          local_200 = *param_1;
          uStack_1e8 = param_1[3];
          local_1f0 = (void *)param_1[2];
          puVar1 = (undefined8 *)(local_190 + lVar13);
          uStack_1d8 = param_1[5];
          local_1e0 = param_1[4];
          uStack_1c8 = param_1[7];
          uStack_1d0 = param_1[6];
          uStack_218 = puVar1[1];
          local_220 = *puVar1;
          uStack_208 = puVar1[3];
          uStack_210 = puVar1[2];
          pvVar8 = (void *)FUN_002f2680(&local_220);
                    /* try { // try from 005e63b8 to 005e63c3 has its CatchHandler @ 005e655c */
          local_1f0 = pvVar8;
          uVar7 = (*param_2)(&local_200,auStack_2a8);
          bVar4 = (uVar7 & 1) == 0;
          if (bVar4) {
            bVar12 = 1;
          }
          else {
            local_2b0 = 0;
                    /* try { // try from 005e63cc to 005e63db has its CatchHandler @ 005e6540 */
            FUN_005c5728(param_3,auStack_2a8,&local_2b0);
          }
          if (pvVar8 != (void *)0x0) {
                    /* try { // try from 005e63f4 to 005e63fb has its CatchHandler @ 005e6558 */
            free(pvVar8);
          }
          bVar3 = uVar14 < local_188;
          uVar14 = uVar14 + 1;
          lVar13 = lVar13 + 0x20;
        } while (!bVar4 && bVar3);
      }
    }
    FUN_00305020(auStack_198);
    if ((local_70 != (long *)0x0) && (plVar9 = (long *)*local_70, plVar9 != (long *)0x0)) {
      plVar10 = plVar9 + 1;
      lVar13 = *plVar9;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar4) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar13 + 8),plVar9,lVar11);
      }
      if (lVar11 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
        (*(code *)local_70[3])(local_70[4]);
      }
    }
    bVar12 = bVar12 ^ 1;
  }
  else {
    FUN_002ebea0("external/com_google_grpc_base/src/core/ext/filters/client_channel/resolver/sockaddr/sockaddr_resolver.cc"
                 ,0x57,2,"authority-based URIs not supported by the %s scheme",*param_1);
    bVar12 = 0;
  }
  return bVar12 & 1;
}


