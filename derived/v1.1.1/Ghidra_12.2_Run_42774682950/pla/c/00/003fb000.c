/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003fb000; name: FUN_003fb000
 */


int FUN_003fb000(undefined8 *param_1,undefined8 *param_2)

{
  long *plVar1;
  long *plVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  char *pcVar16;
  undefined8 *puVar17;
  
  FUN_002ef9f0(&DAT_0439cd88,&LAB_003fb510);
  if ((param_2 == (undefined8 *)0x0) || ((*param_2 = 0, param_1[1] == 0 && (param_1[2] == 0)))) {
    return 2;
  }
  FUN_004dbe50();
  lVar8 = FUN_004c44d0();
  if (lVar8 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x388,1,
                 "Invalid nullptr argument to |tsi_set_min_and_max_tls_versions|.");
    return 2;
  }
  FUN_004c3c10(lVar8,0x7b,0x303,0);
  FUN_004c3c10(lVar8,0x7c,0x303,0);
  plVar9 = (long *)FUN_002ebd80(0x30);
  if (plVar9 == (long *)0x0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x49d,2,
                 "assertion failed: %s","factory != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *plVar9 = (long)&DAT_0439cd90;
  plVar1 = plVar9 + 1;
  FUN_002ef5c0(plVar1,1);
  *plVar9 = (long)&PTR_FUN_04157618;
  plVar9[2] = lVar8;
  lVar15 = param_1[6];
  if (lVar15 != 0) {
    plVar2 = (long *)(lVar15 + 0x10);
    do {
      lVar12 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar13 = *(long *)(lVar15 + 8);
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x10) != '\0')) {
      FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0x5c,1,
                   "%s:%p ref %ld -> %ld",*(undefined8 *)(lVar13 + 8),(long *)(lVar15 + 8),lVar12,
                   lVar12 + 1);
    }
    puVar17 = (undefined8 *)plVar9[5];
    if (puVar17 != (undefined8 *)0x0) {
      lVar12 = puVar17[1];
      plVar2 = puVar17 + 2;
      do {
        lVar13 = *plVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *plVar2 = lVar13 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if ((lVar12 != 0) && (*(char *)(lVar12 + 0x10) != '\0')) {
                    /* try { // try from 003fb14c to 003fb16b has its CatchHandler @ 003fb454 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar12 + 8),puVar17 + 1,lVar13);
      }
      if (lVar13 < 1) {
                    /* try { // try from 003fb404 to 003fb42b has its CatchHandler @ 003fb454 */
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar13 == 1) {
        (**(code **)*puVar17)(puVar17);
        FUN_002e2ea0(PTR_LAB_04373088,puVar17);
      }
    }
    plVar9[5] = lVar15;
    FUN_004c5090(lVar8,DAT_04157610,plVar9);
    FUN_00400090(lVar8,&LAB_003fb5a0);
    FUN_004c3c10(lVar8,0x2c,1,0);
  }
  iVar6 = FUN_003fb640(lVar8,*param_1,param_1[3]);
  if (iVar6 != 0) {
    iVar7 = FUN_002ef660(plVar1);
    goto joined_r0x003fb2d0;
  }
  if ((undefined8 *)param_1[2] == (undefined8 *)0x0) {
LAB_003fb268:
    pcVar16 = (char *)param_1[1];
    sVar10 = strlen(pcVar16);
    uVar11 = FUN_004c50b0(lVar8);
    FUN_0046bbd0(uVar11,0x88000);
    iVar6 = FUN_003fa980(uVar11,pcVar16,sVar10,0);
    if (iVar6 == 0) goto LAB_003fb2d8;
    pcVar16 = "Cannot load server root certificates.";
    uVar11 = 0x7aa;
  }
  else {
    FUN_0046ad60(*(undefined8 *)param_1[2]);
    FUN_004c50c0(lVar8,*(undefined8 *)param_1[2]);
    if (param_1[2] == 0) goto LAB_003fb268;
LAB_003fb2d8:
    if (param_1[5] == 0) {
LAB_003fb384:
      puVar3 = &LAB_003fbb30;
      if (*(char *)(param_1 + 7) != '\0') {
        puVar3 = &LAB_003fbb20;
      }
      FUN_004c48d0(lVar8,1,puVar3);
      *param_2 = plVar9;
      return 0;
    }
    iVar6 = FUN_003fb930(param_1[4],param_1[5],plVar9 + 3,plVar9 + 4);
    if (iVar6 != 0) {
      uVar11 = FUN_003f47f0();
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x7b4,2,
                   "Building alpn list failed with error %s.",uVar11);
      iVar7 = FUN_002ef660(plVar1);
      goto joined_r0x003fb2d0;
    }
    if (0xfffffffe < (ulong)plVar9[4]) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",0x7b9,2,
                   "assertion failed: %s","impl->alpn_protocol_list_length < UINT_MAX");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    iVar6 = FUN_004c4400(lVar8,plVar9[3]);
    if (iVar6 == 0) {
      FUN_004c43f0(lVar8,&LAB_003fba50,plVar9);
      goto LAB_003fb384;
    }
    pcVar16 = "Could not set alpn protocol list to context.";
    uVar11 = 0x7bd;
    iVar6 = 2;
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/ssl_transport_security.cc",uVar11,2,
               pcVar16);
  iVar7 = FUN_002ef660(plVar1);
joined_r0x003fb2d0:
  if (((iVar7 != 0) && ((undefined8 *)*plVar9 != (undefined8 *)0x0)) &&
     (pcVar14 = *(code **)*plVar9, pcVar14 != (code *)0x0)) {
    (*pcVar14)(plVar9);
  }
  return iVar6;
}


