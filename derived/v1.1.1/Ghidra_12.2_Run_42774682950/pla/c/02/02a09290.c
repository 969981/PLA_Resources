/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a09290; name: FUN_02a09290
 */


bool FUN_02a09290(long param_1,undefined1 param_2,int param_3,undefined4 param_4,undefined1 param_5,
                 undefined8 param_6,uint param_7,long param_8,undefined8 param_9)

{
  byte bVar1;
  byte local_78 [8];
  undefined1 local_70;
  undefined1 local_6f;
  int local_6c;
  undefined4 uStack_68;
  undefined1 local_64;
  ulong local_62;
  undefined8 local_58;
  
  local_70 = param_2;
  uStack_68 = param_4;
  if (param_3 == 10) {
    local_6f = *(undefined1 *)(param_8 + 0x7d);
    local_6c = 1;
    local_64 = 0;
    local_62._0_7_ = (uint7)param_7 << 0x10;
    local_62 = CONCAT17(param_5,(int7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    FUN_029eeba8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15c0),local_78,&local_70);
    bVar1 = local_78[0];
    local_6f = *(undefined1 *)(param_8 + 0x7d);
    local_64 = 0;
    local_62._0_7_ = (uint7)param_7 << 0x10;
    local_62 = CONCAT17(param_5,(int7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    local_6c = 2;
    local_70 = param_2;
    uStack_68 = param_4;
    FUN_029eeba8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15c0),local_78,&local_70);
    local_78[0] = local_78[0] | bVar1;
  }
  else {
    local_6f = *(undefined1 *)(param_8 + 0x7d);
    local_64 = 0;
    local_62._0_7_ = (uint7)param_7 << 0x10;
    local_62 = CONCAT17(param_5,(int7)local_62) & 0x1ffffffffffffff;
    local_58 = param_9;
    local_6c = param_3;
    FUN_029eeba8(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x15c0),local_78,&local_70);
  }
  return local_78[0] != 0;
}


