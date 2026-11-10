/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e6aa0; name: FUN_004e6aa0
 */


undefined8 FUN_004e6aa0(long param_1,uint param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  void *__dest;
  undefined8 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  long lVar10;
  char *pcVar11;
  long lVar12;
  char *pcVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 in_stack_fffffffffffffed8;
  long lVar16;
  uint local_ec;
  ulong local_e8;
  undefined1 auStack_e0 [64];
  undefined8 local_a0 [8];
  
  uVar9 = (undefined4)((ulong)in_stack_fffffffffffffed8 >> 0x20);
  local_e8 = 0;
  if ((param_2 & 1) != 0) {
    if (*(long *)(param_1 + 0x438) != 0) {
      FUN_0041b4a0();
      lVar10 = *(long *)(param_1 + 0x438);
LAB_004e6b0c:
      lVar16 = param_1 + 0x440;
      FUN_004c5cf0(param_1 + 0x7f8);
      goto joined_r0x004e6b90;
    }
    lVar10 = FUN_0041b530();
    *(long *)(param_1 + 0x438) = lVar10;
    if (lVar10 != 0) goto LAB_004e6b0c;
    uVar7 = 0x41;
    uVar15 = 0x1ba;
    goto LAB_004e70c4;
  }
  *(undefined4 *)(param_1 + 0x7c) = 1;
  if (*(long *)(param_1 + 0x468) == 0) {
    lVar10 = FUN_0041b530();
    *(long *)(param_1 + 0x468) = lVar10;
    if (lVar10 == 0) {
      uVar7 = 0x41;
      uVar15 = 0x1ca;
      goto LAB_004e70c4;
    }
  }
  else {
    FUN_0041b4a0();
    lVar10 = *(long *)(param_1 + 0x468);
  }
  lVar16 = param_1 + 0x470;
  FUN_004c5d00(param_1 + 0x7f8);
joined_r0x004e6b90:
  if ((((param_2 ^ 0xffffffff) & 0x12) == 0) || (((param_2 >> 5 & 1) != 0 && ((param_2 & 1) != 0))))
  {
    if ((param_2 >> 6 & 1) == 0) {
      if ((param_2 >> 7 & 1) != 0) {
        lVar4 = param_1 + 0x174;
        lVar12 = param_1 + 0x234;
        FUN_004bda70(param_1);
        iVar3 = FUN_0041ccc0();
        puVar1 = (undefined1 *)(param_1 + 0x2f4);
        lVar14 = (long)iVar3;
        pcVar11 = "c hs traffic";
        pcVar13 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
        goto joined_r0x004e6d90;
      }
      lVar4 = param_1 + 0x1b4;
      puVar1 = (undefined1 *)(param_1 + 0x2b4);
      lVar12 = 0;
      lVar14 = 0;
      pcVar11 = "c ap traffic";
      pcVar13 = "CLIENT_TRAFFIC_SECRET_0";
      goto joined_r0x004e6bd0;
    }
    lVar4 = FUN_003ffee0(*(undefined8 *)(param_1 + 0x508));
    lVar12 = FUN_00404920(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,local_a0);
    if (lVar12 < 1) {
      uVar7 = 0x14c;
      uVar15 = 0x1e6;
    }
    else {
      if (((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x17d8) != 0)) &&
         (*(int *)(*(long *)(param_1 + 0x508) + 0x26c) == 0)) {
        if ((*(long *)(param_1 + 0x510) == 0) ||
           (*(int *)(param_1 + 0x17d8) != *(int *)(*(long *)(param_1 + 0x510) + 0x26c))) {
                    /* WARNING: Subroutine does not return */
          FUN_00404dd0("Assertion failed: s->psksession != NULL && s->max_early_data == s->psksession->ext.max_early_data"
                       ,"external/openssl/ssl/tls13_enc.c",500);
        }
        lVar4 = FUN_003ffee0();
      }
      if (lVar4 == 0) {
        uVar7 = 0xdb;
        uVar15 = 0x1fe;
      }
      else {
        lVar14 = FUN_00444930();
        if (lVar14 != 0) {
          FUN_004bf750(lVar4);
          FUN_00407d80();
          uVar7 = FUN_00446500();
          lVar5 = FUN_004bda40(*(undefined4 *)(lVar4 + 0x40));
          if (((lVar5 == 0) || (iVar3 = FUN_004449b0(lVar14,lVar5,0), iVar3 == 0)) ||
             ((iVar3 = FUN_00444ad0(lVar14,local_a0[0],lVar12), iVar3 == 0 ||
              (iVar3 = FUN_00444b90(lVar14,auStack_e0,&local_ec), iVar3 == 0)))) {
            FUN_004c99a0(param_1,0x50,0x1b8,0x44,"external/openssl/ssl/tls13_enc.c",0x213);
            FUN_00444950(lVar14);
          }
          else {
            local_e8 = (ulong)local_ec;
            lVar4 = param_1 + 0x134;
            FUN_00444950(lVar14);
            uVar15 = CONCAT44(uVar9,1);
            iVar3 = FUN_004e6200(param_1,lVar5,lVar4,"e exp master",0xc,auStack_e0,local_e8,
                                 param_1 + 0x3f4,local_e8,uVar15);
            uVar9 = (undefined4)((ulong)uVar15 >> 0x20);
            if (iVar3 == 0) {
              uVar7 = 0x44;
              uVar15 = 0x221;
              goto LAB_004e70c4;
            }
            iVar3 = FUN_004c5530(param_1,"EARLY_EXPORTER_SECRET",param_1 + 0x3f4,local_e8);
            if (iVar3 != 0) {
              puVar1 = auStack_e0;
              lVar12 = 0;
              lVar14 = 0;
              pcVar11 = "c e traffic";
              uVar15 = 0xb;
              pcVar13 = "CLIENT_EARLY_TRAFFIC_SECRET";
              goto joined_r0x004e6d48;
            }
          }
          goto LAB_004e70c8;
        }
        uVar7 = 0x41;
        uVar15 = 0x20a;
      }
    }
LAB_004e70c4:
    FUN_004c99a0(param_1,0x50,0x1b8,uVar7,"external/openssl/ssl/tls13_enc.c",uVar15);
  }
  else {
    if ((param_2 >> 7 & 1) == 0) {
      puVar1 = auStack_e0;
      lVar12 = 0;
      lVar14 = 0;
      lVar4 = param_1 + 0x1b4;
      pcVar11 = "s ap traffic";
      pcVar13 = "SERVER_TRAFFIC_SECRET_0";
joined_r0x004e6d90:
      uVar15 = 0xc;
      uVar7 = 0;
      lVar5 = 0;
    }
    else {
      puVar1 = auStack_e0;
      lVar4 = param_1 + 0x174;
      lVar12 = param_1 + 0x274;
      FUN_004bda70(param_1);
      iVar3 = FUN_0041ccc0();
      lVar14 = (long)iVar3;
      pcVar11 = "s hs traffic";
      pcVar13 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
joined_r0x004e6bd0:
      uVar15 = 0xc;
      uVar7 = 0;
      lVar5 = 0;
    }
joined_r0x004e6d48:
    if ((param_2 >> 6 & 1) == 0) {
      lVar5 = FUN_004bda70(param_1);
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x278);
      iVar3 = FUN_004e77f0(param_1,1);
      if ((iVar3 == 0) || (iVar3 = FUN_004c5200(param_1,auStack_e0,0x40,&local_e8), iVar3 == 0))
      goto LAB_004e70c8;
    }
    if (pcVar11 == "s ap traffic") {
      __dest = (void *)(param_1 + 0x2b4);
LAB_004e6ec4:
      memcpy(__dest,auStack_e0,local_e8);
LAB_004e6ed0:
      bVar2 = false;
      pcVar8 = pcVar11;
    }
    else {
      if (pcVar11 == "s hs traffic") {
        __dest = (void *)(param_1 + 0x2f4);
        goto LAB_004e6ec4;
      }
      if (pcVar11 != "c ap traffic") goto LAB_004e6ed0;
      uVar6 = FUN_004bda70(param_1);
      bVar2 = true;
      iVar3 = FUN_004e6200(param_1,uVar6,lVar4,"res master",10,auStack_e0,local_e8,param_1 + 500,
                           local_e8,CONCAT44(uVar9,1));
      if (iVar3 == 0) goto LAB_004e70c8;
      pcVar8 = "c ap traffic";
    }
    iVar3 = FUN_004e7130(param_1,param_2 & 2,lVar5,uVar7,lVar4,puVar1,pcVar8,uVar15,local_a0,lVar16,
                         lVar10);
    uVar9 = (undefined4)((ulong)lVar16 >> 0x20);
    if (iVar3 != 0) {
      if (pcVar11 == "s ap traffic") {
        memcpy((void *)(param_1 + 0x374),local_a0,local_e8);
        uVar7 = FUN_004bda70(param_1);
        uVar15 = CONCAT44(uVar9,1);
        iVar3 = FUN_004e6200(param_1,uVar7,lVar4,"exp master",10,puVar1,local_e8,param_1 + 0x3b4,
                             local_e8,uVar15);
        uVar9 = (undefined4)((ulong)uVar15 >> 0x20);
        if ((iVar3 == 0) ||
           (iVar3 = FUN_004c5530(param_1,"EXPORTER_SECRET",param_1 + 0x3b4,local_e8), iVar3 == 0))
        goto LAB_004e70c8;
      }
      else if (bVar2) {
        memcpy((void *)(param_1 + 0x334),local_a0,local_e8);
      }
      iVar3 = FUN_004c5530(param_1,pcVar13,local_a0,local_e8);
      if (iVar3 != 0) {
        if (lVar12 != 0) {
          uVar7 = FUN_004bda70(param_1);
          iVar3 = FUN_004e6200(param_1,uVar7,local_a0,"finished",8,0,0,lVar12,lVar14,
                               CONCAT44(uVar9,1));
          if (iVar3 == 0) goto LAB_004e70c8;
        }
        uVar9 = 2;
        if (*(int *)(param_1 + 0x38) != 0 || pcVar11 != "c e traffic") {
          uVar9 = 0;
        }
        *(undefined4 *)(param_1 + 0x7c) = uVar9;
        uVar7 = 1;
        goto LAB_004e70cc;
      }
    }
  }
LAB_004e70c8:
  uVar7 = 0;
LAB_004e70cc:
  FUN_004006a0(local_a0,0x40);
  return uVar7;
}


