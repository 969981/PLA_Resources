/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00590730; name: FUN_00590730
 */


void FUN_00590730(long param_1,ulong param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  long lVar9;
  size_t __n;
  void *pvVar10;
  size_t __n_00;
  int *piVar11;
  undefined8 uVar12;
  undefined8 local_48;
  
  if (param_1 == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0xc5,2,"assertion failed: %s","c != nullptr");
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0xcd,2,"client->cb is nullptr in alts_tsi_handshaker_handle_response()");
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    pcVar8 = "handshaker is nullptr in alts_tsi_handshaker_handle_response()";
    uVar12 = 0xd2;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x78);
    iVar2 = *(int *)(param_1 + 0x80);
    uVar4 = FUN_0058cd90();
    if ((uVar4 & 1) != 0) {
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                   ,0xd9,2,"TSI handshake shutdown");
      puVar5 = (undefined4 *)FUN_002ebd80(0x20);
      uVar3 = 0xe;
      goto LAB_005908cc;
    }
    if ((iVar2 == 0) && ((param_2 & 1) != 0)) {
      if (lVar9 != 0) {
        lVar6 = FUN_0053f520(0,0,PTR_PTR_04374c10);
                    /* try { // try from 0059080c to 00590823 has its CatchHandler @ 00590b0c */
        puVar5 = (undefined4 *)FUN_00592430(lVar9,lVar6);
        FUN_003c8500(*(undefined8 *)(param_1 + 0x78));
        *(undefined8 *)(param_1 + 0x78) = 0;
        if (puVar5 == (undefined4 *)0x0) {
                    /* try { // try from 005908f8 to 0059093b has its CatchHandler @ 00590b0c */
          FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                       ,0xf0,2,"alts_tsi_utils_deserialize_response() failed");
          puVar5 = (undefined4 *)FUN_002ebd80(0x20);
          *(undefined8 *)(puVar5 + 2) = 0;
          *puVar5 = 8;
          *(undefined8 *)(puVar5 + 4) = 0;
          *(undefined8 *)(puVar5 + 6) = 0;
          FUN_005912b0(param_1,0,puVar5);
        }
        else {
          piVar11 = *(int **)(puVar5 + 8);
          if (piVar11 == (int *)0x0) {
                    /* try { // try from 00590940 to 00590983 has its CatchHandler @ 00590ae8 */
            FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                         ,0xf7,2,"No status in HandshakerResp");
            puVar5 = (undefined4 *)FUN_002ebd80(0x20);
            *(undefined8 *)(puVar5 + 2) = 0;
            *puVar5 = 8;
            *(undefined8 *)(puVar5 + 4) = 0;
            *(undefined8 *)(puVar5 + 6) = 0;
            FUN_005912b0(param_1,0,puVar5);
          }
          else {
            __n = *(size_t *)(puVar5 + 4);
            if (__n == 0) {
              uVar12 = 0;
              lVar9 = *(long *)(puVar5 + 6);
            }
            else {
              pvVar10 = *(void **)(puVar5 + 2);
              pvVar7 = *(void **)(param_1 + 0x100);
              uVar4 = *(ulong *)(param_1 + 0x108);
              while (uVar4 < __n) {
                *(ulong *)(param_1 + 0x108) = uVar4 << 1;
                    /* try { // try from 00590854 to 00590857 has its CatchHandler @ 00590b18 */
                pvVar7 = (void *)FUN_002ebdc0();
                *(void **)(param_1 + 0x100) = pvVar7;
                uVar4 = *(ulong *)(param_1 + 0x108);
              }
              memcpy(pvVar7,pvVar10,__n);
              uVar12 = *(undefined8 *)(param_1 + 0x100);
              lVar9 = *(long *)(puVar5 + 6);
            }
            local_48 = 0;
            if (lVar9 != 0) {
              local_48 = 0;
                    /* try { // try from 0059099c to 00590a03 has its CatchHandler @ 00590b00 */
              iVar2 = FUN_0058ca10(puVar5,*(undefined1 *)(param_1 + 0xd8),&local_48);
              if (iVar2 != 0) {
                FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                             ,0x10d,2,"alts_tsi_handshaker_result_create() failed");
                piVar11 = (int *)FUN_002ebd80(0x20);
                *piVar11 = iVar2;
                piVar11[2] = 0;
                piVar11[3] = 0;
                piVar11[4] = 0;
                piVar11[5] = 0;
                piVar11[6] = 0;
                piVar11[7] = 0;
                FUN_005912b0(param_1,0,piVar11);
                goto LAB_00590a8c;
              }
              FUN_0058cf30(local_48,param_1 + 0xe0,*puVar5);
            }
            iVar2 = *piVar11;
            if ((iVar2 != 0) && (__n_00 = *(size_t *)(piVar11 + 4), __n_00 != 0)) {
              pvVar10 = *(void **)(piVar11 + 2);
                    /* try { // try from 00590a1c to 00590a1f has its CatchHandler @ 00590ad8 */
              pvVar7 = (void *)FUN_002ebd80(__n_00 + 1);
              memcpy(pvVar7,pvVar10,__n_00);
                    /* try { // try from 00590a30 to 00590a57 has its CatchHandler @ 00590ad8 */
              FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                           ,0x11c,2,"Error from handshaker service:%s",pvVar7);
              free(pvVar7);
            }
                    /* try { // try from 00590a58 to 00590a8b has its CatchHandler @ 00590af4 */
            uVar3 = FUN_005923e0(iVar2);
            uVar1 = local_48;
            puVar5 = (undefined4 *)FUN_002ebd80(0x20);
            *puVar5 = uVar3;
            *(undefined8 *)(puVar5 + 6) = uVar1;
            *(undefined8 *)(puVar5 + 2) = uVar12;
            *(size_t *)(puVar5 + 4) = __n;
            FUN_005912b0(param_1,0,puVar5);
          }
        }
LAB_00590a8c:
        if (lVar6 != 0) {
                    /* try { // try from 00590a90 to 00590a97 has its CatchHandler @ 00590ae4 */
          FUN_0053f5f0(lVar6);
        }
        return;
      }
      pcVar8 = "recv_buffer is nullptr in alts_tsi_handshaker_handle_response()";
      uVar12 = 0xe4;
    }
    else {
      pcVar8 = "grpc call made to handshaker service failed";
      uVar12 = 0xdf;
    }
  }
  FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
               ,uVar12,2,pcVar8);
  puVar5 = (undefined4 *)FUN_002ebd80(0x20);
  uVar3 = 7;
LAB_005908cc:
  *puVar5 = uVar3;
  *(undefined8 *)(puVar5 + 2) = 0;
  *(undefined8 *)(puVar5 + 4) = 0;
  *(undefined8 *)(puVar5 + 6) = 0;
  FUN_005912b0(param_1,0,puVar5);
  return;
}


