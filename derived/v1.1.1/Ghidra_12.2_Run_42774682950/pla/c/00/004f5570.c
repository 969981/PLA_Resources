/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004f5570; name: FUN_004f5570
 */


undefined4 FUN_004f5570(long param_1,undefined4 *param_2,long param_3,int param_4)

{
  undefined8 *puVar1;
  void *__src;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  size_t __n;
  uint uVar9;
  undefined8 uVar10;
  undefined1 auStack_b0 [48];
  int local_80;
  int local_7c;
  long local_78;
  undefined1 auStack_70 [16];
  undefined1 auStack_58 [8];
  
  if (param_3 != 1) {
    uVar4 = 0x29;
    goto LAB_004f561c;
  }
  lVar7 = 0x468;
  if (param_4 == 0) {
    lVar7 = 0x438;
  }
  lVar7 = *(long *)(param_1 + lVar7);
  puVar1 = (undefined8 *)(param_1 + 0x1798);
  __src = (void *)(param_1 + 0x470);
  if (param_4 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x1790);
    __src = (void *)(param_1 + 0x440);
  }
  if ((lVar7 == 0) || (param_2[1] == 0x15)) {
    memmove(*(void **)(param_2 + 8),*(void **)(param_2 + 10),*(size_t *)(param_2 + 2));
    *(undefined8 *)(param_2 + 10) = *(undefined8 *)(param_2 + 8);
    return 1;
  }
  uVar2 = FUN_0041ca80(lVar7);
  if (*(int *)(param_1 + 0x84) - 3U < 2) {
    lVar6 = *(long *)(param_1 + 0x508);
    if (((lVar6 == 0) || (*(int *)(lVar6 + 0x26c) == 0)) &&
       ((lVar6 = *(long *)(param_1 + 0x510), lVar6 == 0 || (*(int *)(lVar6 + 0x26c) == 0)))) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: s->psksession != NULL && s->psksession->ext.max_early_data > 0"
                   ,"external/openssl/ssl/record/ssl3_record_tls13.c",0x4b);
    }
    uVar5 = *(uint *)(*(long *)(lVar6 + 0x1f8) + 0x24);
    uVar9 = uVar5 & 0x3c000;
    if (uVar9 != 0) goto LAB_004f56c4;
LAB_004f5690:
    if ((uVar5 & 0x83000) == 0) {
      uVar4 = 0x70;
      goto LAB_004f561c;
    }
    uVar8 = 0x10;
    if (param_4 == 0) goto LAB_004f5710;
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: s->s3->tmp.new_cipher != NULL",
                   "external/openssl/ssl/record/ssl3_record_tls13.c",0x57);
    }
    uVar5 = *(uint *)(lVar6 + 0x24);
    uVar9 = uVar5 & 0x3c000;
    if (uVar9 == 0) goto LAB_004f5690;
