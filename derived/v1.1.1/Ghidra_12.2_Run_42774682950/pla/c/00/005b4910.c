/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b4910; name: FUN_005b4910
 */


void FUN_005b4910(undefined8 *param_1,long *param_2,undefined8 *param_3,ulong *param_4,char *param_5
                 ,char *param_6,undefined8 param_7)

{
  byte bVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  size_t sVar9;
  void *pvVar10;
  char *pcVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong uVar17;
  undefined1 *__dest;
  long lVar18;
  ulong uVar19;
  undefined8 local_e0;
  undefined8 uStack_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  void *local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 local_74;
  
  if ((param_4 == (ulong *)0x0) || (param_5 == (char *)0x0)) {
    pcVar11 = "An ssl channel needs a config and a target name.";
    uVar14 = 0x193;
LAB_005b4978:
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                 ,uVar14,2,pcVar11);
    *param_1 = 0;
    return;
  }
  uVar15 = param_4[1];
  if (uVar15 == 0) {
    uVar15 = FUN_003f9688();
    if (uVar15 == 0) {
      pcVar11 = "Could not get default pem root certs.";
      uVar14 = 0x19d;
      goto LAB_005b4978;
    }
    uVar14 = FUN_003f96d4();
  }
  else {
    uVar14 = 0;
  }
  puVar8 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,0x78);
  if (puVar8 == (undefined8 *)0x0) goto LAB_005b4c58;
  local_b8 = (undefined8 *)*param_2;
  *param_2 = 0;
  local_c0 = (undefined8 *)*param_3;
  *param_3 = 0;
                    /* try { // try from 005b49cc to 005b49e3 has its CatchHandler @ 005b4f60 */
  FUN_003f68f4(puVar8,&DAT_038a00d4,&local_b8,&local_c0);
  puVar4 = local_c0;
  puVar3 = local_b8;
  if (local_c0 != (undefined8 *)0x0) {
    lVar12 = local_c0[1];
    plVar13 = local_c0 + 2;
    do {
      lVar18 = *plVar13;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 005b4a18 to 005b4a37 has its CatchHandler @ 005b4f24 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),local_c0 + 1,lVar18);
    }
    if (lVar18 < 1) {
                    /* try { // try from 005b4e5c to 005b4e83 has its CatchHandler @ 005b4f24 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = local_b8;
    if (lVar18 == 1) {
      (**(code **)*puVar4)(puVar4);
      FUN_002e2ea0(PTR_LAB_04373088,puVar4);
      puVar3 = local_b8;
    }
  }
  local_b8 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    lVar12 = puVar3[1];
    plVar13 = puVar3 + 2;
    do {
      lVar18 = *plVar13;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *plVar13 = lVar18 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 005b4a7c to 005b4a9b has its CatchHandler @ 005b4f20 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                   "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),puVar3 + 1,lVar18);
    }
    if (lVar18 < 1) {
                    /* try { // try from 005b4e84 to 005b4eab has its CatchHandler @ 005b4f20 */
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                   "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (lVar18 == 1) {
      (**(code **)*puVar3)(puVar3);
      FUN_002e2ea0(PTR_LAB_04373088,puVar3);
    }
  }
  *puVar8 = &PTR_FUN_0418ac48;
  pcVar11 = "";
  if (param_6 != (char *)0x0) {
    pcVar11 = param_6;
  }
  puVar16 = puVar8 + 8;
  puVar8[9] = 0;
  *puVar16 = 0;
  puVar8[0xb] = 0;
  puVar8[10] = 0;
  puVar8[0xd] = 0;
  puVar8[0xc] = 0;
  sVar9 = strlen(pcVar11);
  if (0xffffffffffffffef < sVar9) {
                    /* try { // try from 005b4e34 to 005b4e3b has its CatchHandler @ 005b4ef0 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar9 < 0x17) {
    pvVar10 = (void *)((long)puVar8 + 0x59);
    *(char *)(puVar8 + 0xb) = (char)((int)sVar9 << 1);
    if (sVar9 != 0) goto LAB_005b4b38;
  }
  else {
    uVar17 = sVar9 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = (void *)FUN_002e2e80(PTR_FUN_04373078,uVar17);
    puVar8[0xb] = uVar17 | 1;
    puVar8[0xc] = sVar9;
    puVar8[0xd] = pvVar10;
LAB_005b4b38:
    memcpy(pvVar10,pcVar11,sVar9);
  }
  *(undefined1 *)((long)pvVar10 + sVar9) = 0;
  puVar8[0xe] = param_4 + 2;
  local_d0 = (void *)0x0;
  local_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  sVar9 = strlen(param_5);
  if ((long)sVar9 < 0) {
                    /* try { // try from 005b4e3c to 005b4e5b has its CatchHandler @ 005b4f28 */
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
                    /* try { // try from 005b4b6c to 005b4b7b has its CatchHandler @ 005b4f28 */
  FUN_002fe9e0(param_5,sVar9,&local_d0,&local_e0);
  uVar17 = local_c8;
  pvVar10 = local_d0;
  if (local_d0 == (void *)0x0) {
    local_b0 = 0;
    bVar1 = (byte)*puVar16;
joined_r0x005b4bd4:
    local_a0 = (undefined1 *)0x0;
    uStack_a8 = 0;
    if ((bVar1 & 1) == 0) goto LAB_005b4bc0;
LAB_005b4c20:
    *(undefined1 *)puVar8[10] = 0;
    puVar8[9] = 0;
    if ((*(byte *)(puVar8 + 8) & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,puVar8[10]);
      puVar8[8] = 0;
    }
  }
  else {
    local_a0 = (undefined1 *)0x0;
    local_b0 = 0;
    uStack_a8 = 0;
    if (0xffffffffffffffef < local_c8) {
                    /* try { // try from 005b4eac to 005b4eb3 has its CatchHandler @ 005b4edc */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (local_c8 < 0x17) {
      local_b0 = (ulong)(byte)((int)local_c8 << 1);
      __dest = (undefined1 *)((ulong)&local_b0 | 1);
      if (local_c8 == 0) {
        *__dest = 0;
        bVar1 = (byte)*puVar16;
        goto joined_r0x005b4bd4;
      }
    }
    else {
      uVar19 = local_c8 + 0x10 & 0xfffffffffffffff0;
      __dest = (undefined1 *)FUN_002e2e80(PTR_FUN_04373078,uVar19);
      local_b0 = uVar19 | 1;
      uStack_a8 = uVar17;
      local_a0 = __dest;
    }
    memcpy(__dest,pvVar10,uVar17);
    __dest[uVar17] = 0;
    if ((*puVar16 & 1) != 0) goto LAB_005b4c20;
LAB_005b4bc0:
    *(undefined2 *)(puVar8 + 8) = 0;
  }
  puVar8[10] = local_a0;
  puVar8[9] = uStack_a8;
  *puVar16 = local_b0;
LAB_005b4c58:
  plVar13 = (long *)*param_4;
  if ((plVar13 == (long *)0x0) || (*plVar13 == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = plVar13[1] != 0;
  }
  local_74 = 0x100000000;
  local_b0 = 0;
  local_98 = 0;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_7f = 0;
  uStack_78 = 0;
  uStack_87 = 0;
  local_80 = 0;
  uStack_a8 = uVar15;
  local_a0 = (undefined1 *)uVar14;
                    /* try { // try from 005b4ca0 to 005b4d1f has its CatchHandler @ 005b50a8 */
  local_90 = (void *)FUN_003f8fe0(&uStack_88);
  if (bVar5) {
    local_b0 = *param_4;
  }
  local_98 = FUN_003f8a80();
  local_80 = (undefined1)param_7;
  uStack_7f = (undefined7)((ulong)param_7 >> 8);
  uVar6 = FUN_003f8b40((int)param_4[5]);
  local_74 = CONCAT44(local_74._4_4_,uVar6);
  uVar6 = FUN_003f8b40(*(undefined4 *)((long)param_4 + 0x2c));
  local_74 = CONCAT44(uVar6,(undefined4)local_74);
  iVar7 = FUN_003fb000(&local_b0,puVar8 + 7);
  free(local_90);
  if (iVar7 == 0) {
    *param_1 = puVar8;
  }
  else {
    uVar14 = FUN_003f47f0(iVar7);
    FUN_002ebea0("external/com_google_grpc_base/src/core/lib/security/security_connector/ssl/ssl_security_connector.cc"
                 ,0x74,2,"Handshaker factory creation failed with %s.",uVar14);
    *param_1 = 0;
    if (puVar8 != (undefined8 *)0x0) {
      lVar12 = puVar8[1];
      plVar13 = puVar8 + 2;
      do {
        lVar18 = *plVar13;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar5) {
          *plVar13 = lVar18 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 005b4d54 to 005b4d73 has its CatchHandler @ 005b4f1c */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),puVar8 + 1,lVar18);
      }
      if (lVar18 < 1) {
                    /* try { // try from 005b4eb4 to 005b4edb has its CatchHandler @ 005b4f1c */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar18 == 1) {
        (**(code **)*puVar8)(puVar8);
        FUN_002e2ea0(PTR_LAB_04373088,puVar8);
      }
    }
  }
  return;
}


