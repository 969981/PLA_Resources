/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00535930; name: FUN_00535930
 */


void FUN_00535930(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  
  if ((DAT_04186110 == 0) || (uVar3 = thunk_FUN_002f93f0(), (uVar3 & 1) != 0)) {
    return;
  }
  FUN_002fe0a0(param_1,*(undefined8 *)(DAT_0439ec40 + 0xd0));
  FUN_002ef750(&DAT_0439ec48);
  iVar2 = FUN_002ef660(DAT_0439ec40 + 0xe0);
  lVar1 = DAT_0439ec40;
  if (iVar2 == 0) {
    FUN_002ef790(&DAT_0439ec48);
    return;
  }
  DAT_0439ec40 = 0;
  FUN_002ef790(&DAT_0439ec48);
  FUN_002ef750(*(undefined8 *)(lVar1 + 200));
  *(undefined1 *)(lVar1 + 0xd8) = 1;
  *(undefined1 **)(lVar1 + 0x88) = &LAB_00535bb0;
  *(long *)(lVar1 + 0x90) = lVar1;
  *(char **)(lVar1 + 0xa8) =
       "external/com_google_grpc_base/src/core/ext/filters/client_channel/backup_poller.cc";
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined2 *)(lVar1 + 0xa0) = 0;
  *(undefined8 *)(lVar1 + 0xb8) = 0;
  *(undefined4 *)(lVar1 + 0xc0) = 0;
  *(undefined4 *)(lVar1 + 0xb0) = 0x6a;
  FUN_002fdf30(*(undefined8 *)(lVar1 + 0xd0),lVar1 + 0x80);
  FUN_002ef790(*(undefined8 *)(lVar1 + 200));
  FUN_002f5c80(lVar1);
  return;
}


