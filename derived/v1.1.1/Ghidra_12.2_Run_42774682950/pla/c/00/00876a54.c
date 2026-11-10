/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00876a54; name: FUN_00876a54
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00876a54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_178 [16];
  undefined1 local_168 [8];
  undefined1 *local_160;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined *local_148;
  undefined1 local_140;
  undefined2 local_13f;
  undefined1 local_13d [197];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [24];
  undefined2 local_50;
  undefined1 auStack_48 [32];
  undefined4 local_28 [2];
  
  FUN_007e3400(auStack_48);
  FUN_007e3400(auStack_68);
  uVar2 = FUN_007ec6e4(param_1 + 0x60);
  uVar3 = FUN_007ec198(uVar2,0,2,auStack_48,auStack_68);
  if ((uVar3 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    local_168._0_4_ = 0x6488;
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_168 | 4),(Result *)local_28);
    FUN_007ee578(auStack_78,local_168);
    FUN_007e5cac(uVar2,auStack_78);
  }
  else {
    local_168 = (undefined1  [8])(PTR_DAT_043777e0 + 0x10);
    local_148 = PTR_DAT_043777e0 + 0x68;
    local_160 = &local_140;
    uStack_158 = 0xc0;
    local_140 = 0;
    lVar4 = 0;
    puVar5 = (undefined8 *)local_168;
    do {
      *(undefined2 *)((long)puVar5 + 0x29) = 0;
      lVar1 = lVar4 + 4;
      *(undefined1 *)((long)puVar5 + 0x2b) = 0;
      puVar5 = (undefined8 *)((long)local_168 + lVar1);
      local_13d[lVar4 + 1] = 0;
      lVar4 = lVar1;
    } while (lVar1 != 0xc0);
    local_154 = 0;
    uStack_150 = 0;
    local_50 = *(undefined2 *)(param_1 + 0x490);
    FUN_007e37e0(auStack_68,local_168);
    FUN_007e346c(param_1 + 0x498,auStack_68);
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    local_168 = (undefined1  [8])((ulong)local_168 & 0xffffffff00000000);
    local_28[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_168 | 4),(Result *)local_28);
    FUN_007ee578(auStack_178,local_168);
    FUN_007e5c40(uVar2,auStack_178);
  }
  FUN_007e34a4(auStack_68);
  FUN_007e34a4(auStack_48);
  return 1;
}


