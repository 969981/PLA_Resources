/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005357e0; name: FUN_005357e0
 */


void FUN_005357e0(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((DAT_04186110 == 0) || (uVar3 = thunk_FUN_002f93f0(), (uVar3 & 1) != 0)) {
    return;
  }
  FUN_002ef750(&DAT_0439ec48);
  if (DAT_0439ec40 == 0) {
    DAT_0439ec40 = FUN_002ebd80(0xf0);
    FUN_002fdfb0();
    uVar4 = FUN_002ebd80();
    lVar5 = DAT_0439ec40;
    lVar1 = DAT_0439ec40 + 200;
    *(undefined8 *)(DAT_0439ec40 + 0xd0) = uVar4;
    *(undefined1 *)(lVar5 + 0xd8) = 0;
    FUN_002fdf10(uVar4,lVar1);
    FUN_002ef5c0(DAT_0439ec40 + 0xe0,0);
    FUN_002ef5c0(DAT_0439ec40 + 0xe8,2);
    lVar1 = DAT_0439ec40;
    *(undefined1 **)(DAT_0439ec40 + 0x40) = &LAB_00535a40;
    *(long *)(lVar1 + 0x48) = lVar1;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined2 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined4 *)(lVar1 + 0x78) = 0;
    *(char **)(lVar1 + 0x60) =
         "external/com_google_grpc_base/src/core/ext/filters/client_channel/backup_poller.cc";
    puVar2 = PTR___tls_init_043737c8;
    *(undefined4 *)(lVar1 + 0x68) = 0x95;
    if (puVar2 != (undefined *)0x0) {
      grpc_core::ExecCtx::exec_ctx_::__tls_init();
    }
    lVar5 = tpidr_el0;
    lVar5 = FUN_002f00fc(*(undefined8 *)(lVar5 + 0x30));
    FUN_002f5c60(lVar1,lVar5 + DAT_04186110,DAT_0439ec40 + 0x38);
  }
  FUN_002ef5d0(DAT_0439ec40 + 0xe0);
  uVar4 = *(undefined8 *)(DAT_0439ec40 + 0xd0);
  FUN_002ef790(&DAT_0439ec48);
  FUN_002fe080(param_1,uVar4);
  return;
}


