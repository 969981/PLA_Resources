/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001efb64; name: FUN_001efb64
 */


undefined8 FUN_001efb64(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 local_38;
  
  lVar6 = *(long *)(*param_1 + 0x1e8);
  *(undefined4 *)(lVar6 + 0x218) = 0xffffffff;
  if (*(long *)(lVar6 + 0x220) == 0) {
    lVar3 = FUN_001ec820();
    *(long *)(lVar6 + 0x220) = lVar3;
    if (lVar3 == 0) {
      return 0x1b;
    }
  }
  ppuVar5 = (undefined **)param_1[0x84];
  if (ppuVar5 == &PTR_s_HTTPS_0411cfe0) {
    return 0;
  }
  if (ppuVar5 == &PTR_DAT_0411d068) {
    return 0;
  }
  ppuVar1 = &PTR_DAT_0411d068;
  if ((*(uint *)((long)ppuVar5 + 0x84) & 1) != 0) {
    ppuVar1 = &PTR_s_HTTPS_0411cfe0;
  }
  param_1[0x84] = (long)ppuVar1;
  if (param_1[0xaa] != 0) {
LAB_001efbe4:
    FUN_001f3934(*param_1,"Using HTTP2, server supports multi-use\n");
    *(undefined8 *)(lVar6 + 0x280) = 0;
    *(undefined8 *)(lVar6 + 0x278) = 0;
    *(undefined8 *)(lVar6 + 0x270) = 0;
    *(uint *)((long)param_1 + 0x3fc) = *(uint *)((long)param_1 + 0x3fc) | 0x4000000;
    *(undefined4 *)(param_1 + 0x46) = 0x14;
    param_1[0xbc] = 0;
    param_1[0xb9] = 0;
    param_1[0xba] = 0;
    *(undefined4 *)(param_1 + 0xbb) = 0;
    *(undefined4 *)param_1[0xcc] = 2;
    FUN_001f3934(*param_1,"Connection state changed (HTTP/2 confirmed)\n");
    *(undefined1 *)(*(long *)(*param_1 + 0xd8) + 0xf0) = 1;
    return 0;
  }
  lVar3 = FUN_002044c4(0x8000);
  param_1[0xb8] = lVar3;
  if (lVar3 != 0) {
    iVar2 = FUN_0020567c(&local_38);
    if (iVar2 == 0) {
      FUN_002056b8(local_38,&LAB_001f0ed0);
      FUN_002056c0(local_38,FUN_001f0f44);
      FUN_002056c8(local_38,FUN_001f1318);
      FUN_002056d0(local_38,FUN_001f1424);
      FUN_002056d8(local_38,&LAB_001f14e8);
      FUN_002056e0(local_38,&LAB_001f154c);
      FUN_002056e8(local_38,FUN_001f18b4);
      iVar2 = FUN_00205d28(param_1 + 0xaa,local_38,param_1);
      thunk_FUN_002044d4(local_38);
      if (iVar2 == 0) goto LAB_001efbe4;
      pcVar4 = "Couldn\'t initialize nghttp2!";
    }
    else {
      pcVar4 = "Couldn\'t initialize nghttp2 callbacks!";
    }
    FUN_001f3ae0(*param_1,pcVar4);
  }
  FUN_001ec82c((long *)(lVar6 + 0x220));
  return 0x1b;
}


