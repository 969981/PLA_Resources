/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029eaab4; name: FUN_029eaab4
 */


void FUN_029eaab4(long param_1,ulong param_2,ulong param_3,undefined1 param_4,undefined4 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined6 uStack_a0;
  undefined2 local_9a;
  undefined6 uStack_98;
  undefined1 auStack_90 [36];
  uint local_6c;
  undefined1 auStack_68 [8];
  long local_60;
  undefined1 *puStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 *local_48;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 8) + 0x120;
  lVar2 = *(long *)(lVar4 + (param_2 & 0xff) * 8);
  uVar3 = *(undefined8 *)(lVar4 + (param_3 & 0xff) * 8);
  lVar4 = *(long *)(lVar2 + 0x60);
  uVar1 = FUN_02c6cf3c(*(undefined8 *)(lVar4 + 0x98));
  if ((((uVar1 & 1) == 0) &&
      ((*(ushort *)(*(long *)(*(long *)(lVar4 + 0x98) + 0x10) + 4) >> 2 & 1) == 0)) &&
     (*(short *)(lVar2 + 0x74) != 0)) {
    FUN_0297bddc(*(undefined8 *)(param_1 + 0x38),lVar2,uVar3,param_5);
    uStack_98 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_9a = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_f0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_02967e64(*(undefined8 *)(param_1 + 0x38),param_5,param_5,0,0,lVar2,auStack_90);
    local_6c = local_6c | 1;
    local_4f = 0x1f;
    local_60 = lVar2;
    puStack_58 = auStack_90;
    local_50 = param_4;
    local_48 = (undefined1 *)&local_f0;
    FUN_029efacc(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x16a0),auStack_68,&local_60);
    FUN_029eabd4(param_1,lVar2,auStack_90,&local_f0);
  }
  return;
}


