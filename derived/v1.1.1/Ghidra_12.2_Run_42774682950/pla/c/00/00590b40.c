/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00590b40; name: FUN_00590b40
 */


undefined8 *
FUN_00590b40(undefined8 param_1,long param_2,char *param_3,undefined8 param_4,undefined8 param_5,
            undefined8 *param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
            undefined **param_10,byte param_11,undefined8 param_12)

{
  undefined **ppuVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((param_2 == 0) || (param_3 == (char *)0x0)) {
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc"
                 ,0x2b7,2,"Invalid arguments to alts_handshaker_client_create()");
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = (undefined8 *)FUN_002ebd80(0x1b8);
    FUN_002ef6d0(puVar6 + 0x30);
    FUN_002ef5c0(puVar6 + 1,1);
    puVar4 = PTR_FUN_04374e80;
    puVar6[2] = param_1;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[4] = puVar4;
    puVar6[0x14] = param_8;
    puVar6[0x15] = param_9;
    uVar7 = FUN_0058bc30(param_5);
    puVar6[0x16] = uVar7;
    uStack_98 = param_6[1];
    local_a0 = *param_6;
    uStack_88 = param_6[3];
    uStack_90 = param_6[2];
    FUN_002f2720(&local_80,&local_a0);
    puVar6[0x1a] = uStack_68;
    puVar6[0x19] = uStack_70;
    puVar6[0x18] = uStack_78;
    puVar6[0x17] = local_80;
    FUN_002f2710(&local_80);
    puVar6[0x1d] = uStack_78;
    puVar6[0x1c] = local_80;
    puVar6[0x1f] = uStack_68;
    puVar6[0x1e] = uStack_70;
    FUN_004fcf20(puVar6 + 0x11);
    *(byte *)(puVar6 + 0x1b) = param_11 & 1;
    puVar6[0x36] = param_12;
    puVar6[0x21] = 0x100;
    uVar7 = FUN_002ebd80(0x100);
    puVar6[0x20] = uVar7;
    FUN_002f2ff0(&local_80,param_3);
    iVar5 = strcmp(param_3,"lame");
    if (iVar5 == 0) {
      uVar7 = 0;
    }
    else {
      FUN_002f2c60(auStack_c0,"/grpc.gcp.HandshakerService/DoHandshake");
      uVar7 = FUN_003e2f70(param_2,0,0xffff,param_4,auStack_c0,&local_80,0x7fffffffffffffff,0);
    }
    ppuVar1 = &PTR_LAB_0418a150;
    if (param_10 != (undefined **)0x0) {
      ppuVar1 = param_10;
    }
    puVar6[8] = 0;
    puVar6[6] = param_7;
    puVar6[7] = puVar6;
    *(undefined4 *)(puVar6 + 0xb) = 0x2d8;
    *puVar6 = ppuVar1;
    puVar6[0x23] = &LAB_00590dd0;
    puVar6[0x24] = puVar6;
    puVar6[3] = uVar7;
    *(undefined2 *)(puVar6 + 9) = 0;
    puVar6[0xc] = 0;
    *(undefined4 *)(puVar6 + 0xd) = 0;
    puVar6[10] = 
    "external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc";
    puVar6[0x25] = 0;
    *(undefined2 *)(puVar6 + 0x26) = 0;
    puVar6[0x29] = 0;
    *(undefined4 *)(puVar6 + 0x2a) = 0;
    puVar6[0x27] = 
    "external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_handshaker_client.cc";
    *(undefined4 *)(puVar6 + 0x28) = 0x2da;
    if ((local_80 != (long *)0x0) && (plVar8 = (long *)*local_80, plVar8 != (long *)0x0)) {
      plVar10 = plVar8 + 1;
      lVar9 = *plVar8;
      do {
        lVar11 = *plVar10;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar3) {
          *plVar10 = lVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if ((lVar9 != 0) && (*(char *)(lVar9 + 0x10) != '\0')) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xb7,1,
                     "%s:%p unref %ld -> %ld",*(undefined8 *)(lVar9 + 8),plVar8,lVar11);
      }
      if (lVar11 < 1) {
        FUN_002ebea0("external/com_google_grpc_base\\src/core/lib/gprpp/ref_counted.h",0xba,2,
                     "assertion failed: %s","prior > 0");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      if (lVar11 == 1) {
        (*(code *)local_80[3])(local_80[4]);
      }
    }
  }
  return puVar6;
}


