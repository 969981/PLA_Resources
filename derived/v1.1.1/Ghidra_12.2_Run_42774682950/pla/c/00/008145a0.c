/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008145a0; name: FUN_008145a0
 */


void FUN_008145a0(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 void *param_5,uint param_6)

{
  undefined4 *puVar1;
  undefined4 local_178 [4];
  undefined1 auStack_168 [32];
  undefined *local_148;
  undefined1 auStack_140 [64];
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_d0 [34];
  undefined4 local_48 [2];
  
  if (*(char *)(param_2 + 0x230) == '\0') {
    local_d0[0] = 0x10408;
  }
  else {
    if (*(int *)(param_2 + 0x234) != 0) {
      FUN_007f135c(local_d0);
      local_100 = 0;
      local_f8 = 0;
      local_148 = PTR_DAT_043775a8 + 0x10;
      memset(auStack_140,0,0x40);
      local_148 = PTR_DAT_043775b0 + 0x10;
      FUN_007f1364(local_d0,&local_148,param_2 + 0x238,0x10);
      FUN_007f1590(local_d0,auStack_168,param_3,param_4);
      memcpy(param_5,auStack_168,(ulong)param_6);
      local_178[0] = 0;
      local_48[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_178 | 4),(Result *)local_48);
      puVar1 = local_178;
      goto LAB_008146a4;
    }
    local_d0[0] = 0;
  }
  local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_d0 | 4),(Result *)&local_148);
  puVar1 = local_d0;
LAB_008146a4:
  FUN_007ee578(param_1,puVar1);
  return;
}


