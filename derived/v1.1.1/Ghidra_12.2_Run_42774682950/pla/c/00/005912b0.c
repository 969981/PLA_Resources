/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005912b0; name: FUN_005912b0
 */


void FUN_005912b0(long param_1,byte param_2,int *param_3)

{
  byte bVar1;
  bool bVar2;
  long lVar3;
  int *__ptr;
  
  FUN_002ef750(param_1 + 0x180);
  bVar1 = *(byte *)(param_1 + 0x1a0) | param_2 & 1;
  __ptr = *(int **)(param_1 + 0x1a8);
  *(byte *)(param_1 + 0x1a0) = bVar1;
  if (param_3 == (int *)0x0) {
    if (__ptr != (int *)0x0) {
      lVar3 = *(long *)(__ptr + 6);
      goto joined_r0x0059131c;
    }
LAB_00591334:
    bVar2 = true;
  }
  else {
    if (__ptr != (int *)0x0) {
                    /* try { // try from 0059137c to 005913a3 has its CatchHandler @ 005913a4 */
      FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                   ,0x9c,2,"assertion failed: %s","client->pending_recv_message_result == nullptr");
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(int **)(param_1 + 0x1a8) = param_3;
    lVar3 = *(long *)(param_3 + 6);
    __ptr = param_3;
joined_r0x0059131c:
    if (lVar3 == 0) {
      if ((bVar1 == 0) && (*__ptr != 0)) goto LAB_00591334;
    }
    else if (bVar1 == 0) goto LAB_00591334;
    bVar2 = false;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
                    /* try { // try from 00591338 to 0059133f has its CatchHandler @ 005913bc */
  FUN_002ef790(param_1 + 0x180);
  if (bVar2) {
    return;
  }
  (**(code **)(param_1 + 0xa0))
            (*__ptr,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(__ptr + 2),
             *(undefined8 *)(__ptr + 4),*(undefined8 *)(__ptr + 6));
  free(__ptr);
  return;
}