LAB_004f56c4:
    uVar8 = 0x10;
    if ((uVar5 & 0x30000) != 0) {
      uVar8 = 8;
    }
    if (param_4 == 0) {
LAB_004f5710:
      if (*(ulong *)(param_2 + 2) < (uVar8 | 1)) {
        return 0;
      }
      *(ulong *)(param_2 + 2) = *(ulong *)(param_2 + 2) - uVar8;
    }
    else {
      iVar3 = FUN_0041b980(lVar7,0x11,uVar8,0);
      if (iVar3 < 1) {
        uVar4 = 0x67;
        goto LAB_004f561c;
      }
    }
  }
  if (uVar2 < 8) {
    uVar4 = 0x82;
  }
  else {
    __n = (long)(int)uVar2 - 8;
    memcpy(auStack_70,__src,__n);
    uVar4 = *(undefined8 *)((long)__src + __n);
    lVar6 = 7;
    uVar10 = *puVar1;
    *(ulong *)(auStack_70 + (long)(int)uVar2 + -8) =
         CONCAT17((byte)((ulong)uVar10 >> 0x38) ^ (byte)((ulong)uVar4 >> 0x38),
                  CONCAT16((byte)((ulong)uVar10 >> 0x30) ^ (byte)((ulong)uVar4 >> 0x30),
                           CONCAT15((byte)((ulong)uVar10 >> 0x28) ^ (byte)((ulong)uVar4 >> 0x28),
                                    CONCAT14((byte)((ulong)uVar10 >> 0x20) ^
                                             (byte)((ulong)uVar4 >> 0x20),
                                             CONCAT13((byte)((ulong)uVar10 >> 0x18) ^
                                                      (byte)((ulong)uVar4 >> 0x18),
                                                      CONCAT12((byte)((ulong)uVar10 >> 0x10) ^
                                                               (byte)((ulong)uVar4 >> 0x10),
                                                               CONCAT11((byte)((ulong)uVar10 >> 8) ^
                                                                        (byte)((ulong)uVar4 >> 8),
                                                                        (byte)uVar10 ^ (byte)uVar4))
                                                     )))));
    do {
      if (lVar6 == -1) {
        return 0xffffffff;
      }
      uVar2 = *(byte *)((long)puVar1 + lVar6) + 1;
      *(char *)((long)puVar1 + lVar6) = (char)uVar2;
      lVar6 = lVar6 + -1;
    } while (uVar2 >> 8 != 0);
    iVar3 = FUN_0041b5e0(lVar7,0,0,0,auStack_70,param_4);
    if (iVar3 < 1) {
      return 0xffffffff;
    }
    if ((param_4 == 0) &&
       (iVar3 = FUN_0041b980(lVar7,0x11,uVar8,*(long *)(param_2 + 8) + *(long *)(param_2 + 2)),
       iVar3 < 1)) {
      return 0xffffffff;
    }
    iVar3 = FUN_004cb030(auStack_b0,auStack_58,5,0);
    if (((((iVar3 == 0) || (iVar3 = FUN_004cb590(auStack_b0,param_2[1],1), iVar3 == 0)) ||
         (iVar3 = FUN_004cb590(auStack_b0,*param_2,2), iVar3 == 0)) ||
        ((iVar3 = FUN_004cb590(auStack_b0,param_2[2] + (int)uVar8,2), iVar3 == 0 ||
         (iVar3 = switchD_004bf1a8::caseD_42(auStack_b0,&local_78), iVar3 == 0)))) ||
       ((local_78 != 5 || (iVar3 = FUN_004cb3b0(auStack_b0), iVar3 == 0)))) {
      FUN_004cbb80(auStack_b0);
      return 0xffffffff;
    }
    if ((uVar9 != 0) && (iVar3 = FUN_0041ba00(lVar7,0,&local_7c,0,param_2[2]), iVar3 < 1)) {
      return 0xffffffff;
    }
    iVar3 = FUN_0041ba00(lVar7,0,&local_7c,auStack_58,5);
    if (iVar3 < 1) {
      return 0xffffffff;
    }
    iVar3 = FUN_0041ba00(lVar7,*(undefined8 *)(param_2 + 8),&local_7c,*(undefined8 *)(param_2 + 10),
                         param_2[2]);
    if (iVar3 < 1) {
      return 0xffffffff;
    }
    iVar3 = FUN_0041bcc0(lVar7,*(long *)(param_2 + 8) + (long)local_7c,&local_80);
    if (iVar3 < 1) {
      return 0xffffffff;
    }
    if (*(long *)(param_2 + 2) != (long)local_80 + (long)local_7c) {
      return 0xffffffff;
    }
    if (param_4 == 0) {
      return 1;
    }
    iVar3 = FUN_0041b980(lVar7,0x10,uVar8,*(long *)(param_2 + 8) + (long)local_80 + (long)local_7c);
    if (0 < iVar3) {
      *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + uVar8;
      return 1;
    }
    uVar4 = 0xbd;
  }
LAB_004f561c:
  FUN_004c99a0(param_1,0x50,0x261,0x44,"external/openssl/ssl/record/ssl3_record_tls13.c",uVar4);
  return 0xffffffff;
}


