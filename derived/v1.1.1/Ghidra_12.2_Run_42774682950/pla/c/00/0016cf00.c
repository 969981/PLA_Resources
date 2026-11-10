/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0016cf00; name: FUN_0016cf00
 */


undefined8 * FUN_0016cf00(code *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 *puVar3;
  time_t tVar4;
  undefined8 *puVar5;
  undefined8 *local_50;
  undefined4 *puStack_48;
  undefined8 *local_40;
  undefined *puStack_38;
  undefined4 local_24;
  
  puVar3 = (undefined8 *)(*param_1)(param_2,0,8,0x610);
  puVar5 = puVar3;
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar3 + 1;
    *puVar5 = 0;
    *(undefined4 *)(puVar3 + 2) = 0x108;
    *(undefined1 *)((long)puVar3 + 300) = 1;
    puVar3[0x1b] = param_1;
    puVar3[8] = 0;
    puVar3[9] = 0;
    *(undefined4 *)(puVar3 + 0x18) = 0;
    puVar3[4] = puVar3 + 0x1b;
    puVar3[5] = 0;
    puVar3[0xb] = puVar5;
    puVar3[0xc] = 0;
    puVar3[0x16] = 0;
    *(undefined8 *)((long)puVar3 + 0xc4) = 0;
    *(undefined1 *)((long)puVar3 + 0xd4) = 1;
    *(undefined8 *)((long)puVar3 + 0xcc) = 1;
    *(undefined1 *)((long)puVar3 + 0x14) = 0;
    puVar3[0x17] = 0;
    puVar3[0x1c] = param_2;
    puVar3[0x34] = puVar5;
    tVar4 = time((time_t *)0x0);
    local_24 = (undefined4)tVar4;
    puStack_48 = &local_24;
    local_40 = &DAT_039c5c28;
    puStack_38 = PTR_FUN_04372368;
    local_50 = puVar5;
    uVar1 = FUN_0016d290(&local_50,0x20);
    *(undefined1 *)((long)puVar3 + 0x12f) = 0;
    *(undefined4 *)(puVar3 + 0x25) = uVar1;
    *(undefined4 *)(puVar3 + 0x24) = 0;
    puVar3[0x33] = 0;
    puVar3[0x35] = 0;
    puVar3[0x22] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    *(undefined2 *)((long)puVar3 + 0x12d) = 7;
    puVar3[0x4f] = 0;
    puVar3[0x50] = 0;
    puVar3[0x51] = 0;
    puVar3[0x52] = 0;
    puVar3[0x53] = 0;
    puVar3[0x54] = 0;
    puVar3[0x55] = 0;
    puVar3[0x56] = 0;
    puVar3[0x57] = 0;
    puVar3[0x1d] = 0x610;
    puVar3[0x1e] = 0;
    puVar3[0x30] = 0;
    puVar3[0x31] = 0xc800000000;
    *(undefined4 *)(puVar3 + 0x32) = 200;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    iVar2 = FUN_0015a410(puVar5,FUN_0016d070,0);
    if (iVar2 != 0) {
      FUN_0016d150(puVar5);
      puVar5 = (undefined8 *)0x0;
    }
  }
  return puVar5;
}


