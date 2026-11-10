/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ef8dc; name: FUN_001ef8dc
 */


int FUN_001ef8dc(undefined8 param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 uStack_28;
  
  lVar3 = *param_2;
  param_2[0xbe] = 0x6400000003;
  param_2[0xbf] = 0x4000000000000004;
  *(undefined4 *)(param_2 + 0xc0) = 2;
  *(uint *)((long)param_2 + 0x604) = (uint)(*(long *)(*(long *)(lVar3 + 0xd8) + 0x70) != 0);
  param_2[0xc1] = 3;
  uStack_28 = param_1;
  lVar2 = FUN_0021263c(param_2 + 0xab,0x50,param_2 + 0xbe,3);
  if (lVar2 == 0) {
    FUN_001f3ae0(*param_2,"nghttp2 unexpectedly failed on pack_settings_payload");
    FUN_001ec82c(&uStack_28);
    iVar1 = 2;
  }
  else {
    param_2[0xb5] = lVar2;
    iVar1 = FUN_001e3190(*param_2,param_2 + 0xab,lVar2,&local_38,auStack_40);
    if (iVar1 == 0) {
      iVar1 = FUN_001ecb14(&uStack_28,
                           "Connection: Upgrade, HTTP2-Settings\r\nUpgrade: %s\r\nHTTP2-Settings: %s\r\n"
                           ,&DAT_038964ab,local_38);
      FUN_002044d4(local_38);
      *(undefined4 *)(lVar3 + 0x19c) = 1;
    }
    else {
      FUN_001ec82c(&uStack_28);
    }
  }
  return iVar1;
}


