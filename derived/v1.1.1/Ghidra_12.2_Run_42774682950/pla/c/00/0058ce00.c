/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0058ce00; name: FUN_0058ce00
 */


undefined8
FUN_0058ce00(long param_1,long param_2,long param_3,byte param_4,long param_5,undefined8 *param_6,
            long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((((param_1 == 0) || (param_3 == 0)) || (param_6 == (undefined8 *)0x0)) ||
     ((param_2 == 0 && ((param_4 & 1) != 0)))) {
    uVar4 = 2;
    FUN_002ebea0("external/com_google_grpc_base/src/core/tsi/alts/handshaker/alts_tsi_handshaker.cc"
                 ,0x25d,2,"Invalid arguments to alts_tsi_handshaker_create()");
  }
  else {
    puVar3 = (undefined8 *)FUN_002ebd80(0xa0);
    FUN_002ef6d0(puVar3 + 0xd);
    *(bool *)(puVar3 + 0xc) = param_5 == 0;
    puVar3[0x11] = 0;
    *(byte *)(puVar3 + 6) = param_4 & 1;
    *(undefined1 *)((long)puVar3 + 0x31) = 0;
    if (param_2 == 0) {
      FUN_002f2710(&local_70);
    }
    else {
      FUN_002f2c60(param_2);
    }
    puVar3[8] = param_5;
    *(undefined1 *)((long)puVar3 + 0x32) = 0;
    puVar3[3] = uStack_68;
    puVar3[2] = local_70;
    puVar3[5] = uStack_58;
    puVar3[4] = uStack_60;
    uVar4 = FUN_002ec2d0(param_3);
    puVar3[7] = uVar4;
    uVar4 = FUN_0058bc30(param_1);
    puVar3[9] = uVar4;
    lVar1 = 0x20000;
    if (param_7 != 0) {
      lVar1 = param_7;
    }
    puVar3[0x13] = lVar1;
    uVar4 = 0;
    puVar2 = &DAT_0418a080;
    if (*(char *)(puVar3 + 0xc) != '\0') {
      puVar2 = &DAT_0418a040;
    }
    *puVar3 = puVar2;
    *param_6 = puVar3;
  }
  return uVar4;
}


