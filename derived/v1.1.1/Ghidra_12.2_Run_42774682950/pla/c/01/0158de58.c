/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158de58; name: FUN_0158de58
 */


void FUN_0158de58(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_24;
  
  FUN_0158df98();
  uVar2 = param_3[1];
  lVar1 = param_1 + 0x738;
  *(undefined8 *)(param_1 + 0x728) = *param_3;
  *(undefined8 *)(param_1 + 0x730) = uVar2;
  local_24 = 1;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 2;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 3;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 4;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 5;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 0xd;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 0x15;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 6;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 7;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 0x1e;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 0x1d;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 0x20;
  FUN_0158e42c(lVar1,&local_24);
  local_24 = 0x1c;
  FUN_0158e42c(lVar1,&local_24);
  return;
}


