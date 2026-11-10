/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134c7e8; name: FUN_0134c7e8
 */


void FUN_0134c7e8(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined1 *puVar3;
  byte local_460 [1024];
  undefined1 *local_60;
  undefined1 *puStack_58;
  size_t local_50;
  undefined8 uStack_48;
  
  lVar2 = *param_1;
  puVar3 = &DAT_cbf29ce484222645;
  memset(local_460,0,0x400);
  snprintf((char *)local_460,0x400,"anime_L_icon_qicon_vfx_%02d_keep",(int)param_1[1]);
  local_50 = strlen((char *)local_460);
  if (local_460[0] != 0) {
    pbVar1 = (byte *)((ulong)local_460 | 1);
    do {
      puVar3 = (undefined1 *)(((ulong)puVar3 ^ (ulong)local_460[0]) * 0x100000001b3);
      local_460[0] = *pbVar1;
      pbVar1 = pbVar1 + 1;
    } while (local_460[0] != 0);
  }
  uStack_48 = 0;
  if (*(long *)(lVar2 + 0x2c8) != 0) {
    local_60 = puVar3;
    puStack_58 = local_460;
    FUN_0283b1e8(*(long *)(lVar2 + 0x2c8),&local_60);
  }
  return;
}


