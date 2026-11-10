/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ccdc0; name: FUN_004ccdc0
 */


undefined8 FUN_004ccdc0(int *param_1,int param_2)

{
  long lVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined1 *puVar4;
  void *__dest;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long local_28;
  
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: s->init_off == 0","external/openssl/ssl/statem/statem_dtls.c",
                 0x410);
  }
  lVar7 = *(long *)(param_1 + 0x26);
  puVar4 = (undefined1 *)FUN_00400260(0x68,"external/openssl/ssl/statem/statem_dtls.c",0x3e);
  if (puVar4 == (undefined1 *)0x0) {
    FUN_004014b0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x3f);
    return 0;
  }
  if (lVar7 == 0) {
    __dest = (void *)0x0;
  }
  else {
    __dest = (void *)FUN_00400260(lVar7,"external/openssl/ssl/statem/statem_dtls.c",0x44);
    if (__dest == (void *)0x0) {
      FUN_004014b0(0x14,0x26f,0x41,"external/openssl/ssl/statem/statem_dtls.c",0x45);
      uVar5 = 0x46;
      goto LAB_004ccfa4;
    }
  }
  *(void **)(puVar4 + 0x58) = __dest;
  *(undefined8 *)(puVar4 + 0x60) = 0;
  memcpy(__dest,*(void **)(*(long *)(param_1 + 0x22) + 8),*(size_t *)(param_1 + 0x26));
  lVar6 = *(long *)(param_1 + 0x2c);
  lVar7 = *(long *)(lVar6 + 0x140);
  if (param_2 == 0) {
    if (lVar7 + 0xcU != (ulong)(uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: s->d1->w_msg_hdr.msg_len + DTLS1_HM_HEADER_LENGTH == (unsigned int)s->init_num"
                   ,"external/openssl/ssl/statem/statem_dtls.c",0x422);
    }
  }
  else {
    lVar1 = 3;
    if (*param_1 != 0x100) {
      lVar1 = 1;
    }
    if (lVar1 + lVar7 != (ulong)(uint)param_1[0x26]) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: s->d1->w_msg_hdr.msg_len + ((s->version == DTLS1_BAD_VER) ? 3 : DTLS1_CCS_HEADER_LENGTH) == (unsigned int)s->init_num"
                   ,"external/openssl/ssl/statem/statem_dtls.c",0x41e);
    }
  }
  *(long *)(puVar4 + 8) = lVar7;
  uVar3 = *(ushort *)(lVar6 + 0x148);
  *(ushort *)(puVar4 + 0x10) = uVar3;
  uVar2 = *(undefined1 *)(lVar6 + 0x138);
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(long *)(puVar4 + 0x20) = lVar7;
  *(int *)(puVar4 + 0x28) = param_2;
  *puVar4 = uVar2;
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(param_1 + 0x11a);
  *(undefined8 *)(puVar4 + 0x38) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(puVar4 + 0x40) = *(undefined8 *)(param_1 + 0x116);
  *(undefined8 *)(puVar4 + 0x48) = *(undefined8 *)(param_1 + 0x142);
  param_2 = (uint)uVar3 * 2 - param_2;
  *(undefined2 *)(puVar4 + 0x50) = *(undefined2 *)(*(long *)(param_1 + 0x5ea) + 2);
  local_28 = (ulong)CONCAT11((char)param_2,(char)((uint)param_2 >> 8)) << 0x30;
  lVar7 = FUN_004f5b70(&local_28,puVar4);
  if (lVar7 != 0) {
    FUN_004f5c60(*(undefined8 *)(*(long *)(param_1 + 0x2c) + 0x120),lVar7);
    return 1;
  }
  if (*(int *)(puVar4 + 0x28) != 0) {
    FUN_0041b550(*(undefined8 *)(puVar4 + 0x30));
    FUN_00444950(*(undefined8 *)(puVar4 + 0x38));
  }
  FUN_00400420(*(undefined8 *)(puVar4 + 0x58),"external/openssl/ssl/statem/statem_dtls.c",0x67);
  FUN_00400420(*(undefined8 *)(puVar4 + 0x60),"external/openssl/ssl/statem/statem_dtls.c",0x68);
  uVar5 = 0x69;
LAB_004ccfa4:
  FUN_00400420(puVar4,"external/openssl/ssl/statem/statem_dtls.c",uVar5);
  return 0;
}


